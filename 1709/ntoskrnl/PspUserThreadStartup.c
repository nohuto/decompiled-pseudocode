/*
 * XREFs of PspUserThreadStartup @ 0x14053F9C0
 * Callers:
 *     <none>
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x140025920 (KeQuerySystemTimePrecise.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PspTerminateThreadByPointer @ 0x1404D6B90 (PspTerminateThreadByPointer.c)
 *     PspInitializeThunkContext @ 0x14053F16C (PspInitializeThunkContext.c)
 *     PspDisablePrimaryTokenExchange @ 0x14053F3DC (PspDisablePrimaryTokenExchange.c)
 *     MmGetSessionLocaleId @ 0x14053F4DC (MmGetSessionLocaleId.c)
 *     PspWriteTebIdealProcessor @ 0x14053F518 (PspWriteTebIdealProcessor.c)
 *     DbgkCreateThread @ 0x14053F718 (DbgkCreateThread.c)
 *     PfProcessCreateNotification @ 0x14057F7DC (PfProcessCreateNotification.c)
 *     DbgkCreateMinimalThread @ 0x1406ACB5C (DbgkCreateMinimalThread.c)
 */

NTSTATUS PspUserThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r14
  int SessionLocaleId; // eax
  __int64 v3; // rdx
  NTSTATUS result; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v7; // r8d
  unsigned __int64 v8; // rax
  NTSTATUS v9; // eax
  _QWORD v10[4]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v11[112]; // [rsp+50h] [rbp-98h] BYREF

  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  v10[1] = CurrentThread;
  PspDisablePrimaryTokenExchange((__int64)CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
    PspTerminateThreadByPointer((__int64)CurrentThread, 0xC000004B, 1);
  Process = CurrentThread->ApcState.Process;
  v10[2] = Process;
  if ( (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) != 0 )
  {
    DbgkCreateMinimalThread(CurrentThread);
  }
  else
  {
    SessionLocaleId = MmGetSessionLocaleId();
    *(_DWORD *)(v3 + 264) = SessionLocaleId;
    PspWriteTebIdealProcessor((__int64)CurrentThread, (__int64)CurrentThread);
    DbgkCreateThread(CurrentThread);
    if ( (Process[1].DirectoryTableBase & 0x8000000000000LL) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0x13u) )
    {
      PfProcessCreateNotification(Process, Process[1].Affinity.Bitmap[17]);
    }
  }
  while ( !MEMORY[0xFFFFF78000000330] )
  {
    KeQuerySystemTimePrecise(v10);
    CurrentPrcb = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v7 = ExGenRandom(1);
    v8 = __rdtsc();
    _InterlockedCompareExchange(
      (volatile signed __int32 *)0xFFFFF78000000330LL,
      LODWORD(v10[0]) ^ HIDWORD(v10[0]) ^ LowPart ^ v8 ^ v7 ^ CurrentPrcb->MmPageFaultCount ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime,
      0);
  }
  if ( (Process->SecureState.SecureHandle & 1) != 0 )
  {
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
    v9 = VslpEnterIumSecureMode(0, 0LL, KeGetCurrentThread()->SecureThreadCookie, (__int64)v11);
    return PspTerminateThreadByPointer((__int64)CurrentThread, v9, 1);
  }
  else if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    return KeWaitForSingleObject(CurrentThread, UserRequest, 1, 0, 0LL);
  }
  else
  {
    result = HIDWORD(Process[2].ActiveProcessors.Bitmap[0]);
    if ( (result & 1) == 0 )
      return PspInitializeThunkContext();
  }
  return result;
}
