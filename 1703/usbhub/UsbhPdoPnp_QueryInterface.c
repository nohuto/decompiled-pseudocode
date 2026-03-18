/*
 * XREFs of UsbhPdoPnp_QueryInterface @ 0x1C00117A0
 * Callers:
 *     <none>
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     UsbhDerefPdo @ 0x1C000B1A0 (UsbhDerefPdo.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0024E70 (UsbhRefPdoDeviceHandle.c)
 *     UsbhBusifGetLocationInterface @ 0x1C0027ACC (UsbhBusifGetLocationInterface.c)
 *     UsbhBusifGetSSHub @ 0x1C002816C (UsbhBusifGetSSHub.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryInterface(__int64 a1, IRP *a2)
{
  __int64 v4; // rbx
  __int16 v5; // ax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int Status; // r13d
  unsigned __int16 v11; // si
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  KIRQL v15; // al
  char v16; // r9
  KIRQL v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  _DWORD *v30; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 v32; // rcx
  SIZE_T v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdi
  KIRQL v36; // bl
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r13
  __int64 v42; // rax
  KSPIN_LOCK *v43; // r12
  KIRQL v44; // al
  __int64 v45; // rsi
  int v46; // r9d
  unsigned int v47; // r8d
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rsi
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdi
  __int64 v56; // rax
  KSPIN_LOCK *v57; // r12
  KIRQL v58; // r13
  int v59; // r9d
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // r8
  __int64 v63; // rdx
  NTSTATUS v64; // eax
  __int64 v65; // rdi
  KIRQL v66; // si
  __int64 v67; // r14
  __int64 *v68; // rbx
  __int64 *v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 *v72; // rdx
  __int64 **v73; // rcx
  _LARGE_INTEGER ByteOffset; // rax
  __int64 v75; // rdx
  unsigned int SSHub; // eax
  unsigned int v77; // ebx
  __int64 v78; // rax
  int v79; // eax
  int v80; // r10d
  int v81; // r10d
  int v82; // eax
  int v83; // [rsp+48h] [rbp-50h]
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+50h] [rbp-48h]
  KIRQL v85; // [rsp+A0h] [rbp+8h]
  unsigned int v86; // [rsp+B0h] [rbp+18h]
  __int64 v87; // [rsp+B8h] [rbp+20h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v5 = UsbhLogMask;
  v6 = *(_QWORD *)(v4 + 1176);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 812018033;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = a2;
        *(_QWORD *)(v8 + 24) = a1;
        v5 = UsbhLogMask;
      }
    }
  }
  v9 = *(_QWORD *)(v4 + 1176);
  Status = a2->IoStatus.Status;
  v86 = Status;
  if ( !v9 )
    goto LABEL_45;
  v11 = *(_WORD *)(v4 + 1420);
  v12 = 0LL;
  if ( (v5 & 0x100) != 0 )
  {
    v13 = *(_QWORD *)(v9 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 1329877100;
      *(_QWORD *)(v14 + 16) = v11;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 24) = 1364543814LL;
    }
  }
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  v16 = UsbhLogMask;
  v17 = v15;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v18 = *(_QWORD *)(v9 + 64);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
      *(_DWORD *)v19 = 1413771367;
      *(_QWORD *)(v19 + 16) = v11;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 24) = 0LL;
      v16 = UsbhLogMask;
    }
  }
  if ( v11 )
  {
    v20 = *(_QWORD *)(v9 + 64);
    if ( !v20 )
      UsbhTrapFatal_Dbg(v9, 0LL);
    if ( *(_DWORD *)v20 != 541218120 )
      UsbhTrapFatal_Dbg(v9, v20);
    if ( v11 <= *(unsigned __int8 *)(v20 + 2938) )
    {
      v21 = *(_QWORD *)(v20 + 3056);
      if ( v21 )
      {
        v22 = v21 + 2928LL * (v11 - 1);
        if ( (v16 & 8) != 0 )
        {
          v23 = *(_QWORD *)(v20 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
          *(_DWORD *)v23 = 1044672615;
          *(_QWORD *)(v23 + 16) = v11;
          *(_QWORD *)(v23 + 8) = 0LL;
          *(_QWORD *)(v23 + 24) = v22;
        }
        if ( v22 )
        {
          v12 = *(_QWORD *)(v22 + 392);
          if ( v12 )
          {
            v24 = *(_QWORD *)(v12 + 64);
            if ( !v24 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v22 + 392), 0LL);
            if ( *(_DWORD *)v24 != 1329877064 )
              UsbhTrapFatal_Dbg(*(_QWORD *)(v22 + 392), *(_QWORD *)(v12 + 64));
            PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x30uLL, 0x42554855u);
            if ( PoolWithTag )
            {
              *PoolWithTag = 0LL;
              PoolWithTag[1] = 0LL;
              PoolWithTag[2] = 0LL;
              PoolWithTag[3] = 0LL;
              *(_DWORD *)PoolWithTag = 1668571500;
              PoolWithTag[4] = v12;
              *((_DWORD *)PoolWithTag + 6) = 1364543814;
              PoolWithTag[5] = a2;
              v26 = PoolWithTag + 1;
              v27 = *(_QWORD **)(v24 + 1272);
              if ( *v27 != v24 + 1264 )
                __fastfail(3u);
              *v26 = v24 + 1264;
              v26[1] = v27;
              *v27 = v26;
              *(_QWORD *)(v24 + 1272) = v26;
            }
            else
            {
              ++*(_DWORD *)(v24 + 1280);
            }
          }
        }
      }
    }
  }
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v17);
  if ( !v12 )
    goto LABEL_45;
  v28 = *(_QWORD *)(v4 + 1176);
  if ( !v28 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v29 = *(_QWORD *)(v28 + 64);
  if ( !v29 )
    UsbhTrapFatal_Dbg(v28, 0LL);
  if ( *(_DWORD *)v29 != 541218120 )
    UsbhTrapFatal_Dbg(v28, *(_QWORD *)(v28 + 64));
  DeviceObject = *(struct _DEVICE_OBJECT **)(v29 + 1216);
  if ( !DeviceObject )
    goto LABEL_143;
  v30 = *(_DWORD **)(a1 + 64);
  if ( !v30 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v30 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  if ( v30[281] != 3 )
  {
LABEL_143:
    Log(v28, 256, 1902522657, (_DWORD)a2, a1);
    goto LABEL_101;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_SS_GUID,
         0x10uLL) == 16 )
  {
    Log(*(_QWORD *)(v4 + 1176), 256, 1902728019, (_DWORD)a2, a1);
    SSHub = UsbhBusifGetSSHub(*(_QWORD *)(v4 + 1176), v75, a2);
LABEL_100:
    Status = SSHub;
LABEL_101:
    UsbhUnlatchPdo(*(_QWORD *)(v4 + 1176), v12, a2, 1364543814LL);
    goto LABEL_45;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    SSHub = UsbhBusifGetLocationInterface(v32, a1, a2);
    goto LABEL_100;
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
    v38 = *(_QWORD *)(v4 + 1176);
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 64);
        if ( v39 )
        {
          v40 = *(_QWORD *)(v39 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
          *(_DWORD *)v40 = 845572465;
          *(_QWORD *)(v40 + 8) = 0LL;
          *(_QWORD *)(v40 + 16) = a2;
          *(_QWORD *)(v40 + 24) = a1;
        }
      }
    }
    v41 = *(_QWORD *)(v4 + 1176);
    if ( !v41 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v42 = *(_QWORD *)(v41 + 64);
    if ( !v42 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(v4 + 1176), 0LL);
    if ( *(_DWORD *)v42 != 541218120 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(v4 + 1176), *(_QWORD *)(v41 + 64));
    v43 = (KSPIN_LOCK *)(v42 + 3720);
    v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v42 + 3720));
    v45 = *(_QWORD *)(a1 + 64);
    v85 = v44;
    if ( !v45 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v45 != 1329877064 )
      UsbhTrapFatal_Dbg(a1, v45);
    Log(v41, 256, 1146497841, a1, *(int *)(v45 + 1144));
    v47 = *(_DWORD *)(v45 + 1144);
    if ( v47 != 2 )
    {
      if ( v47 <= 1 )
        Log(v41, 256, 1146497825, v46, *(int *)(v45 + 1144));
      v50 = 0LL;
LABEL_61:
      KeReleaseSpinLock(v43, v85);
      if ( !v50 )
      {
        v78 = PdoExt(a1);
        v79 = UsbhSyncResetDeviceInternal(*(PDEVICE_OBJECT *)(v4 + 1176), v78 + 944, a1);
        Log(*(_QWORD *)(v4 + 1176), 256, 1902732882, (_DWORD)a2, v79);
        if ( (v80 & 0xC0000000) == 0xC0000000 )
        {
          if ( !Usb_Disconnected(v80) )
          {
            LOBYTE(v83) = 0;
            UsbhException(
              *(_QWORD *)(v4 + 1176),
              *(unsigned __int16 *)(v4 + 1420),
              121,
              0,
              0,
              v81,
              -1,
              usbfile_pdo_c,
              535,
              v83);
          }
          a2->IoStatus.Status = v86;
          IofCompleteRequest(a2, 0);
          UsbhUnlatchPdo(*(_QWORD *)(v4 + 1176), v12, a2, 1364543814LL);
          return v86;
        }
        v50 = UsbhRefPdoDeviceHandle(*(_QWORD *)(v4 + 1176), a1, a2, 1212442225LL);
        Log(*(_QWORD *)(v4 + 1176), 256, 1902732872, *(_QWORD *)(v4 + 1152), a1);
        CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)v50;
      }
      v51 = *(_QWORD *)(v4 + 1152);
      v52 = *(_QWORD *)(v4 + 1176);
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( v52 )
        {
          v53 = *(_QWORD *)(v52 + 64);
          if ( v53 )
          {
            v54 = *(_QWORD *)(v53 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v53 + 880)) & *(_DWORD *)(v53 + 884));
            *(_DWORD *)v54 = 1214671217;
            *(_QWORD *)(v54 + 8) = 0LL;
            *(_QWORD *)(v54 + 16) = v51;
            *(_QWORD *)(v54 + 24) = a1;
          }
        }
      }
      CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)v50;
      if ( v50 )
      {
        v55 = *(_QWORD *)(v4 + 1176);
        if ( !v55 )
          UsbhTrapFatal_Dbg(0LL, 0LL);
        v56 = *(_QWORD *)(v55 + 64);
        if ( !v56 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(v4 + 1176), 0LL);
        if ( *(_DWORD *)v56 != 541218120 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(v4 + 1176), *(_QWORD *)(v55 + 64));
        v57 = (KSPIN_LOCK *)(v56 + 3720);
        v58 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v56 + 3720));
        Log(v55, 256, 1146498353, v50, (__int64)a2);
        Log(v55, 256, 1146498354, v59, 1212442225LL);
        v60 = FdoExt(v55);
        if ( *(_QWORD *)(v60 + 4472) )
          (*(void (__fastcall **)(_QWORD, __int64, IRP *, __int64))(v60 + 4472))(
            *(_QWORD *)(v60 + 4232),
            v50,
            a2,
            1212442225LL);
        KeReleaseSpinLock(v57, v58);
      }
      v61 = *(_QWORD *)(v4 + 1176);
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( v61 )
        {
          v62 = *(_QWORD *)(v61 + 64);
          if ( v62 )
          {
            v63 = *(_QWORD *)(v62 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v62 + 880)) & *(_DWORD *)(v62 + 884));
            *(_DWORD *)v63 = 862349681;
            *(_QWORD *)(v63 + 8) = 0LL;
            *(_QWORD *)(v63 + 16) = a2;
            *(_QWORD *)(v63 + 24) = a1;
          }
        }
      }
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v64 = IofCallDriver(DeviceObject, a2);
      v65 = *(_QWORD *)(v4 + 1176);
      Status = v64;
      Log(v65, 256, 1968194639, v12, 1364543814LL);
      v66 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      Log(v65, 256, 1685218896, v12, 1364543814LL);
      v67 = PdoExt(v12);
      v68 = (__int64 *)(v67 + 1264);
      v69 = *(__int64 **)(v67 + 1264);
      if ( v69 == (__int64 *)(v67 + 1264) )
      {
LABEL_139:
        v82 = *(_DWORD *)(v67 + 1280);
        if ( v82 )
          *(_DWORD *)(v67 + 1280) = v82 - 1;
      }
      else
      {
        while ( 1 )
        {
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            if ( v65 )
            {
              v70 = *(_QWORD *)(v65 + 64);
              if ( v70 )
              {
                v71 = *(_QWORD *)(v70 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v70 + 880)) & *(_DWORD *)(v70 + 884));
                *(_DWORD *)v71 = 1064591724;
                *(_QWORD *)(v71 + 8) = 0LL;
                *(_QWORD *)(v71 + 16) = v67;
                *(_QWORD *)(v71 + 24) = 1364543814LL;
              }
            }
          }
          if ( *((_DWORD *)v69 + 4) == 1364543814 && (IRP *)v69[4] == a2 )
            break;
          v69 = (__int64 *)*v69;
          if ( v69 == v68 )
            goto LABEL_139;
        }
        v72 = (__int64 *)*v69;
        v73 = (__int64 **)v69[1];
        if ( *(__int64 **)(*v69 + 8) != v69 || *v73 != v69 )
          __fastfail(3u);
        *v73 = v72;
        v72[1] = (__int64)v73;
        ExFreePoolWithTag(v69 - 1, 0);
      }
      if ( (__int64 *)*v68 == v68 && !*(_DWORD *)(v67 + 1280) )
        KeSetEvent((PRKEVENT)(v67 + 1288), 0, 0);
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v66);
      return Status;
    }
    v87 = *(_QWORD *)(v45 + 1152);
    Log(v41, 256, 1146497835, 1212442225, v87);
    v48 = FdoExt(v41);
    if ( *(_QWORD *)(v48 + 4464) )
    {
      v49 = (*(__int64 (__fastcall **)(_QWORD, __int64, IRP *, __int64))(v48 + 4464))(
              *(_QWORD *)(v48 + 4232),
              v87,
              a2,
              1212442225LL);
      if ( v49 >= 0 )
      {
        v50 = *(_QWORD *)(v45 + 1152);
LABEL_60:
        Log(v41, 256, 1146497842, v49, v50);
        goto LABEL_61;
      }
    }
    else
    {
      v49 = -1073741822;
    }
    v50 = 0LL;
    goto LABEL_60;
  }
  v33 = RtlCompareMemory(
          CurrentStackLocation->Parameters.Create.SecurityContext,
          &GUID_D3COLD_SUPPORT_INTERFACE,
          0x10uLL);
  v34 = *(_QWORD *)(v4 + 1176);
  if ( v33 != 16 )
  {
    Log(v34, 256, 1902732852, (_DWORD)a2, a1);
    v35 = *(_QWORD *)(v4 + 1176);
    Log(v35, 256, 1968194639, v12, 1364543814LL);
    v36 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    UsbhDerefPdo(v35, v12, (__int64)a2, 0x51554946u);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v36);
LABEL_45:
    a2->IoStatus.Status = Status;
    IofCompleteRequest(a2, 0);
    return Status;
  }
  Log(v34, 256, 1902732853, (_DWORD)a2, a1);
  if ( CurrentStackLocation->Parameters.CreatePipe.Parameters != (_NAMED_PIPE_CREATE_PARAMETERS *)v4
    && CurrentStackLocation->Parameters.QueryInterface.Size == 72
    && CurrentStackLocation->Parameters.QueryInterface.Version == 1 )
  {
    ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
    if ( a2->IoStatus.Status )
    {
      *(_DWORD *)ByteOffset.QuadPart = 65608;
      goto LABEL_98;
    }
    if ( *(_WORD *)ByteOffset.QuadPart == 72 && *(_WORD *)(ByteOffset.QuadPart + 2) == 1 )
    {
      *(_OWORD *)(v4 + 2944) = *(_OWORD *)ByteOffset.QuadPart;
      *(_OWORD *)(v4 + 2960) = *(_OWORD *)(ByteOffset.QuadPart + 16);
      *(_OWORD *)(v4 + 2976) = *(_OWORD *)(ByteOffset.QuadPart + 32);
      *(_OWORD *)(v4 + 2992) = *(_OWORD *)(ByteOffset.QuadPart + 48);
      *(_QWORD *)(v4 + 3008) = *(_QWORD *)(ByteOffset.QuadPart + 64);
LABEL_98:
      *(_QWORD *)(ByteOffset.QuadPart + 8) = v4;
      *(_QWORD *)(ByteOffset.QuadPart + 32) = UsbhD3ColdSupportInterfaceSetD3ColdSupport;
      *(_QWORD *)(ByteOffset.QuadPart + 40) = UsbhD3ColdSupportInterfaceGetIdleWakeInfo;
      *(_QWORD *)(ByteOffset.QuadPart + 24) = UsbhD3ColdSupportInterfaceDereference;
      *(_QWORD *)(ByteOffset.QuadPart + 16) = UsbhD3ColdSupportInterfaceReference;
      *(_QWORD *)(ByteOffset.QuadPart + 48) = UsbhD3ColdSupportInterfaceGetD3ColdCapability;
      *(_QWORD *)(ByteOffset.QuadPart + 56) = UsbhD3ColdSupportInterfaceGetD3ColdBusDriverSupport;
      *(_QWORD *)(ByteOffset.QuadPart + 64) = UsbhD3ColdSupportInterfaceGetLastTransitionStatus;
      UsbhUnlatchPdo(*(_QWORD *)(v4 + 1176), v12, a2, 1364543814LL);
      a2->IoStatus.Status = 0;
      IofCompleteRequest(a2, 0);
      return 0LL;
    }
    UsbhUnlatchPdo(*(_QWORD *)(v4 + 1176), v12, a2, 1364543814LL);
    a2->IoStatus.Status = -1073741637;
    IofCompleteRequest(a2, 0);
    return 3221225659LL;
  }
  else
  {
    UsbhUnlatchPdo(*(_QWORD *)(v4 + 1176), v12, a2, 1364543814LL);
    v77 = a2->IoStatus.Status;
    IofCompleteRequest(a2, 0);
    return v77;
  }
}
