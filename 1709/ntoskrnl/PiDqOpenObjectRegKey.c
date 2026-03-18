/*
 * XREFs of PiDqOpenObjectRegKey @ 0x140447A84
 * Callers:
 *     PiDqPropertyCallback @ 0x14052D3D0 (PiDqPropertyCallback.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14052E168 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetChangedProperties @ 0x1405E6D68 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x1406C3A68 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1406C3CF4 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqIrpPropertySet @ 0x1406C42C0 (PiDqIrpPropertySet.c)
 * Callees:
 *     PiDqOpenUserObjectRegKey @ 0x140447AF4 (PiDqOpenUserObjectRegKey.c)
 *     _PnpOpenObjectRegKey @ 0x1405264F8 (_PnpOpenObjectRegKey.c)
 */

__int64 __fastcall PiDqOpenObjectRegKey(int a1, int a2, int a3, int a4, char a5, __int64 a6, _QWORD *a7)
{
  int v7; // r11d

  v7 = a4;
  *a7 = 0LL;
  if ( !a1 )
    return PnpOpenObjectRegKey(PiPnpRtlCtx, a2, a3, a4, a5, (__int64)a7, 0LL, 0);
  if ( a1 != 1 )
    return 3221225485LL;
  LOBYTE(a4) = a5;
  return PiDqOpenUserObjectRegKey(a2, a3, v7, a4, a6, (__int64)a7, 0LL, 0);
}
