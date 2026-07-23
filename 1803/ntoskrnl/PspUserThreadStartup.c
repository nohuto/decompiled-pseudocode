/*
 * XREFs of PspUserThreadStartup @ 0x1404B8600
 * Callers:
 *     <none>
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeQuerySystemTimePrecise @ 0x140132A60 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MmGetSessionLocaleId @ 0x1404B7BA8 (MmGetSessionLocaleId.c)
 *     DbgkCreateThread @ 0x1404B87D4 (DbgkCreateThread.c)
 *     PspWriteTebIdealProcessor @ 0x1404B8A58 (PspWriteTebIdealProcessor.c)
 *     PspDisablePrimaryTokenExchange @ 0x1404B8C60 (PspDisablePrimaryTokenExchange.c)
 *     PspTerminateThreadByPointer @ 0x1404BB3D0 (PspTerminateThreadByPointer.c)
 *     PfProcessCreateNotification @ 0x14050E2B4 (PfProcessCreateNotification.c)
 *     PspInitializeThunkContext @ 0x1405B9FE0 (PspInitializeThunkContext.c)
 *     DbgkCreateMinimalThread @ 0x140711408 (DbgkCreateMinimalThread.c)
 */

NTSTATUS PspUserThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // r8
  LARGE_INTEGER Process; // r14
  int SessionLocaleId; // eax
  __int64 v4; // rdx
  NTSTATUS result; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v8; // r8d
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r8
  LARGE_INTEGER v12[4]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v13[112]; // [rsp+50h] [rbp-98h] BYREF

  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  v12[1].QuadPart = (LONGLONG)CurrentThread;
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
  {
    LOBYTE(v1) = 1;
    PspTerminateThreadByPointer(CurrentThread, 3221225547LL, v1);
  }
  Process = (LARGE_INTEGER)CurrentThread->ApcState.Process;
  v12[2] = Process;
  if ( (*(_DWORD *)(Process.QuadPart + 1740) & 1) != 0 )
  {
    DbgkCreateMinimalThread(CurrentThread);
  }
  else
  {
    SessionLocaleId = MmGetSessionLocaleId();
    *(_DWORD *)(v4 + 264) = SessionLocaleId;
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
    KeQuerySystemTimePrecise(v12);
    CurrentPrcb = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v8 = ExGenRandom(1);
    v9 = __rdtsc();
    _InterlockedCompareExchange(
      (volatile signed __int32 *)0xFFFFF78000000330LL,
      v12[0].LowPart ^ v12[0].HighPart ^ LowPart ^ v9 ^ v8 ^ CurrentPrcb->MmPageFaultCount ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime,
      0);
  }
  if ( (*(_BYTE *)(Process.QuadPart + 720) & 1) != 0 )
  {
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
    v10 = VslpEnterIumSecureMode(0, 0LL, KeGetCurrentThread()->SecureThreadCookie, (__int64)v13);
    LOBYTE(v11) = 1;
    return PspTerminateThreadByPointer(CurrentThread, v10, v11);
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
