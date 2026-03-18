/*
 * XREFs of KiAbThreadInsertList @ 0x1400C38F0
 * Callers:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140043934 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KiAbSetMinimumThreadPriority @ 0x140064924 (KiAbSetMinimumThreadPriority.c)
 *     ExpBoostIoAfterAcquire @ 0x1400884C0 (ExpBoostIoAfterAcquire.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x1400BEEF0 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbThreadBoostIoPriority @ 0x1400CE508 (KiAbThreadBoostIoPriority.c)
 *     ExpApplyPriorityBoost @ 0x1400EE7A0 (ExpApplyPriorityBoost.c)
 *     PsBoostThreadIoEx @ 0x1400FE2D0 (PsBoostThreadIoEx.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

__int64 __fastcall KiAbThreadInsertList(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v4; // edi
  _QWORD *v6; // r14
  int v9; // [rsp+40h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v9 = 0;
  v6 = a2;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v9);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *a3 == 1LL )
  {
    v4 = 1;
    *a3 = *v6;
    *v6 = a3;
  }
  KiReleaseThreadLockSafe(a1);
  if ( v4 )
    _InterlockedAdd16((volatile signed __int16 *)(a1 + 1420), 1u);
  return v4;
}
