/*
 * XREFs of ?WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002C868
 * Callers:
 *     ??1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ @ 0x18002C468 (--1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ.c)
 *     ??$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z @ 0x18002C640 (--$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x18003C068 (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 *     ??$HandleEvent@$08$$V@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXXZ @ 0x18003CCF8 (--$HandleEvent@$08$$V@-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXXZ.c)
 *     ??$HandleEvent@$08$$V@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXXZ @ 0x18003CE00 (--$HandleEvent@$08$$V@-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXXZ.c)
 *     ??$HandleEvent@$08$$V@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXXZ @ 0x18003CF08 (--$HandleEvent@$08$$V@-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXXZ.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180029894 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::WritePlacementReportedInfo(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  const WCHAR *v2; // rdx
  unsigned int v3; // eax
  __int64 v4; // r8
  __int64 v5; // rdx
  HKEY v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 252) && *((_BYTE *)this + 251) )
  {
    hKey = 0LL;
    v2 = (const WCHAR *)((char *)this + 216);
    if ( *((_QWORD *)this + 30) >= 8uLL )
      v2 = *(const WCHAR **)v2;
    v3 = RegCreateKeyExW(HKEY_CURRENT_USER, v2, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL);
    if ( v3 )
    {
      v5 = 443LL;
    }
    else
    {
      v3 = RegSetValueExW(hKey, L"PlacementReported", 0, 3u, (const BYTE *)this + 104, 0x24u);
      if ( !v3 )
        goto LABEL_10;
      v5 = 446LL;
    }
    wil::details::in1diag3::_Log_Win32(retaddr, (void *)v5, v4, (const char *)v3);
LABEL_10:
    v6 = hKey;
    *((_BYTE *)this + 251) = 0;
    if ( v6 )
      RegCloseKey(v6);
  }
}
