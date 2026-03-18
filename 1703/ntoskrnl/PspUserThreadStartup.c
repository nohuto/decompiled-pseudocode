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
  __int64 Process; // r14
  _DWORD *Teb; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  NTSTATUS result; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v10; // r8d
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14[4]; // [rsp+30h] [rbp-B8h] BYREF
  char v15[112]; // [rsp+50h] [rbp-98h] BYREF

  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  v14[1] = (__int64)CurrentThread;
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
  {
    LOBYTE(v1) = 1;
    PspTerminateThreadByPointer(CurrentThread, 3221225547LL, v1);
  }
  Process = (__int64)CurrentThread->ApcState.Process;
  v14[2] = Process;
  if ( (*(_DWORD *)(Process + 1740) & 1) != 0 )
  {
    DbgkCreateMinimalThread(CurrentThread);
  }
  else
  {
    Teb = CurrentThread->Teb;
    Teb[66] = MmGetSessionLocaleId();
    PspWriteTebIdealProcessor(CurrentThread, CurrentThread);
    DbgkCreateThread(CurrentThread);
    if ( (*(_DWORD *)(Process + 772) & 0x80000) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(Process + 772), 0x13u) )
    {
      PfProcessCreateNotification(Process, *(_QWORD *)(Process + 952));
    }
  }
  while ( !MEMORY[0xFFFFF78000000330] )
  {
    KeQuerySystemTimePrecise(v14, v4, v5, v6);
    CurrentPrcb = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v10 = ExGenRandom(1);
    v11 = __rdtsc();
    v5 = (unsigned int)v11 ^ v10;
    v4 = LODWORD(v14[0]) ^ HIDWORD(v14[0]) ^ LowPart ^ (unsigned int)v5 ^ CurrentPrcb->MmPageFaultCount ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime;
    _InterlockedCompareExchange((volatile signed __int32 *)0xFFFFF78000000330LL, v4, 0);
  }
  if ( *(_QWORD *)(Process + 720) )
  {
    v12 = VslpEnterIumSecureMode(0, 0LL, KeGetCurrentThread()->SecureThreadCookie, (__int64)v15);
    LOBYTE(v13) = 1;
    return PspTerminateThreadByPointer(CurrentThread, v12, v13);
  }
  else if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    return KeWaitForSingleObject(CurrentThread, UserRequest, 1, 0, 0LL);
  }
  else
  {
    result = *(_DWORD *)(Process + 1740);
    if ( (result & 1) == 0 )
      return PspInitializeThunkContext();
  }
  return result;
}
