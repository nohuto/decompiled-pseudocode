/*
 * XREFs of sub_180058A78 @ 0x180058A78
 * Callers:
 *     sub_180025ACC @ 0x180025ACC (sub_180025ACC.c)
 *     TpReleaseJobNotification @ 0x180056130 (TpReleaseJobNotification.c)
 *     TpReleaseAlpcCompletion @ 0x1800567B0 (TpReleaseAlpcCompletion.c)
 *     TpReleaseIoCompletion @ 0x1800572C0 (TpReleaseIoCompletion.c)
 *     TpReleaseWait @ 0x180058580 (TpReleaseWait.c)
 *     TpReleaseTimer @ 0x180058900 (TpReleaseTimer.c)
 *     TpReleaseWork @ 0x1800589B0 (TpReleaseWork.c)
 * Callees:
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

bool __fastcall sub_180058A78(__int64 a1, __int64 a2)
{
  unsigned __int32 v2; // eax
  __int64 v3; // r8
  unsigned __int32 v4; // ett

  _m_prefetchw((const void *)(a1 + 168));
  v2 = *(_DWORD *)(a1 + 168);
  do
  {
    v3 = v2 | 0x10000;
    v4 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), v3, v2);
  }
  while ( v4 != v2 );
  if ( !(_DWORD)a2 || (v2 & 0x10000) == 0 )
    return (v2 & 0x30000) == 0;
  sub_1801086C8(v2, a2, v3);
  return 0;
}
