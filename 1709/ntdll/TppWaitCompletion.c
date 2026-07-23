/*
 * XREFs of TppWaitCompletion @ 0x18000CA10
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 * Callees:
 *     TppCancelTimer @ 0x18000FA40 (TppCancelTimer.c)
 *     TppSetupNextWait @ 0x180010608 (TppSetupNextWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     TppBarrierAdjust @ 0x180071CD8 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppWaitCompletion(PTP_CALLBACK_INSTANCE Instance, __int64 a2, __int64 a3)
{
  _RTL_SRWLOCK *v3; // rsi
  __int64 v6; // r8
  signed int v7; // edi
  char v8; // cl

  v3 = (_RTL_SRWLOCK *)(a3 + 240);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 240));
  LOBYTE(v6) = 1;
  v7 = 0;
  if ( (unsigned __int8)TppCancelTimer(a3, *(_QWORD *)(a3 + 144) + 112LL, v6) )
    v7 = -1;
  if ( (*(_BYTE *)(a3 + 464) & 4) == 0 )
    TppBarrierAdjust(a3 + 56, 1LL, 0LL);
  *(_QWORD *)(a3 + 360) = 0LL;
  v8 = *(_BYTE *)(a3 + 464);
  if ( (v8 & 1) != 0 )
    v7 += TppSetupNextWait(a3, *(_QWORD *)(a3 + 376), (a3 + 384) & -(__int64)((v8 & 2) != 0));
  *(_BYTE *)(a3 + 464) = 0;
  if ( v7 > 0 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a3, v7);
    v7 = 0;
  }
  RtlReleaseSRWLockExclusive(v3);
  if ( v7 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)a3, v7) == -v7 )
    (**(void (__fastcall ***)(__int64))(a3 + 8))(a3);
  return TppExecuteWaitCallback(Instance, (PTP_WAIT)a3, 0);
}
