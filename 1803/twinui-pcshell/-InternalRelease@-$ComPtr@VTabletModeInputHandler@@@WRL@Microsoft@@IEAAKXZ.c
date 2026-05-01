/*
 * XREFs of ?InternalRelease@?$ComPtr@VTabletModeInputHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1802E0FD0
 * Callers:
 *     ??$MakeAndInitialize@VTabletModeInputHandler@@V1@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeInputHandler@@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Z @ 0x1802E0E7C (--$MakeAndInitialize@VTabletModeInputHandler@@V1@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPE.c)
 *     ?TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@AEBU_GUID@@PEAPEAX@Z @ 0x1802E12D8 (-TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletMod.c)
 *     ?s_WndProcBase@?$CWRLImpWndProc@VTabletModeInputHandler@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1802E1410 (-s_WndProcBase@-$CWRLImpWndProc@VTabletModeInputHandler@@@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITabletModeInputHandler@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802E1110 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITabletModeInput.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<TabletModeInputHandler>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITabletModeInputHandler>::Release(v1);
  }
  return result;
}
