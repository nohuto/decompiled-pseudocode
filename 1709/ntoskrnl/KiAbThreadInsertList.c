/*
 * XREFs of KiAbThreadInsertList @ 0x140124280
 * Callers:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140021908 (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140080900 (ExpAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x1400813D0 (PsBoostThreadIoEx.c)
 *     ExpApplyPriorityBoost @ 0x14008B550 (ExpApplyPriorityBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x1400A6E08 (KiAbSetMinimumThreadPriority.c)
 *     ExpBoostIoAfterAcquire @ 0x1400F19F0 (ExpBoostIoAfterAcquire.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14010F854 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiAbThreadBoostIoPriority @ 0x14010F8BC (KiAbThreadBoostIoPriority.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
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
