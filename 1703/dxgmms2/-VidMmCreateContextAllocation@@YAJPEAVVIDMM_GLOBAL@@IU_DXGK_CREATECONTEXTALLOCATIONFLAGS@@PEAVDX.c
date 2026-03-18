/*
 * XREFs of ?VidMmCreateContextAllocation@@YAJPEAVVIDMM_GLOBAL@@IU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@PEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0012770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmCreateContextAllocation(
        struct VIDMM_GLOBAL *a1,
        unsigned int a2,
        struct _DXGK_CREATECONTEXTALLOCATIONFLAGS a3,
        struct DXGDEVICE *a4,
        struct DXGCONTEXT *a5,
        void *a6,
        unsigned __int64 a7,
        struct DXGALLOCATION *a8,
        unsigned int a9,
        unsigned int a10,
        struct _D3DDDI_SEGMENTPREFERENCE a11,
        struct _DXGK_SEGMENTBANKPREFERENCE a12,
        struct _DXGK_ALLOCATIONINFOFLAGS a13,
        struct _VIDMM_CONTEXT_ALLOC **a14)
{
  return VIDMM_GLOBAL::CreateContextAllocation(a1, a3, a2, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}
