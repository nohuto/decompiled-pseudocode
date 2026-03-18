/*
 * XREFs of ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00685B4
 * Callers:
 *     ?VidMmCreateAllocation@@YAJPEAVVIDMM_DEVICE@@PEAXPEAVDXGADAPTERALLOCATION@@1PEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0002DB0 (-VidMmCreateAllocation@@YAJPEAVVIDMM_DEVICE@@PEAXPEAVDXGADAPTERALLOCATION@@1PEAPEAU_VIDMM_CROSSA.c)
 * Callees:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067620 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        struct _D3DDDI_SEGMENTPREFERENCE a10,
        struct _DXGK_SEGMENTBANKPREFERENCE a11,
        struct _DXGK_ALLOCATIONINFOFLAGS a12,
        unsigned int a13,
        struct DXGADAPTERALLOCATION *a14,
        void *a15,
        struct _VIDMM_CROSSADAPTER_ALLOC **a16,
        struct _VIDMM_MULTI_GLOBAL_ALLOC **a17)
{
  __int64 result; // rax
  struct _D3DDDI_SEGMENTPREFERENCE *v18; // [rsp+A0h] [rbp-18h] BYREF

  v18 = 0LL;
  *a17 = 0LL;
  result = VIDMM_GLOBAL::CreateOneAllocation(
             this,
             a2,
             a3,
             a4,
             a5,
             a6,
             a8,
             a9,
             a10,
             a12,
             a14,
             a15,
             0LL,
             a13,
             0,
             0LL,
             0,
             a16,
             &v18);
  if ( (int)result >= 0 )
  {
    *a17 = (struct _VIDMM_MULTI_GLOBAL_ALLOC *)v18;
    return (unsigned int)result;
  }
  return result;
}
