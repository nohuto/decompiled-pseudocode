/*
 * XREFs of VidSchiSubmitRenderCommand @ 0x1C00BC4E4
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C0081FD0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00BC3AC (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0002EB0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C0006908 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchIsTDRPending @ 0x1C000B250 (VidSchIsTDRPending.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0012DA4 (VidSchiMarkDeviceAsError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C0022BB4 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C00558D4 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C005593C (VidSchiAllocateDmaPacket.c)
 *     ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00A25B4 (-PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_IN.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00BBAC8 (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderCommand(union _LARGE_INTEGER *a1)
{
  union _LARGE_INTEGER v1; // r15
  union _LARGE_INTEGER v3; // r14
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rsi
  struct VIDMM_DEVICE *v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r13
  _QWORD *v12; // rax
  union _LARGE_INTEGER *v13; // rbx
  union _LARGE_INTEGER v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  UINT LowPart; // ecx
  unsigned int v18; // edx
  __int64 v19; // rax
  UINT v20; // ecx
  const D3DDDI_PATCHLOCATIONLIST *v21; // rax
  UINT v22; // ecx
  UINT v23; // ecx
  UINT v24; // eax
  DWORD v25; // r8d
  bool v26; // cl
  ADAPTER_RENDER *v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rax
  union _LARGE_INTEGER *DmaPacket; // r12
  union _LARGE_INTEGER v33; // rax
  union _LARGE_INTEGER v34; // rdx
  LONG v35; // ecx
  LONG v36; // ecx
  bool v37; // cf
  LONG v38; // ecx
  DWORD v39; // edx
  __int64 HighPart; // rax
  void (__fastcall *v41)(_QWORD); // rax
  signed __int32 v43[8]; // [rsp+0h] [rbp-89h] BYREF
  struct _DXGKARG_PATCH v44; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v45; // [rsp+F0h] [rbp+67h] BYREF
  void *v46; // [rsp+F8h] [rbp+6Fh]
  union _LARGE_INTEGER v47; // [rsp+100h] [rbp+77h] BYREF

  v1 = a1[11];
  v3 = a1[35];
  v4 = *(_QWORD *)(v1.QuadPart + 104);
  v5 = *(_QWORD *)(v1.QuadPart + 96);
  v6 = *(_QWORD *)(v4 + 32);
  if ( (*(_BYTE *)(v6 + 2884) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v4 + 32))
    || *(_BYTE *)(v4 + 188)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 184), 0, 0) )
  {
    LODWORD(v11) = -1073741823;
    goto LABEL_24;
  }
  v8 = VIDMM_GLOBAL::PrepareDmaBuffer(0LL, v7, (struct _VIDMM_DMA_BUFFER *)v3.QuadPart, a1[41].HighPart, &v45, &v47);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9);
    v12[3] = v6;
    v12[4] = v1.QuadPart;
    v12[5] = a1;
    v12[6] = v11;
    WdLogEvent5_WdWarning(v12);
    VidSchiMarkDeviceAsError(v4, 18);
LABEL_24:
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1);
    return (unsigned int)v11;
  }
  v46 = *(void **)(*(_QWORD *)(v3.QuadPart + 56) + 368LL);
  a1[7].QuadPart = MEMORY[0xFFFFF78000000320];
  a1[6].HighPart = 7;
  v13 = *(union _LARGE_INTEGER **)(v6 + 8LL * *(unsigned __int16 *)(v5 + 4) + 440);
  ++v13[6].QuadPart;
  v14 = v13[6];
  a1[15] = v14;
  _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer((_VIDSCH_QUEUE_PACKET *)a1);
  v15 = *(_QWORD *)(v1.QuadPart + 56);
  if ( ((*(_DWORD *)(v15 + 216) & 1) == 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 16LL) + 2392LL) & 1) == 0)
    && ((*(_DWORD *)(v3.QuadPart + 28) & 4) == 0
     || (v16 = *(_QWORD *)(**(_QWORD **)(v3.QuadPart + 136) + 40LL),
         _InterlockedOr(v43, 0),
         *(_QWORD *)(v3.QuadPart + 152) != v16))
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 552LL) + 7040LL) & 1) != 0 )
  {
    LowPart = a1[40].LowPart;
    v18 = *(unsigned __int16 *)(v5 + 4);
    v44.hDevice = *(HANDLE *)(v1.QuadPart + 64);
    v44.DmaBufferSegmentId = v45;
    v44.DmaBufferPhysicalAddress = v47;
    v44.DmaBufferSize = *(_DWORD *)(v3.QuadPart + 40);
    v44.pDmaBuffer = v46;
    v44.pDmaBufferPrivateData = *(void **)(v3.QuadPart + 128);
    v19 = *(_QWORD *)(v3.QuadPart + 136);
    v44.DmaBufferSubmissionStartOffset = LowPart;
    v44.DmaBufferSubmissionEndOffset = a1[40].HighPart + LowPart;
    v20 = *(_DWORD *)(v19 + 88);
    v44.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v3.QuadPart + 112);
    v44.AllocationListSize = a1[41].HighPart;
    v21 = *(const D3DDDI_PATCHLOCATIONLIST **)(v3.QuadPart + 120);
    v44.DmaBufferPrivateDataSize = v20;
    v22 = a1[43].LowPart;
    v44.pPatchLocationList = v21;
    LODWORD(v21) = *(_DWORD *)(v3.QuadPart + 52);
    v44.DmaBufferPrivateDataSubmissionStartOffset = v22;
    v23 = a1[43].HighPart + v22;
    v44.PatchLocationListSize = (unsigned int)v21;
    v44.PatchLocationListSubmissionStart = a1[42].LowPart;
    LODWORD(v21) = a1[42].HighPart;
    v44.DmaBufferPrivateDataSubmissionEndOffset = v23;
    v44.PatchLocationListSubmissionLength = (unsigned int)v21;
    v44.SubmissionFenceId = v14.LowPart;
    v24 = VidSchiSchedulerNodeToDriverEngine(v6, v18);
    v25 = a1[9].LowPart;
    v26 = (*(_BYTE *)(v1.QuadPart + 112) & 2) == 0;
    v44.EngineOrdinal = v24;
    v44.Flags.Value = ((v25 & 0x20 | (v25 >> 1) & 0x40) >> 4) | ((v25 & 0x8000) == 0 && v26 ? 0 : 8);
    LODWORD(v11) = ADAPTER_RENDER::DdiPatch(v27, &v44);
    if ( (int)v11 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29, v28, v30);
      v31[3] = 281LL;
      v31[4] = 3LL;
      v31[5] = v6;
      v31[6] = v1.QuadPart;
      v31[7] = a1;
      WdLogEvent5_WdCriticalError(v31);
      __debugbreak();
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v3.QuadPart + 56) + 136LL) + 56LL))(*(_QWORD *)(*(_QWORD *)(v3.QuadPart + 56) + 136LL));
  }
  DmaPacket = (union _LARGE_INTEGER *)VidSchiAllocateDmaPacket(v5);
  DmaPacket[7].QuadPart = (LONGLONG)a1;
  DmaPacket->LowPart = 1953189956;
  DmaPacket[6] = v1;
  DmaPacket[8] = v3;
  v33.QuadPart = MEMORY[0xFFFFF78000000320];
  DmaPacket[11].HighPart = 0;
  v34 = DmaPacket[7];
  DmaPacket[10] = v33;
  DmaPacket[9].LowPart = 7;
  v33.LowPart = (*(_DWORD *)(v34.QuadPart + 72) >> 3) & 4;
  DmaPacket[11].HighPart = v33.LowPart;
  v35 = v33.LowPart | (*(_DWORD *)(v34.QuadPart + 72) >> 4) & 8;
  DmaPacket[11].HighPart = v35;
  v33.LowPart = v35 | (*(_DWORD *)(v34.QuadPart + 72) >> 8) & 0x100;
  DmaPacket[11].HighPart = v33.LowPart;
  v36 = v33.LowPart | (4 * (*(_DWORD *)(v34.QuadPart + 72) & 4));
  DmaPacket[11].HighPart = v36;
  v37 = a1[16].LowPart != 0;
  DmaPacket[13] = v14;
  DmaPacket[11].LowPart = 0;
  v34.LowPart = v36 | (v37 ? 0x4000 : 0);
  DmaPacket[11].HighPart = v34.LowPart;
  DmaPacket[12].LowPart = a1[14].LowPart;
  DmaPacket[15].QuadPart = (LONGLONG)v46;
  DmaPacket[16].LowPart = v45;
  DmaPacket[17] = v47;
  DmaPacket[18].LowPart = a1[40].LowPart;
  DmaPacket[18].HighPart = a1[40].LowPart + a1[40].HighPart;
  DmaPacket[19].LowPart = a1[43].LowPart;
  DmaPacket[19].HighPart = a1[43].LowPart + a1[43].HighPart;
  DmaPacket[20].LowPart = a1[41].LowPart;
  DmaPacket[20].HighPart = a1[41].HighPart;
  DmaPacket[21].LowPart = a1[42].LowPart;
  DmaPacket[21].HighPart = a1[42].HighPart;
  DmaPacket[14] = *(union _LARGE_INTEGER *)(v3.QuadPart + 160);
  v38 = v34.LowPart | ((a1[9].LowPart & 0x100 | 0x200) >> 8);
  DmaPacket[11].HighPart = v38;
  v39 = a1[9].LowPart;
  if ( (v39 & 1) != 0 )
  {
    HighPart = (unsigned int)a1[48].HighPart;
    if ( (_DWORD)HighPart != -1 && (v39 & 0x40000) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v6 + 8 * HighPart + 3032) + 28128LL) != -1 )
      {
        v41 = *(void (__fastcall **)(_QWORD))(v6 + 2888);
        if ( v41 )
        {
          v41(*(_QWORD *)(v6 + 2952));
          v38 = DmaPacket[11].HighPart;
        }
      }
      DmaPacket[11].HighPart = v38 | 0x800;
    }
  }
  VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, 0);
  return (unsigned int)v11;
}
