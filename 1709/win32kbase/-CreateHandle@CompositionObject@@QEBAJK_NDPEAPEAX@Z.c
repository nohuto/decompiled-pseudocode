/*
 * XREFs of ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C003C810
 * Callers:
 *     ?OpenSharedHandle@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00048F0 (-OpenSharedHandle@CSharedWriteAnimationTriggerMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedMatrixTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C007E300 (-OpenSharedHandle@CSharedMatrixTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedManipulationTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C007E9A0 (-OpenSharedHandle@CSharedManipulationTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CHostVisualMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C007EEF0 (-OpenSharedHandle@CHostVisualMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedInteractionMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C008AF40 (-OpenSharedHandle@CSharedInteractionMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C008F790 (-OpenSharedHandle@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     NtDCompositionCreateSharedVisualHandle @ 0x1C013E150 (NtDCompositionCreateSharedVisualHandle.c)
 *     ?OpenSharedHandle@CVisualTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0150240 (-OpenSharedHandle@CVisualTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0150410 (-OpenSharedHandle@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0150690 (-OpenSharedHandle@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWriteScalarMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C01509A0 (-OpenSharedHandle@CSharedWriteScalarMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedWriteRemotingRenderTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0150E50 (-OpenSharedHandle@CSharedWriteRemotingRenderTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     ?OpenSharedHandle@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C01510E0 (-OpenSharedHandle@CSharedHolographicInteropTextureMarshaler@DirectComposition@@UEAAJPEAPEAX@Z.c)
 *     NtDuplicateCompositionInputSink @ 0x1C0151890 (NtDuplicateCompositionInputSink.c)
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
