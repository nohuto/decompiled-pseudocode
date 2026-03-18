/*
 * XREFs of ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5308
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C00FA088 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0067044 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 */

__int64 __fastcall AllocatePathModalityForDisplayConfig(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        struct D3DKMT_GETPATHSMODALITY **a3)
{
  unsigned int v3; // ebx
  __int64 *v6; // rax
  struct D3DKMT_GETPATHSMODALITY *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v13; // rax

  v3 = 0;
  v6 = (__int64 *)a2;
  if ( !(_DWORD)a1 )
    goto LABEL_10;
  a1 = (unsigned int)a1;
  do
  {
    if ( *v6 < 0 )
      ++v3;
    v6 += 24;
    --a1;
  }
  while ( a1 );
  if ( v3 )
  {
    v7 = AllocPathsModality(v3);
    *a3 = v7;
    if ( v7 )
    {
      return 0LL;
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v11 + 24) = v3;
      WdLogEvent5_WdError(v11);
      return 3221225495LL;
    }
  }
  else
  {
LABEL_10:
    v13 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v13 + 24) = a2;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
}
