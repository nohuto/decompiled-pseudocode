/*
 * XREFs of UsbhFdoReturnPortStatus @ 0x1C0010FC0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0010A80 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     Usbh_SSH_HubPendingResume @ 0x1C0002530 (Usbh_SSH_HubPendingResume.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C0004944 (UsbhReleaseFdoPwrLock.c)
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     UsbhQueryPortState @ 0x1C0011680 (UsbhQueryPortState.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhUnlockSSH @ 0x1C0026884 (UsbhUnlockSSH.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     USBHUB_TriggerCallBacks @ 0x1C004B944 (USBHUB_TriggerCallBacks.c)
 *     Usbh_SSH_HubPendingResumeAfterSuspend @ 0x1C0057DE8 (Usbh_SSH_HubPendingResumeAfterSuspend.c)
 */

__int64 __fastcall UsbhFdoReturnPortStatus(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  _DWORD *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  _DWORD *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  _DWORD *v15; // rax
  int v16; // edx
  __int64 v17; // rdx
  _DWORD *v18; // rax
  bool v19; // zf
  KIRQL v20; // dl
  __int64 v21; // rbp
  __int64 v22; // rcx
  __int64 v23; // rdi
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rdx
  _DWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // edi
  __int64 PortState; // rbp
  __int64 v33; // rcx
  __int64 v34; // rdx
  char v35; // al
  __int64 SecurityQos_low; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdi
  _QWORD *v40; // rbx
  KIRQL v41; // r15
  _QWORD *v42; // rcx
  _QWORD *v43; // rdx
  _QWORD *v44; // r8
  __int64 v46; // rcx
  __int64 v47; // rdx
  int v48; // eax
  unsigned __int16 v50; // [rsp+98h] [rbp+20h]
  char v51; // [rsp+9Ah] [rbp+22h]

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( !a2 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_DWORD **)(a2 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *v7 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1045647431;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a3;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
  }
  if ( KeGetCurrentIrql() )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return 3221225485LL;
  }
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext )
  {
    a3->IoStatus.Status = -1073741811;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1196446497, (_DWORD)a3, 0LL);
    return 3221225485LL;
  }
  LODWORD(SecurityContext->SecurityQos) = 0;
  v11 = *(_DWORD **)(a2 + 64);
  if ( !v11 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *v11 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v12 = (__int64)(v11 + 236);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v13 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  *(_BYTE *)(v13 + 5064) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 5056));
  *(_DWORD *)(v12 + 40) = *(_DWORD *)(v13 + 4172);
  *(_DWORD *)(v12 + 44) = 11;
  *(_DWORD *)(v12 + 32) = 844055622;
  *(_DWORD *)(v12 + 36) = 1953516355;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  *(_QWORD *)(v13 + 1344) = v12;
  v14 = *(_QWORD *)(v12 + 8);
  if ( !v14 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v15 = *(_DWORD **)(v14 + 64);
  if ( !v15 )
    UsbhTrapFatal_Dbg(v14, 0LL);
  if ( *v15 != 541218120 )
    UsbhTrapFatal_Dbg(v14, *(_QWORD *)(v14 + 64));
  v16 = v15[1043];
  if ( v16 == 213 || v16 == 212 )
  {
    UsbhReleaseFdoPwrLock(a1, v12);
    Log(a1, 8, 1196450936, (_DWORD)a3, 0LL);
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return 3221225486LL;
  }
  v17 = *(_QWORD *)(a1 + 64);
  if ( !v17 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v17 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v17);
  *(_DWORD *)(v12 + 32) = 1734964085;
  *(_QWORD *)(v17 + 1344) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v17 + 5056), *(_BYTE *)(v17 + 5064));
  *(_BYTE *)(v12 + 132) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v12 + 136) = 1;
  *(_DWORD *)(v12 + 88) = 2018460752;
  *(_DWORD *)(v12 + 92) = 16;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v12;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  v18 = *(_DWORD **)(a2 + 64);
  if ( !v18 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *v18 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v19 = v18[281] == 3;
  *(_DWORD *)(v12 + 136) = 0;
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  *(_DWORD *)(v12 + 88) = 1734964085;
  v20 = *(_BYTE *)(v12 + 132);
  if ( !v19 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v20);
    a3->IoStatus.Status = -1073741810;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1196446584, (_DWORD)a3, 0LL);
    return 3221225486LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v20);
  v21 = *(_QWORD *)(v12 + 8);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids,
      5);
  v22 = *(_QWORD *)(v12 + 8);
  if ( !v22 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v23 = *(_QWORD *)(v22 + 64);
  if ( !v23 )
    UsbhTrapFatal_Dbg(v22, 0LL);
  if ( *(_DWORD *)v23 != 541218120 )
    UsbhTrapFatal_Dbg(v22, *(_QWORD *)(v22 + 64));
  KeWaitForSingleObject((PVOID)(v23 + 3128), Executive, 0, 0, 0LL);
  *(_QWORD *)(v23 + 3192) = v12;
  *(_DWORD *)(v12 + 120) = 2018005843;
  *(_DWORD *)(v12 + 124) = 5;
  *(_QWORD *)(v12 + 24) = KeGetCurrentThread();
  v24 = *(_DWORD *)(v23 + 3456);
  v25 = 32LL * (v24 & 7);
  if ( *(_DWORD *)(v25 + v23 + 3460) != 5 || *(_DWORD *)(v25 + v23 + 3464) != *(_DWORD *)(v23 + 3124) )
  {
    v46 = ((_BYTE)v24 + 1) & 7;
    *(_DWORD *)(v23 + 3456) = v46;
    v46 *= 32LL;
    *(_DWORD *)(v46 + v23 + 3460) = 5;
    *(_DWORD *)(v46 + v23 + 3464) = *(_DWORD *)(v23 + 3124);
  }
  v26 = *(unsigned int *)(v23 + 3124);
  switch ( (_DWORD)v26 )
  {
    case 1:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          11,
          (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
      if ( !v21 )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v27 = *(_DWORD **)(v21 + 64);
      if ( !v27 )
        UsbhTrapFatal_Dbg(v21, 0LL);
      if ( *v27 != 541218120 )
        UsbhTrapFatal_Dbg(v21, v27);
      v28 = *(_QWORD *)(v12 + 8);
      if ( !v28 )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v29 = *(_QWORD *)(v28 + 64);
      if ( !v29 )
        UsbhTrapFatal_Dbg(*(_QWORD *)(v12 + 8), 0LL);
      if ( *(_DWORD *)v29 != 541218120 )
        UsbhTrapFatal_Dbg(*(_QWORD *)(v12 + 8), *(_QWORD *)(v28 + 64));
      v30 = *(unsigned int *)(v29 + 3456);
      *(_DWORD *)(v29 + 3124) = 1;
      *(_DWORD *)(32 * v30 + v29 + 3468) = 1;
      *(_DWORD *)(v12 + 120) = 1734964085;
      *(_QWORD *)(v29 + 3192) = 0LL;
      KeReleaseSemaphore((PRKSEMAPHORE)(v29 + 3128), 16, 1, 0);
      v31 = 0;
      goto LABEL_42;
    case 2:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          12,
          (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
      FdoExt(v21);
      v47 = 2LL;
      goto LABEL_81;
    case 3:
      v31 = Usbh_SSH_HubPendingResumeAfterSuspend(v21, 5LL, v12);
      goto LABEL_42;
    case 4:
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          14,
          (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
      v47 = 4LL;
LABEL_81:
      UsbhUnlockSSH(v12, v47);
      v31 = -1073741823;
      goto LABEL_42;
  }
  if ( (_DWORD)v26 != 5 )
  {
    if ( (_DWORD)v26 != 6 )
    {
      v31 = -1073741823;
      UsbhUnlockSSH(v12, v26);
      goto LABEL_42;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        16,
        (__int64)&WPP_88bed6ffd18b3ed12a317000c6bd0557_Traceguids);
    FdoExt(v21);
    v47 = 6LL;
    goto LABEL_81;
  }
  v31 = Usbh_SSH_HubPendingResume(v21, 5, v12);
LABEL_42:
  if ( (v31 & 0xC0000000) == 0xC0000000 )
  {
    LODWORD(SecurityContext->SecurityQos) |= 3u;
    LODWORD(PortState) = 0;
  }
  else
  {
    PortState = (int)UsbhQueryPortState(a1);
    if ( (UsbhLogMask & 8) != 0 && (v33 = *(_QWORD *)(a1 + 64)) != 0 )
    {
      v34 = *(_QWORD *)(v33 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
      *(_DWORD *)v34 = 861098055;
      v35 = v50;
      *(_QWORD *)(v34 + 16) = v50;
      *(_QWORD *)(v34 + 8) = 0LL;
      *(_QWORD *)(v34 + 24) = PortState;
    }
    else
    {
      v35 = v50;
    }
    if ( (int)PortState < 0 )
      goto LABEL_120;
    if ( (v35 & 1) != 0 )
      LODWORD(SecurityContext->SecurityQos) |= 2u;
    else
      LODWORD(PortState) = -1073741810;
    if ( (v35 & 2) != 0 )
      LODWORD(SecurityContext->SecurityQos) |= 1u;
    if ( v7[594] == 2 )
      LODWORD(SecurityContext->SecurityQos) &= ~1u;
    if ( (v51 & 1) != 0 )
LABEL_120:
      LODWORD(PortState) = -1073741810;
  }
  SecurityQos_low = LODWORD(SecurityContext->SecurityQos);
  if ( (UsbhLogMask & 8) != 0 )
  {
    v37 = *(_QWORD *)(a1 + 64);
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
      *(_DWORD *)v38 = 877875271;
      *(_QWORD *)(v38 + 24) = (int)PortState;
      *(_QWORD *)(v38 + 8) = 0LL;
      *(_QWORD *)(v38 + 16) = SecurityQos_low;
    }
  }
  a3->IoStatus.Status = PortState;
  IofCompleteRequest(a3, 0);
  v39 = *(_QWORD *)(a2 + 64);
  if ( !v39 )
    UsbhTrapFatal_Dbg(a2, 0LL);
  if ( *(_DWORD *)v39 != 1329877064 )
    UsbhTrapFatal_Dbg(a2, *(_QWORD *)(a2 + 64));
  v40 = (_QWORD *)(v39 + 1216);
  v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v39 + 1208));
  if ( (_QWORD *)*v40 == v40 || (v42 = (_QWORD *)*v40) == 0LL || v42 == v40 )
  {
LABEL_124:
    v48 = *(_DWORD *)(v39 + 1256);
    if ( !v48 )
    {
      USBHUB_TriggerCallBacks(a2);
      KeBugCheckEx(0xFEu, 8uLL, 4uLL, a2, (ULONG_PTR)a3);
    }
    *(_DWORD *)(v39 + 1256) = v48 - 1;
  }
  else
  {
    while ( (IRP *)v42[2] != a3 )
    {
      v42 = (_QWORD *)*v42;
      if ( v42 == v40 )
        goto LABEL_124;
    }
    v43 = (_QWORD *)*v42;
    if ( *(_QWORD **)(*v42 + 8LL) != v42 || (v44 = (_QWORD *)v42[1], (_QWORD *)*v44 != v42) )
      __fastfail(3u);
    *v44 = v43;
    v43[1] = v44;
    ExFreePoolWithTag(v42 - 1, 0);
  }
  if ( (_QWORD *)*v40 != v40 || *(_DWORD *)(v39 + 1256) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v39 + 1208), v41);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v39 + 1208), v41);
    KeSetEvent((PRKEVENT)(v39 + 1232), 0, 0);
  }
  return (unsigned int)PortState;
}
