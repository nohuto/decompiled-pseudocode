/*
 * XREFs of Usbh_PCE_QueueChange_Action @ 0x1C000C920
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0006B28 (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalDriverResetEvent @ 0x1C0006BA0 (UsbhLogSignalDriverResetEvent.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0007AAC (UsbhUnlockPcqWithTag.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0007CD8 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhFlushPortChangeQueue @ 0x1C0008C58 (UsbhFlushPortChangeQueue.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C000C580 (UsbhInsertQueuePortChangeObject.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D2D8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D4D4 (WPP_RECORDER_SF_dq.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C0040D54 (UsbhFreePortChangeQueueTimeoutObject.c)
 *     WPP_RECORDER_SF_dc @ 0x1C004327C (WPP_RECORDER_SF_dc.c)
 */

void Usbh_PCE_QueueChange_Action(__int64 a1, __int64 a2, char a3, ...)
{
  _DWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  KIRQL v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int16 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  KSPIN_LOCK *v24; // r14
  KIRQL v25; // r15
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rbp
  int v30; // r14d
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  KIRQL v44; // bp
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rdx
  int v48; // edx
  int v49; // r8d
  int v50; // r9d
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // r11
  PDEVICE_OBJECT v57; // rcx
  __int16 v58; // r9
  int v59; // r9d
  __int64 v60; // rax
  KIRQL v61; // r8
  __int64 v62; // r11
  __int16 v63; // r9
  __int64 v64; // rax
  __int64 v65; // r9
  int v66; // r10d
  void *v67; // r11
  __int64 v68; // r9
  __int16 v69; // r9
  __int64 v70; // rax
  int v71; // edx
  __int64 v72; // r9
  char v73; // r10
  int v74; // [rsp+20h] [rbp-68h]
  int v75; // [rsp+44h] [rbp-44h]
  KIRQL v76; // [rsp+90h] [rbp+8h]
  __int64 v77; // [rsp+A8h] [rbp+20h] BYREF
  va_list va; // [rsp+A8h] [rbp+20h]
  __int64 v79; // [rsp+B0h] [rbp+28h]
  __int64 v80; // [rsp+B8h] [rbp+30h]
  va_list va1; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v77 = va_arg(va1, _QWORD);
  v79 = va_arg(va1, _QWORD);
  v80 = va_arg(va1, _QWORD);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v9 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v10 = v7;
  v76 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v11 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v11 = 724267376;
      *(_QWORD *)(v11 + 8) = 0LL;
      *(_QWORD *)(v11 + 16) = 4LL;
      *(_QWORD *)(v11 + 24) = v9;
    }
  }
  v12 = *(unsigned __int16 *)(a2 + 4);
  v13 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v14 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v14 = 724267376;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = v13;
      *(_QWORD *)(v14 + 24) = v12;
    }
  }
  v15 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v15;
  v16 = a2 + 32 * (v15 + 43);
  *(_DWORD *)v16 = 4;
  *(_DWORD *)(v16 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v16 + 12) = v77;
  *(_DWORD *)(v16 + 8) = -1;
  *(_QWORD *)(v16 + 16) = 0LL;
  *(_QWORD *)(v16 + 24) = 0LL;
  v17 = *(int *)(a2 + 12);
  v18 = *(_WORD *)(a2 + 4);
  v75 = *(_DWORD *)(a2 + 12);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v19 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v19 = 812659807;
      *(_QWORD *)(v19 + 24) = v18;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = v17;
    }
  }
  v20 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v21 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v21 = 812147537;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 16) = a2;
      *(_QWORD *)(v21 + 24) = v20;
    }
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v22 = *(_QWORD *)(v8 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v22 = 812147537;
        *(_QWORD *)(v22 + 24) = (unsigned int)v77;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = a2;
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      v20,
      19,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  if ( (v77 & 0x80000) != 0 )
  {
    v23 = *(_QWORD *)(a1 + 64);
    if ( !v23 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v23 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    v24 = (KSPIN_LOCK *)(v23 + 4944);
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 4944));
    v26 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v27 = *(_QWORD *)(a1 + 64);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
        *(_DWORD *)v28 = 1836086128;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_QWORD *)(v28 + 16) = 0LL;
        *(_QWORD *)(v28 + 24) = v26;
      }
    }
    if ( KeReadStateEvent((PRKEVENT)(a2 + 800)) )
    {
      KeResetEvent((PRKEVENT)(a2 + 800));
      *(_QWORD *)(a2 + 792) = a2;
    }
    KeReleaseSpinLock(v24, v25);
    v10 = v76;
  }
  if ( v75 != 2 )
  {
    switch ( v75 )
    {
      case 1:
      case 18:
        Log(a1, 512, 1597272118, 0, *(unsigned __int16 *)(a2 + 4));
        v57 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v69 )
          goto LABEL_63;
        v59 = 25;
        goto LABEL_62;
      case 3:
      case 14:
        Log(a1, 512, 1597272116, 0, *(unsigned __int16 *)(a2 + 4));
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v63 )
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 23, v62, v18);
        UsbhInsertQueuePortChangeObject(a1, v18, (__int64 *)va, v79, v80);
        v61 = v10;
        v64 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 14;
        *(_DWORD *)(v64 + a2 + 1384) = 14;
        goto LABEL_90;
      case 4:
        Log(a1, 512, 1597272115, 0, *(unsigned __int16 *)(a2 + 4));
        v57 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v58 )
          goto LABEL_63;
        v59 = 22;
