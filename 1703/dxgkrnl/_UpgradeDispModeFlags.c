/*
 * XREFs of _UpgradeDispModeFlags @ 0x1C018EF30
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C00F54D0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C00F5F70 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018CBB0 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     _CombineModeList @ 0x1C018EB64 (_CombineModeList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpgradeDispModeFlags(__int64 a1, __int64 a2)
{
  int v3; // r8d
  int v4; // edx
  int v5; // edx
  unsigned int v6; // edx
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 36);
  if ( (((unsigned __int8)v3 ^ *(_BYTE *)(a2 + 36)) & 1) != 0 )
    *(_DWORD *)(a1 + 36) = v3 | 1;
  v4 = *(_DWORD *)(a1 + 40);
  if ( (((unsigned __int8)v4 ^ *(_BYTE *)(a2 + 40)) & 0x20) != 0 )
    *(_DWORD *)(a1 + 40) = v4 | 0x20;
  v5 = *(_DWORD *)(a1 + 40);
  if ( (((unsigned __int8)v5 ^ *(_BYTE *)(a2 + 40)) & 0x40) != 0 )
    *(_DWORD *)(a1 + 40) = v5 | 0x40;
  v6 = *(_DWORD *)(a1 + 40);
  result = v6 ^ *(_DWORD *)(a2 + 40);
  if ( ((v6 ^ *(_BYTE *)(a2 + 40)) & 0x80u) != 0 )
    *(_DWORD *)(a1 + 40) = v6 | 0x80;
  return result;
}
