/*
 * XREFs of Usbh_PCE_Suspend_Action @ 0x1C0016310
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0007EAC (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0008C10 (UsbhUnlockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x1C0009998 (UsbhFlushPortChangeQueue.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000B540 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C000D1F0 (UsbhInsertQueuePortChangeObject.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhRawWait @ 0x1C0021530 (UsbhRawWait.c)
 *     UsbhLockPcqWithTag @ 0x1C0025430 (UsbhLockPcqWithTag.c)
 *     UsbhSetSuspendPending @ 0x1C00271B8 (UsbhSetSuspendPending.c)
 *     UsbhPCE_Suspend @ 0x1C002726C (UsbhPCE_Suspend.c)
 *     UsbhHubQueueProcessChangeWorker @ 0x1C00274C8 (UsbhHubQueueProcessChangeWorker.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003C01C (WPP_RECORDER_SF_dd.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0040230 (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_ResumeDone @ 0x1C0040BB8 (UsbhPCE_ResumeDone.c)
 *     UsbhSignalSuspendEvent @ 0x1C0041390 (UsbhSignalSuspendEvent.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0042448 (UsbhiSignalSuspendEvent.c)
 */

void __fastcall Usbh_PCE_Suspend_Action(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v5; // r15d
  __int64 v9; // rsi
  unsigned __int16 v10; // dx
  __int64 v11; // rax
  int v12; // eax
  KIRQL v13; // dl
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // r8
  __int64 v18; // r9
  KIRQL v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  KIRQL v25; // r8
  unsigned __int16 v26; // dx
  __int64 v27; // rcx
  int v28; // edx
  __int64 v29; // rax
  KIRQL v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned __int16 v33; // dx
  __int64 v34; // rax
  __int64 v35; // rax
  KIRQL v36; // r8
  int v37; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v38; // [rsp+48h] [rbp-8h]
  KIRQL NewIrql; // [rsp+88h] [rbp+38h] BYREF

  v5 = 0;
  v38 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4));
  UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 824), 660000, 825258049, 2u, a2);
  v9 = (int)UsbhLockPcqWithTag(a1, a2, 10, (unsigned int)&NewIrql, 0);
  if ( *(_BYTE *)(a2 + 2839) || *(_BYTE *)(a2 + 2840) )
  {
    *a4 = -1073741667;
    UsbhiSignalSuspendEvent(a1, a2);
    UsbhUnlockPcqWithTag(a1, a2, NewIrql);
    return;
  }
  *(_QWORD *)(a2 + 736) = KeGetCurrentThread();
  Log(a1, 512, 825258032, v9, *(unsigned __int16 *)(a2 + 4));
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 144));
  UsbhSetSuspendPending(a1, a2);
  if ( (int)v9 > 10 )
  {
    if ( (_DWORD)v9 == 11 )
      goto LABEL_22;
    if ( (int)v9 <= 13 )
      goto LABEL_46;
    if ( (_DWORD)v9 != 14 )
    {
      if ( (_DWORD)v9 == 15 )
      {
        Log(a1, 512, 825258081, v9, *(unsigned __int16 *)(a2 + 4));
        *(_QWORD *)(a2 + 736) = 0LL;
        UsbhFlushPortChangeQueue(a1, a2, v22, v23);
        v24 = *(unsigned int *)(a2 + 2400);
        v25 = NewIrql;
        *(_DWORD *)(a2 + 12) = 15;
        *(_DWORD *)(32 * v24 + a2 + 1384) = 15;
        UsbhUnlockPcqWithTag(a1, a2, v25);
        goto LABEL_27;
      }
      if ( (int)v9 > 17 )
      {
        if ( (_DWORD)v9 == 18 )
        {
          Log(a1, 512, 825258039, v9, *(unsigned __int16 *)(a2 + 4));
          UsbhSetPcqEventStatus(a1, a2, 1LL, 20);
          UsbhUnlockPcqWithTag(a1, a2, NewIrql);
          UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 712), 660000, 825258039, 3u, a2);
          v32 = *(unsigned __int16 *)(a2 + 4);
          *(_QWORD *)(a2 + 736) = 0LL;
          UsbhPCE_ResumeDone(a1, a2 + 24, v32);
          goto LABEL_13;
        }
        if ( (_DWORD)v9 == 20 )
        {
          UsbhUnlockPcqWithTag(a1, a2, NewIrql);
          UsbhSignalSuspendEvent(a1, a2);
          goto LABEL_13;
        }
        goto LABEL_42;
      }
LABEL_46:
      Log(a1, 512, 825258041, v9, *(unsigned __int16 *)(a2 + 4));
      v35 = *(unsigned int *)(a2 + 2400);
      *(_QWORD *)(a2 + 736) = 0LL;
      v36 = NewIrql;
      *(_DWORD *)(a2 + 12) = v9;
      *(_DWORD *)(32 * v35 + a2 + 1384) = v9;
      UsbhUnlockPcqWithTag(a1, a2, v36);
      UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 472), 660000, 825258041, 4u, a2);
      UsbhPCE_Suspend(a1, a3, *(unsigned __int16 *)(a2 + 4));
      _InterlockedDecrement((volatile signed __int32 *)(a3 + 144));
      return;
    }