LABEL_62:
        WPP_RECORDER_SF_d(v57->DeviceExtension, 0, 1, v59, v56, v18);
LABEL_63:
        UsbhInsertQueuePortChangeObject(a1, v18, (__int64 *)va, v79, v80);
        goto LABEL_66;
      case 5:
      case 6:
      case 11:
      case 12:
      case 13:
      case 15:
      case 16:
      case 17:
      case 20:
        Log(a1, 512, 1597272117, v79, *(unsigned __int16 *)(a2 + 4));
        if ( v66 == 1 )
        {
          Log(a1, 512, 1597272184, v80, *(unsigned __int16 *)(a2 + 4));
          UsbhSignalSyncDeviceResetPdo(a1, v68, -1073741823);
          if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
            UsbhSetPcqEventStatus(a1, a2, 3LL, 30);
        }
        else
        {
          if ( v66 != 2 )
            goto LABEL_76;
          LOBYTE(v65) = 1;
          UsbhFreePortChangeQueueTimeoutObject(a1, a2, v80, v65);
        }
        v67 = &WPP_7750967c46a832f629b3446543f02792_Traceguids;
LABEL_76:
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 24, (__int64)v67, v18);
          v61 = v10;
        }
        else
        {
LABEL_66:
          v61 = v10;
        }
        break;
      case 7:
        Log(a1, 512, 1597272113, 0, *(unsigned __int16 *)(a2 + 4));
        v50 = v79;
        v51 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 7;
        *(_DWORD *)(v51 + a2 + 1384) = 7;
        UsbhInsertQueuePortChangeObject(a1, v18, (__int64 *)va, v50, v80);
        UsbhFlushPortChangeQueue(a1, a2, v52, v53);
        Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
        v54 = *(_DWORD *)(a2 + 12);
        v55 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v55 + a2 + 1384) = v54;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
        goto LABEL_50;
      case 8:
      case 10:
        Log(a1, 512, 1597272119, 0, *(unsigned __int16 *)(a2 + 4));
        UsbhInsertQueuePortChangeObject(a1, v18, (__int64 *)va, v79, v80);
        v60 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 10;
        *(_DWORD *)(v60 + a2 + 1384) = 10;
        goto LABEL_66;
      case 9:
        Log(a1, 512, 1597272120, 0, *(unsigned __int16 *)(a2 + 4));
        UsbhInsertQueuePortChangeObject(a1, v18, (__int64 *)va, v79, v80);
        goto LABEL_66;
      default:
        Log(a1, 512, 1597272152, 0, *(unsigned __int16 *)(a2 + 4));
        v61 = v10;
        v70 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v70 + a2 + 1384) = 19;
        goto LABEL_90;
    }
    goto LABEL_90;
  }
  v29 = v80;
  v30 = v79;
  v31 = UsbhInsertQueuePortChangeObject(a1, v18, (__int64 *)va, v79, v80);
  v32 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v33 = *(_QWORD *)(a1 + 64);
    if ( v33 )
    {
      v34 = *(_QWORD *)(v33 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
      *(_DWORD *)v34 = 846214239;
      *(_QWORD *)(v34 + 8) = 0LL;
      *(_QWORD *)(v34 + 16) = v31;
      *(_QWORD *)(v34 + 24) = v32;
    }
  }
  if ( v31 < 0 )
  {
    Log(a1, 8, 1902727218, a2, v18);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v71,
        1,
        21,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        v18,
        v73);
    if ( v30 == 1 )
    {
      Log(a1, 512, 1902735480, v29, *(unsigned __int16 *)(a2 + 4));
      UsbhSignalSyncDeviceResetPdo(a1, v29, -1073741823);
      if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
        UsbhSetPcqEventStatus(a1, a2, 3LL, 30);
    }
    else if ( v30 == 2 )
    {
      LOBYTE(v72) = 1;
      UsbhFreePortChangeQueueTimeoutObject(a1, a2, v29, v72);
    }
    v61 = v76;
