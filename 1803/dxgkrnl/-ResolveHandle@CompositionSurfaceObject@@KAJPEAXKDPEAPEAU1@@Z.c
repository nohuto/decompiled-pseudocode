/*
 * XREFs of ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000A6A0
 * Callers:
 *     NtValidateCompositionSurfaceHandle @ 0x1C000AE10 (NtValidateCompositionSurfaceHandle.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C000C2B0 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C000C400 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     NtBindCompositionSurface @ 0x1C000C700 (NtBindCompositionSurface.c)
 *     NtQueryCompositionSurfaceBinding @ 0x1C000CA20 (NtQueryCompositionSurfaceBinding.c)
 *     NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C000CC00 (NtOpenCompositionSurfaceSwapChainHandleInfo.c)
 *     NtQueryCompositionSurfaceRenderingRealization @ 0x1C000CE40 (NtQueryCompositionSurfaceRenderingRealization.c)
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000D000 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     NtQueryCompositionSurfaceStatistics @ 0x1C000D210 (NtQueryCompositionSurfaceStatistics.c)
 *     NtUnBindCompositionSurface @ 0x1C000D5A0 (NtUnBindCompositionSurface.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C00171E0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C0017320 (NtSetCompositionSurfaceIndependentFlipInfo.c)
 *     ?CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z @ 0x1C0017740 (-CompleteIndendentFlipToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@I@Z.c)
 *     ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C004BDD4 (-NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtNotifyPresentToCompositionSurface @ 0x1C004BE80 (NtNotifyPresentToCompositionSurface.c)
 *     NtOpenCompositionSurfaceSectionInfo @ 0x1C004C170 (NtOpenCompositionSurfaceSectionInfo.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C004C350 (NtSetCompositionSurfaceAnalogExclusive.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C004C440 (NtSetCompositionSurfaceStatistics.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionSurfaceObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        struct CompositionSurfaceObject **a4)
{
  struct CompositionSurfaceObject *v5; // rsi
  NTSTATUS v6; // eax
  struct CompositionSurfaceObject *v7; // rdi
  int v8; // ebx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v5 = 0LL;
  v6 = ObReferenceObjectByHandle(a1, a2, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v7 = (struct CompositionSurfaceObject *)Object;
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 1))(*((_QWORD *)Object + 1)) )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD *))(**((_QWORD **)v7 + 1) + 16LL))(*((_QWORD **)v7 + 1)) == 1 )
        v5 = v7;
      else
        v8 = -1073741788;
    }
    else
    {
      v8 = -1073741816;
    }
    if ( v8 < 0 )
      ObfDereferenceObject(v7);
    else
      *a4 = v5;
  }
  return (unsigned int)v8;
}
