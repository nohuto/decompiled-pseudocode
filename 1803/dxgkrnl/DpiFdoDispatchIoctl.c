/*
 * XREFs of DpiFdoDispatchIoctl @ 0x1C01F2FD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C003A9B0 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003AAB0 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C003ACC4 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C0173640 (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 *     DxgkDdiCreateVirtualGpu @ 0x1C01746A0 (DxgkDdiCreateVirtualGpu.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x1C0174714 (DxgkDdiDestroyVirtualGpu.c)
 *     DxgkDdiGetGpuPartitionInfo @ 0x1C017484C (DxgkDdiGetGpuPartitionInfo.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C01749F0 (DxgkDdiGetVirtualGpuInfo.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C0174ACC (DxgkDdiGetVirtualGpuProfile.c)
 *     DxgkDdiQueryMitigatedRangeCount @ 0x1C0174B38 (DxgkDdiQueryMitigatedRangeCount.c)
 *     DxgkDdiQueryMitigatedRanges @ 0x1C0174BA0 (DxgkDdiQueryMitigatedRanges.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x1C0174C14 (DxgkDdiQueryPhysicalFunctionLuid.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1C01750D0 (DxgkDdiSetGpuPartitionCount.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C0175408 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C01F4D24 (DpiFdoGetVirtualGpuType.c)
 *     DpiGetVirtualizationFlags @ 0x1C01FB958 (DpiGetVirtualizationFlags.c)
 *     DpiSriovAttach @ 0x1C01FBBAC (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C01FBD00 (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x1C01FBEB0 (DpiSriovEventComplete.c)
 *     DpiSriovMitigationUpdate @ 0x1C01FBF88 (DpiSriovMitigationUpdate.c)
 *     DpiSriovNotification @ 0x1C01FC134 (DpiSriovNotification.c)
 */

