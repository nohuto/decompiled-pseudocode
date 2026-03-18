/*
 * XREFs of BmlIsSecondaryClonePath @ 0x1C00F3B80
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00F210C (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 *     BmlFunctionalizePath @ 0x1C00F22E4 (BmlFunctionalizePath.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00F3258 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBU_D3DKMT_GETPATHS.c)
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
