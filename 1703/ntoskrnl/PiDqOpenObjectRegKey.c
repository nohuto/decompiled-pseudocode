/*
 * XREFs of PiDqOpenObjectRegKey @ 0x1404BE0FC
 * Callers:
 *     PiDqActionDataGetChangedProperties @ 0x14045AAE8 (PiDqActionDataGetChangedProperties.c)
 *     PiDqPropertyCallback @ 0x1404BD530 (PiDqPropertyCallback.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1404BD990 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqIrpPropertySet @ 0x1405959E0 (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140697FE8 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x140698274 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     _PnpOpenObjectRegKey @ 0x140487A28 (_PnpOpenObjectRegKey.c)
 *     PiDqOpenUserObjectRegKey @ 0x1404BE304 (PiDqOpenUserObjectRegKey.c)
 */

__int64 __fastcall PiDqOpenObjectRegKey(int a1, __int64 a2, unsigned int a3, int a4, char a5, __int64 a6, _QWORD *a7)
{
  int v7; // r11d

  v7 = a4;
  *a7 = 0LL;
  if ( !a1 )
    return PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a2, a3, a4, a5, (__int64)a7, 0LL, 0);
  if ( a1 != 1 )
    return 3221225485LL;
  LOBYTE(a4) = a5;
  return PiDqOpenUserObjectRegKey(a2, a3, v7, a4, a6, (__int64)a7, 0LL, 0);
}
