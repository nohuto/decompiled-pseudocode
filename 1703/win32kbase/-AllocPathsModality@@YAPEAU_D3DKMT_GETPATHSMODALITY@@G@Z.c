/*
 * XREFs of ?AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0057A4C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 *     GetPathsModality @ 0x1C0057970 (GetPathsModality.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F4088 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@PEAPEAU_D3DKMT_GETPATHSM.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00F6AEC (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 */

struct _D3DKMT_GETPATHSMODALITY *__fastcall AllocPathsModality(unsigned __int16 a1)
{
  struct _D3DKMT_GETPATHSMODALITY *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax

  result = (struct _D3DKMT_GETPATHSMODALITY *)PALLOCMEM2(264 * ((unsigned int)a1 - 1) + 312, 1936876615LL, 1);
  if ( result )
  {
    *((_DWORD *)result + 9) = 0;
    *((_QWORD *)result + 5) = 0LL;
    *((_WORD *)result + 10) = a1;
    *((_WORD *)result + 11) = a1;
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    *(_QWORD *)(v7 + 24) = a1;
    WdLogEvent5_WdLowResource(v7);
    return 0LL;
  }
  return result;
}
