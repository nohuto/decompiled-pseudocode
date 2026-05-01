/*
 * XREFs of ??1CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1802709E4
 * Callers:
 *     ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180271E58 (-_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCo.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014FC9C (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 */

void __fastcall MultitaskingViewTelemetry::CreateMultitaskingViewHost::~CreateMultitaskingViewHost(
        MultitaskingViewTelemetry::CreateMultitaskingViewHost *this)
{
  *(_QWORD *)this = &MultitaskingViewTelemetry::CreateMultitaskingViewHost::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
