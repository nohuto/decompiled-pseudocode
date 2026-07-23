/*
 * XREFs of PspUserThreadStartup @ 0x1404F8330
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeQuerySystemTimePrecise @ 0x140110600 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     DbgkCreateThread @ 0x1404F8500 (DbgkCreateThread.c)
 *     PspWriteTebIdealProcessor @ 0x1404F87BC (PspWriteTebIdealProcessor.c)
 *     MmGetSessionLocaleId @ 0x1404F89CC (MmGetSessionLocaleId.c)
 *     PspDisablePrimaryTokenExchange @ 0x1404F8A10 (PspDisablePrimaryTokenExchange.c)
 *     PspInitializeThunkContext @ 0x1404F8B04 (PspInitializeThunkContext.c)
 *     PspTerminateThreadByPointer @ 0x14054F0D0 (PspTerminateThreadByPointer.c)
 *     PfProcessCreateNotification @ 0x140563D18 (PfProcessCreateNotification.c)
 *     DbgkCreateMinimalThread @ 0x140681890 (DbgkCreateMinimalThread.c)
 */

NTSTATUS PspUserThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // r8
  LARGE_INTEGER Process; // r14
  _DWORD *Teb; // rbx
  NTSTATUS result; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v7; // r8d
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // r8
  LARGE_INTEGER v11[4]; // [rsp+30h] [rbp-B8h] BYREF
  char v12[112]; // [rsp+50h] [rbp-98h] BYREF

  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  v11[1].QuadPart = (LONGLONG)CurrentThread;
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
  {
    LOBYTE(v1) = 1;
    PspTerminateThreadByPointer(CurrentThread, 3221225547LL, v1);
  }
  Process = (LARGE_INTEGER)CurrentThread->ApcState.Process;
  v11[2] = Process;
  if ( (*(_DWORD *)(Process.QuadPart + 1740) & 1) != 0 )
  {
    DbgkCreateMinimalThread(CurrentThread);
  }
  else
  {
    Teb = CurrentThread->Teb;
    Teb[66] = MmGetSessionLocaleId();
    PspWriteTebIdealProcessor(CurrentThread, CurrentThread);
    DbgkCreateThread(CurrentThread);
    if ( (*(_DWORD *)(Process.QuadPart + 772) & 0x80000) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(Process.QuadPart + 772), 0x13u) )
    {
      ((void (__fastcall *)(_QWORD, _QWORD))PfProcessCreateNotification)(
        (LARGE_INTEGER)Process.QuadPart,
        *(_QWORD *)(Process.QuadPart + 952));
    }
  }
  while ( !MEMORY[0xFFFFF78000000330] )
  {
    KeQuerySystemTimePrecise(v11);
    CurrentPrcb = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v7 = ExGenRandom(1);
    v8 = __rdtsc();
    _InterlockedCompareExchange(
      (volatile signed __int32 *)0xFFFFF78000000330LL,
      v11[0].LowPart ^ v11[0].HighPart ^ LowPart ^ v8 ^ v7 ^ CurrentPrcb->MmPageFaultCount ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime,
      0);
  }
  if ( *(_QWORD *)(Process.QuadPart + 720) )
  {
    v9 = VslpEnterIumSecureMode(0, 0LL, KeGetCurrentThread()->SecureThreadCookie, (__int64)v12);
    LOBYTE(v10) = 1;
    return PspTerminateThreadByPointer(CurrentThread, v9, v10);
  }
  else if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    return KeWaitForSingleObject(CurrentThread, UserRequest, 1, 0, 0LL);
  }
  else
  {
    result = *(_DWORD *)(Process.QuadPart + 1740);
    if ( (result & 1) == 0 )
      return PspInitializeThunkContext();
  }
  return result;
}
