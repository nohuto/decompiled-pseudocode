/*
 * XREFs of ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0067044
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 *     GetPathsModality @ 0x1C0066F68 (GetPathsModality.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5308 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00F7B70 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 */

struct D3DKMT_GETPATHSMODALITY *__fastcall AllocPathsModality(unsigned __int16 a1)
{
  struct D3DKMT_GETPATHSMODALITY *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax

  result = (struct D3DKMT_GETPATHSMODALITY *)PALLOCMEM2(264 * ((unsigned int)a1 - 1) + 312, 1936876615LL, 1);
  if ( result )
  {
    *((_DWORD *)result + 9) = 0;
    *((_QWORD *)result + 5) = 0LL;
    *((_WORD *)result + 10) = a1;
    *((_WORD *)result + 11) = a1;
  }
  else
  {
    v6 = WdLogNewEntry5_WdLowResource(v4, v3, v5);
    *(_QWORD *)(v6 + 24) = a1;
    WdLogEvent5_WdLowResource(v6);
    return 0LL;
  }
  return result;
}
