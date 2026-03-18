/*
 * XREFs of ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C00A4134
 * Callers:
 *     ?UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z @ 0x1C00A40E8 (-UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z @ 0x1C00AFF50 (-ValidateApertureUnmapToDummyPage@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_SEGMENT@@_K@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0005148 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005720 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00057D8 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005FD88 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005FF5C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006007C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060F70 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        DXGFASTMUTEX **a3,
        UINT a4,
        unsigned __int64 a5,
        SIZE_T a6,
        union _LARGE_INTEGER a7,
        int a8)
{
  char v9; // r12
  SIZE_T v13; // rax
  DXGFASTMUTEX *v14; // rax
  struct _KTHREAD **v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // edi
  struct _DXGKARG_BUILDPAGINGBUFFER v19; // [rsp+40h] [rbp-C0h] BYREF

  v9 = 0;
  VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v19);
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, a2, (struct _VIDMM_GLOBAL_ALLOC *)a3, &v19);
    v19.Operation = DXGK_OPERATION_UNMAP_APERTURE_SEGMENT;
    if ( a3 )
    {
      v14 = a3[5];
      if ( v14 )
        v13 = *((_QWORD *)v14 + 2);
      else
        v13 = (SIZE_T)a3[6];
    }
    else
    {
      v13 = 0LL;
    }
    v19.UpdateContextAllocation.ContextAllocation = 0LL;
    v19.Fill.FillSize = v13;
    v19.MapApertureSegment.OffsetInPages = a6;
    v19.Transfer.Source.SegmentAddress.QuadPart = a5;
    v19.Fill.FillPattern = a4;
    v19.UnmapApertureSegment.DummyPage = a7;
    if ( a3 && a3[13] && (*(_DWORD *)a3[63] & 0x10000000) == 0 && (*((_DWORD *)a3 + 21) & 4) == 0 )
    {
      DXGFASTMUTEX::Acquire(a3[40]);
      v15 = (struct _KTHREAD **)a3[40];
      v19.UpdateContextAllocation.ContextAllocation = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3[13] + 5) - 32LL)
                                                                            + 24LL)
                                                                + 432LL);
      DXGFASTMUTEX::Release(v15, v16, v17);
    }
    v18 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v19);
    v9 |= VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
            (VIDMM_GLOBAL *)this,
            a2,
            (struct _VIDMM_GLOBAL_ALLOC *)a3,
            &v19,
            v18,
            a8,
            0LL);
  }
  while ( v18 == -1071775743 );
  if ( v9 )
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)this, a2);
}
