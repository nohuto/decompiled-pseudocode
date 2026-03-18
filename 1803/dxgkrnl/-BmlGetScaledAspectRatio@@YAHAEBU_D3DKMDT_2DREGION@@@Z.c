/*
 * XREFs of ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1C00C3218
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C00C1158 (BmlCompareSourceModesWithMonitors.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00C20F4 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00C29C8 (BmlCompareRegionsWithPivot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlGetScaledAspectRatio(const struct _D3DKMDT_2DREGION *a1)
{
  signed int cy; // r8d
  __int64 v4; // rax

  cy = a1->cy;
  if ( cy )
    return (unsigned int)((signed int)(100 * a1->cx) / cy);
  v4 = WdLogNewEntry5_WdAssertion(a1);
  WdLogEvent5_WdAssertion(v4);
  cy = a1->cy;
  if ( cy )
    return (unsigned int)((signed int)(100 * a1->cx) / cy);
  else
    return 0LL;
}
