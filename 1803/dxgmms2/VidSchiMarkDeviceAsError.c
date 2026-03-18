/*
 * XREFs of VidSchiMarkDeviceAsError @ 0x1C0012DA4
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C00082B0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008A70 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchMarkDeviceAsError @ 0x1C002EAB0 (VidSchMarkDeviceAsError.c)
 *     ?SubmitPagingToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002F5A0 (-SubmitPagingToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002F760 (-SubmitRenderToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchInvalidateHwContext @ 0x1C0032560 (VidSchInvalidateHwContext.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00694B0 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C006A520 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C006BD44 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C00769EC (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     VidSchFlushDevice @ 0x1C0078E70 (VidSchFlushDevice.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C007F920 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00A35B0 (-RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A51E0 (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ValidateHistoryBuffers@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_MULTI_ALLOC@@_K@Z @ 0x1C00A54EC (-ValidateHistoryBuffers@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_MULTI_ALLOC@@_K@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00B2D80 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     VidSchiMarkDevicesInError @ 0x1C00BBE10 (VidSchiMarkDevicesInError.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00BC4E4 (VidSchiSubmitRenderCommand.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C00BFB90 (VidSchiMarkTdrFaultingDevice.c)
 * Callees:
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0012E90 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0012F08 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0012F40 (VidSchiSignalRegisteredSyncObjects.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x1C0026B88 (_TlgCreateSz.c)
 *     ?VidSchiRundownHardwareContext@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0031084 (-VidSchiRundownHardwareContext@@YAXPEAUVIDSCH_HW_CONTEXT@@@Z.c)
 *     VidSchiNotifyDeviceRemoved @ 0x1C0034260 (VidSchiNotifyDeviceRemoved.c)
 *     ExtractAggregateFieldTypes @ 0x1C0034E30 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1C0034FF8 (InsertEventEntryInLookUpTable.c)
 */

void __fastcall VidSchiMarkDeviceAsError(__int64 a1, int a2)
{
  int v4; // eax
  signed __int32 v5; // ebx
  _QWORD **v6; // rdi
  _QWORD *i; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int16 *v13; // rax
  __int64 v14; // rax
  int v15; // r9d
  ULONGLONG v16; // r11
  ULONG v17; // r10d
  char v18; // al
  int v19; // ecx
  int v20; // r8d
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  int v22; // [rsp+44h] [rbp-BCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v26[40]; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+ACh] [rbp-54h]
  __int64 *v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  int *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  __int64 *v37; // [rsp+D0h] [rbp-30h]
  int v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+DCh] [rbp-24h]
  _DWORD *v40; // [rsp+E0h] [rbp-20h]
  int v41; // [rsp+E8h] [rbp-18h]
  int v42; // [rsp+ECh] [rbp-14h]
  __int64 v43; // [rsp+F0h] [rbp-10h]
  _DWORD v44[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v45; // [rsp+100h] [rbp+0h]
  int v46; // [rsp+108h] [rbp+8h]
  int v47; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  int *v49; // [rsp+120h] [rbp+20h]
  int v50; // [rsp+128h] [rbp+28h]
  int v51; // [rsp+12Ch] [rbp+2Ch]

  if ( (unsigned int)a2 > 0xE || (v4 = 17024, !_bittest(&v4, a2)) )
  {
    if ( a2 >= 0 && !g_ErrorDeviceDebugMode && !KdRefreshDebuggerNotPresent() )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "A GPU Scheduler device 0x%p from process %s has been put in error due to Reason %d.\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "To disable debug breaks when device is put in error, run \"?? dxgmms2!g_ErrorDeviceDebugMode=1\" command,\n"
        "or \"ed 0x%p 1\"\n"
        "\n",
        (const void *)a1,
        *(const char **)(*(_QWORD *)(a1 + 40) + 2640LL),
        a2,
        (const void *)&g_ErrorDeviceDebugMode);
      JUMPOUT(0x1C0021F35LL);
    }
  }
  v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 184), a2, 0);
  VidSchiSignalRegisteredSyncObjects(a1, 0LL);
  if ( !v5 && a2 != 14 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
      ((void (__fastcall *)(__int64, _QWORD))DxgCoreInterface[63])(v8, *(unsigned int *)(a1 + 184));
    if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 )
      VidSchiNotifyDeviceRemoved(a1);
    if ( DxgKrnlTelemetryGlobal_LogTelemetryEvent()
      && hProvider > 5u
      && (qword_1C0047060 & 0x400000000010LL) != 0
      && (qword_1C0047068 & 0x400000000010LL) == qword_1C0047068 )
    {
      v33 = 0;
      v36 = 0;
      v9 = *(_QWORD *)(a1 + 32);
      v31 = &v24;
      v34 = &v21;
      v24 = 1LL;
      v35 = 4;
      v32 = 8;
      v21 = 1;
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 268LL);
      v39 = 0;
      v25 = v10;
      v37 = &v25;
      v38 = 8;
      v11 = *(_QWORD *)(v9 + 16);
      v12 = *(_QWORD *)(a1 + 40);
      v13 = *(unsigned __int16 **)(v11 + 1344);
      v42 = 0;
      v40 = v44;
      v41 = 2;
      LODWORD(v10) = *v13;
      v14 = *((_QWORD *)v13 + 1);
      v44[1] = 0;
      v47 = 0;
      v43 = v14;
      v44[0] = v10;
      v45 = v12 + 2632;
      v46 = 8;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v12 + 2640));
      v51 = 0;
      v49 = &v22;
      v22 = a2;
      v50 = v15;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1C0047058;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1C003AF4F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = v16;
      UserData.Size = *(unsigned __int16 *)off_1C0047058;
      v28 = &unk_1C003AF5A;
      UserData.Reserved = v17;
      v29 = 116;
      v30 = 1;
      if ( (ETWENABLECALLBACK *)qword_1C0047078 == TlgAggregateInternalRegisteredProviderEtwCallback )
      {
        v18 = ExtractAggregateFieldTypes(
                ((unsigned int)&unk_1C003AF4F - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
                &UserData);
        if ( v18 )
        {
          LOBYTE(v20) = 10;
          InsertEventEntryInLookUpTable(v19, (unsigned int)&EventDescriptor, v20, (unsigned int)&UserData, v18);
        }
        else
        {
          EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
        }
      }
    }
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 1400LL) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 32) + 1368LL), 0, 0);
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v26, (unsigned __int64 *)(*(_QWORD *)(a1 + 32) + 1904LL), 1, 0);
  v6 = (_QWORD **)(a1 + 88);
  for ( i = *v6; i != v6; i = (_QWORD *)*i )
    VidSchiRundownHardwareContext((struct VIDSCH_HW_CONTEXT *)(i - 11));
  AcquireSpinLock::Release((AcquireSpinLock *)v26);
}
