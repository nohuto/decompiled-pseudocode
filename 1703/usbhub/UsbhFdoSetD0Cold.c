/*
 * XREFs of UsbhFdoSetD0Cold @ 0x1C00056B0
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C0003840 (UsbhFdoD0Worker_Action.c)
 *     UsbhHubStart @ 0x1C001DD84 (UsbhHubStart.c)
 *     UsbhHardReset_Action @ 0x1C00468C4 (UsbhHardReset_Action.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0003AA4 (Usb_Disconnected.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C0005DB0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhSyncBusResume @ 0x1C000638C (UsbhSyncBusResume.c)
 *     UsbhSyncBusReset @ 0x1C0006400 (UsbhSyncBusReset.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C00072E8 (UsbhFdoColdStartPdo.c)
 *     UsbhRefPdo @ 0x1C000B0C0 (UsbhRefPdo.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhSyncPowerOnPorts @ 0x1C00155A0 (UsbhSyncPowerOnPorts.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhLatchPdo @ 0x1C001A5DC (UsbhLatchPdo.c)
 *     UsbhRawWait @ 0x1C0021530 (UsbhRawWait.c)
 *     UsbhUnlatchPdo @ 0x1C00245B0 (UsbhUnlatchPdo.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C0024BE0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00410DC (UsbhQueueSoftConnectChange.c)
 *     UsbhResetHubUpstreamPort @ 0x1C0046C1C (UsbhResetHubUpstreamPort.c)
 *     UsbhResetNotifyCompletion @ 0x1C0046CB8 (UsbhResetNotifyCompletion.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoSetD0Cold(struct _DEVICE_OBJECT *a1, __int64 a2, char a3)
{
  int v6; // r9d
  int v7; // r13d
  int v8; // eax
  int started; // r15d
  unsigned int v10; // r9d
  unsigned __int16 v11; // di
  unsigned __int8 *DeviceExtension; // rdx
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // r14
  int v17; // r9d
  __int64 v18; // rsi
  _QWORD *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r10
  __int64 v23; // r8
  void *v24; // rdx
  __int64 v25; // rcx
  unsigned __int8 *v26; // rdx
  __int64 v27; // rsi
  KIRQL v28; // r14
  _QWORD *v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r10
  void *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // r10
  __int64 v39; // rax
  __int64 v40; // rdi
  int v41; // r9d
  int v42; // eax
  int v43; // eax
  unsigned int v44; // edi
  int v45; // ecx
  unsigned __int16 v46; // di
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rbp
  int v50; // [rsp+48h] [rbp-50h]
  __int64 v51; // [rsp+50h] [rbp-48h]
  KIRQL v53; // [rsp+B8h] [rbp+20h]

  v51 = FdoExt(a1);
  Log((_DWORD)a1, 16, 1668246628, 0, 0LL);
  v7 = v6 + 1;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v6 )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      v7,
      27,
      (__int64)&WPP_f5dcad1b2f1f36217147d899caa6f39e_Traceguids);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_START, 0, 0);
  if ( a3 )
  {
    v43 = UsbhResetHubUpstreamPort(a1);
    v44 = v43;
    if ( (v43 & 0xC0000000) == 0xC0000000 )
    {
      if ( !Usb_Disconnected(v43) )
      {
        LOBYTE(v50) = 0;
        UsbhException((int)a1, 0, 54, 0, 0, v45, 0, usbfile_fdopwr_c, 3274, v50);
      }
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, 0, v44);
      return v44;
    }
  }
  UsbhSyncBusReset(a1, a2);
  v8 = UsbhSyncPowerOnPorts((_DWORD)a1);
  started = v8;
  if ( (v8 & 0xC0000000) == 0xC0000000 )
  {
    if ( !Usb_Disconnected(v8) )
    {
      LOBYTE(v50) = 0;
      UsbhException((int)a1, 0, 53, 0, 0, started, 0, usbfile_fdopwr_c, 3298, v50);
    }
LABEL_52:
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, 0, started);
    return (unsigned int)started;
  }
  Log((_DWORD)a1, 8, 2002872692, 100, 0LL);
  UsbhRawWait(v10);
  v11 = v7;
  while ( 1 )
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    DeviceExtension = (unsigned __int8 *)a1->DeviceExtension;
    if ( !DeviceExtension )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)DeviceExtension != 541218120 )
      UsbhTrapFatal_Dbg(a1, DeviceExtension);
    if ( v11 > DeviceExtension[2938] )
      break;
    Log((_DWORD)a1, 8, 1735410772, v11, 0LL);
    if ( !v11 )
      goto LABEL_28;
    v13 = a1->DeviceExtension;
    if ( !v13 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v13 != 541218120 )
      UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
    if ( v11 > *(unsigned __int8 *)(FdoExt(a1) + 2938) )
      goto LABEL_28;
    v14 = v13[382];
    if ( !v14 )
      goto LABEL_28;
    v15 = 2928LL * (v11 - 1);
    v16 = v15 + v14;
    Log((_DWORD)a1, 8, 1735410750, v11, v15 + v14);
    if ( !v16 )
      goto LABEL_28;
    v18 = 0LL;
    Log((_DWORD)a1, 256, 1817199695, v17, 1129270340LL);
    v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    Log((_DWORD)a1, 8, 1735410772, v11, 0LL);
    v19 = a1->DeviceExtension;
    if ( !v19 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v19 != 541218120 )
      UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
    if ( v11 <= *(unsigned __int8 *)(FdoExt(a1) + 2938) )
    {
      v20 = v19[382];
      if ( v20 )
      {
        Log((_DWORD)a1, 8, 1735410750, v11, v15 + v20);
        if ( v22 )
        {
          v18 = *(_QWORD *)(v22 + 392);
          if ( v18 )
            v18 = UsbhRefPdo(v21, *(_QWORD *)(v22 + 392), 0LL, 1129270340LL);
        }
      }
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v53);
    v23 = *(unsigned __int16 *)(v16 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v24 = a1->DeviceExtension;
      if ( v24 )
      {
        v25 = *((_QWORD *)v24 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v24 + 220) & *((_DWORD *)v24 + 221));
        *(_DWORD *)v25 = 828664931;
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_QWORD *)(v25 + 16) = v23;
        *(_QWORD *)(v25 + 24) = v18;
      }
    }
    if ( v18 )
    {
      started = UsbhFdoColdStartPdo((_DWORD)a1);
      if ( (started & 0xC0000000) == 0xC0000000 )
      {
        UsbhUnlatchPdo(a1, v18, 0LL, 1129270340LL);
        break;
      }
      UsbhUnlatchPdo(a1, v18, 0LL, 1129270340LL);
      ++v11;
    }
    else
    {
      started = UsbhFdoColdStartCheckPort((_DWORD)a1);
      if ( (started & 0xC0000000) == 0xC0000000 )
        break;
LABEL_28:
      ++v11;
    }
  }
  UsbhSyncBusResume(a1, a2);
  if ( !*(_BYTE *)(v51 + 5268) )
    goto LABEL_30;
  v46 = v7;
  while ( 2 )
  {
    if ( v46 > *(unsigned __int8 *)(FdoExt(a1) + 2938) )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_30:
          v26 = (unsigned __int8 *)a1->DeviceExtension;
          if ( !v26 )
            UsbhTrapFatal_Dbg(a1, 0LL);
          if ( *(_DWORD *)v26 != 541218120 )
            UsbhTrapFatal_Dbg(a1, v26);
          if ( (unsigned __int16)v7 > v26[2938] )
            goto LABEL_52;
          v27 = 0LL;
          Log((_DWORD)a1, 256, 1817199695, (unsigned __int16)v7, 1129071666LL);
          v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
          WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
          Log((_DWORD)a1, 8, 1735410772, (unsigned __int16)v7, 0LL);
          if ( (_WORD)v7 )
          {
            v29 = a1->DeviceExtension;
            if ( !v29 )
              UsbhTrapFatal_Dbg(a1, 0LL);
            if ( *(_DWORD *)v29 != 541218120 )
              UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
            if ( (unsigned __int16)v7 <= *(unsigned __int8 *)(FdoExt(a1) + 2938) )
            {
              v30 = v29[382];
              if ( v30 )
              {
                Log((_DWORD)a1, 8, 1735410750, (unsigned __int16)v7, v30 + 2928LL * ((unsigned __int16)v7 - 1));
                if ( v32 )
                {
                  v27 = *(_QWORD *)(v32 + 392);
                  if ( v27 )
                    v27 = UsbhRefPdo(v31, *(_QWORD *)(v32 + 392), 0LL, 1129071666LL);
                }
              }
            }
          }
          WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v28);
          if ( (UsbhLogMask & 0x10) != 0 )
          {
            v33 = a1->DeviceExtension;
            if ( v33 )
            {
              v34 = *((_QWORD *)v33 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v33 + 220) & *((_DWORD *)v33 + 221));
              *(_DWORD *)v34 = 829318514;
              *(_QWORD *)(v34 + 8) = 0LL;
              *(_QWORD *)(v34 + 16) = (unsigned __int16)v7;
              *(_QWORD *)(v34 + 24) = v27;
            }
          }
          if ( v27 )
            break;
          Log((_DWORD)a1, 8, 1735410772, (unsigned __int16)v7, 0LL);
          if ( (_WORD)v7 )
          {
            v35 = FdoExt(a1);
            if ( (unsigned __int16)v7 > *(unsigned __int8 *)(FdoExt(a1) + 2938) )
            {
              v37 = 0LL;
            }
            else
            {
              v36 = *(_QWORD *)(v35 + 3056);
              if ( v36 )
                Log((_DWORD)a1, 8, 1735410750, (unsigned __int16)v7, v36 + 2928LL * ((unsigned __int16)v7 - 1));
              else
                v37 = 0LL;
            }
          }
          else
          {
            v37 = 0LL;
          }
          if ( *(_BYTE *)(v37 + 2841) )
          {
            *(_BYTE *)(v37 + 2841) = 0;
            UsbhQueueSoftConnectChange((_DWORD)a1);
          }
LABEL_51:
          LOWORD(v7) = v7 + 1;
        }
        v39 = PdoExt(v27);
        v40 = v39;
        if ( *(_BYTE *)(v39 + 2716) )
        {
          UsbhUnlatchPdo(a1, v27, 0LL, 1129071666LL);
          goto LABEL_51;
        }
        if ( (*(_DWORD *)(v39 + 1412) & 0x4000) != 0 )
        {
          Log((_DWORD)a1, 16, 1346654803, 0, 0LL);
          UsbhEtwLogHubIrpEvent(
            a1,
            0LL,
            0LL,
            &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_RESET,
            *(unsigned __int16 *)(v40 + 1420),
            v41);
          v42 = UsbhSyncResetDeviceInternal(a1);
          started = v42;
          if ( (v42 & 0xC0000000) == 0xC0000000 )
          {
            Log((_DWORD)a1, 16, 1919249970, 0, v42);
            UsbhQueueSoftConnectChange((_DWORD)a1);
            *(_DWORD *)(v40 + 1412) &= ~0x4000u;
            LOBYTE(v50) = 0;
            UsbhException((int)a1, 0, 88, 0, 0, started, 0, usbfile_fdopwr_c, 3445, v50);
            started = 0;
          }
          else
          {
            *(_DWORD *)(v40 + 1412) &= ~0x4000u;
          }
        }
        UsbhUnlatchPdo(a1, v27, 0LL, 1129071666LL);
        LOWORD(v7) = v7 + 1;
      }
    }
    v47 = UsbhLatchPdo(a1, v46, 0LL, 1129071666LL);
    v48 = v47;
    if ( !v47 )
      goto LABEL_81;
    v49 = PdoExt(v47);
    if ( !*(_BYTE *)(v49 + 2716) )
      goto LABEL_80;
    started = UsbhSyncResetDeviceInternal(a1);
    if ( started >= 0 )
    {
      UsbhResetNotifyCompletion(*(_QWORD *)(a2 + 8));
LABEL_80:
      UsbhUnlatchPdo(a1, v48, 0LL, 1129071666LL);
LABEL_81:
      ++v46;
      continue;
    }
    break;
  }
  UsbhQueueSoftConnectChange((_DWORD)a1);
  *(_DWORD *)(v49 + 1412) &= ~0x4000u;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_COMPLETE, 0, started);
  UsbhUnlatchPdo(a1, v48, 0LL, 1129071666LL);
  return (unsigned int)started;
}