LABEL_90:
    UsbhUnlockPcqWithTag(a1, a2, v61);
    goto LABEL_50;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v18);
  if ( (UsbhLogMask & 8) != 0 )
  {
    v35 = *(_QWORD *)(a1 + 64);
    if ( v35 )
    {
      v36 = *(_QWORD *)(v35 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
      *(_DWORD *)v36 = 827353457;
      *(_QWORD *)(v36 + 24) = v18;
      *(_QWORD *)(v36 + 8) = 0LL;
      *(_QWORD *)(v36 + 16) = a2;
    }
  }
  v37 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = 4;
  *(_DWORD *)(v37 + a2 + 1384) = 4;
  v38 = *(unsigned __int16 *)(a2 + 4);
  v39 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v40 = *(_QWORD *)(a1 + 64);
    if ( v40 )
    {
      v41 = *(_QWORD *)(v40 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
      *(_DWORD *)v41 = 757952880;
      *(_QWORD *)(v41 + 8) = 0LL;
      *(_QWORD *)(v41 + 16) = v39;
      *(_QWORD *)(v41 + 24) = v38;
    }
  }
  v42 = *(_DWORD *)(a2 + 12);
  v43 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v43 + a2 + 1384) = v42;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v76);
  v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
  if ( *(_DWORD *)(a2 + 2412) != 1 )
  {
    *(_DWORD *)(a2 + 2412) = 1;
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v45 = *(_QWORD *)(a2 + 16);
      if ( v45 )
      {
        v46 = *(_QWORD *)(v45 + 64);
        if ( v46 )
        {
          v47 = *(_QWORD *)(v46 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
          *(_DWORD *)v47 = 1464029265;
          *(_QWORD *)(v47 + 8) = 0LL;
          *(_QWORD *)(v47 + 16) = a2;
          *(_QWORD *)(v47 + 24) = 0LL;
        }
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
    IoQueueWorkItem(*(PIO_WORKITEM *)(a2 + 2456), UsbhHubProcessChangeWorker, DelayedWorkQueue, (PVOID)a2);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 2448), v44);
LABEL_50:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v48, v49, 26, v74, v18, v75);
}
