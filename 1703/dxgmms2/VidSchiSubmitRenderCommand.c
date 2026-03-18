/*
 * XREFs of VidSchiSubmitRenderCommand @ 0x1C00AB184
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C00766C0 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00AB074 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C0005AF0 (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchIsTDRPending @ 0x1C00096C0 (VidSchIsTDRPending.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0012030 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiMarkDeviceAsError @ 0x1C00127A4 (VidSchiMarkDeviceAsError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C001E900 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C006CF24 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C006CF88 (VidSchiAllocateDmaPacket.c)
 *     VidSchGetNewSubmissionFenceId @ 0x1C006D024 (VidSchGetNewSubmissionFenceId.c)
 *     ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00947D8 (-PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_IN.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00AA7D4 (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderCommand(union _LARGE_INTEGER *a1, struct VIDMM_DEVICE *a2, __int64 a3)
{
  union _LARGE_INTEGER v3; // r14
  union _LARGE_INTEGER v5; // rsi
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r12
  _QWORD *v13; // rax
  void *v14; // r15
  unsigned int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rax
  UINT LowPart; // ecx
  unsigned int v19; // edx
  __int64 v20; // rax
  UINT v21; // ecx
  UINT v22; // ecx
  UINT v23; // ecx
  UINT v24; // eax
  DWORD v25; // r8d
  bool v26; // cl
  bool v27; // cf
  ADAPTER_RENDER *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  union _LARGE_INTEGER *DmaPacket; // r15
  union _LARGE_INTEGER v34; // rax
  union _LARGE_INTEGER v35; // r8
  int v36; // ecx
  LONG v37; // edx
  int v38; // ecx
  DWORD v39; // ecx
  __int64 HighPart; // rax
  void (__fastcall *v41)(_QWORD); // rax
  signed __int32 v43[8]; // [rsp+0h] [rbp-99h] BYREF
  struct _DXGKARG_PATCH v44; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v45; // [rsp+100h] [rbp+67h] BYREF
  union _LARGE_INTEGER v46; // [rsp+108h] [rbp+6Fh] BYREF
  union _LARGE_INTEGER v47; // [rsp+110h] [rbp+77h] BYREF
  union _LARGE_INTEGER v48; // [rsp+118h] [rbp+7Fh]

  v3 = a1[11];
  v5 = a1[34];
  v6 = *(_QWORD *)(v3.QuadPart + 104);
  v7 = *(_QWORD *)(v3.QuadPart + 96);
  v8 = *(_QWORD *)(v6 + 32);
  if ( (*(_BYTE *)(v8 + 2844) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v6 + 32))
    || *(_BYTE *)(v6 + 164)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 160), 0, 0) )
  {
    LODWORD(v12) = -1073741823;
    goto LABEL_24;
  }
  v9 = VIDMM_GLOBAL::PrepareDmaBuffer(0LL, a2, (struct _VIDMM_DMA_BUFFER *)v5.QuadPart, a1[40].HighPart, &v45, &v47);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10);
    v13[3] = v8;
    v13[4] = v3.QuadPart;
    v13[5] = a1;
    v13[6] = v12;
    WdLogEvent5_WdWarning(v13);
    VidSchiMarkDeviceAsError(v6, 18);
LABEL_24:
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1, (__int64)a2, a3);
    return (unsigned int)v12;
  }
  v14 = *(void **)(*(_QWORD *)(v5.QuadPart + 56) + 368LL);
  a1[7].QuadPart = MEMORY[0xFFFFF78000000320];
  a1[6].HighPart = 7;
  v15 = *(unsigned __int16 *)(v7 + 4);
  v48.QuadPart = (LONGLONG)v14;
  VidSchGetNewSubmissionFenceId(v8, (__int64)a1, v15, (__int64 *)&v46);
  _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer((_VIDSCH_QUEUE_PACKET *)a1);
  v16 = *(_QWORD *)(v3.QuadPart + 56);
  if ( ((*(_DWORD *)(v16 + 216) & 1) == 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 16LL) + 2224LL) & 1) == 0)
    && ((*(_DWORD *)(v5.QuadPart + 28) & 4) == 0
     || (v17 = *(_QWORD *)(**(_QWORD **)(v5.QuadPart + 136) + 40LL),
         _InterlockedOr(v43, 0),
         *(_QWORD *)(v5.QuadPart + 152) != v17))
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 440LL) + 6464LL) & 1) != 0 )
  {
    LowPart = a1[39].LowPart;
    v19 = *(unsigned __int16 *)(v7 + 4);
    v44.hDevice = *(HANDLE *)(v3.QuadPart + 64);
    v44.DmaBufferSegmentId = v45;
    v44.DmaBufferPhysicalAddress = v47;
    v44.DmaBufferSize = *(_DWORD *)(v5.QuadPart + 40);
    v44.pDmaBufferPrivateData = *(void **)(v5.QuadPart + 128);
    v20 = *(_QWORD *)(v5.QuadPart + 136);
    v44.DmaBufferSubmissionStartOffset = LowPart;
    v44.DmaBufferSubmissionEndOffset = a1[39].HighPart + LowPart;
    v44.pDmaBuffer = v14;
    v21 = *(_DWORD *)(v20 + 88);
    v44.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v5.QuadPart + 112);
    v44.AllocationListSize = a1[40].HighPart;
    v44.pPatchLocationList = *(const D3DDDI_PATCHLOCATIONLIST **)(v5.QuadPart + 120);
    LODWORD(v20) = *(_DWORD *)(v5.QuadPart + 52);
    v44.DmaBufferPrivateDataSize = v21;
    v22 = a1[42].LowPart;
    v44.PatchLocationListSize = v20;
    LODWORD(v20) = a1[41].LowPart;
    v44.DmaBufferPrivateDataSubmissionStartOffset = v22;
    v23 = a1[42].HighPart + v22;
    v44.PatchLocationListSubmissionStart = v20;
    v44.PatchLocationListSubmissionLength = a1[41].HighPart;
    v44.DmaBufferPrivateDataSubmissionEndOffset = v23;
    v44.SubmissionFenceId = v46.LowPart;
    v24 = VidSchiSchedulerNodeToDriverEngine(v8, v19);
    v25 = a1[9].LowPart;
    v26 = (*(_BYTE *)(v3.QuadPart + 112) & 2) == 0;
    v44.EngineOrdinal = v24;
    v27 = (v25 & 0x8000) == 0 && v26;
    v28 = *(ADAPTER_RENDER **)(v8 + 8);
    v44.Flags.Value = ((v25 & 0x20 | (v25 >> 1) & 0x40) >> 4) | (v27 ? 0 : 8);
    LODWORD(v12) = ADAPTER_RENDER::DdiPatch(v28, &v44);
    if ( (int)v12 < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29, v31);
      v32[3] = 281LL;
      v32[4] = 3LL;
      v32[5] = v8;
      v32[6] = v3.QuadPart;
      v32[7] = a1;
      WdLogEvent5_WdCriticalError(v32);
      __debugbreak();
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v5.QuadPart + 56) + 136LL) + 56LL))(*(_QWORD *)(*(_QWORD *)(v5.QuadPart + 56) + 136LL));
  }
  DmaPacket = (union _LARGE_INTEGER *)VidSchiAllocateDmaPacket(v7);
  DmaPacket[7].QuadPart = (LONGLONG)a1;
  DmaPacket->LowPart = 1953189956;
  DmaPacket[6] = v3;
  DmaPacket[8] = v5;
  v34.QuadPart = MEMORY[0xFFFFF78000000320];
  DmaPacket[11].HighPart = 0;
  v35 = DmaPacket[7];
  DmaPacket[10] = v34;
  DmaPacket[9].LowPart = 7;
  v36 = (*(_DWORD *)(v35.QuadPart + 72) >> 3) & 4;
  DmaPacket[11].HighPart = v36;
  v34.LowPart = v36 ^ ((unsigned __int8)v36 ^ (unsigned __int8)(*(_DWORD *)(v35.QuadPart + 72) >> 4)) & 8;
  DmaPacket[11].HighPart = v34.LowPart;
  v37 = v34.LowPart ^ (v34.LowPart ^ (*(_DWORD *)(v35.QuadPart + 72) >> 8)) & 0x100;
  DmaPacket[11].HighPart = v37;
  v38 = v37 ^ ((unsigned __int8)v37 ^ (unsigned __int8)(4 * *(_DWORD *)(v35.QuadPart + 72))) & 0x10;
  DmaPacket[11].HighPart = v38;
  v27 = a1[15].LowPart != 0;
  DmaPacket[13] = v46;
  DmaPacket[11].LowPart = 0;
  DmaPacket[11].HighPart = v38 & 0xFFFFBFFF | (v27 ? 0x4000 : 0);
  DmaPacket[12].LowPart = a1[13].LowPart;
  DmaPacket[15] = v48;
  DmaPacket[16].LowPart = v45;
  DmaPacket[17] = v47;
  DmaPacket[18].LowPart = a1[39].LowPart;
  DmaPacket[18].HighPart = a1[39].LowPart + a1[39].HighPart;
  DmaPacket[19].LowPart = a1[42].LowPart;
  DmaPacket[19].HighPart = a1[42].LowPart + a1[42].HighPart;
  DmaPacket[20].LowPart = a1[40].LowPart;
  DmaPacket[20].HighPart = a1[40].HighPart;
  DmaPacket[21].LowPart = a1[41].LowPart;
  DmaPacket[21].HighPart = a1[41].HighPart;
  DmaPacket[14] = *(union _LARGE_INTEGER *)(v5.QuadPart + 160);
  DmaPacket[11].HighPart = v38 & 0xFFFFBFFE | (v27 ? 0x4000 : 0) | ((a1[9].LowPart & 0x100 | 0x200) >> 8);
  v39 = a1[9].LowPart;
  if ( (v39 & 1) != 0 )
  {
    HighPart = (unsigned int)a1[47].HighPart;
    if ( (_DWORD)HighPart != -1 && (v39 & 0x40000) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 8 * HighPart + 2992) + 18896LL) != -1 )
      {
        v41 = *(void (__fastcall **)(_QWORD))(v8 + 2848);
        if ( v41 )
          v41(*(_QWORD *)(v8 + 2912));
      }
      DmaPacket[11].HighPart |= 0x800u;
    }
  }
  VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, 0);
  return (unsigned int)v12;
}
