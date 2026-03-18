/*
 * XREFs of ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0010088
 * Callers:
 *     NtDCompositionRegisterThumbnailVisual @ 0x1C0003C60 (NtDCompositionRegisterThumbnailVisual.c)
 *     NtDCompositionSetChildRootVisual @ 0x1C0003F80 (NtDCompositionSetChildRootVisual.c)
 *     ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B1EC (-OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceM.c)
 *     CreateSharedResourceObject @ 0x1C008303C (CreateSharedResourceObject.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C0087850 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 *     CreateSharedSystemVisualObject @ 0x1C008AE80 (CreateSharedSystemVisualObject.c)
 *     NtDCompositionDuplicateHandleToProcess @ 0x1C013EDC0 (NtDCompositionDuplicateHandleToProcess.c)
 *     NtDCompositionRegisterVirtualDesktopVisual @ 0x1C013F330 (NtDCompositionRegisterVirtualDesktopVisual.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0010C48 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
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
