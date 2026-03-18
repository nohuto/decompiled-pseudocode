/*
 * XREFs of ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0001958
 * Callers:
 *     ?CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I_K1U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1@Z @ 0x1C005342C (-CreateReservedVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@I.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00554B0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C007B468 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C009F898 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C00A3998 (-BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 */

__int64 __fastcall VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v13; // eax

  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 56) = a6;
  *(_QWORD *)(a1 + 72) = a7;
  *(_QWORD *)(a1 + 80) = a10;
  *(_QWORD *)(a1 + 88) = a9;
  *(_QWORD *)(a1 + 112) = a12;
  *(_QWORD *)(a1 + 120) = a11;
  v13 = *(_DWORD *)(a1 + 64);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 96) = a3;
  *(_QWORD *)(a1 + 104) = a4;
  *(_DWORD *)(a1 + 128) = 1;
  *(_DWORD *)(a1 + 64) = a8 & 0xF | v13 & 0xFFFFFC00 | (16 * (a5 & 0x3F));
  if ( a8 == 6 )
    *(_QWORD *)(a1 + 88) |= 4uLL;
  memset((void *)(a1 + 8), 0, 0x30uLL);
  return a1;
}