NTSTATUS __fastcall DpiFdoDispatchIoctl(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  ULONG_PTR v3; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  PDEVICE_OBJECT *DeviceExtension; // rcx
  NTSTATUS v7; // ebx
  struct _IRP *MasterIrp; // rdi
  unsigned int LowPart; // eax
  ULONG_PTR Length; // r13
  unsigned int Options; // r12d
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  PDEVICE_OBJECT *v23; // r15
  unsigned int v24; // r13d
  int v25; // r12d
  ADAPTER_RENDER **v26; // rcx
  __int64 v27; // r9
  int GpuPartitionInfo; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  CInterfaceCallContext *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  ULONG Flags; // eax
  __int64 v36; // rax
  NTSTATUS v37; // eax
  __int64 v38; // rax
  int MitigatedRangeCount; // eax
  int v40; // eax
  _QWORD *v41; // rcx
  int v42; // eax
  __int64 v43; // xmm1_8
  unsigned int v44; // eax
  __int64 v45; // r12
  NTSTATUS v46; // edx
  int v47; // ebx
  int v48; // ecx
  void *v49; // rax
  int v50; // ecx
  void *v51; // rax
  struct _MDL *v52; // rcx
  struct _KTHREAD *v53; // rax
  __int64 v54; // rcx
  CHAR *v55; // rax
  struct _IRP *v56; // rcx
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // eax
  unsigned int v62; // eax
  NTSTATUS VirtualizationFlags; // eax
  int v65; // ebx
  PDEVICE_OBJECT v66; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  __int64 v68; // rax
  int v69; // ebx
  CSHORT v70; // cx
  void *v71; // rax
  struct _LIST_ENTRY *v72; // rcx
  DRIVER_CANCEL *v73; // rax
  struct _LIST_ENTRY *v74; // rcx
  void *v75; // rax
  void *v76; // rcx
  struct _LIST_ENTRY *v77; // rax
  ULONG_PTR v78; // rcx
  NTSTATUS v79; // ecx
  unsigned int v80; // eax
  __int64 v81; // r15
  int v82; // ebx
  unsigned __int8 v83; // zf
  PVOID UserApcContext; // rax
  PDEVICE_OBJECT *v85; // r15
  __int64 *v86; // rcx
  int VirtualGpuType; // eax
  __int64 v88; // rax
  __int64 Type; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v90; // [rsp+48h] [rbp-B8h]
  struct _IRP *v91; // [rsp+50h] [rbp-B0h]
  PDEVICE_OBJECT *v92; // [rsp+58h] [rbp-A8h]
  __int64 v93; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v94[32]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v95[22]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v96[306]; // [rsp+140h] [rbp+40h] BYREF

  v3 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (PDEVICE_OBJECT *)a1->DeviceExtension;
  v7 = -1073741637;
  v93 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v92 = DeviceExtension;
  if ( LowPart > 0x226448 )
  {
    v57 = LowPart - 2253900;
    if ( !v57 )
    {
      if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
        goto LABEL_31;
      if ( Options < 2 || !MasterIrp )
        goto LABEL_112;
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&Type, a1, a2, 1);
      MitigatedRangeCount = (int)v91;
      if ( (int)v91 >= 0 )
      {
        VirtualGpuType = DpiFdoGetVirtualGpuType(a2);
        LODWORD(v93) = (unsigned __int16)MasterIrp->Type;
        MitigatedRangeCount = DxgkDdiSetGpuPartitionCount((ADAPTER_RENDER **)v92[466], VirtualGpuType, (int *)&v93);
        LODWORD(v91) = MitigatedRangeCount;
      }
      goto LABEL_110;
    }
    v58 = v57 - 8;
    if ( !v58 )
    {
      if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
        goto LABEL_31;
      if ( Options >= 0x78 && MasterIrp && (unsigned int)Length >= 0x88 )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&Type, a1, a2, 0);
        v79 = (int)v91;
        if ( (int)v91 >= 0 )
        {
          v80 = DpiFdoGetVirtualGpuType(a2);
          v81 = *(_QWORD *)&MasterIrp->Flags;
          v82 = v80;
          if ( v81 || MasterIrp->AssociatedIrp.MasterIrp || MasterIrp->ThreadListEntry.Flink )
          {
            memset(v96, 0, sizeof(v96));
            v83 = LOBYTE(MasterIrp->UserBuffer) == 0;
            LODWORD(v96[0]) = (unsigned __int16)MasterIrp->Type;
            v96[2] = MasterIrp->AssociatedIrp.MasterIrp;
            v96[3] = MasterIrp->ThreadListEntry.Flink;
            v96[4] = MasterIrp->ThreadListEntry.Blink;
            v96[5] = MasterIrp->IoStatus.Pointer;
            v96[6] = MasterIrp->IoStatus.Information;
            v96[7] = *(_QWORD *)&MasterIrp->RequestorMode;
            v96[8] = MasterIrp->UserIosb;
            v96[9] = MasterIrp->UserEvent;
            v96[10] = MasterIrp->Overlay.AsynchronousParameters.UserApcRoutine;
            UserApcContext = MasterIrp->Overlay.AsynchronousParameters.UserApcContext;
            v96[1] = v81;
            v85 = v92;
            v96[11] = UserApcContext;
            v96[12] = MasterIrp->CancelRoutine;
            LODWORD(v91) = DxgkDdiCreateVirtualGpu((ADAPTER_RENDER **)v92[466], v82, v83, (int *)v96);
            v79 = (int)v91;
            if ( (int)v91 >= 0 )
            {
              memset(v95, 0, 0x68uLL);
              v86 = (__int64 *)v85[466];
              LODWORD(v95[0]) = v96[0];
              LODWORD(v91) = DxgkDdiGetVirtualGpuInfo(
                               v86,
                               v82,
                               (unsigned int *)v95,
                               (PMDL *)((char *)&MasterIrp->MdlAddress + 4),
                               &MasterIrp->Flags + 1);
              v79 = (int)v91;
              if ( (int)v91 >= 0 )
              {
                v3 = 136LL;
                LOWORD(MasterIrp->MdlAddress) = v96[0];
                MasterIrp->ThreadListEntry.Blink = (struct _LIST_ENTRY *)v95[1];
                MasterIrp->IoStatus.Pointer = (PVOID)v95[2];
                MasterIrp->IoStatus.Information = v95[3];
                *(_QWORD *)&MasterIrp->RequestorMode = v95[4];
                MasterIrp->UserIosb = (PIO_STATUS_BLOCK)v95[5];
                MasterIrp->UserEvent = (PKEVENT)v95[6];
                MasterIrp->Overlay.AllocationSize.QuadPart = v95[7];
                MasterIrp->Overlay.AsynchronousParameters.UserApcContext = (PVOID)v95[8];
                MasterIrp->CancelRoutine = (PDRIVER_CANCEL)v95[9];
                MasterIrp->UserBuffer = (PVOID)v95[10];
                MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v95[11];
                MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v95[12];
              }
            }
          }
          else
          {
            LODWORD(v93) = (unsigned __int16)MasterIrp->Type;
            v79 = DxgkDdiDestroyVirtualGpu(v92[466], v80, (unsigned int *)&v93);
            LODWORD(v91) = v79;
          }
        }
        v7 = v79;
        goto LABEL_18;
      }
      goto LABEL_112;
    }
    v59 = v58 - 4;
    if ( v59 )
    {
      v60 = v59 - 4;
      if ( v60 )
      {
        v61 = v60 - 4;
        if ( !v61 )
        {
          if ( Options >= 8 && MasterIrp )
          {
            CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&Type, a1, a2, 1);
            v7 = (int)v91;
            if ( (int)v91 < 0 )
              goto LABEL_18;
            v65 = DpiFdoGetVirtualGpuType(a2);
            memset(v94, 0, sizeof(v94));
            *(_DWORD *)&v94[4] = Options;
            *(_DWORD *)&v94[8] = Length;
            *(_QWORD *)&v94[16] = MasterIrp;
            v66 = v92[466];
            *(_QWORD *)&v94[24] = MasterIrp;
            VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(
                                 (__int64)v66[7].Queue.Wcb.DeviceContext,
                                 v65,
                                 (struct _LUID *)MasterIrp);
            if ( VirtualGpuByLuid )
            {
              *(_DWORD *)v94 = *((_DWORD *)VirtualGpuByLuid + 6);
              LODWORD(v91) = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, _BYTE *))(*(_QWORD *)VirtualGpuByLuid
                                                                                           + 40LL))(
                               VirtualGpuByLuid,
                               v94);
              v7 = (int)v91;
              if ( (int)v91 >= 0 )
                v3 = *(unsigned int *)&v94[8];
              goto LABEL_18;
            }
            v68 = WdLogNewEntry5_WdError(0LL);
            *(_QWORD *)(v68 + 24) = 1352LL;
            WdLogEvent5_WdError(v68);
            goto LABEL_25;
          }
          goto LABEL_112;
        }
        v62 = v61 - 996;
        if ( !v62 )
        {
          if ( !a2->RequestorMode || DxgkpCheckProcessForVirtualMachineManagementAccess() )
          {
            DpiFdoGetVirtualGpuType(a2);
            VirtualizationFlags = DpiGetVirtualizationFlags(a1, (__int64)MasterIrp, Length, (__int64)&v93);
            v3 = v93;
            v7 = VirtualizationFlags;
            goto LABEL_113;
          }
          goto LABEL_31;
        }
        if ( v62 != 4 )
          goto LABEL_70;
      }
      v37 = DpiSetPartitionVmbus(a1, a2, MasterIrp, Options);
