/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A4A8
 * Callers:
 *     ?VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C00648B8 (-VidMmReserveGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_PAGING_QUEUE@@PEA.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00677E0 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C006FF8C (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005A240 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C0060310 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

int __fastcall VIDMM_GLOBAL::CommitVirtualAddressRange(
        VIDMM_GLOBAL *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct VIDMM_MAPPED_VA_RANGE *a4,
        char a5,
        struct _MDL *a6,
        unsigned __int64 *a7,
        struct VIDMM_VAD_PENDING_OPERATION *a8)
{
  VIDMM_GLOBAL *v12; // rcx
  int v14; // edi
  bool v15; // bl
  _QWORD v17[12]; // [rsp+38h] [rbp-89h] BYREF
  _OWORD v18[5]; // [rsp+98h] [rbp-29h] BYREF

  memset(v17, 0, 0x58uLL);
  v14 = (int)(*((_DWORD *)a4 + 16) << 28) >> 28;
  v17[5] = a2;
  v15 = 0;
  v17[0] = -4294967183LL;
  v17[6] = a4;
  if ( v14 == 1 )
    a6 = 0LL;
  v17[7] = a6;
  v17[8] = a8;
  if ( a5 )
    return VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
             v12,
             (struct VIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE *)&v17[5],
             &a8);
  memset(v18, 0, sizeof(v18));
  *((_QWORD *)&v18[0] + 1) = *((_QWORD *)a3 + 17);
  LODWORD(v18[0]) = 113;
  if ( v14 == 1 )
    *(_QWORD *)&v18[1] = *((_QWORD *)a4 + 7);
  v18[2] = *(_OWORD *)&v17[5];
  *(_QWORD *)&v18[4] = v17[9];
  LOBYTE(v18[4]) = 1;
  v18[3] = *(_OWORD *)&v17[7];
  if ( !a7 || !dword_1C0040348 )
    v15 = 1;
  return VIDMM_GLOBAL::QueueDeferredCommand(this, a3, (struct _VIDMM_DEFERRED_COMMAND *)v18, v15, a7);
}
