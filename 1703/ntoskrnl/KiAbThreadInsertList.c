/*
 * XREFs of KiAbThreadInsertList @ 0x1400309BC
 * Callers:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140066A7C (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14008FC20 (ExpAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x1400913C0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140091CD0 (ExpBoostIoAfterAcquire.c)
 *     KiAbSetMinimumThreadPriority @ 0x14011EE4C (KiAbSetMinimumThreadPriority.c)
 *     KiAbThreadBoostIoPriority @ 0x14011F390 (KiAbThreadBoostIoPriority.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140205384 (KeAbProcessEffectiveIoPriorityChange.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiAbThreadInsertList(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v8);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( *a3 == 1LL )
  {
    v3 = 1;
    *a3 = *a2;
    *a2 = a3;
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v3 )
    _InterlockedAdd16((volatile signed __int16 *)(a1 + 1420), 1u);
  return v3;
}
