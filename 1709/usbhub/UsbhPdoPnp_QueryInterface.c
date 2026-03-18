/*
 * XREFs of UsbhPdoPnp_QueryInterface @ 0x1C001A000
 * Callers:
 *     <none>
 * Callees:
 *     Usb_Disconnected @ 0x1C00036E4 (Usb_Disconnected.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006C34 (UsbhSyncResetDeviceInternal.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhBusIfLocationReference @ 0x1C001B5B0 (UsbhBusIfLocationReference.c)
 *     UsbhUnlatchPdo @ 0x1C00248C0 (UsbhUnlatchPdo.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0024DB0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhBusifGetSSHub @ 0x1C0027C10 (UsbhBusifGetSSHub.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryInterface(__int64 a1, IRP *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned int Status; // ebp
  __int64 v10; // r15
  unsigned __int16 v11; // bp
  __int64 v12; // rdx
  __int64 v13; // rcx
  KIRQL v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  _DWORD *v27; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  KIRQL v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbp
  _QWORD *v39; // rdi
  _QWORD *v40; // rdx
  _QWORD *v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  _QWORD *v44; // rcx
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  unsigned int SSHub; // r12d
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r13
  __int64 v53; // rax
  KSPIN_LOCK *v54; // r12
  KIRQL v55; // al
  __int64 v56; // rbp
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  unsigned int v60; // eax
  __int64 v61; // r10
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 (__fastcall *v65)(_QWORD, __int64, IRP *, __int64); // rax
  int v66; // ecx
  __int64 v67; // rbp
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rax
  KSPIN_LOCK *v76; // r12
  KIRQL v77; // r13
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rcx
  void (__fastcall *v83)(_QWORD, __int64, IRP *, __int64); // rax
  __int64 v84; // r8
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rbx
  __int64 v88; // rdx
  __int64 v89; // rcx
  KIRQL v90; // r14
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rbp
  _QWORD *v94; // rdi
  _QWORD *v95; // rdx
  _QWORD *v96; // r8
  __int64 v97; // r9
  __int64 v98; // rcx
  _QWORD *v99; // rcx
  _QWORD *v100; // rax
  _QWORD *v101; // rdx
  _DWORD *v102; // rcx
  _IO_STACK_LOCATION *v103; // rax
  _LARGE_INTEGER ByteOffset; // rax
  __int64 v105; // rbx
  __int64 v106; // rdx
  __int64 v107; // rcx
  KIRQL v108; // r14
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rbp
  _QWORD *v112; // rdi
  _QWORD *v113; // rdx
  _QWORD *v114; // r8
  __int64 v115; // r9
  __int64 v116; // rcx
  _QWORD *v117; // rcx
  _QWORD *v118; // rax
  _QWORD *v119; // rdx
  _LARGE_INTEGER v120; // rax
  __int64 v121; // rdx
  unsigned int v122; // ebx
  int v123; // eax
  int v124; // eax
  __int64 v125; // rax
  int v126; // eax
  int v127; // r10d
  int v128; // r10d
  int v129; // eax
  int v130; // [rsp+48h] [rbp-50h]
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+50h] [rbp-48h]
  KIRQL v132; // [rsp+A0h] [rbp+8h]
  unsigned int v133; // [rsp+B8h] [rbp+20h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v5 = *(_QWORD *)(v4 + 1176);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v7 = 812018033;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a2;
        *(_QWORD *)(v7 + 24) = a1;
      }
    }
  }
  v8 = *(_QWORD *)(v4 + 1176);
  Status = a2->IoStatus.Status;
  v133 = Status;
  if ( !v8 )
    goto LABEL_248;
  v10 = 0LL;
  v11 = *(_WORD *)(v4 + 1420);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v12 = *(_QWORD *)(v8 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 1329877100;
      *(_QWORD *)(v13 + 16) = v11;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 24) = 1364543814LL;
    }
  }
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v15 = *(_QWORD *)(v8 + 64);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
      *(_DWORD *)v16 = 1413771367;
      *(_QWORD *)(v16 + 16) = v11;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 24) = 0LL;
    }
  }
  if ( v11 )
  {
    v17 = *(_QWORD *)(v8 + 64);
    if ( !v17 )
      UsbhTrapFatal_Dbg(v8, 0LL);
    if ( *(_DWORD *)v17 != 541218120 )
      UsbhTrapFatal_Dbg(v8, v17);
    if ( v11 <= *(unsigned __int8 *)(v17 + 2938) )
    {
      v18 = *(_QWORD *)(v17 + 3056);
      if ( v18 )
      {
        v19 = 2928LL * v11 + v18 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          v20 = *(_QWORD *)(v17 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
          *(_DWORD *)v20 = 1044672615;
          *(_QWORD *)(v20 + 16) = v11;
          *(_QWORD *)(v20 + 8) = 0LL;
          *(_QWORD *)(v20 + 24) = v19;
        }
        if ( v19 )
        {
          v10 = *(_QWORD *)(v19 + 392);
          if ( v10 )
          {
            v21 = *(_QWORD *)(v10 + 64);
            if ( !v21 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v19 + 392), 0LL);
            if ( *(_DWORD *)v21 != 1329877064 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v19 + 392), *(_QWORD *)(v10 + 64));
            PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
            if ( PoolWithTag )
            {
              *PoolWithTag = 0LL;
              PoolWithTag[1] = 0LL;
              PoolWithTag[2] = 0LL;
              PoolWithTag[3] = 0LL;
              *(_DWORD *)PoolWithTag = 1668571500;
              PoolWithTag[4] = v10;
              *((_DWORD *)PoolWithTag + 6) = 1364543814;
              PoolWithTag[5] = a2;
              v23 = PoolWithTag + 1;
              v24 = *(_QWORD **)(v21 + 1272);
              if ( *v24 != v21 + 1264 )
                __fastfail(3u);
              *v23 = v21 + 1264;
              v23[1] = v24;
              *v24 = v23;
              *(_QWORD *)(v21 + 1272) = v23;
            }
            else
            {
              ++*(_DWORD *)(v21 + 1280);
            }
          }
        }
      }
    }
  }
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v14);
  if ( !v10 )
  {
    Status = v133;
LABEL_248:
    a2->IoStatus.Status = Status;
    IofCompleteRequest(a2, 0);
    return Status;
  }
  v25 = *(_QWORD *)(v4 + 1176);
  if ( !v25 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v26 = *(_QWORD *)(v25 + 64);
  if ( !v26 )
    UsbhTrapFatal_Dbg(v25, 0LL);
  if ( *(_DWORD *)v26 != 541218120 )
    UsbhTrapFatal_Dbg(v25, *(_QWORD *)(v25 + 64));
  DeviceObject = *(struct _DEVICE_OBJECT **)(v26 + 1216);
  if ( !DeviceObject )
    goto LABEL_246;
  v27 = *(_DWORD **)(a1 + 64);
  if ( !v27 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v27 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( v27[281] != 3 )
  {
LABEL_246:
    Log(v25, 256, 1902522657, (__int64)a2, a1);
    UsbhUnlatchPdo(*(_QWORD *)(v4 + 1176), v10, a2, 1364543814LL);
    a2->IoStatus.Status = v133;
    IofCompleteRequest(a2, 0);
    return v133;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_SS_GUID,
         0x10uLL) == 16 )
  {
    Log(*(_QWORD *)(v4 + 1176), 256, 1902728019, (__int64)a2, a1);
    SSHub = UsbhBusifGetSSHub(*(_QWORD *)(v4 + 1176), v121, a2);
    UsbhUnlatchPdo(*(_QWORD *)(v4 + 1176), v10, a2, 1364543814LL);
    a2->IoStatus.Status = SSHub;
    IofCompleteRequest(a2, 0);
    return SSHub;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    v102 = *(_DWORD **)(a1 + 64);
    if ( !v102 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *v102 != 1329877064 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    v103 = a2->Tail.Overlay.CurrentStackLocation;
    if ( v103->Parameters.QueryInterface.Size < 0x28u )
    {
      SSHub = -1073741823;
    }
    else
    {
      ByteOffset = v103->Parameters.Read.ByteOffset;
      SSHub = 0;
      *(_QWORD *)(ByteOffset.QuadPart + 16) = UsbhBusIfLocationReference;
      *(_QWORD *)(ByteOffset.QuadPart + 24) = UsbhBusIfLocationDereference;
      *(_QWORD *)(ByteOffset.QuadPart + 32) = UsbhBusIfLocationGetLocationStrings;
      *(_DWORD *)ByteOffset.QuadPart = 65576;
      *(_QWORD *)(ByteOffset.QuadPart + 8) = v102;
      UsbhBusIfLocationReference();
    }
    a2->IoStatus.Status = SSHub;
    a2->IoStatus.Information = 0LL;
    v105 = *(_QWORD *)(v4 + 1176);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( v105 )
      {
        v106 = *(_QWORD *)(v105 + 64);
        if ( v106 )
        {
          v107 = *(_QWORD *)(v106 + 888)
               + 32LL
               * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v106 + 880)) & *(_DWORD *)(v106 + 884));
          *(_DWORD *)v107 = 1329877109;
          *(_QWORD *)(v107 + 8) = 0LL;
          *(_QWORD *)(v107 + 16) = v10;
          *(_QWORD *)(v107 + 24) = 1364543814LL;
        }
      }
    }
    v108 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( v105 )
      {
        v109 = *(_QWORD *)(v105 + 64);
        if ( v109 )
        {
          v110 = *(_QWORD *)(v109 + 888)
               + 32LL
               * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v109 + 880)) & *(_DWORD *)(v109 + 884));
          *(_DWORD *)v110 = 1348891236;
          *(_QWORD *)(v110 + 8) = 0LL;
          *(_QWORD *)(v110 + 16) = v10;
          *(_QWORD *)(v110 + 24) = 1364543814LL;
        }
      }
    }
    v111 = *(_QWORD *)(v10 + 64);
    if ( !v111 )
      UsbhTrapFatal_Dbg(v10, 0LL);
    if ( *(_DWORD *)v111 != 1329877064 )
      UsbhTrapFatal_Dbg(v10, *(_QWORD *)(v10 + 64));
    v112 = (_QWORD *)(v111 + 1264);
    v113 = *(_QWORD **)(v111 + 1264);
    if ( v113 == (_QWORD *)(v111 + 1264) )
    {
LABEL_204:
      v123 = *(_DWORD *)(v111 + 1280);
      if ( v123 )
        *(_DWORD *)(v111 + 1280) = v123 - 1;
    }
    else
    {
      while ( 1 )
      {
        v114 = v113 - 1;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( v105 )
          {
            v115 = *(_QWORD *)(v105 + 64);
            if ( v115 )
            {
              v116 = *(_QWORD *)(v115 + 888)
                   + 32LL
                   * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v115 + 880)) & *(_DWORD *)(v115 + 884));
              *(_DWORD *)v116 = 1064591724;
              *(_QWORD *)(v116 + 8) = 0LL;
              *(_QWORD *)(v116 + 16) = v111;
              *(_QWORD *)(v116 + 24) = 1364543814LL;
            }
          }
        }
        if ( *((_DWORD *)v114 + 6) == 1364543814 && (IRP *)v114[5] == a2 )
          break;
        v113 = (_QWORD *)*v113;
        if ( v113 == v112 )
          goto LABEL_204;
      }
      v117 = (_QWORD *)*v113;
      v118 = v113;
      if ( *(_QWORD **)(*v113 + 8LL) != v113 || (v119 = (_QWORD *)v114[2], (_QWORD *)*v119 != v118) )
        __fastfail(3u);
      *v119 = v117;
      v117[1] = v119;
      ExFreePoolWithTag(v114, 0);
    }
    if ( (_QWORD *)*v112 == v112 && !*(_DWORD *)(v111 + 1280) )
      KeSetEvent((PRKEVENT)(v111 + 1288), 0, 0);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v108);
    a2->IoStatus.Status = SSHub;
    IofCompleteRequest(a2, 0);
    return SSHub;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &USB_BUS_INTERFACE_USBDI_GUID, 0x10uLL) == 16
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &USB_BUS_INTERFACE_HUB_GUID, 0x10uLL) == 16
    || RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_MINIDUMP_GUID,
         0x10uLL) == 16
    || RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_FORWARD_PROGRESS_GUID,
         0x10uLL) == 16 )
  {
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v49 = *(_QWORD *)(v4 + 1176);
      if ( v49 )
      {
        v50 = *(_QWORD *)(v49 + 64);
        if ( v50 )
        {
          v51 = *(_QWORD *)(v50 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v50 + 880)) & *(_DWORD *)(v50 + 884));
          *(_DWORD *)v51 = 845572465;
          *(_QWORD *)(v51 + 8) = 0LL;
          *(_QWORD *)(v51 + 16) = a2;
          *(_QWORD *)(v51 + 24) = a1;
        }
      }
    }
    v52 = *(_QWORD *)(v4 + 1176);
    if ( !v52 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v53 = *(_QWORD *)(v52 + 64);
    if ( !v53 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(v4 + 1176), 0LL);
    if ( *(_DWORD *)v53 != 541218120 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(v4 + 1176), *(_QWORD *)(v52 + 64));
    v54 = (KSPIN_LOCK *)(v53 + 3720);
    v55 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v53 + 3720));
    v56 = *(_QWORD *)(a1 + 64);
    v132 = v55;
    if ( !v56 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v56 != 1329877064 )
      UsbhTrapFatal_Dbg(a1, v56);
    v57 = *(int *)(v56 + 1144);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v58 = *(_QWORD *)(v52 + 64);
      if ( v58 )
      {
        v59 = *(_QWORD *)(v58 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v58 + 880)) & *(_DWORD *)(v58 + 884));
        *(_DWORD *)v59 = 824923716;
        *(_QWORD *)(v59 + 8) = 0LL;
        *(_QWORD *)(v59 + 16) = a1;
        *(_QWORD *)(v59 + 24) = v57;
      }
    }
    v60 = *(_DWORD *)(v56 + 1144);
    if ( v60 != 2 )
    {
      if ( v60 <= 1 )
        Log(v52, 256, 1146497825, a1, *(int *)(v56 + 1144));
      v67 = 0LL;
LABEL_97:
      KeReleaseSpinLock(v54, v132);
      if ( !v67 )
      {
        v125 = PdoExt(a1);
        v126 = UsbhSyncResetDeviceInternal(*(PDEVICE_OBJECT *)(v4 + 1176), v125 + 944, a1);
        Log(*(_QWORD *)(v4 + 1176), 256, 1902732882, (__int64)a2, v126);
        if ( (v127 & 0xC0000000) == 0xC0000000 )
        {
          if ( !Usb_Disconnected(v127) )
          {
            LOBYTE(v130) = 0;
            UsbhException(
              *(_QWORD *)(v4 + 1176),
              *(unsigned __int16 *)(v4 + 1420),
              121,
              0,
              0,
              v128,
              -1,
              usbfile_pdo_c,
              535,
              v130);
          }
          a2->IoStatus.Status = v133;
          IofCompleteRequest(a2, 0);
          UsbhUnlatchPdo(*(_QWORD *)(v4 + 1176), v10, a2, 1364543814LL);
          return v133;
        }
        v67 = UsbhRefPdoDeviceHandle(*(_QWORD *)(v4 + 1176), a1, a2, 1212442225LL);
        Log(*(_QWORD *)(v4 + 1176), 256, 1902732872, *(_QWORD *)(v4 + 1152), a1);
        CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)v67;
      }
      v70 = *(_QWORD *)(v4 + 1152);
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v71 = *(_QWORD *)(v4 + 1176);
        if ( v71 )
        {
          v72 = *(_QWORD *)(v71 + 64);
          if ( v72 )
          {
            v73 = *(_QWORD *)(v72 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v72 + 880)) & *(_DWORD *)(v72 + 884));
            *(_DWORD *)v73 = 1214671217;
            *(_QWORD *)(v73 + 8) = 0LL;
            *(_QWORD *)(v73 + 16) = v70;
            *(_QWORD *)(v73 + 24) = a1;
          }
        }
      }
      CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)v67;
      if ( v67 )
      {
        v74 = *(_QWORD *)(v4 + 1176);
        if ( !v74 )
          UsbhTrapFatal_Dbg(0LL, 0LL);
        v75 = *(_QWORD *)(v74 + 64);
        if ( !v75 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(v4 + 1176), 0LL);
        if ( *(_DWORD *)v75 != 541218120 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(v4 + 1176), *(_QWORD *)(v74 + 64));
        v76 = (KSPIN_LOCK *)(v75 + 3720);
        v77 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v75 + 3720));
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v78 = *(_QWORD *)(v74 + 64);
          if ( v78 )
          {
            v79 = *(_QWORD *)(v78 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v78 + 880)) & *(_DWORD *)(v78 + 884));
            *(_DWORD *)v79 = 825054788;
            *(_QWORD *)(v79 + 8) = 0LL;
            *(_QWORD *)(v79 + 16) = v67;
            *(_QWORD *)(v79 + 24) = a2;
          }
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            v80 = *(_QWORD *)(v74 + 64);
            if ( v80 )
            {
              v81 = *(_QWORD *)(v80 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v80 + 880)) & *(_DWORD *)(v80 + 884));
              *(_DWORD *)v81 = 841832004;
              *(_QWORD *)(v81 + 8) = 0LL;
              *(_QWORD *)(v81 + 16) = v67;
              *(_QWORD *)(v81 + 24) = 1212442225LL;
            }
          }
        }
        v82 = *(_QWORD *)(v74 + 64);
        if ( !v82 )
          UsbhTrapFatal_Dbg(v74, 0LL);
        if ( *(_DWORD *)v82 != 541218120 )
          UsbhTrapFatal_Dbg(v74, *(_QWORD *)(v74 + 64));
        v83 = *(void (__fastcall **)(_QWORD, __int64, IRP *, __int64))(v82 + 4472);
        if ( v83 )
          v83(*(_QWORD *)(v82 + 4232), v67, a2, 1212442225LL);
        KeReleaseSpinLock(v76, v77);
      }
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v84 = *(_QWORD *)(v4 + 1176);
        if ( v84 )
        {
          v85 = *(_QWORD *)(v84 + 64);
          if ( v85 )
          {
            v86 = *(_QWORD *)(v85 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v85 + 880)) & *(_DWORD *)(v85 + 884));
            *(_DWORD *)v86 = 862349681;
            *(_QWORD *)(v86 + 8) = 0LL;
            *(_QWORD *)(v86 + 16) = a2;
            *(_QWORD *)(v86 + 24) = a1;
          }
        }
      }
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      SSHub = IofCallDriver(DeviceObject, a2);
      v87 = *(_QWORD *)(v4 + 1176);
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( v87 )
        {
          v88 = *(_QWORD *)(v87 + 64);
          if ( v88 )
          {
            v89 = *(_QWORD *)(v88 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v88 + 880)) & *(_DWORD *)(v88 + 884));
            *(_DWORD *)v89 = 1329877109;
            *(_QWORD *)(v89 + 8) = 0LL;
            *(_QWORD *)(v89 + 16) = v10;
            *(_QWORD *)(v89 + 24) = 1364543814LL;
          }
        }
      }
      v90 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( v87 )
        {
          v91 = *(_QWORD *)(v87 + 64);
          if ( v91 )
          {
            v92 = *(_QWORD *)(v91 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v91 + 880)) & *(_DWORD *)(v91 + 884));
            *(_DWORD *)v92 = 1348891236;
            *(_QWORD *)(v92 + 8) = 0LL;
            *(_QWORD *)(v92 + 16) = v10;
            *(_QWORD *)(v92 + 24) = 1364543814LL;
          }
        }
      }
      v93 = *(_QWORD *)(v10 + 64);
      if ( !v93 )
        UsbhTrapFatal_Dbg(v10, 0LL);
      if ( *(_DWORD *)v93 != 1329877064 )
        UsbhTrapFatal_Dbg(v10, *(_QWORD *)(v10 + 64));
      v94 = (_QWORD *)(v93 + 1264);
      v95 = *(_QWORD **)(v93 + 1264);
      if ( v95 == (_QWORD *)(v93 + 1264) )
      {
LABEL_242:
        v129 = *(_DWORD *)(v93 + 1280);
        if ( v129 )
          *(_DWORD *)(v93 + 1280) = v129 - 1;
      }
      else
      {
        while ( 1 )
        {
          v96 = v95 - 1;
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            if ( v87 )
            {
              v97 = *(_QWORD *)(v87 + 64);
              if ( v97 )
              {
                v98 = *(_QWORD *)(v97 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v97 + 880)) & *(_DWORD *)(v97 + 884));
                *(_DWORD *)v98 = 1064591724;
                *(_QWORD *)(v98 + 8) = 0LL;
                *(_QWORD *)(v98 + 16) = v93;
                *(_QWORD *)(v98 + 24) = 1364543814LL;
              }
            }
          }
          if ( *((_DWORD *)v96 + 6) == 1364543814 && (IRP *)v96[5] == a2 )
            break;
          v95 = (_QWORD *)*v95;
          if ( v95 == v94 )
            goto LABEL_242;
        }
        v99 = (_QWORD *)*v95;
        v100 = v95;
        if ( *(_QWORD **)(*v95 + 8LL) != v95 || (v101 = (_QWORD *)v96[2], (_QWORD *)*v101 != v100) )
          __fastfail(3u);
        *v101 = v99;
        v99[1] = v101;
        ExFreePoolWithTag(v96, 0);
      }
      if ( (_QWORD *)*v94 == v94 && !*(_DWORD *)(v93 + 1280) )
        KeSetEvent((PRKEVENT)(v93 + 1288), 0, 0);
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v90);
      return SSHub;
    }
    v61 = *(_QWORD *)(v56 + 1152);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v62 = *(_QWORD *)(v52 + 64);
      if ( v62 )
      {
        v63 = *(_QWORD *)(v62 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v62 + 880)) & *(_DWORD *)(v62 + 884));
        *(_DWORD *)v63 = 724260420;
        *(_QWORD *)(v63 + 8) = 0LL;
        *(_QWORD *)(v63 + 16) = 1212442225LL;
        *(_QWORD *)(v63 + 24) = v61;
      }
    }
    v64 = *(_QWORD *)(v52 + 64);
    if ( !v64 )
      UsbhTrapFatal_Dbg(v52, 0LL);
    if ( *(_DWORD *)v64 != 541218120 )
      UsbhTrapFatal_Dbg(v52, *(_QWORD *)(v52 + 64));
    v65 = *(__int64 (__fastcall **)(_QWORD, __int64, IRP *, __int64))(v64 + 4464);
    if ( v65 )
    {
      v66 = v65(*(_QWORD *)(v64 + 4232), v61, a2, 1212442225LL);
      if ( v66 >= 0 )
      {
        v67 = *(_QWORD *)(v56 + 1152);
LABEL_94:
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          v68 = *(_QWORD *)(v52 + 64);
          if ( v68 )
          {
            v69 = *(_QWORD *)(v68 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v68 + 880)) & *(_DWORD *)(v68 + 884));
            *(_DWORD *)v69 = 841700932;
            *(_QWORD *)(v69 + 16) = v66;
            *(_QWORD *)(v69 + 8) = 0LL;
            *(_QWORD *)(v69 + 24) = v67;
          }
        }
        goto LABEL_97;
      }
    }
    else
    {
      v66 = -1073741822;
    }
    v67 = 0LL;
    goto LABEL_94;
  }
  if ( RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &GUID_D3COLD_SUPPORT_INTERFACE,
         0x10uLL) != 16 )
  {
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v29 = *(_QWORD *)(v4 + 1176);
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 64);
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
          *(_DWORD *)v31 = 879126897;
          *(_QWORD *)(v31 + 8) = 0LL;
          *(_QWORD *)(v31 + 16) = a2;
          *(_QWORD *)(v31 + 24) = a1;
        }
      }
    }
    v32 = *(_QWORD *)(v4 + 1176);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 64);
        if ( v33 )
        {
          v34 = *(_QWORD *)(v33 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
          *(_DWORD *)v34 = 1329877109;
          *(_QWORD *)(v34 + 8) = 0LL;
          *(_QWORD *)(v34 + 16) = v10;
          *(_QWORD *)(v34 + 24) = 1364543814LL;
        }
      }
    }
    v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( v32 )
      {
        v36 = *(_QWORD *)(v32 + 64);
        if ( v36 )
        {
          v37 = *(_QWORD *)(v36 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
          *(_DWORD *)v37 = 1348891236;
          *(_QWORD *)(v37 + 8) = 0LL;
          *(_QWORD *)(v37 + 16) = v10;
          *(_QWORD *)(v37 + 24) = 1364543814LL;
        }
      }
    }
    v38 = *(_QWORD *)(v10 + 64);
    if ( !v38 )
      UsbhTrapFatal_Dbg(v10, 0LL);
    if ( *(_DWORD *)v38 != 1329877064 )
      UsbhTrapFatal_Dbg(v10, *(_QWORD *)(v10 + 64));
    v39 = (_QWORD *)(v38 + 1264);
    v40 = *(_QWORD **)(v38 + 1264);
    if ( v40 == (_QWORD *)(v38 + 1264) )
    {
LABEL_212:
      v124 = *(_DWORD *)(v38 + 1280);
      if ( v124 )
        *(_DWORD *)(v38 + 1280) = v124 - 1;
    }
    else
    {
      while ( 1 )
      {
        v41 = v40 - 1;
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( v32 )
          {
            v42 = *(_QWORD *)(v32 + 64);
            if ( v42 )
            {
              v43 = *(_QWORD *)(v42 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
              *(_DWORD *)v43 = 1064591724;
              *(_QWORD *)(v43 + 8) = 0LL;
              *(_QWORD *)(v43 + 16) = v38;
              *(_QWORD *)(v43 + 24) = 1364543814LL;
            }
          }
        }
        if ( *((_DWORD *)v41 + 6) == 1364543814 && (IRP *)v41[5] == a2 )
          break;
        v40 = (_QWORD *)*v40;
        if ( v40 == v39 )
          goto LABEL_212;
      }
      v44 = (_QWORD *)*v40;
      v45 = v40;
      if ( *(_QWORD **)(*v40 + 8LL) != v40 || (v46 = (_QWORD *)v41[2], (_QWORD *)*v46 != v45) )
        __fastfail(3u);
      *v46 = v44;
      v44[1] = v46;
      ExFreePoolWithTag(v41, 0);
    }
    if ( (_QWORD *)*v39 == v39 && !*(_DWORD *)(v38 + 1280) )
      KeSetEvent((PRKEVENT)(v38 + 1288), 0, 0);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v35);
    SSHub = v133;
    a2->IoStatus.Status = v133;
    IofCompleteRequest(a2, 0);
    return SSHub;
  }
  Log(*(_QWORD *)(v4 + 1176), 256, 1902732853, (__int64)a2, a1);
  if ( CurrentStackLocation->Parameters.CreatePipe.Parameters != (_NAMED_PIPE_CREATE_PARAMETERS *)v4
    && CurrentStackLocation->Parameters.QueryInterface.Size == 72
    && CurrentStackLocation->Parameters.QueryInterface.Version == 1 )
  {
    v120 = CurrentStackLocation->Parameters.Read.ByteOffset;
    if ( a2->IoStatus.Status )
    {
      *(_DWORD *)v120.QuadPart = 65608;
      goto LABEL_180;
    }
    if ( *(_WORD *)v120.QuadPart == 72 && *(_WORD *)(v120.QuadPart + 2) == 1 )
    {
      *(_OWORD *)(v4 + 2960) = *(_OWORD *)v120.QuadPart;
      *(_OWORD *)(v4 + 2976) = *(_OWORD *)(v120.QuadPart + 16);
      *(_OWORD *)(v4 + 2992) = *(_OWORD *)(v120.QuadPart + 32);
      *(_OWORD *)(v4 + 3008) = *(_OWORD *)(v120.QuadPart + 48);
      *(_QWORD *)(v4 + 3024) = *(_QWORD *)(v120.QuadPart + 64);
LABEL_180:
      *(_QWORD *)(v120.QuadPart + 8) = v4;
      *(_QWORD *)(v120.QuadPart + 32) = UsbhD3ColdSupportInterfaceSetD3ColdSupport;
      *(_QWORD *)(v120.QuadPart + 40) = UsbhD3ColdSupportInterfaceGetIdleWakeInfo;
      *(_QWORD *)(v120.QuadPart + 24) = UsbhD3ColdSupportInterfaceDereference;
      *(_QWORD *)(v120.QuadPart + 16) = UsbhD3ColdSupportInterfaceReference;
      *(_QWORD *)(v120.QuadPart + 48) = UsbhD3ColdSupportInterfaceGetD3ColdCapability;
      *(_QWORD *)(v120.QuadPart + 56) = UsbhD3ColdSupportInterfaceGetD3ColdBusDriverSupport;
      *(_QWORD *)(v120.QuadPart + 64) = UsbhD3ColdSupportInterfaceGetLastTransitionStatus;
      UsbhUnlatchPdo(*(_QWORD *)(v4 + 1176), v10, a2, 1364543814LL);
      a2->IoStatus.Status = 0;
      IofCompleteRequest(a2, 0);
      return 0LL;
    }
    UsbhUnlatchPdo(*(_QWORD *)(v4 + 1176), v10, a2, 1364543814LL);
    a2->IoStatus.Status = -1073741637;
    IofCompleteRequest(a2, 0);
    return 3221225659LL;
  }
  else
  {
    UsbhUnlatchPdo(*(_QWORD *)(v4 + 1176), v10, a2, 1364543814LL);
    v122 = a2->IoStatus.Status;
    IofCompleteRequest(a2, 0);
    return v122;
  }
}
