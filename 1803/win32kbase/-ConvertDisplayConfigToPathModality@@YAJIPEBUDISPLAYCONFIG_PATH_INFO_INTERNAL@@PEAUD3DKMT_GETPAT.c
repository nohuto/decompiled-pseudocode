/*
 * XREFs of ?ConvertDisplayConfigToPathModality@@YAJIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C00CC218
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C004A830 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C00D4D70 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C00CBD64 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 */

__int64 __fastcall ConvertDisplayConfigToPathModality(
        __int64 a1,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        struct D3DKMT_GETPATHSMODALITY *a3,
        bool *a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 *v8; // rbx
  unsigned int i; // r14d
  __int64 result; // rax
  __int64 v11; // rax

  v4 = 0;
  v5 = 0;
  v8 = (__int64 *)a2;
  for ( i = a1; v5 < i; v8 += 25 )
  {
    if ( *v8 < 0 )
    {
      if ( v4 >= *((unsigned __int16 *)a3 + 11) )
      {
        v11 = WdLogNewEntry5_WdError(a1, a2, a3);
        *(_QWORD *)(v11 + 24) = *((unsigned __int16 *)a3 + 11);
        WdLogEvent5_WdError(v11);
        return 3221225507LL;
      }
      result = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx((unsigned __int64)v8, v4, v5, 1, 0, a3, a4);
      if ( (int)result < 0 )
        return result;
      ++v4;
    }
    ++v5;
  }
  return 0LL;
}
