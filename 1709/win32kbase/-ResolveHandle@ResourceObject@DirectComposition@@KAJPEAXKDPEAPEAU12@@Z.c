/*
 * XREFs of ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00219B8
 * Callers:
 *     NtDCompositionSetChildRootVisual @ 0x1C0003B20 (NtDCompositionSetChildRootVisual.c)
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003BE0 (NtDCompositionRegisterThumbnailVisual.c)
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0030750 (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     CreateSharedResourceObject @ 0x1C008A328 (CreateSharedResourceObject.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C008C240 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     CreateSharedSystemVisualObject @ 0x1C00913E0 (CreateSharedSystemVisualObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C013E220 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C013E7A0 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0025338 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
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
  result = CompositionObject::ResolveHandle(a1, a2, a3, 2LL, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
