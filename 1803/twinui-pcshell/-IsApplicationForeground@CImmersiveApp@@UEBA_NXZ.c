/*
 * XREFs of ?IsApplicationForeground@CImmersiveApp@@UEBA_NXZ @ 0x180049870
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@@Z @ 0x18000A1F8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_K.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18003D440 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?IsForeground@CImmersiveApp@@UEAAJPEAH@Z @ 0x18004D1D0 (-IsForeground@CImmersiveApp@@UEAAJPEAH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveApp::IsApplicationForeground(CImmersiveApp *this)
{
  return (*((_DWORD *)this + 106) & 2) != 0;
}