LABEL_44:
    Log(a1, 512, 825258035, v9, *(unsigned __int16 *)(a2 + 4));
    v33 = *(_WORD *)(a2 + 4);
    v37 = 0x40000;
    *(_QWORD *)(a2 + 736) = 0LL;
    v5 = UsbhInsertQueuePortChangeObject(a1, v33, &v37, 0, 0LL);
    if ( v5 >= 0 )
    {
      v34 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 10;
      *(_DWORD *)(v34 + a2 + 1384) = 10;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
  if ( (int)v9 >= 8 )
  {
    Log(a1, 512, 825258040, v9, *(unsigned __int16 *)(a2 + 4));
    v29 = *(unsigned int *)(a2 + 2400);
    *(_QWORD *)(a2 + 736) = 0LL;
    v30 = NewIrql;
    *(_DWORD *)(a2 + 12) = v9;
    *(_DWORD *)(32 * v29 + a2 + 1384) = v9;
    UsbhUnlockPcqWithTag(a1, a2, v30);
    goto LABEL_13;
  }
  switch ( (_DWORD)v9 )
  {
    case 1:
      UsbhiSignalSuspendEvent(a1, a2);
      Log(a1, 512, 825258038, v9, *(unsigned __int16 *)(a2 + 4));
      *(_QWORD *)(a2 + 736) = 0LL;
      goto LABEL_24;
    case 2:
      Log(a1, 512, 825258037, v9, *(unsigned __int16 *)(a2 + 4));
      v10 = *(_WORD *)(a2 + 4);
      v37 = 0x40000;
      *(_QWORD *)(a2 + 736) = 0LL;
      v5 = UsbhInsertQueuePortChangeObject(a1, v10, &v37, 0, 0LL);
      if ( v5 >= 0 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            17,
            (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
            *(_WORD *)(a2 + 4));
        Log(a1, 8, 1902727217, a2, *(unsigned __int16 *)(a2 + 4));
        v11 = *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 9;
        *(_DWORD *)(32 * v11 + a2 + 1384) = 9;
        Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
        v12 = *(_DWORD *)(a2 + 12);
        v13 = NewIrql;
        v14 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v14 + a2 + 1384) = v12;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v13);
        UsbhHubQueueProcessChangeWorker(v15, a2);
        goto LABEL_13;
      }
      Log(a1, 8, 1902727218, a2, *(unsigned __int16 *)(a2 + 4));
      UsbhiSignalSuspendEvent(a1, a2);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v28,
          1,
          18,
          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
          *(_WORD *)(a2 + 4),
          v5);
      goto LABEL_24;
    case 3:
      goto LABEL_44;
  }
  if ( (_DWORD)v9 != 4 )
  {
    if ( (_DWORD)v9 != 5 )
    {
      if ( (_DWORD)v9 != 6 )
      {
        if ( (_DWORD)v9 == 7 )
        {
LABEL_22:
          Log(a1, 512, 825258033, v9, *(unsigned __int16 *)(a2 + 4));
          *(_QWORD *)(a2 + 736) = 0LL;
          goto LABEL_23;
        }
LABEL_42:
        Log(a1, 512, 825258072, v9, *(unsigned __int16 *)(a2 + 4));
        v31 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_QWORD *)(a2 + 736) = 0LL;
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v31 + a2 + 1384) = 19;
        goto LABEL_24;
      }
      Log(a1, 512, 825258034, v9, *(unsigned __int16 *)(a2 + 4));
      *(_QWORD *)(a2 + 736) = 0LL;
      UsbhFlushPortChangeQueue(a1, a2, v17, v18);
      v19 = NewIrql;
      v20 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 11;
      *(_DWORD *)(v20 + a2 + 1384) = 11;
      UsbhUnlockPcqWithTag(a1, a2, v19);
      *(_DWORD *)(a2 + 400) = UsbhHubSyncSuspendPortEvent(a1, v21, a2);
LABEL_27:
      UsbhSignalSuspendEvent(a1, a2);
      goto LABEL_13;
    }
    goto LABEL_46;
  }
  Log(a1, 512, 825258036, v9, *(unsigned __int16 *)(a2 + 4));
  v26 = *(_WORD *)(a2 + 4);
  v37 = 0x40000;
  v5 = UsbhInsertQueuePortChangeObject(a1, v26, &v37, 0, 0LL);
  if ( v5 >= 0 )
  {
    v27 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 9;
    *(_DWORD *)(v27 + a2 + 1384) = 9;
    goto LABEL_24;
  }
LABEL_23:
  UsbhiSignalSuspendEvent(a1, a2);
LABEL_24:
  UsbhUnlockPcqWithTag(a1, a2, NewIrql);
LABEL_13:
  UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 744), 660000, 825258104, 5u, a2);
  if ( (v38[640] & 1) != 0 && *((_BYTE *)v38 + 5235) == 32 )
  {
    Log(a1, 8, 2002872692, 10LL, 0LL);
    UsbhRawWait(v16);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 144));
  *a4 = v5;
}
