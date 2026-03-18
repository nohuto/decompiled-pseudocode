/*
 * XREFs of DpiFdoDispatchIoctl @ 0x1C01DC910
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C002E088 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002E174 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C002E230 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     ?FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUID@@@Z @ 0x1C018900C (-FindVirtualGpuByLuid@ADAPTER_RENDER@@QEAAPEAUDXGK_VIRTUAL_GPU@@W4DXG_VIRTUAL_GPU_TYPE@@PEAU_LUI.c)
 *     DxgkDdiCreateVirtualGpu @ 0x1C0189CE0 (DxgkDdiCreateVirtualGpu.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x1C0189DB8 (DxgkDdiDestroyVirtualGpu.c)
 *     DxgkDdiGetGpuPartitionInfo @ 0x1C0189EF0 (DxgkDdiGetGpuPartitionInfo.c)
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C018A094 (DxgkDdiGetVirtualGpuInfo.c)
 *     DxgkDdiGetVirtualGpuProfile @ 0x1C018A10C (DxgkDdiGetVirtualGpuProfile.c)
 *     DxgkDdiQueryMitigatedRangeCount @ 0x1C018A178 (DxgkDdiQueryMitigatedRangeCount.c)
 *     DxgkDdiQueryMitigatedRanges @ 0x1C018A1E0 (DxgkDdiQueryMitigatedRanges.c)
 *     DxgkDdiQueryPhysicalFunctionLuid @ 0x1C018A254 (DxgkDdiQueryPhysicalFunctionLuid.c)
 *     DxgkDdiSetGpuPartitionCount @ 0x1C018A6BC (DxgkDdiSetGpuPartitionCount.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C018A9F0 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C01DDA0C (DpiFdoGetVirtualGpuType.c)
 *     DpiGetVirtualizationFlags @ 0x1C01DFC40 (DpiGetVirtualizationFlags.c)
 *     DpiSriovAttach @ 0x1C01DFE70 (DpiSriovAttach.c)
 *     DpiSriovDetach @ 0x1C01DFFC0 (DpiSriovDetach.c)
 *     DpiSriovEventComplete @ 0x1C01E01BC (DpiSriovEventComplete.c)
 *     DpiSriovMitigationUpdate @ 0x1C01E0318 (DpiSriovMitigationUpdate.c)
 *     DpiSriovNotification @ 0x1C01E04C0 (DpiSriovNotification.c)
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
  ULONG v22; // r13d
  int v23; // r12d
  ADAPTER_RENDER **v24; // rcx
  int GpuPartitionInfo; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  CInterfaceCallContext *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  ULONG Flags; // eax
  __int64 v33; // rax
  NTSTATUS v34; // eax
  __int64 v35; // rax
  int MitigatedRanges; // eax
  int v37; // eax
  _QWORD *v38; // rcx
  int v39; // eax
  __int64 v40; // xmm1_8
  NTSTATUS VirtualizationFlags; // eax
  NTSTATUS v42; // edx
  unsigned int v43; // ebx
  int v44; // ecx
  void *v45; // rax
  int v46; // ecx
  void *v47; // rax
  struct _MDL *v48; // rcx
  struct _KTHREAD *v49; // rax
  __int64 v50; // rcx
  CHAR *v51; // rax
  struct _IRP *v52; // rcx
  unsigned int v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  int v60; // ebx
  PDEVICE_OBJECT v61; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByLuid; // rax
  __int64 v63; // rax
  NTSTATUS v64; // edx
  unsigned int v65; // ebx
  CSHORT v66; // cx
  void *v67; // rax
  struct _LIST_ENTRY *v68; // rcx
  DRIVER_CANCEL *v69; // rax
  struct _LIST_ENTRY *v70; // rcx
  void *v71; // rax
  void *v72; // rcx
  struct _LIST_ENTRY *v73; // rax
  ULONG_PTR v74; // rcx
  int v75; // ecx
  int v76; // eax
  __int64 v77; // r15
  unsigned int v78; // ebx
  PDRIVER_CANCEL CancelRoutine; // rax
  _QWORD *v80; // rcx
  int VirtualGpuType; // eax
  __int64 v82; // rax
  PDEVICE_OBJECT *v83; // [rsp+40h] [rbp-C0h]
  __int64 v84; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v85; // [rsp+50h] [rbp-B0h] BYREF
  int Type; // [rsp+54h] [rbp-ACh] BYREF
  struct _DXGKARG_GETGPUPARTITIONINFO v87; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v88[16]; // [rsp+70h] [rbp-90h] BYREF
  int v89; // [rsp+80h] [rbp-80h]
  __int64 v90; // [rsp+88h] [rbp-78h] BYREF
  __int64 v91; // [rsp+90h] [rbp-70h]
  struct _IRP *v92; // [rsp+98h] [rbp-68h]
  _BYTE v93[16]; // [rsp+A0h] [rbp-60h] BYREF
  int VirtualGpu; // [rsp+B0h] [rbp-50h]
  _QWORD v95[4]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v96[16]; // [rsp+D8h] [rbp-28h] BYREF
  int v97; // [rsp+E8h] [rbp-18h]
  _BYTE v98[16]; // [rsp+F0h] [rbp-10h] BYREF
  int v99; // [rsp+100h] [rbp+0h]
  _BYTE v100[16]; // [rsp+108h] [rbp+8h] BYREF
  int v101; // [rsp+118h] [rbp+18h]
  _BYTE v102[16]; // [rsp+120h] [rbp+20h] BYREF
  int VirtualGpuProfile; // [rsp+130h] [rbp+30h]
  _BYTE v104[16]; // [rsp+138h] [rbp+38h] BYREF
  int VirtualGpuInfo; // [rsp+148h] [rbp+48h]
  _BYTE v106[16]; // [rsp+150h] [rbp+50h] BYREF
  int v107; // [rsp+160h] [rbp+60h]
  _OWORD v108[2]; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v109[14]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v110[22]; // [rsp+200h] [rbp+100h] BYREF
  _QWORD v111[14]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _QWORD v112[306]; // [rsp+320h] [rbp+220h] BYREF

  v3 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (PDEVICE_OBJECT *)a1->DeviceExtension;
  v7 = -1073741637;
  v84 = 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v83 = DeviceExtension;
  if ( LowPart > 0x226448 )
  {
    v53 = LowPart - 2253900;
    if ( !v53 )
    {
      if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
        goto LABEL_30;
      if ( Options >= 2 && MasterIrp )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v106, a1, a2);
        MitigatedRanges = v107;
        if ( v107 >= 0 )
        {
          VirtualGpuType = DpiFdoGetVirtualGpuType(a2);
          Type = (unsigned __int16)MasterIrp->Type;
          MitigatedRanges = DxgkDdiSetGpuPartitionCount(v83[466], VirtualGpuType, &Type);
          v107 = MitigatedRanges;
        }
        v29 = (CInterfaceCallContext *)v106;
        goto LABEL_114;
      }
      goto LABEL_115;
    }
    v54 = v53 - 8;
    if ( !v54 )
    {
      if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
        goto LABEL_30;
      if ( Options >= 0x70 && MasterIrp && (unsigned int)Length >= 0x88 )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v93, a1, a2);
        v75 = VirtualGpu;
        if ( VirtualGpu >= 0 )
        {
          v76 = DpiFdoGetVirtualGpuType(a2);
          v77 = *(_QWORD *)&MasterIrp->Flags;
          v78 = v76;
          if ( v77 || MasterIrp->AssociatedIrp.MasterIrp || MasterIrp->ThreadListEntry.Flink )
          {
            memset(v112, 0, sizeof(v112));
            LODWORD(v112[0]) = (unsigned __int16)MasterIrp->Type;
            v112[2] = MasterIrp->AssociatedIrp.MasterIrp;
            v112[3] = MasterIrp->ThreadListEntry.Flink;
            v112[4] = MasterIrp->ThreadListEntry.Blink;
            v112[5] = MasterIrp->IoStatus.Pointer;
            v112[6] = MasterIrp->IoStatus.Information;
            v112[7] = *(_QWORD *)&MasterIrp->RequestorMode;
            v112[8] = MasterIrp->UserIosb;
            v112[9] = MasterIrp->UserEvent;
            v112[10] = MasterIrp->Overlay.AsynchronousParameters.UserApcRoutine;
            v112[11] = MasterIrp->Overlay.AsynchronousParameters.UserApcContext;
            CancelRoutine = MasterIrp->CancelRoutine;
            v112[1] = v77;
            v112[12] = CancelRoutine;
            VirtualGpu = DxgkDdiCreateVirtualGpu(v83[466], v78, g_ForceSecureVirtualMachine != 0, v112);
            v75 = VirtualGpu;
            if ( VirtualGpu < 0
              || (memset(v111, 0, 0x68uLL),
                  v80 = v83[466],
                  LODWORD(v111[0]) = (unsigned __int16)MasterIrp->Type,
                  VirtualGpu = DxgkDdiGetVirtualGpuInfo(
                                 v80,
                                 v78,
                                 (unsigned int *)v111,
                                 (PMDL *)((char *)&MasterIrp->MdlAddress + 4),
                                 &MasterIrp->Flags + 1),
                  v75 = VirtualGpu,
                  VirtualGpu < 0) )
            {
              v3 = v84;
            }
            else
            {
              v3 = 136LL;
              LOWORD(MasterIrp->MdlAddress) = v112[0];
              MasterIrp->ThreadListEntry.Blink = (struct _LIST_ENTRY *)v111[1];
              MasterIrp->IoStatus.Pointer = (PVOID)v111[2];
              MasterIrp->IoStatus.Information = v111[3];
              *(_QWORD *)&MasterIrp->RequestorMode = v111[4];
              MasterIrp->UserIosb = (PIO_STATUS_BLOCK)v111[5];
              MasterIrp->UserEvent = (PKEVENT)v111[6];
              MasterIrp->Overlay.AllocationSize.QuadPart = v111[7];
              MasterIrp->Overlay.AsynchronousParameters.UserApcContext = (PVOID)v111[8];
              MasterIrp->CancelRoutine = (PDRIVER_CANCEL)v111[9];
              MasterIrp->UserBuffer = (PVOID)v111[10];
              MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v111[11];
              MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v111[12];
            }
          }
          else
          {
            v85 = (unsigned __int16)MasterIrp->Type;
            v75 = DxgkDdiDestroyVirtualGpu(v83[466], v76, &v85);
            VirtualGpu = v75;
          }
        }
        v7 = v75;
        v29 = (CInterfaceCallContext *)v93;
        goto LABEL_19;
      }
      goto LABEL_115;
    }
    v55 = v54 - 4;
    if ( !v55 )
    {
      if ( Options >= 2 && MasterIrp && (unsigned int)Length >= 0x80 )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v104, a1, a2);
        v64 = VirtualGpuInfo;
        if ( VirtualGpuInfo >= 0 )
        {
          v65 = DpiFdoGetVirtualGpuType(a2);
          memset(v109, 0, 0x68uLL);
          LODWORD(v109[0]) = (unsigned __int16)MasterIrp->Type;
          VirtualGpuInfo = DxgkDdiGetVirtualGpuInfo(
                             v83[466],
                             v65,
                             (unsigned int *)v109,
                             &MasterIrp->Size + 1,
                             (PMDL *)((char *)&MasterIrp->MdlAddress + 4));
          v64 = VirtualGpuInfo;
          if ( VirtualGpuInfo >= 0 )
          {
            v3 = 128LL;
            v66 = v109[0];
            *(_QWORD *)&MasterIrp->RequestorMode = v109[5];
            MasterIrp->UserIosb = (PIO_STATUS_BLOCK)v109[6];
            MasterIrp->UserEvent = (PKEVENT)v109[7];
            MasterIrp->Overlay.AllocationSize.QuadPart = v109[8];
            v67 = (void *)v109[9];
            MasterIrp->Type = v66;
            v68 = (struct _LIST_ENTRY *)v109[1];
            MasterIrp->Overlay.AsynchronousParameters.UserApcContext = v67;
            v69 = (DRIVER_CANCEL *)v109[10];
            MasterIrp->ThreadListEntry.Flink = v68;
            v70 = (struct _LIST_ENTRY *)v109[2];
            MasterIrp->CancelRoutine = v69;
            v71 = (void *)v109[11];
            MasterIrp->ThreadListEntry.Blink = v70;
            v72 = (void *)v109[3];
            MasterIrp->UserBuffer = v71;
            v73 = (struct _LIST_ENTRY *)v109[12];
            MasterIrp->IoStatus.Pointer = v72;
            v74 = v109[4];
            MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = v73;
            MasterIrp->IoStatus.Information = v74;
          }
        }
        v7 = v64;
        v29 = (CInterfaceCallContext *)v104;
        goto LABEL_19;
      }
      goto LABEL_115;
    }
    v56 = v55 - 4;
    if ( v56 )
    {
      v57 = v56 - 4;
      if ( !v57 )
      {
        if ( Options >= 8 && MasterIrp )
        {
          CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v96, a1, a2);
          v7 = v97;
          if ( v97 >= 0 )
          {
            v60 = DpiFdoGetVirtualGpuType(a2);
            memset(v95, 0, sizeof(v95));
            HIDWORD(v95[0]) = Options;
            LODWORD(v95[1]) = Length;
            v95[2] = MasterIrp;
            v61 = v83[466];
            v95[3] = MasterIrp;
            VirtualGpuByLuid = ADAPTER_RENDER::FindVirtualGpuByLuid(
                                 (__int64)v61[6].DeviceLock.Header.WaitListHead.Blink,
                                 v60,
                                 (struct _LUID *)MasterIrp);
            if ( VirtualGpuByLuid )
            {
              v97 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, _QWORD *))(*(_QWORD *)VirtualGpuByLuid + 40LL))(
                      VirtualGpuByLuid,
                      v95);
              v7 = v97;
              if ( v97 >= 0 )
                v3 = LODWORD(v95[1]);
            }
            else
            {
              v63 = WdLogNewEntry5_WdError(0LL);
              *(_QWORD *)(v63 + 24) = 1102LL;
              WdLogEvent5_WdError(v63);
              v7 = -1073741811;
              v97 = -1073741811;
            }
          }
          v29 = (CInterfaceCallContext *)v96;
          goto LABEL_19;
        }
        goto LABEL_115;
      }
      v58 = v57 - 996;
      if ( !v58 )
      {
        if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
          goto LABEL_30;
        DpiFdoGetVirtualGpuType(a2);
        VirtualizationFlags = DpiGetVirtualizationFlags(a1, (__int64)MasterIrp, Length, (__int64)&v84);
LABEL_55:
        v3 = v84;
        v7 = VirtualizationFlags;
        goto LABEL_116;
      }
      if ( v58 != 4 )
        goto LABEL_70;
    }
    v34 = DpiSetPartitionVmbus(a1, a2, MasterIrp, Options);
    goto LABEL_84;
  }
  if ( LowPart == 2253896 )
  {
    if ( Options >= 2 && MasterIrp && (unsigned int)Length >= 0xA8 )
    {
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v102, a1, a2);
      v42 = VirtualGpuProfile;
      if ( VirtualGpuProfile >= 0 )
      {
        v43 = DpiFdoGetVirtualGpuType(a2);
        memset(v110, 0, 0xA8uLL);
        LODWORD(v110[0]) = (unsigned __int16)MasterIrp->Type;
        VirtualGpuProfile = DxgkDdiGetVirtualGpuProfile((ADAPTER_RENDER **)v83[466], v43, (unsigned int *)v110);
        v42 = VirtualGpuProfile;
        if ( VirtualGpuProfile >= 0 )
        {
          v3 = 168LL;
          v44 = v110[0];
          MasterIrp->ThreadListEntry.Flink = (struct _LIST_ENTRY *)v110[4];
          MasterIrp->ThreadListEntry.Blink = (struct _LIST_ENTRY *)v110[5];
          MasterIrp->IoStatus.Pointer = (PVOID)v110[6];
          MasterIrp->IoStatus.Information = v110[7];
          *(_QWORD *)&MasterIrp->RequestorMode = v110[8];
          MasterIrp->UserIosb = (PIO_STATUS_BLOCK)v110[9];
          MasterIrp->UserEvent = (PKEVENT)v110[10];
          MasterIrp->Overlay.AllocationSize.QuadPart = v110[11];
          MasterIrp->Overlay.AsynchronousParameters.UserApcContext = (PVOID)v110[12];
          MasterIrp->CancelRoutine = (PDRIVER_CANCEL)v110[13];
          MasterIrp->UserBuffer = (PVOID)v110[14];
          MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)v110[15];
          MasterIrp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v110[16];
          v45 = (void *)v110[17];
          *(_DWORD *)&MasterIrp->Type = v44;
          v46 = HIDWORD(v110[0]);
          MasterIrp->Tail.Overlay.DriverContext[2] = v45;
          v47 = (void *)v110[18];
          *(_DWORD *)(&MasterIrp->Size + 1) = v46;
          v48 = (struct _MDL *)v110[1];
          MasterIrp->Tail.Overlay.DriverContext[3] = v47;
          v49 = (struct _KTHREAD *)v110[19];
          MasterIrp->MdlAddress = v48;
          v50 = v110[2];
          MasterIrp->Tail.Overlay.Thread = v49;
          v51 = (CHAR *)v110[20];
          *(_QWORD *)&MasterIrp->Flags = v50;
          v52 = (struct _IRP *)v110[3];
          MasterIrp->Tail.Overlay.AuxiliaryBuffer = v51;
          MasterIrp->AssociatedIrp.MasterIrp = v52;
        }
      }
      v7 = v42;
      v29 = (CInterfaceCallContext *)v102;
      goto LABEL_19;
    }
    goto LABEL_115;
  }
  v12 = LowPart - 2252868;
  if ( !v12 )
  {
    VirtualizationFlags = DpiSriovNotification(a1, a2, (__int64)&v84);
    goto LABEL_55;
  }
  v13 = v12 - 4;
  if ( !v13 )
  {
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      goto LABEL_30;
    DpiFdoGetVirtualGpuType(a2);
    v34 = DpiSriovEventComplete(a1);
    goto LABEL_84;
  }
  v14 = v13 - 4;
  if ( !v14 )
  {
    v34 = DpiSriovAttach(a1, a2);
    goto LABEL_84;
  }
  v15 = v14 - 4;
  if ( !v15 )
  {
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      goto LABEL_30;
    DpiFdoGetVirtualGpuType(a2);
    v34 = DpiSriovDetach(a1);
LABEL_84:
    v7 = v34;
    goto LABEL_116;
  }
  v16 = v15 - 8;
  if ( v16 )
  {
    v17 = v16 - 4;
    if ( v17 )
    {
      v18 = v17 - 4;
      if ( v18 )
      {
        if ( v18 == 996 )
        {
          CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v88, a1, a2);
          if ( v89 < 0 )
          {
LABEL_18:
            v29 = (CInterfaceCallContext *)v88;
LABEL_19:
            CInterfaceCallContext::~CInterfaceCallContext(v29);
            goto LABEL_116;
          }
          memset(&v87, 0, sizeof(v87));
          if ( MasterIrp && (unsigned int)Length >= 0x18 )
          {
            v87.pGpuPartitionOptions = (USHORT *)(&MasterIrp->Flags + 1);
            v22 = (unsigned int)(Length - 20) >> 1;
            v23 = DpiFdoGetVirtualGpuType(a2);
            v24 = (ADAPTER_RENDER **)v83[466];
            v87.NumGpuPartitionOptions = v22;
            GpuPartitionInfo = DxgkDdiGetGpuPartitionInfo(v24, v23, &v87);
            v89 = GpuPartitionInfo;
            v7 = GpuPartitionInfo;
            if ( GpuPartitionInfo < 0 )
            {
              if ( GpuPartitionInfo == -1073741789 )
              {
                if ( v87.NumGpuPartitionOptions )
                {
                  *(_DWORD *)&MasterIrp->Type = v87.NumGpuPartitionOptions;
                  WORD2(MasterIrp->MdlAddress) = v87.CurrentGpuPartitionCount;
                  v7 = -2147483643;
                  Flags = MasterIrp->Flags;
                  LOBYTE(v3) = *((_BYTE *)v83 + 1136) != 0;
                  v89 = -2147483643;
                  MasterIrp->Flags = Flags & 0xFFFFFFFE | v3;
                  RtlCopyLuid((PLUID)(&MasterIrp->Size + 1), (PLUID)v83 + 317);
                  v3 = 24LL;
                }
                else
                {
                  v31 = WdLogNewEntry5_WdWarning(v27, v26, v28);
                  *(_QWORD *)(v31 + 24) = 2253892LL;
                  WdLogEvent5_WdWarning(v31);
                  v7 = -1073741811;
                  v89 = -1073741811;
                }
              }
              goto LABEL_18;
            }
            if ( v87.NumGpuPartitionOptions <= v22 && v87.NumGpuPartitionOptions )
            {
              *(_DWORD *)&MasterIrp->Type = v87.NumGpuPartitionOptions;
              WORD2(MasterIrp->MdlAddress) = v87.CurrentGpuPartitionCount;
              LOBYTE(v3) = *((_BYTE *)v83 + 1136) != 0;
              MasterIrp->Flags = MasterIrp->Flags & 0xFFFFFFFE | v3;
              DxgkDdiQueryPhysicalFunctionLuid((char *)v83[466], v23, (struct _LUID *)(&MasterIrp->Size + 1));
              v3 = 2 * v87.NumGpuPartitionOptions - 2 + 24LL;
              goto LABEL_18;
            }
            v30 = WdLogNewEntry5_WdWarning(v27, v26, v28);
            *(_QWORD *)(v30 + 24) = 2253892LL;
            WdLogEvent5_WdWarning(v30);
            v7 = -1073741811;
          }
          else
          {
            v33 = WdLogNewEntry5_WdWarning(v20, v19, v21);
            *(_QWORD *)(v33 + 24) = 2253892LL;
            WdLogEvent5_WdWarning(v33);
            v7 = -1073741789;
          }
          CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v88);
LABEL_117:
          a2->IoStatus.Status = v7;
          a2->IoStatus.Information = v3;
          IofCompleteRequest(a2, 1);
          return v7;
        }
LABEL_70:
        ++a2->CurrentLocation;
        a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
        return IofCallDriver(DeviceExtension[20], a2);
      }
      v34 = DpiSriovMitigationUpdate(a1, a2, (__int64)MasterIrp, Length);
      goto LABEL_84;
    }
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
    {
LABEL_30:
      v35 = WdLogNewEntry5_WdError(DeviceExtension);
      v7 = -1073741790;
      *(_QWORD *)(v35 + 24) = -1073741790LL;
      WdLogEvent5_WdError(v35);
      goto LABEL_117;
    }
    if ( Options >= 4 && MasterIrp && (unsigned int)Length >= 0x10 )
    {
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v98, a1, a2);
      MitigatedRanges = v99;
      if ( v99 >= 0 )
      {
        v37 = DpiFdoGetVirtualGpuType(a2);
        v90 = (unsigned __int16)MasterIrp->Type;
        HIDWORD(v90) = LOBYTE(MasterIrp->Size);
        v91 = 0LL;
        v38 = v83[466];
        v91 = (unsigned int)Length >> 4;
        v92 = MasterIrp;
        MitigatedRanges = DxgkDdiQueryMitigatedRanges(v38, v37, (unsigned int *)&v90);
        v99 = MitigatedRanges;
        if ( MitigatedRanges >= 0 )
          v3 = Length;
      }
      v29 = (CInterfaceCallContext *)v98;
LABEL_114:
      v7 = MitigatedRanges;
      goto LABEL_19;
    }
  }
  else
  {
    if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
      goto LABEL_30;
    if ( Options >= 2 && MasterIrp && (unsigned int)Length >= 0x18 )
    {
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v100, a1, a2);
      MitigatedRanges = v101;
      if ( v101 >= 0 )
      {
        v39 = DpiFdoGetVirtualGpuType(a2);
        memset(v108, 0, 28);
        LODWORD(v108[0]) = (unsigned __int16)MasterIrp->Type;
        MitigatedRanges = DxgkDdiQueryMitigatedRangeCount(v83[466], v39, (unsigned int *)v108);
        v101 = MitigatedRanges;
        if ( MitigatedRanges >= 0 )
        {
          v3 = 24LL;
          v40 = *(_QWORD *)((char *)&v108[1] + 4);
          *(_OWORD *)&MasterIrp->Type = *(_OWORD *)((char *)v108 + 4);
          *(_QWORD *)&MasterIrp->Flags = v40;
        }
      }
      v29 = (CInterfaceCallContext *)v100;
      goto LABEL_114;
    }
  }
LABEL_115:
  v7 = -1073741789;
  v82 = WdLogNewEntry5_WdError(DeviceExtension);
  *(_QWORD *)(v82 + 24) = -1073741789LL;
  WdLogEvent5_WdError(v82);
LABEL_116:
  if ( v7 != 259 )
    goto LABEL_117;
  return v7;
}
