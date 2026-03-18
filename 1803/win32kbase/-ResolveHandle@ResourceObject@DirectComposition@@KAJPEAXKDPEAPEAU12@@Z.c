/*
 * XREFs of ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C000FBE0
 * Callers:
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C000B9D8 (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     CreateSharedResourceObject @ 0x1C0011D54 (CreateSharedResourceObject.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C0012A30 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     CreateSharedSystemVisualObject @ 0x1C0013680 (CreateSharedSystemVisualObject.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0013770 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C0013CA0 (NtDCompositionSetChildRootVisual.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C0143150 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C01436D0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C000FC60 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall DirectComposition::ResourceObject::ResolveHandle(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct DirectComposition::ResourceObject **a4)
{
  __int64 result; // rax
  struct DirectComposition::ResourceObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  result = CompositionObject::ResolveHandle(a1, a2, a3, 1LL, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