LABEL_83:
      v7 = v37;
      goto LABEL_113;
    }
    if ( Options < 2 )
      goto LABEL_112;
    if ( !MasterIrp )
      goto LABEL_112;
    v45 = 128LL;
    if ( (unsigned int)Length < 0x80 )
      goto LABEL_112;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&Type, a1, a2, 1);
    v46 = (int)v91;
    if ( (int)v91 >= 0 )
    {
      v69 = DpiFdoGetVirtualGpuType(a2);
      memset(v95, 0, 0x68uLL);
      LODWORD(v95[0]) = (unsigned __int16)MasterIrp->Type;
      LODWORD(v91) = DxgkDdiGetVirtualGpuInfo(
                       (__int64 *)&v92[466]->Type,
                       v69,
                       (unsigned int *)v95,
                       &MasterIrp->Size + 1,
                       (PMDL *)((char *)&MasterIrp->MdlAddress + 4));
      v46 = (int)v91;
      if ( (int)v91 >= 0 )
      {
        v70 = v95[0];
        *(_QWORD *)&MasterIrp->RequestorMode = v95[5];
        MasterIrp->UserIosb = (PIO_STATUS_BLOCK)v95[6];
        MasterIrp->UserEvent = (PKEVENT)v95[7];
        MasterIrp->Overlay.AllocationSize.QuadPart = v95[8];
        v71 = (void *)v95[9];
        MasterIrp->Type = v70;
        v72 = (struct _LIST_ENTRY *)v95[1];
        MasterIrp->Overlay.AsynchronousParameters.UserApcContext = v71;
        v73 = (DRIVER_CANCEL *)v95[10];
        MasterIrp->ThreadListEntry.Flink = v72;
        v74 = (struct _LIST_ENTRY *)v95[2];
        MasterIrp->CancelRoutine = v73;
        v75 = (void *)v95[11];
        MasterIrp->ThreadListEntry.Blink = v74;
        v76 = (void *)v95[3];
        MasterIrp->UserBuffer = v75;
        v77 = (struct _LIST_ENTRY *)v95[12];
        MasterIrp->IoStatus.Pointer = v76;
        v78 = v95[4];
        MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = v77;
        MasterIrp->IoStatus.Information = v78;
        goto LABEL_61;
      }
    }
