/*
 * XREFs of ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C009BA34
 * Callers:
 *     ?MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11PEAU_MDL@@HH@Z @ 0x1C009B9D4 (-MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11PEAU_MDL@@HH@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00A8450 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001E7C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005B470 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005B62C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005B768 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 */

void __fastcall VIDMM_GLOBAL::MapVideoApertureSegmentInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        DXGFASTMUTEX **a3,
        UINT a4,
        unsigned __int64 a5,
        SIZE_T a6,
        struct _MDL *a7,
        unsigned int a8,
        char a9,
        int a10)
{
  SIZE_T v14; // rax
  DXGFASTMUTEX *v15; // rax
  struct _KTHREAD **v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // ebx
  struct _DXGKARG_BUILDPAGINGBUFFER v20; // [rsp+40h] [rbp-C0h] BYREF

  VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v20);
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v20);
    v20.Operation = DXGK_OPERATION_MAP_APERTURE_SEGMENT;
    if ( a3 )
    {
      v15 = a3[5];
      if ( v15 )
        v14 = *((_QWORD *)v15 + 2);
      else
        v14 = (SIZE_T)a3[6];
    }
    else
    {
      v14 = 0LL;
    }
    v20.UpdateContextAllocation.ContextAllocation = 0LL;
    v20.Fill.FillSize = v14;
    v20.MapApertureSegment.OffsetInPages = a6;
    v20.Transfer.Source.SegmentAddress.QuadPart = a5;
    v20.Fill.FillPattern = a4;
    v20.UnmapApertureSegment.DummyPage.QuadPart = (LONGLONG)a7;
    v20.Transfer.Destination.SegmentAddress.QuadPart = a9 & 1 | (unsigned __int64)(v20.Transfer.Destination.SegmentAddress.LowPart & 0xFFFFFFFE);
    if ( a3 && a3[13] && (*(_DWORD *)a3[63] & 0x10000000) == 0 && (*((_DWORD *)a3 + 21) & 4) == 0 )
    {
      DXGFASTMUTEX::Acquire(a3[40]);
      v16 = (struct _KTHREAD **)a3[40];
      v20.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3[13] + 5) - 32LL)
                                                                            + 24LL)
                                                                + 416LL);
      DXGFASTMUTEX::Release(v16, v17, v18);
    }
    v19 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v20);
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
      (VIDMM_GLOBAL *)this,
      a2,
      (struct _VIDMM_GLOBAL_ALLOC *)a3,
      &v20,
      v19,
      a10,
      0LL);
  }
  while ( v19 == -1071775743 );
}
