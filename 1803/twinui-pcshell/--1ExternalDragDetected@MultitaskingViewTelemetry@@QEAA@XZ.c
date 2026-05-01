/*
 * XREFs of ??1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1802A468C
 * Callers:
 *     ?StartExternalDrag@ElementDragData@@AEAAJXZ @ 0x1802A5B44 (-StartExternalDrag@ElementDragData@@AEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18028C828 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 */

void __fastcall MultitaskingViewTelemetry::ExternalDragDetected::~ExternalDragDetected(
        MultitaskingViewTelemetry::ExternalDragDetected *this)
{
  *(_QWORD *)this = &MultitaskingViewTelemetry::ExternalDragDetected::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