LABEL_62:
    v7 = v46;
    goto LABEL_18;
  }
  if ( LowPart == 2253896 )
  {
    if ( Options < 2 )
      goto LABEL_112;
    if ( !MasterIrp )
      goto LABEL_112;
    v45 = 168LL;
    if ( (unsigned int)Length < 0xA8 )
      goto LABEL_112;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&Type, a1, a2, 1);
    v46 = (int)v91;
    if ( (int)v91 >= 0 )
    {
      v47 = DpiFdoGetVirtualGpuType(a2);
      memset(v95, 0, 0xA8uLL);
      LODWORD(v95[0]) = (unsigned __int16)MasterIrp->Type;
      LODWORD(v91) = DxgkDdiGetVirtualGpuProfile((ADAPTER_RENDER **)v92[466], v47, (int *)v95);
      v46 = (int)v91;
      if ( (int)v91 >= 0 )
      {
        v48 = v95[0];
        MasterIrp->ThreadListEntry.Flink = (struct _LIST_ENTRY *)v95[4];
        MasterIrp->ThreadListEntry.Blink = (struct _LIST_ENTRY *)v95[5];
        MasterIrp->IoStatus.Pointer = (PVOID)v95[6];
        MasterIrp->IoStatus.Information = v95[7];
        *(_QWORD *)&MasterIrp->RequestorMode = v95[8];
        MasterIrp->UserIosb = (PIO_STATUS_BLOCK)v95[9];
        MasterIrp->UserEvent = (PKEVENT)v95[10];
        MasterIrp->Overlay.AllocationSize.QuadPart = v95[11];
        MasterIrp->Overlay.AsynchronousParameters.UserApcContext = (PVOID)v95[12];
        MasterIrp->CancelRoutine = (PDRIVER_CANCEL)v95[13];
        MasterIrp->UserBuffer = (PVOID)v95[14];
        MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v95[15];
        MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v95[16];
        v49 = (void *)v95[17];
        *(_DWORD *)&MasterIrp->Type = v48;
        v50 = HIDWORD(v95[0]);
        MasterIrp->Tail.Overlay.DriverContext[2] = v49;
        v51 = (void *)v95[18];
        *(_DWORD *)(&MasterIrp->Size + 1) = v50;
        v52 = (struct _MDL *)v95[1];
        MasterIrp->Tail.Overlay.DriverContext[3] = v51;
        v53 = (struct _KTHREAD *)v95[19];
        MasterIrp->MdlAddress = v52;
        v54 = v95[2];
        MasterIrp->Tail.Overlay.Thread = v53;
        v55 = (CHAR *)v95[20];
        *(_QWORD *)&MasterIrp->Flags = v54;
        v56 = (struct _IRP *)v95[3];
        MasterIrp->Tail.Overlay.AuxiliaryBuffer = v55;
        MasterIrp->AssociatedIrp.MasterIrp = v56;
LABEL_61:
        v3 = v45;
        goto LABEL_62;
      }
    }
    goto LABEL_62;
  }
  v12 = LowPart - 2252868;
  if ( !v12 )
  {
    v37 = DpiSriovNotification(a1, a2);
    goto LABEL_83;
  }
  v13 = v12 - 4;
  if ( !v13 )
  {
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      goto LABEL_31;
    v44 = DpiFdoGetVirtualGpuType(a2);
    v37 = DpiSriovEventComplete(a1, v44, MasterIrp, Options);
    goto LABEL_83;
  }
  v14 = v13 - 4;
  if ( !v14 )
  {
    v37 = DpiSriovAttach(a1, a2);
    goto LABEL_83;
  }
  v15 = v14 - 4;
  if ( !v15 )
  {
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      goto LABEL_31;
    DpiFdoGetVirtualGpuType(a2);
    v37 = DpiSriovDetach(a1);
    goto LABEL_83;
  }
  v16 = v15 - 8;
  if ( !v16 )
  {
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      goto LABEL_31;
    if ( Options < 2 || !MasterIrp || (unsigned int)Length < 0x18 )
      goto LABEL_112;
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&Type, a1, a2, 1);
    MitigatedRangeCount = (int)v91;
    if ( (int)v91 >= 0 )
    {
      v42 = DpiFdoGetVirtualGpuType(a2);
      memset(v94, 0, 28);
      *(_DWORD *)v94 = (unsigned __int16)MasterIrp->Type;
      MitigatedRangeCount = DxgkDdiQueryMitigatedRangeCount(v92[466], v42, (unsigned int *)v94);
      LODWORD(v91) = MitigatedRangeCount;
      if ( MitigatedRangeCount >= 0 )
      {
        v3 = 24LL;
        v43 = *(_QWORD *)&v94[20];
        *(_OWORD *)&MasterIrp->Type = *(_OWORD *)&v94[4];
        *(_QWORD *)&MasterIrp->Flags = v43;
      }
    }
