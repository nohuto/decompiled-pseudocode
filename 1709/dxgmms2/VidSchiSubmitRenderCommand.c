/*
 * XREFs of VidSchiSubmitRenderCommand @ 0x1C00B3AA0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1C007D290 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1C00B3990 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x1C000658C (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     VidSchIsTDRPending @ 0x1C000AB80 (VidSchIsTDRPending.c)
 *     VidSchiMarkDeviceAsError @ 0x1C000F4C8 (VidSchiMarkDeviceAsError.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0012F44 (VidSchiSchedulerNodeToDriverEngine.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C0020668 (-DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C0071BA4 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C0071C0C (VidSchiAllocateDmaPacket.c)
 *     ?PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C009C584 (-PrepareDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_DMA_BUFFER@@IPEAKPEAT_LARGE_IN.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00B30EC (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderCommand(union _LARGE_INTEGER *a1, struct VIDMM_DEVICE *a2, __int64 a3)
{
  union _LARGE_INTEGER v3; // r15
  union _LARGE_INTEGER v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rsi
  int v9; // eax
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
  bool v27; // cf
  ADAPTER_RENDER *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  union _LARGE_INTEGER *DmaPacket; // r12
  union _LARGE_INTEGER v34; // rax
  union _LARGE_INTEGER v35; // r8
  int v36; // ecx
  int v37; // edx
  LONG v38; // ecx
  DWORD v39; // ecx
  __int64 HighPart; // rax
  void (__fastcall *v41)(_QWORD); // rax
  signed __int32 v43[8]; // [rsp+0h] [rbp-89h] BYREF
  struct _DXGKARG_PATCH v44; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v45; // [rsp+F0h] [rbp+67h] BYREF
  void *v46; // [rsp+F8h] [rbp+6Fh]
  union _LARGE_INTEGER v47; // [rsp+100h] [rbp+77h] BYREF

  v3 = a1[11];
  v5 = a1[37];
  v6 = *(_QWORD *)(v3.QuadPart + 104);
  v7 = *(_QWORD *)(v3.QuadPart + 96);
  v8 = *(_QWORD *)(v6 + 32);
  if ( (*(_BYTE *)(v8 + 2860) & 1) != 0
    || VidSchIsTDRPending(*(_QWORD *)(v6 + 32))
    || *(_BYTE *)(v6 + 164)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 160), 0, 0) )
  {
    LODWORD(v11) = -1073741823;
    goto LABEL_24;
  }
  v9 = VIDMM_GLOBAL::PrepareDmaBuffer(0LL, a2, (struct _VIDMM_DMA_BUFFER *)v5.QuadPart, a1[43].HighPart, &v45, &v47);
  v11 = v9;
  if ( v9 < 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v10);
    v12[3] = v8;
    v12[4] = v3.QuadPart;
    v12[5] = a1;
    v12[6] = v11;
    WdLogEvent5_WdWarning(v12);
    VidSchiMarkDeviceAsError(v6, 18);
LABEL_24:
    VidSchiDiscardQueuePacket((struct _VIDSCH_QUEUE_PACKET *)a1, (__int64)a2, a3);
    return (unsigned int)v11;
  }
  v46 = *(void **)(*(_QWORD *)(v5.QuadPart + 56) + 368LL);
  a1[7].QuadPart = MEMORY[0xFFFFF78000000320];
  a1[6].HighPart = 7;
  v13 = *(union _LARGE_INTEGER **)(v8 + 8LL * *(unsigned __int16 *)(v7 + 4) + 424);
  ++v13[6].QuadPart;
  v14 = v13[6];
  a1[15] = v14;
  _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer((_VIDSCH_QUEUE_PACKET *)a1);
  v15 = *(_QWORD *)(v3.QuadPart + 56);
  if ( ((*(_DWORD *)(v15 + 216) & 1) == 0
     || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 16LL) + 16LL) + 2248LL) & 1) == 0)
    && ((*(_DWORD *)(v5.QuadPart + 28) & 4) == 0
     || (v16 = *(_QWORD *)(**(_QWORD **)(v5.QuadPart + 136) + 40LL),
         _InterlockedOr(v43, 0),
         *(_QWORD *)(v5.QuadPart + 152) != v16))
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 536LL) + 6464LL) & 1) != 0 )
  {
    LowPart = a1[42].LowPart;
    v18 = *(unsigned __int16 *)(v7 + 4);
    v44.hDevice = *(HANDLE *)(v3.QuadPart + 64);
    v44.DmaBufferSegmentId = v45;
    v44.DmaBufferPhysicalAddress = v47;
    v44.DmaBufferSize = *(_DWORD *)(v5.QuadPart + 40);
    v44.pDmaBuffer = v46;
    v44.pDmaBufferPrivateData = *(void **)(v5.QuadPart + 128);
    v19 = *(_QWORD *)(v5.QuadPart + 136);
    v44.DmaBufferSubmissionStartOffset = LowPart;
    v44.DmaBufferSubmissionEndOffset = a1[42].HighPart + LowPart;
    v20 = *(_DWORD *)(v19 + 88);
    v44.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v5.QuadPart + 112);
    v44.AllocationListSize = a1[43].HighPart;
    v21 = *(const D3DDDI_PATCHLOCATIONLIST **)(v5.QuadPart + 120);
    v44.DmaBufferPrivateDataSize = v20;
    v22 = a1[45].LowPart;
    v44.pPatchLocationList = v21;
    LODWORD(v21) = *(_DWORD *)(v5.QuadPart + 52);
    v44.DmaBufferPrivateDataSubmissionStartOffset = v22;
    v23 = a1[45].HighPart + v22;
    v44.PatchLocationListSize = (unsigned int)v21;
    v44.PatchLocationListSubmissionStart = a1[44].LowPart;
    LODWORD(v21) = a1[44].HighPart;
    v44.DmaBufferPrivateDataSubmissionEndOffset = v23;
    v44.PatchLocationListSubmissionLength = (unsigned int)v21;
    v44.SubmissionFenceId = v14.LowPart;
    v24 = VidSchiSchedulerNodeToDriverEngine(v8, v18);
    v25 = a1[9].LowPart;
    v26 = (*(_BYTE *)(v3.QuadPart + 112) & 2) == 0;
    v44.EngineOrdinal = v24;
    v27 = (v25 & 0x8000) == 0 && v26;
    v28 = *(ADAPTER_RENDER **)(v8 + 8);
    v44.Flags.Value = ((v25 & 0x20 | (v25 >> 1) & 0x40) >> 4) | (v27 ? 0 : 8);
    LODWORD(v11) = ADAPTER_RENDER::DdiPatch(v28, &v44);
    if ( (int)v11 < 0 )
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
  v37 = v36 | (*(_DWORD *)(v35.QuadPart + 72) >> 4) & 8;
  DmaPacket[11].HighPart = v37;
  v34.LowPart = v37 | (*(_DWORD *)(v35.QuadPart + 72) >> 8) & 0x100;
  DmaPacket[11].HighPart = v34.LowPart;
  v38 = v34.LowPart | (4 * (*(_DWORD *)(v35.QuadPart + 72) & 4));
  DmaPacket[11].HighPart = v38;
  v27 = a1[16].LowPart != 0;
  DmaPacket[13] = v14;
  DmaPacket[11].LowPart = 0;
  DmaPacket[11].HighPart = v38 | (v27 ? 0x4000 : 0);
  DmaPacket[12].LowPart = a1[14].LowPart;
  DmaPacket[15].QuadPart = (LONGLONG)v46;
  DmaPacket[16].LowPart = v45;
  DmaPacket[17] = v47;
  DmaPacket[18].LowPart = a1[42].LowPart;
  DmaPacket[18].HighPart = a1[42].LowPart + a1[42].HighPart;
  DmaPacket[19].LowPart = a1[45].LowPart;
  DmaPacket[19].HighPart = a1[45].LowPart + a1[45].HighPart;
  DmaPacket[20].LowPart = a1[43].LowPart;
  DmaPacket[20].HighPart = a1[43].HighPart;
  DmaPacket[21].LowPart = a1[44].LowPart;
  DmaPacket[21].HighPart = a1[44].HighPart;
  DmaPacket[14] = *(union _LARGE_INTEGER *)(v5.QuadPart + 160);
  DmaPacket[11].HighPart = v38 & 0xFFFFFFFE | (v27 ? 0x4000 : 0) | ((a1[9].LowPart & 0x100 | 0x200) >> 8);
  v39 = a1[9].LowPart;
  if ( (v39 & 1) != 0 )
  {
    HighPart = (unsigned int)a1[50].HighPart;
    if ( (_DWORD)HighPart != -1 && (v39 & 0x40000) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 8 * HighPart + 3008) + 23648LL) != -1 )
      {
        v41 = *(void (__fastcall **)(_QWORD))(v8 + 2864);
        if ( v41 )
          v41(*(_QWORD *)(v8 + 2928));
      }
      DmaPacket[11].HighPart |= 0x800u;
    }
  }
  VidSchiSendToExecutionQueueWithWait((__int64)DmaPacket, 0);
  return (unsigned int)v11;
}
