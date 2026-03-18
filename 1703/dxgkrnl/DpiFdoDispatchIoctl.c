/*
 * XREFs of DpiFdoDispatchIoctl @ 0x1C01C31F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkDdiCreateVirtualGpu @ 0x1C00339F0 (DxgkDdiCreateVirtualGpu.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x1C0033A04 (DxgkDdiDestroyVirtualGpu.c)
 *     DxgkDdiGetGpuPartitionInfo @ 0x1C0033ACC (DxgkDdiGetGpuPartitionInfo.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C0033C0C (DxgkDdiGetVirtualGpuInfo.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C0033C20 (DxgkDdiGetVirtualGpuProfile.c)
 *     DxgkDdiQueryMitigatedRangeCount @ 0x1C0033C34 (DxgkDdiQueryMitigatedRangeCount.c)
 *     DxgkDdiQueryMitigatedRanges @ 0x1C0033CBC (DxgkDdiQueryMitigatedRanges.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1C0033E8C (DxgkDdiSetGpuPartitionCount.c)
 *     DxgkDdiVirtualGpuDriverEscape @ 0x1C0033F3C (DxgkDdiVirtualGpuDriverEscape.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C003D748 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     DpiFdoIsParavirtualizedInterface @ 0x1C01C4FE0 (DpiFdoIsParavirtualizedInterface.c)
 *     DpiGetVirtualizationFlags @ 0x1C01C5E14 (DpiGetVirtualizationFlags.c)
 *     DpiSriovAttach @ 0x1C01C5F9C (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C01C605C (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x1C01C61D4 (DpiSriovEventComplete.c)
 *     DpiSriovMitigationUpdate @ 0x1C01C62A4 (DpiSriovMitigationUpdate.c)
 *     DpiSriovNotification @ 0x1C01C63A4 (DpiSriovNotification.c)
 */

