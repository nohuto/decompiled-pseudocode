/*
 * XREFs of UsbhFdoSetPowerDx_Action @ 0x1C0001CA0
 * Callers:
 *     UsbhFdoDevicePowerState @ 0x1C00049E4 (UsbhFdoDevicePowerState.c)
 * Callees:
 *     UsbhCompletePdoWakeIrp @ 0x1C00018C8 (UsbhCompletePdoWakeIrp.c)
 *     UsbhSyncBusPause @ 0x1C0001BC0 (UsbhSyncBusPause.c)
 *     UsbdHubDisarmBusForWake @ 0x1C0001C48 (UsbdHubDisarmBusForWake.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C00034D0 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C0005F28 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C0005F78 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C0009330 (UsbhDispatch_HardResetEvent.c)
 *     UsbhDispatch_BusEvent @ 0x1C000A910 (UsbhDispatch_BusEvent.c)
 *     UsbhRefPdo @ 0x1C000B0C0 (UsbhRefPdo.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhArmHubForWakeDetect @ 0x1C0015D58 (UsbhArmHubForWakeDetect.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C001A5DC (UsbhLatchPdo.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 *     UsbdHubArmBusForWake @ 0x1C0045954 (UsbdHubArmBusForWake.c)
 *     UsbhArmHubWakeOnConnect @ 0x1C00459C8 (UsbhArmHubWakeOnConnect.c)
 *     UsbhPdoArmedForWake @ 0x1C0046320 (UsbhPdoArmedForWake.c)
 */

__int64 __fastcall UsbhFdoSetPowerDx_Action(PDEVICE_OBJECT DeviceObject, __int64 a2, IRP *a3)
{
  IRP *v3; // r13
  int v6; // r12d
  int v7; // ebp
  int v8; // r15d
  char v9; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v11; // r10
  unsigned int LowPart; // ecx
  unsigned int v13; // ecx
  unsigned __int16 j; // bx
  unsigned __int8 *DeviceExtension; // rdx
  __int64 v16; // rbp
  KIRQL v17; // al
  KIRQL v18; // r15
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r10
  int v23; // r9d
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v27; // rsi
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  int v31; // ebx
  unsigned int v32; // r8d
  unsigned __int16 i; // r13
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // [rsp+88h] [rbp+10h]
  __int64 v38; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v36 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 16, 1349731448, a2, (__int64)v3);
  CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
  v38 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 64) = v3;
  Log((_DWORD)DeviceObject, 8, 1381192816, 0, 0LL);
  UsbhDispatch_HardResetEvent(DeviceObject, v11, 10LL);
  UsbhSyncBusPause((__int64)DeviceObject, v38, 3);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  *(_DWORD *)(a2 + 28) = LowPart;
  v13 = LowPart - 3;
  if ( !v13 )
  {
    *(_DWORD *)(v36 + 4216) = *(_DWORD *)(a2 + 88);
    Log((_DWORD)DeviceObject, 16, 1349280818, 0, (__int64)v3);
    v31 = v30 + 1;
    if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) )
    {
      if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == v31 )
      {
        v7 = v30 + 1;
      }
      else
      {
        v32 = *(&WPP_MAIN_CB.AlignmentRequirement + 1) - v31 - v31;
        if ( v32 && v32 == v31 )
          v7 = v31 & HIBYTE(*(_DWORD *)(v36 + 2560));
      }
    }
    for ( i = v30 + 1; i <= *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938); ++i )
    {
      v34 = UsbhLatchPdo(DeviceObject, i, a3, 1180976178LL);
      v35 = v34;
      if ( v34 )
      {
        ++v8;
        if ( *(_BYTE *)(PdoExt(v34) + 2716) )
          v9 = v31;
        if ( (unsigned __int8)UsbhPdoArmedForWake(v35) )
        {
          UsbhUnlatchPdo(DeviceObject, v35, a3, 1180976178LL);
          v6 = v31;
          if ( !*(&WPP_MAIN_CB.AlignmentRequirement + 1) )
            v7 = v31;
        }
        else
        {
          UsbhUnlatchPdo(DeviceObject, v35, a3, 1180976178LL);
        }
      }
    }
    if ( v9 && (((unsigned __int8)*(_DWORD *)(v36 + 2560) & (unsigned __int8)v31) != 0 || v8 == v31) || v7 )
    {
      UsbhArmHubWakeOnConnect(DeviceObject);
    }
    else
    {
      UsbhDisarmHubWakeOnConnect(DeviceObject);
      if ( !v6 )
      {
        UsbhDisarmHubForWakeDetect(DeviceObject);
        UsbdHubDisarmBusForWake((__int64)DeviceObject);
LABEL_52:
        v3 = a3;
        goto LABEL_18;
      }
    }
    UsbhArmHubForWakeDetect(DeviceObject);
    UsbdHubArmBusForWake(DeviceObject);
    goto LABEL_52;
  }
  if ( v13 == 1 )
  {
    *(_DWORD *)(v36 + 4216) = 0;
    Log((_DWORD)DeviceObject, 16, 1349280819, 0, (__int64)v3);
    UsbhDisarmHubWakeOnConnect(DeviceObject);
    UsbhDisarmHubForWakeDetect(DeviceObject);
    UsbdHubDisarmBusForWake((__int64)DeviceObject);
    for ( j = 1; ; ++j )
    {
      if ( !DeviceObject )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !DeviceExtension )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL);
      if ( *(_DWORD *)DeviceExtension != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
      if ( j > DeviceExtension[2938] )
        break;
      v16 = 0LL;
      Log((_DWORD)DeviceObject, 256, 1817199695, j, 1180976179LL);
      v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      v18 = v17;
      Log((_DWORD)DeviceObject, 8, 1735410772, j, 0LL);
      if ( j )
      {
        v19 = DeviceObject->DeviceExtension;
        if ( !v19 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL);
        if ( *(_DWORD *)v19 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, DeviceObject->DeviceExtension);
        if ( j <= *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938) )
        {
          v20 = v19[382];
          if ( v20 )
          {
            Log((_DWORD)DeviceObject, 8, 1735410750, j, v20 + 2928LL * (j - 1));
            if ( v22 )
            {
              v16 = *(_QWORD *)(v22 + 392);
              if ( v16 )
                v16 = UsbhRefPdo(v21, *(_QWORD *)(v22 + 392), v3, 1180976179LL);
            }
          }
        }
      }
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v18);
      if ( v16 )
      {
        v27 = PdoExt(v16);
        if ( UsbhCompletePdoWakeIrp((__int64)DeviceObject, v16, -1073741436) )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_dq(
              WPP_GLOBAL_Control->DeviceExtension,
              v28,
              v29,
              29,
              (__int64)&WPP_f5dcad1b2f1f36217147d899caa6f39e_Traceguids,
              *(_WORD *)(v27 + 1420),
              v16);
        }
        UsbhUnlatchPdo(DeviceObject, v16, v3, 1180976179LL);
      }
    }
  }
LABEL_18:
  FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 2048, 1112756286, 0, 0LL);
  v24 = UsbhDispatch_BusEvent(DeviceObject, v38, (unsigned int)(v23 + 6));
  Log((_DWORD)DeviceObject, 2048, 1112756284, 0, v24);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, v3, 4498LL);
  ++v3->CurrentLocation;
  ++v3->Tail.Overlay.CurrentStackLocation;
  v25 = PoCallDriver(*(PDEVICE_OBJECT *)(v36 + 1208), v3);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v36 + 1224), v3, 0x20u);
  return v25;
}
