/*
 * XREFs of NdisQueryDiagnosticSetting @ 0x1C00AC010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x1C0041BF8 (WPP_SF_Sd.c)
 *     WPP_SF_S @ 0x1C0062434 (WPP_SF_S.c)
 */

__int64 __fastcall NdisQueryDiagnosticSetting(const wchar_t *a1)
{
  if ( _wcsicmp(a1, L"NblTracking") )
  {
    if ( (unsigned __int8)byte_1C0099622 >= 3u )
      WPP_SF_S(0x10u, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, a1);
    return 0xFFFFFFFFLL;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099622 >= 4u )
      WPP_SF_Sd(0xFu, &WPP_7c95a1dd04db386f3493309f33220046_Traceguids, a1, ndisNblTrackerMode);
    return (unsigned int)ndisNblTrackerMode;
  }
}
