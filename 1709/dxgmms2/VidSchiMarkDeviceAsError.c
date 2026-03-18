/*
 * XREFs of VidSchiMarkDeviceAsError @ 0x1C000F4C8
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0007950 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008120 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchMarkDeviceAsError @ 0x1C002BA50 (VidSchMarkDeviceAsError.c)
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C0052274 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C0058278 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0065080 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C00660F4 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     VidSchFlushDevice @ 0x1C0070780 (VidSchFlushDevice.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0077550 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C009CF50 (-RestoreResourceCB@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009EB3C (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ValidateHistoryBuffers@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_MULTI_ALLOC@@_K@Z @ 0x1C009EE2C (-ValidateHistoryBuffers@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_MULTI_ALLOC@@_K@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00AAB00 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     VidSchiMarkDevicesInError @ 0x1C00B3410 (VidSchiMarkDevicesInError.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00B3AA0 (VidSchiSubmitRenderCommand.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C00B62C8 (VidSchiMarkTdrFaultingDevice.c)
 * Callees:
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C000F57C (VidSchiSignalRegisteredSyncObjects.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C00240A0 (_TlgCreateSz.c)
 *     VidSchiNotifyDeviceRemoved @ 0x1C002C9D8 (VidSchiNotifyDeviceRemoved.c)
 *     ExtractAggregateFieldTypes @ 0x1C002E014 (ExtractAggregateFieldTypes.c)
 *     InsertEventEntryInLookUpTable @ 0x1C002E210 (InsertEventEntryInLookUpTable.c)
 */

LONG __fastcall VidSchiMarkDeviceAsError(__int64 a1, int a2)
{
  int v4; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int16 *v10; // rax
  __int64 v11; // rax
  int v12; // r9d
  ULONG v13; // r10d
  int v14; // r11d
  char v15; // al
  int v16; // ecx
  int v17; // r8d
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  void *v24; // [rsp+80h] [rbp-80h]
  int v25; // [rsp+88h] [rbp-78h]
  int v26; // [rsp+8Ch] [rbp-74h]
  __int64 *v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+9Ch] [rbp-64h]
  int *v30; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+ACh] [rbp-54h]
  __int64 *v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+B8h] [rbp-48h]
  int v35; // [rsp+BCh] [rbp-44h]
  _DWORD *v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+CCh] [rbp-34h]
  __int64 v39; // [rsp+D0h] [rbp-30h]
  _DWORD v40[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  int *v45; // [rsp+100h] [rbp+0h]
  int v46; // [rsp+108h] [rbp+8h]
  int v47; // [rsp+10Ch] [rbp+Ch]

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
      JUMPOUT(0x1C001E3A9LL);
    }
  }
  VidSchiSignalRegisteredSyncObjects(a1, 0LL);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 160), a2, 0) && a2 != 14 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 )
      VidSchiNotifyDeviceRemoved(a1);
    if ( DxgKrnlTelemetryGlobal_LogTelemetryEvent()
      && hProvider > 5u
      && (qword_1C0040060 & 0x400000000010LL) != 0
      && (qword_1C0040068 & 0x400000000010LL) == qword_1C0040068 )
    {
      v29 = 0;
      v32 = 0;
      v6 = *(_QWORD *)(a1 + 32);
      v27 = &v21;
      v30 = &v18;
      v21 = 1LL;
      v28 = 8;
      v31 = 4;
      v18 = 1;
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 268LL);
      v35 = 0;
      v22 = v7;
      v33 = &v22;
      v34 = 8;
      v8 = *(_QWORD *)(v6 + 16);
      v9 = *(_QWORD *)(a1 + 40);
      v10 = *(unsigned __int16 **)(v8 + 1248);
      v38 = 0;
      v36 = v40;
      v37 = 2;
      LODWORD(v7) = *v10;
      v11 = *((_QWORD *)v10 + 1);
      v40[1] = 0;
      v43 = 0;
      v39 = v11;
      v40[0] = v7;
      v41 = v9 + 2632;
      v42 = 8;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v9 + 2640));
      v47 = 0;
      v45 = &v19;
      v19 = a2;
      v46 = v12;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_1C0040058;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1C0033E57 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 0x400000000010LL;
      UserData.Size = *(unsigned __int16 *)off_1C0040058;
      v24 = &unk_1C0033E62;
      UserData.Reserved = v13;
      v25 = 116;
      v26 = v14;
      if ( (ETWENABLECALLBACK *)qword_1C0040078 == RegisteredProviderEtwCallback )
      {
        v15 = ExtractAggregateFieldTypes(
                ((unsigned int)&unk_1C0033E57 - (unsigned int)&TraceLoggingMetadata) | 0xB000000,
                &UserData);
        if ( v15 )
        {
          LOBYTE(v17) = 10;
          InsertEventEntryInLookUpTable(v16, (unsigned int)&EventDescriptor, v17, (unsigned int)&UserData, v15);
        }
        else
        {
          EtwWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
        }
      }
    }
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 1384LL) = MEMORY[0xFFFFF78000000320];
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 32) + 1352LL), 0, 0);
}
