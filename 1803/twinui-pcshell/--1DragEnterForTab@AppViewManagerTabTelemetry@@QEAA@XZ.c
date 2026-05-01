/*
 * XREFs of ??1DragEnterForTab@AppViewManagerTabTelemetry@@QEAA@XZ @ 0x18011DA84
 * Callers:
 *     ?DragEnterForTab@CAppViewManager@@UEAAJAEBU_GUID@@0UtagPOINT@@@Z @ 0x18011F660 (-DragEnterForTab@CAppViewManager@@UEAAJAEBU_GUID@@0UtagPOINT@@@Z.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18011EFEC (-Destroy@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 */

void __fastcall AppViewManagerTabTelemetry::DragEnterForTab::~DragEnterForTab(
        AppViewManagerTabTelemetry::DragEnterForTab *this)
{
  *(_QWORD *)this = &AppViewManagerTabTelemetry::DragEnterForTab::`vftable';
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