NTSTATUS __fastcall DpiFdoDispatchIoctl(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  PVOID DeviceExtension; // r12
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  ULONG_PTR OutputBufferSize; // rsi
  NTSTATUS pMitigatedRange; // edi
  struct _IRP *MasterIrp; // rbx
  unsigned int LowPart; // eax
  ULONG_PTR Length; // r13
  ULONG Options; // r15d
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // al
  ULONG PartitionId; // r15d
  int GpuPartitionInfo; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  CInterfaceCallContext *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  NTSTATUS v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // xmm1_8
  NTSTATUS VirtualizationFlags; // eax
  __int64 v38; // r15
  char v39; // al
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  UINT64 v51; // rdi
  __int64 v52; // rcx
  NTSTATUS v53; // eax
  unsigned __int8 IsParavirtualizedInterface; // al
  __int64 v55; // rcx
  char v56; // al
  __int64 v57; // rax
  struct _DXGKARG_QUERYMITIGATEDRANGES v58; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v59; // [rsp+48h] [rbp-B8h] BYREF
  struct _DXGK_VIRTUALGPUDRIVERESCAPE v60; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGKARG_GETVIRTUALGPUPROFILE v61; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGKARG_CREATEVIRTUALGPU v62; // [rsp+120h] [rbp+20h] BYREF

  DeviceExtension = a1->DeviceExtension;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  OutputBufferSize = 0LL;
  v59 = 0LL;
  pMitigatedRange = -1073741637;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( LowPart > 0x226448 )
  {
    v40 = LowPart - 2253900;
    if ( v40 )
    {
      v41 = v40 - 8;
      if ( v41 )
      {
        v42 = v41 - 4;
        if ( v42 )
        {
          v43 = v42 - 4;
          if ( v43 )
          {
            v44 = v43 - 4;
            if ( !v44 )
            {
              if ( Options >= 8 && MasterIrp )
              {
                CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&v58, a1, a2);
                pMitigatedRange = (NTSTATUS)v58.pMitigatedRange;
                if ( SLODWORD(v58.pMitigatedRange) >= 0 )
                {
                  memset(&v60, 0, sizeof(v60));
                  v47 = *((_QWORD *)DeviceExtension + 463);
                  v60.InputBufferSize = Options;
                  v60.OutputBufferSize = Length;
                  v60.pInputBuffer = MasterIrp;
                  v60.pOutputBuffer = MasterIrp;
                  LODWORD(v58.pMitigatedRange) = DxgkDdiVirtualGpuDriverEscape(v47, (struct _LUID *)MasterIrp, &v60);
                  pMitigatedRange = (NTSTATUS)v58.pMitigatedRange;
                  if ( SLODWORD(v58.pMitigatedRange) >= 0 )
                    OutputBufferSize = v60.OutputBufferSize;
                }
                goto LABEL_18;
              }
              goto LABEL_92;
            }
            v45 = v44 - 996;
            if ( !v45 )
            {
              VirtualizationFlags = DpiGetVirtualizationFlags(
                                      (_DWORD)a1,
                                      (_DWORD)MasterIrp,
                                      Options,
                                      a2->AssociatedIrp.MasterIrp,
                                      Length,
                                      (__int64)&v59);
              goto LABEL_45;
            }
            if ( v45 != 4 )
              goto LABEL_60;
          }
          v33 = DpiSetPartitionVmbus(a1, a2, (struct _LUID *)a2->AssociatedIrp.MasterIrp, Options);
          goto LABEL_69;
        }
        if ( Options < 2 )
          goto LABEL_92;
        if ( !MasterIrp )
          goto LABEL_92;
        v38 = 128LL;
        if ( (unsigned int)Length < 0x80 )
          goto LABEL_92;
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&v58, a1, a2);
        pMitigatedRange = (NTSTATUS)v58.pMitigatedRange;
        if ( SLODWORD(v58.pMitigatedRange) < 0 )
          goto LABEL_18;
        memset(&v61, 0, 0x68uLL);
        v48 = *((_QWORD *)DeviceExtension + 463);
        v61.PartitionCount = (unsigned __int16)MasterIrp->Type;
        LODWORD(v58.pMitigatedRange) = DxgkDdiGetVirtualGpuInfo(
                                         v48,
                                         (struct _DXGKARG_GETVIRTUALGPUINFO *)&v61,
                                         (struct _LUID *)(&MasterIrp->Size + 1),
                                         (struct _GUID *)((char *)&MasterIrp->MdlAddress + 4));
        pMitigatedRange = (NTSTATUS)v58.pMitigatedRange;
        if ( SLODWORD(v58.pMitigatedRange) < 0 )
          goto LABEL_18;
        MasterIrp->Type = v61.PartitionCount;
        *(DXGK_VGPU_PROFILE_CAPABILITY *)&MasterIrp->ThreadListEntry.Flink = v61.ProfileCapability[0];
        *(DXGK_VGPU_PROFILE_CAPABILITY *)&MasterIrp->UserIosb = v61.ProfileCapability[1];
        MasterIrp->UserBuffer = (PVOID)v61.ProfileCapability[2].TotalValue;
        MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v61.ProfileCapability[2].AvailableValue;
LABEL_52:
        OutputBufferSize = v38;
        goto LABEL_18;
      }
      if ( Options < 0x70 )
        goto LABEL_92;
      if ( !MasterIrp )
        goto LABEL_92;
      v38 = 136LL;
      if ( (unsigned int)Length < 0x88 )
        goto LABEL_92;
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&v58, a1, a2);
      pMitigatedRange = (NTSTATUS)v58.pMitigatedRange;
      if ( SLODWORD(v58.pMitigatedRange) < 0 )
        goto LABEL_18;
      v51 = *(_QWORD *)&MasterIrp->Flags;
      if ( v51 || MasterIrp->AssociatedIrp.MasterIrp || MasterIrp->ThreadListEntry.Flink )
      {
        memset(&v62, 0, sizeof(v62));
        v62.PartitionId = (unsigned __int16)MasterIrp->Type;
        v62.Profile.Capability[0].MaxValue = (UINT64)MasterIrp->AssociatedIrp.MasterIrp;
        v62.Profile.Capability[0].OptimalValue = (UINT64)MasterIrp->ThreadListEntry.Flink;
        v62.Profile.Capability[1] = *(DXGK_VIRTUALGPUCAPABILITY *)&MasterIrp->ThreadListEntry.Blink;
        v62.Profile.Capability[2] = *(DXGK_VIRTUALGPUCAPABILITY *)&MasterIrp->RequestorMode;
        v62.Profile.Capability[3] = *(DXGK_VIRTUALGPUCAPABILITY *)&MasterIrp->Overlay.AsynchronousParameters.IssuingProcess;
        v62.Profile.Capability[0].MinValue = v51;
        IsParavirtualizedInterface = DpiFdoIsParavirtualizedInterface(a2);
        LODWORD(v58.pMitigatedRange) = DxgkDdiCreateVirtualGpu(
                                         *((_QWORD *)DeviceExtension + 463),
                                         &v62,
                                         IsParavirtualizedInterface);
        pMitigatedRange = (NTSTATUS)v58.pMitigatedRange;
        if ( SLODWORD(v58.pMitigatedRange) < 0 )
          goto LABEL_18;
        memset(&v61, 0, 0x68uLL);
        v55 = *((_QWORD *)DeviceExtension + 463);
        v61.PartitionCount = (unsigned __int16)MasterIrp->Type;
        LODWORD(v58.pMitigatedRange) = DxgkDdiGetVirtualGpuInfo(
                                         v55,
                                         (struct _DXGKARG_GETVIRTUALGPUINFO *)&v61,
                                         (struct _LUID *)((char *)&MasterIrp->MdlAddress + 4),
                                         (struct _GUID *)(&MasterIrp->Flags + 1));
        pMitigatedRange = (NTSTATUS)v58.pMitigatedRange;
        if ( SLODWORD(v58.pMitigatedRange) < 0 )
          goto LABEL_18;
        LOWORD(MasterIrp->MdlAddress) = v62.PartitionId;
        *(DXGK_VGPU_PROFILE_CAPABILITY *)&MasterIrp->ThreadListEntry.Blink = v61.ProfileCapability[0];
        *(DXGK_VGPU_PROFILE_CAPABILITY *)&MasterIrp->UserEvent = v61.ProfileCapability[1];
        MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v61.ProfileCapability[2].TotalValue;
        MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v61.ProfileCapability[2].AvailableValue;
        goto LABEL_52;
      }
      v52 = *((_QWORD *)DeviceExtension + 463);
      LODWORD(v59) = (unsigned __int16)MasterIrp->Type;
      v53 = DxgkDdiDestroyVirtualGpu(v52, (struct _DXGKARG_DESTROYVIRTUALGPU *)&v59, v49, v50);
    }
    else
    {
      if ( Options < 2 || !MasterIrp )
        goto LABEL_92;
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&v58, a1, a2);
      pMitigatedRange = (NTSTATUS)v58.pMitigatedRange;
      if ( SLODWORD(v58.pMitigatedRange) < 0 )
        goto LABEL_18;
      LODWORD(v59) = (unsigned __int16)MasterIrp->Type;
      v56 = DpiFdoIsParavirtualizedInterface(a2);
      v53 = DxgkDdiSetGpuPartitionCount(
              *((_QWORD *)DeviceExtension + 463),
              (struct _DXGKARG_SETGPUPARTITIONCOUNT *)&v59,
              v56);
    }
    pMitigatedRange = v53;
    LODWORD(v58.pMitigatedRange) = v53;
    goto LABEL_18;
  }
  if ( LowPart == 2253896 )
  {
    if ( Options < 2 )
      goto LABEL_92;
    if ( !MasterIrp )
      goto LABEL_92;
    v38 = 168LL;
    if ( (unsigned int)Length < 0xA8 )
      goto LABEL_92;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&v58, a1, a2);
    pMitigatedRange = (NTSTATUS)v58.pMitigatedRange;
    if ( SLODWORD(v58.pMitigatedRange) < 0 )
      goto LABEL_18;
    memset(&v61, 0, sizeof(v61));
    v61.PartitionCount = (unsigned __int16)MasterIrp->Type;
    v39 = DpiFdoIsParavirtualizedInterface(a2);
    LODWORD(v58.pMitigatedRange) = DxgkDdiGetVirtualGpuProfile(*((_QWORD *)DeviceExtension + 463), &v61, v39);
    pMitigatedRange = (NTSTATUS)v58.pMitigatedRange;
    if ( SLODWORD(v58.pMitigatedRange) < 0 )
      goto LABEL_18;
    *(struct _DXGKARG_GETVIRTUALGPUPROFILE *)&MasterIrp->Type = v61;
    goto LABEL_52;
  }
  v11 = LowPart - 2252868;
  if ( !v11 )
  {
    VirtualizationFlags = DpiSriovNotification(a1, a2, (__int64)&v59);
LABEL_45:
    OutputBufferSize = v59;
    pMitigatedRange = VirtualizationFlags;
    goto LABEL_93;
  }
  v12 = v11 - 4;
  if ( !v12 )
  {
    v33 = DpiSriovEventComplete(a1);
    goto LABEL_69;
  }
  v13 = v12 - 4;
  if ( !v13 )
  {
    v33 = DpiSriovAttach(a1, a2);
    goto LABEL_69;
  }
  v14 = v13 - 4;
  if ( !v14 )
  {
    v33 = DpiSriovDetach(a1);
LABEL_69:
    pMitigatedRange = v33;
    goto LABEL_93;
  }
  v15 = v14 - 8;
  if ( v15 )
  {
    v16 = v15 - 4;
    if ( v16 )
    {
      v17 = v16 - 4;
      if ( v17 )
      {
        if ( v17 == 996 )
        {
          CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&v58, a1, a2);
          if ( SLODWORD(v58.pMitigatedRange) >= 0 )
          {
            memset(&v60, 0, 24);
            if ( MasterIrp && (unsigned int)Length >= 0x10 )
            {
              *(_QWORD *)&v60.OutputBufferSize = (char *)&MasterIrp->MdlAddress + 6;
              v60.PartitionId = (unsigned int)(Length - 14) >> 1;
              v22 = DpiFdoIsParavirtualizedInterface(a2);
              PartitionId = v60.PartitionId;
              GpuPartitionInfo = DxgkDdiGetGpuPartitionInfo(
                                   *((_QWORD *)DeviceExtension + 463),
                                   (struct _DXGKARG_GETGPUPARTITIONINFO *)&v60,
                                   v22);
              LODWORD(v58.pMitigatedRange) = GpuPartitionInfo;
              pMitigatedRange = GpuPartitionInfo;
              if ( GpuPartitionInfo < 0 )
              {
                if ( GpuPartitionInfo == -1073741789 )
                {
                  if ( v60.PartitionId )
                  {
                    *(_DWORD *)&MasterIrp->Type = v60.PartitionId;
                    pMitigatedRange = -2147483643;
                    WORD2(MasterIrp->MdlAddress) = v60.pInputBuffer;
                    LODWORD(v58.pMitigatedRange) = -2147483643;
                    RtlCopyLuid((PLUID)(&MasterIrp->Size + 1), (PLUID)DeviceExtension + 317);
                    OutputBufferSize = 16LL;
                  }
                  else
                  {
                    v31 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
                    *(_QWORD *)(v31 + 24) = 2253892LL;
                    WdLogEvent5_WdWarning(v31);
                    pMitigatedRange = -1073741811;
                    LODWORD(v58.pMitigatedRange) = -1073741811;
                  }
                }
                goto LABEL_18;
              }
              if ( v60.PartitionId <= PartitionId && v60.PartitionId )
              {
                *(_DWORD *)&MasterIrp->Type = v60.PartitionId;
                WORD2(MasterIrp->MdlAddress) = v60.pInputBuffer;
                RtlCopyLuid((PLUID)(&MasterIrp->Size + 1), (PLUID)DeviceExtension + 317);
                OutputBufferSize = 2 * v60.PartitionId - 2 + 16LL;
                goto LABEL_18;
              }
              v30 = WdLogNewEntry5_WdWarning(v26, v25, v27, v28);
              *(_QWORD *)(v30 + 24) = 2253892LL;
              WdLogEvent5_WdWarning(v30);
              pMitigatedRange = -1073741811;
            }
            else
            {
              v32 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
              *(_QWORD *)(v32 + 24) = 2253892LL;
              WdLogEvent5_WdWarning(v32);
              pMitigatedRange = -1073741789;
            }
            CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&v58);
LABEL_94:
            a2->IoStatus.Status = pMitigatedRange;
            a2->IoStatus.Information = OutputBufferSize;
            IofCompleteRequest(a2, 1);
            return pMitigatedRange;
          }
LABEL_18:
          v29 = (CInterfaceCallContext *)&v58;
LABEL_19:
          CInterfaceCallContext::~CInterfaceCallContext(v29);
          goto LABEL_93;
        }
LABEL_60:
        ++a2->CurrentLocation;
        a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
        return IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), a2);
      }
      v33 = DpiSriovMitigationUpdate(a1, a2, (__int64)MasterIrp, CurrentStackLocation->Parameters.Read.Length);
      goto LABEL_69;
    }
    if ( Options >= 4 && MasterIrp && (unsigned int)Length >= 0x10 )
    {
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&v60, a1, a2);
      pMitigatedRange = (NTSTATUS)v60.pInputBuffer;
      if ( SLODWORD(v60.pInputBuffer) >= 0 )
      {
        v34 = *((_QWORD *)DeviceExtension + 463);
        v58.pMitigatedRange = (PDXGK_MITIGATEDRANGEINFO)MasterIrp;
        *(_QWORD *)&v58.VirtualFunctionIndex = 0LL;
        *(_QWORD *)&v58.NumRanges = 0LL;
        v58.VirtualFunctionIndex = (unsigned __int16)MasterIrp->Type;
        v58.BarIndex = LOBYTE(MasterIrp->Size);
        *(_QWORD *)&v58.NumRanges = (unsigned int)Length >> 4;
        LODWORD(v60.pInputBuffer) = DxgkDdiQueryMitigatedRanges(v34, &v58);
        pMitigatedRange = (NTSTATUS)v60.pInputBuffer;
        if ( SLODWORD(v60.pInputBuffer) >= 0 )
          OutputBufferSize = Length;
      }
      v29 = (CInterfaceCallContext *)&v60;
      goto LABEL_19;
    }
  }
  else if ( Options >= 2 && MasterIrp && (unsigned int)Length >= 0x18 )
  {
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&v58, a1, a2);
    pMitigatedRange = (NTSTATUS)v58.pMitigatedRange;
    if ( SLODWORD(v58.pMitigatedRange) >= 0 )
    {
      v35 = *((_QWORD *)DeviceExtension + 463);
      memset(&v60, 0, 28);
      v60.PartitionId = (unsigned __int16)MasterIrp->Type;
      LODWORD(v58.pMitigatedRange) = DxgkDdiQueryMitigatedRangeCount(v35, &v60.PartitionId);
      pMitigatedRange = (NTSTATUS)v58.pMitigatedRange;
      if ( SLODWORD(v58.pMitigatedRange) >= 0 )
      {
        OutputBufferSize = 24LL;
        v36 = *(__int64 *)((char *)&v60.pInputBuffer + 4);
        *(_OWORD *)&MasterIrp->Type = *(_OWORD *)&v60.InputBufferSize;
        *(_QWORD *)&MasterIrp->Flags = v36;
      }
    }
    goto LABEL_18;
  }
LABEL_92:
  pMitigatedRange = -1073741789;
  v57 = WdLogNewEntry5_WdError(a1, CurrentStackLocation);
  *(_QWORD *)(v57 + 24) = -1073741789LL;
  WdLogEvent5_WdError(v57);
LABEL_93:
  if ( pMitigatedRange != 259 )
    goto LABEL_94;
  return pMitigatedRange;
}
