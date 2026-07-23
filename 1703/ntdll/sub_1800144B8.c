/*
 * XREFs of sub_1800144B8 @ 0x1800144B8
 * Callers:
 *     TpReleaseWait @ 0x1800135B0 (TpReleaseWait.c)
 *     TpReleaseWork @ 0x180014510 (TpReleaseWork.c)
 *     sub_180016D48 @ 0x180016D48 (sub_180016D48.c)
 *     TpReleaseTimer @ 0x180019600 (TpReleaseTimer.c)
 *     TpReleaseAlpcCompletion @ 0x18007F310 (TpReleaseAlpcCompletion.c)
 *     TpReleaseJobNotification @ 0x180080EC0 (TpReleaseJobNotification.c)
 *     TpReleaseIoCompletion @ 0x1800816C0 (TpReleaseIoCompletion.c)
 * Callees:
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

bool __fastcall sub_1800144B8(__int64 a1, __int64 a2)
{
  unsigned __int32 v2; // eax
  unsigned __int32 v3; // ett

  _m_prefetchw((const void *)(a1 + 168));
  v2 = *(_DWORD *)(a1 + 168);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), v2 | 0x10000, v2);
  }
  while ( v3 != v2 );
  if ( !(_DWORD)a2 || (v2 & 0x10000) == 0 )
    return (v2 & 0x30000) == 0;
  sub_1801058B8(v2, a2);
  return 0;
}
