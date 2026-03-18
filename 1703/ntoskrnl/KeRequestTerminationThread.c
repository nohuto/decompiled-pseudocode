/*
 * XREFs of KeRequestTerminationThread @ 0x14012008C
 * Callers:
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 *     PspTerminateThreadByPointer @ 0x14054F0D0 (PspTerminateThreadByPointer.c)
 *     MiCommitRequestFailed @ 0x1406B6A28 (MiCommitRequestFailed.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     KiSignalThreadForApc @ 0x14003FFA4 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140040128 (KiInsertQueueApc.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x1400E0220 (KiExitDispatcher.c)
 *     KeForceResumeThread @ 0x140110D6C (KeForceResumeThread.c)
 *     KeAlertThread @ 0x1401201B0 (KeAlertThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall KeRequestTerminationThread(__int64 a1)
{
  char v2; // bp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v5; // r8
  _DWORD v6[4]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v7[8]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v8; // [rsp+48h] [rbp-90h]
  __int64 v9; // [rsp+50h] [rbp-88h]

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 544) + 720LL) )
  {
    v8 = *(unsigned int *)(a1 + 796);
    v9 = a1;
    VslpEnterIumSecureMode(1, 8LL, 0LL, (__int64)v7);
  }
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xEu) )
  {
    v2 = 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v6[0] = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(v6);
      while ( *(_QWORD *)(a1 + 64) );
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v2 = 1;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        KiInsertQueueApc(a1 + 648);
        LOBYTE(v5) = CurrentIrql;
        KiSignalThreadForApc((__int64)CurrentPrcb, a1 + 648, v5);
      }
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    KiExitDispatcher((__int64)CurrentPrcb, 0, 1LL, 0LL, CurrentIrql);
    if ( v2 )
    {
      KeAlertThread(a1, 0LL);
      KeForceResumeThread(a1);
    }
  }
}
