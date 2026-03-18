/*
 * XREFs of ?VidMmReferenceDmaBuffer@VIDMM_EXPORT@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C001DC78
 * Callers:
 *     ?RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCATION@@@Z @ 0x1C01BD78C (-RenderKmLda@DXGCONTEXT@@SAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAPEAV1@PEAPEAVDXGALLOCAT.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003944 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v21, Current);
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
          &v21,
          a10,
          a11,
          a12);
  if ( v21 )
  {
    v19 = v21 + 136;
    *(_QWORD *)(v21 + 144) = 0LL;
    ExReleasePushLockExclusiveEx(v19, 0LL);
    KeLeaveCriticalRegion();
  }
  return v18;
}