LABEL_110:
    v32 = (CInterfaceCallContext *)&Type;
LABEL_111:
    v7 = MitigatedRangeCount;
    goto LABEL_19;
  }
  v17 = v16 - 4;
  if ( v17 )
  {
    v18 = v17 - 4;
    if ( v18 )
    {
      if ( v18 == 996 )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)&Type, a1, a2, 1);
        if ( (int)v91 < 0 )
        {
LABEL_18:
          v32 = (CInterfaceCallContext *)&Type;
LABEL_19:
          CInterfaceCallContext::~CInterfaceCallContext(v32);
          goto LABEL_113;
        }
        memset(v94, 0, 24);
        if ( !MasterIrp || (unsigned int)Length < 0x18 )
        {
          v36 = WdLogNewEntry5_WdWarning(v20, v19, v21);
          *(_QWORD *)(v36 + 24) = 2253892LL;
          WdLogEvent5_WdWarning(v36);
          v7 = -1073741789;
LABEL_21:
          CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)&Type);
LABEL_114:
          a2->IoStatus.Status = v7;
          a2->IoStatus.Information = v3;
          IofCompleteRequest(a2, 1);
          return v7;
        }
        v22 = DpiFdoGetVirtualGpuType(a2);
        v23 = v92;
        *(_QWORD *)&v94[8] = &MasterIrp->Flags + 1;
        v24 = (unsigned int)(Length - 20) >> 1;
        v25 = v22;
        v26 = (ADAPTER_RENDER **)v92[466];
        *(_DWORD *)v94 = v24;
        GpuPartitionInfo = DxgkDdiGetGpuPartitionInfo(v26, v22, (struct _DXGKARG_GETGPUPARTITIONINFO *)v94, v27);
        LODWORD(v91) = GpuPartitionInfo;
        v7 = GpuPartitionInfo;
        if ( GpuPartitionInfo >= 0 )
        {
          if ( *(_DWORD *)v94 <= v24 && *(_DWORD *)v94 )
          {
            *(_DWORD *)&MasterIrp->Type = *(_DWORD *)v94;
            WORD2(MasterIrp->MdlAddress) = *(_WORD *)&v94[16];
            LOBYTE(v3) = *((_BYTE *)v23 + 1136) != 0;
            MasterIrp->Flags = MasterIrp->Flags & 0xFFFFFFFE | v3;
            DxgkDdiQueryPhysicalFunctionLuid((char *)v23[466], v25, (struct _LUID *)(&MasterIrp->Size + 1));
            v3 = (unsigned int)(2 * *(_DWORD *)v94 - 2) + 24LL;
            goto LABEL_18;
          }
          v33 = WdLogNewEntry5_WdWarning(v30, v29, v31);
          *(_QWORD *)(v33 + 24) = 2253892LL;
          WdLogEvent5_WdWarning(v33);
          v7 = -1073741811;
          goto LABEL_21;
        }
        if ( GpuPartitionInfo != -1073741789 )
          goto LABEL_18;
        if ( *(_DWORD *)v94 )
        {
          *(_DWORD *)&MasterIrp->Type = *(_DWORD *)v94;
          WORD2(MasterIrp->MdlAddress) = *(_WORD *)&v94[16];
          v7 = -2147483643;
          Flags = MasterIrp->Flags;
          LOBYTE(v3) = *((_BYTE *)v23 + 1136) != 0;
          LODWORD(v91) = -2147483643;
          MasterIrp->Flags = Flags & 0xFFFFFFFE | v3;
          RtlCopyLuid((PLUID)(&MasterIrp->Size + 1), (PLUID)v23 + 317);
          v3 = 24LL;
          goto LABEL_18;
        }
        v34 = WdLogNewEntry5_WdWarning(v30, v29, v31);
        *(_QWORD *)(v34 + 24) = 2253892LL;
        WdLogEvent5_WdWarning(v34);
