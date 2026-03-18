/*
 * XREFs of ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C0005D00
 * Callers:
 *     ?OpenSharedHandle@CHostVisualMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00012B0 (-OpenSharedHandle@CHostVisualMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedInteractionMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0005530 (-OpenSharedHandle@CSharedInteractionMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedManipulationTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0005BF0 (-OpenSharedHandle@CSharedManipulationTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     NtDuplicateCompositionInputSink @ 0x1C0005C30 (NtDuplicateCompositionInputSink.c)
 *     ?OpenSharedHandle@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00140B0 (-OpenSharedHandle@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     NtDCompositionCreateSharedVisualHandle @ 0x1C0142FA0 (NtDCompositionCreateSharedVisualHandle.c)
 *     ?OpenSharedHandle@CSharedWriteCaptureControllerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0157250 (-OpenSharedHandle@CSharedWriteCaptureControllerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CVisualTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C015E080 (-OpenSharedHandle@CVisualTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C015E5F0 (-OpenSharedHandle@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C015E630 (-OpenSharedHandle@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C015E920 (-OpenSharedHandle@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C015EC30 (-OpenSharedHandle@CSharedVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C015EFF0 (-OpenSharedHandle@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CompositionObject::CreateHandle(
        CompositionObject *this,
        ACCESS_MASK a2,
        unsigned __int8 a3,
        KPROCESSOR_MODE AccessMode,
        void **Handle)
{
  *Handle = (void *)-1LL;
  return ObOpenObjectByPointer(this, 2 * a3 + 64, 0LL, a2, ExCompositionObjectType, AccessMode, Handle);
}
