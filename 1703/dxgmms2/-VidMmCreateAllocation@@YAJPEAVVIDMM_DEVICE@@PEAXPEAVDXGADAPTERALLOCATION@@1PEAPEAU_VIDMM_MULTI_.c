/*
 * XREFs of ?VidMmCreateAllocation@@YAJPEAVVIDMM_DEVICE@@PEAXPEAVDXGADAPTERALLOCATION@@1PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0011A80
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0060FE0 (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXG.c)
 */

__int64 __fastcall VidMmCreateAllocation(
        VIDMM_GLOBAL **a1,
        char *a2,
        struct DXGADAPTERALLOCATION *a3,
        void *a4,
        struct _VIDMM_MULTI_GLOBAL_ALLOC **a5)
{
  unsigned int v6; // [rsp+30h] [rbp-58h]
  struct _DXGK_SEGMENTBANKPREFERENCE v7; // [rsp+50h] [rbp-38h]

  return VIDMM_GLOBAL::CreateAllocation(
           *a1,
           (struct VIDMM_DEVICE *)a1,
           *((_DWORD *)a2 + 13),
           *((_QWORD *)a2 + 2),
           *((_QWORD *)a2 + 3),
           *((_DWORD *)a2 + 3),
           v6,
           *((_DWORD *)a2 + 11),
           *((_DWORD *)a2 + 12),
           *(struct _D3DDDI_SEGMENTPREFERENCE *)(a2 + 36),
           v7,
           *(struct _DXGK_ALLOCATIONINFOFLAGS *)(a2 + 64),
           *((_DWORD *)a2 + 20),
           a3,
           a4,
           a5);
}
