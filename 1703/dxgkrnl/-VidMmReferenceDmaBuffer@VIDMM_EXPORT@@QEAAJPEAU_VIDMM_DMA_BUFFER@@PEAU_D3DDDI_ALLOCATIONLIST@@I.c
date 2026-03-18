/*
 * XREFs of ?VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00209E8
 * Callers:
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01A3BD4 (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmReferenceDmaBuffer(
        VIDMM_EXPORT *this,
        struct _VIDMM_DMA_BUFFER *a2,
        struct _D3DDDI_ALLOCATIONLIST *a3,
        unsigned int a4,
        char a5,
        int a6,
        unsigned int *a7,
        union _LARGE_INTEGER *a8,
        unsigned __int64 *a9,
        struct VIDMM_ALLOC **a10,
        struct _VIDMM_PRIMARIES_REFERENCES *a11,
        struct DXGALLOCATION **a12)
{
  struct _KTHREAD **Current; // rax
  __int64 v17; // r9
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v22; // [rsp+80h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v22, Current);
  LOBYTE(v17) = a5;
  v18 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, struct _D3DDDI_ALLOCATIONLIST *, _QWORD, __int64, int, unsigned int *, union _LARGE_INTEGER *, unsigned __int64 *, __int64 *, struct VIDMM_ALLOC **, struct _VIDMM_PRIMARIES_REFERENCES *, struct DXGALLOCATION **))(*((_QWORD *)this + 1) + 568LL))(
          a2,
          a3,
          a4,
          v17,
          a6,
          a7,
          a8,
          a9,
          &v22,
          a10,
          a11,
          a12);
  v19 = v22;
  v20 = v18;
  if ( v22 )
  {
    *(_QWORD *)(v22 + 120) = 0LL;
    ExReleasePushLockExclusiveEx(v19 + 112, 0LL);
    KeLeaveCriticalRegion();
  }
  return v20;
}
