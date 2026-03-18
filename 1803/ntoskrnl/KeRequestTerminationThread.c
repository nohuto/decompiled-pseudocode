/*
 * XREFs of KeRequestTerminationThread @ 0x140043C6C
 * Callers:
 *     PspInsertThread @ 0x1404B7C74 (PspInsertThread.c)
 *     PspTerminateThreadByPointer @ 0x1404BB3D0 (PspTerminateThreadByPointer.c)
 *     KeRequestTerminationProcess @ 0x1407417F8 (KeRequestTerminationProcess.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeForceResumeThread @ 0x140041924 (KeForceResumeThread.c)
 *     KiSignalThreadForApc @ 0x140041EC4 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140043A70 (KiInsertQueueApc.c)
 *     KeAlertThread @ 0x140043DB0 (KeAlertThread.c)
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400FB620 (KiExitDispatcher.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall KeRequestTerminationThread(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  char v4; // bp
  char CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KPRCB *v7; // rsi
  __int64 v8; // rax
  _DWORD v9[4]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v10[8]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v11; // [rsp+48h] [rbp-90h]
  __int64 v12; // [rsp+50h] [rbp-88h]

  result = *(_QWORD *)(a1 + 544);
  v3 = a1;
  if ( (*(_BYTE *)(result + 720) & 1) != 0 )
  {
    v8 = *(unsigned int *)(a1 + 796);
    LOBYTE(a1) = 2;
    v11 = v8;
    v12 = v3;
    result = VslpEnterIumSecureMode(a1, 8LL, 0LL, v10);
  }
  if ( !_interlockedbittestandset((volatile signed __int32 *)(v3 + 120), 0xFu) )
  {
    v4 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v9[0] = 0;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(v9);
      while ( *(_QWORD *)(v3 + 64) );
    }
    v7 = KeGetCurrentPrcb();
    if ( (*(_DWORD *)(v3 + 116) & 0x4000) != 0 )
    {
      v4 = 1;
      if ( !*(_BYTE *)(v3 + 730) )
      {
        *(_BYTE *)(v3 + 730) = 1;
        KiInsertQueueApc(v3 + 648);
        KiSignalThreadForApc((__int64)v7, v3 + 648, CurrentIrql);
      }
    }
    KiReleaseThreadLockSafe(v3);
    result = KiExitDispatcher((_DWORD)v7, 0, 1, 0, CurrentIrql);
    if ( v4 )
    {
      KeAlertThread(v3, 0LL);
      return KeForceResumeThread(v3);
    }
  }
  return result;
}
