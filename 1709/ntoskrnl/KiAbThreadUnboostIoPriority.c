/*
 * XREFs of KiAbThreadUnboostIoPriority @ 0x14012F5D0
 * Callers:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400813D0 (PsBoostThreadIoEx.c)
 */

void __fastcall KiAbThreadUnboostIoPriority(__int64 a1, int a2)
{
  _InterlockedDecrement((volatile signed __int32 *)(a1 + (a2 != 0 ? 4 : 0) + 1412));
  if ( a2 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1804));
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
}