LABEL_25:
        v7 = -1073741811;
        LODWORD(v91) = -1073741811;
        goto LABEL_18;
      }
LABEL_70:
      ++a2->CurrentLocation;
      a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
      return IofCallDriver(DeviceExtension[20], a2);
    }
    v37 = DpiSriovMitigationUpdate(a1, a2, (__int64)MasterIrp, Length);
    goto LABEL_83;
  }
  if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
  {
LABEL_31:
    v38 = WdLogNewEntry5_WdError(DeviceExtension);
    v7 = -1073741790;
    *(_QWORD *)(v38 + 24) = -1073741790LL;
    WdLogEvent5_WdError(v38);
    goto LABEL_114;
  }
  if ( Options >= 4 && MasterIrp && (unsigned int)Length >= 0x10 )
  {
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v94, a1, a2, 1);
    MitigatedRangeCount = *(_DWORD *)&v94[16];
    if ( *(int *)&v94[16] >= 0 )
    {
      v40 = DpiFdoGetVirtualGpuType(a2);
      Type = (unsigned __int16)MasterIrp->Type;
      HIDWORD(Type) = LOBYTE(MasterIrp->Size);
      v90 = 0LL;
      v41 = v92[466];
      v90 = (unsigned int)Length >> 4;
      v91 = MasterIrp;
      MitigatedRangeCount = DxgkDdiQueryMitigatedRanges(v41, v40, (unsigned int *)&Type);
      *(_DWORD *)&v94[16] = MitigatedRangeCount;
      if ( MitigatedRangeCount >= 0 )
        v3 = Length;
    }
    v32 = (CInterfaceCallContext *)v94;
    goto LABEL_111;
  }
LABEL_112:
  v7 = -1073741789;
  v88 = WdLogNewEntry5_WdError(DeviceExtension);
  *(_QWORD *)(v88 + 24) = -1073741789LL;
  WdLogEvent5_WdError(v88);
LABEL_113:
  if ( v7 != 259 )
    goto LABEL_114;
  return v7;
}
