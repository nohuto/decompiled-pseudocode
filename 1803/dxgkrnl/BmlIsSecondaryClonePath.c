/*
 * XREFs of BmlIsSecondaryClonePath @ 0x1C00C29B0
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00C20F4 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlFunctionalizePath @ 0x1C00C348C (BmlFunctionalizePath.c)
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00C3680 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     _BmlGetPathModeListForPath @ 0x1C0226A4C (_BmlGetPathModeListForPath.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlIsSecondaryClonePath(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r10d

  v3 = 0;
  if ( !a2 )
    return 0;
  while ( *(_DWORD *)(*(_QWORD *)(104LL * v3 + a1 + 16) + 24LL) != *(_DWORD *)(*(_QWORD *)(104LL * a2 + a1 + 16) + 24LL) )
  {
    if ( ++v3 >= a2 )
      return 0;
  }
  if ( a3 )
    *a3 = v3;
  return 1;
}
