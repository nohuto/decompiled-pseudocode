/*
 * XREFs of Usbh_PCE_QueueChange_Action @ 0x1C000D5A0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0007EAC (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalDriverResetEvent @ 0x1C0007F24 (UsbhLogSignalDriverResetEvent.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0008C10 (UsbhUnlockPcqWithTag.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0008E44 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhFlushPortChangeQueue @ 0x1C0009998 (UsbhFlushPortChangeQueue.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C000D1F0 (UsbhInsertQueuePortChangeObject.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003C01C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x1C003FF64 (UsbhFreePortChangeQueueTimeoutObject.c)
 *     WPP_RECORDER_SF_dc @ 0x1C0042488 (WPP_RECORDER_SF_dc.c)
 */

void Usbh_PCE_QueueChange_Action(__int64 a1, __int64 a2, char a3, ...)
{
  _DWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // cl
  KIRQL v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int16 v19; // ax
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  KSPIN_LOCK *v26; // r14
  KIRQL v27; // r15
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rbp
  int v32; // r14d
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  KIRQL v46; // bp
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  int v50; // edx
  int v51; // r8d
  int v52; // r9d
  __int64 v53; // rax
  __int64 v54; // r8
  __int64 v55; // r9
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // r11
  PDEVICE_OBJECT v59; // rcx
  __int16 v60; // r9
  int v61; // r9d
  __int64 v62; // rax
  KIRQL v63; // r8
  __int64 v64; // r11
  __int16 v65; // r9
  __int64 v66; // rax
  __int64 v67; // r9
  int v68; // r10d
  void *v69; // r11
  __int64 v70; // r9
  __int16 v71; // r9
  __int64 v72; // rax
  int v73; // edx
  __int64 v74; // r9
  char v75; // r10
  int v76; // [rsp+20h] [rbp-68h]
  int v77; // [rsp+44h] [rbp-44h]
  KIRQL v78; // [rsp+90h] [rbp+8h]
  __int64 v79; // [rsp+A8h] [rbp+20h] BYREF
  va_list va; // [rsp+A8h] [rbp+20h]
  __int64 v81; // [rsp+B0h] [rbp+28h]
  __int64 v82; // [rsp+B8h] [rbp+30h]
  va_list va1; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v79 = va_arg(va1, _QWORD);
  v81 = va_arg(va1, _QWORD);
  v82 = va_arg(va1, _QWORD);
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
  v10 = UsbhLogMask;
  v11 = v7;
  v78 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v12 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v12 = 724267376;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 4LL;
      *(_QWORD *)(v12 + 24) = v9;
      v10 = UsbhLogMask;
    }
  }
  v13 = *(unsigned __int16 *)(a2 + 4);
  v14 = *(int *)(a2 + 12);
  if ( (v10 & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v15 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v15 = 724267376;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = v14;
      *(_QWORD *)(v15 + 24) = v13;
    }
  }
  v16 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v16;
  v17 = a2 + 32 * (v16 + 43);
  *(_DWORD *)v17 = 4;
  *(_DWORD *)(v17 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v17 + 12) = v79;
  *(_DWORD *)(v17 + 8) = -1;
  *(_QWORD *)(v17 + 16) = 0LL;
  *(_QWORD *)(v17 + 24) = 0LL;
  v18 = *(int *)(a2 + 12);
  v19 = UsbhLogMask;
  v20 = *(unsigned __int16 *)(a2 + 4);
  v77 = *(_DWORD *)(a2 + 12);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v21 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v21 = 812659807;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 16) = v18;
      *(_QWORD *)(v21 + 24) = v20;
      v19 = UsbhLogMask;
    }
  }
  v22 = *(unsigned __int16 *)(a2 + 4);
  if ( (v19 & 0x200) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v23 = *(_QWORD *)(v8 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v23 = 812147537;
      *(_QWORD *)(v23 + 8) = 0LL;
      *(_QWORD *)(v23 + 16) = a2;
      *(_QWORD *)(v23 + 24) = v22;
      v19 = UsbhLogMask;
    }
    if ( (v19 & 0x200) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v24 = *(_QWORD *)(v8 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v24 = 812147537;
        *(_QWORD *)(v24 + 24) = (unsigned int)v79;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = a2;
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      v22,
      19,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  if ( (v79 & 0x80000) != 0 )
  {
    v25 = *(_QWORD *)(a1 + 64);
    if ( !v25 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v25 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    v26 = (KSPIN_LOCK *)(v25 + 4944);
    v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v25 + 4944));
    v28 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v29 = *(_QWORD *)(a1 + 64);
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
        *(_DWORD *)v30 = 1836086128;
        *(_QWORD *)(v30 + 8) = 0LL;
        *(_QWORD *)(v30 + 16) = 0LL;
        *(_QWORD *)(v30 + 24) = v28;
      }
    }
    if ( KeReadStateEvent((PRKEVENT)(a2 + 800)) )
    {
      KeResetEvent((PRKEVENT)(a2 + 800));
      *(_QWORD *)(a2 + 792) = a2;
    }
    KeReleaseSpinLock(v26, v27);
    v11 = v78;
  }
  if ( v77 != 2 )
  {
    switch ( v77 )
    {
      case 1:
      case 18:
        Log(a1, 512, 1597272118, 0, *(unsigned __int16 *)(a2 + 4));
        v59 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v71 )
          goto LABEL_63;
        v61 = 25;
        goto LABEL_62;
      case 3:
      case 14:
        Log(a1, 512, 1597272116, 0, *(unsigned __int16 *)(a2 + 4));
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v65 )
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 23, v64, v20);
        UsbhInsertQueuePortChangeObject(a1, v20, (__int64 *)va, v81, v82);
        v63 = v11;
        v66 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 14;
        *(_DWORD *)(v66 + a2 + 1384) = 14;
        goto LABEL_90;
      case 4:
        Log(a1, 512, 1597272115, 0, *(unsigned __int16 *)(a2 + 4));
        v59 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v60 )
          goto LABEL_63;
        v61 = 22;
LABEL_62:
        WPP_RECORDER_SF_d(v59->DeviceExtension, 0, 1, v61, v58, v20);
LABEL_63:
        UsbhInsertQueuePortChangeObject(a1, v20, (__int64 *)va, v81, v82);
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
        Log(a1, 512, 1597272117, v81, *(unsigned __int16 *)(a2 + 4));
        if ( v68 == 1 )
        {
          Log(a1, 512, 1597272184, v82, *(unsigned __int16 *)(a2 + 4));
          UsbhSignalSyncDeviceResetPdo(a1, v70, -1073741823);
          if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
            UsbhSetPcqEventStatus(a1, a2, 3LL, 30);
        }
        else
        {
          if ( v68 != 2 )
            goto LABEL_76;
          LOBYTE(v67) = 1;
          UsbhFreePortChangeQueueTimeoutObject(a1, a2, v82, v67);
        }
        v69 = &WPP_7750967c46a832f629b3446543f02792_Traceguids;
LABEL_76:
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, 0, 1, 24, (__int64)v69, v20);
          v63 = v11;
        }
        else
        {
LABEL_66:
          v63 = v11;
        }
        break;
      case 7:
        Log(a1, 512, 1597272113, 0, *(unsigned __int16 *)(a2 + 4));
        v52 = v81;
        v53 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 7;
        *(_DWORD *)(v53 + a2 + 1384) = 7;
        UsbhInsertQueuePortChangeObject(a1, v20, (__int64 *)va, v52, v82);
        UsbhFlushPortChangeQueue(a1, a2, v54, v55);
        Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
        v56 = *(_DWORD *)(a2 + 12);
        v57 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v57 + a2 + 1384) = v56;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v11);
        goto LABEL_50;
      case 8:
      case 10:
        Log(a1, 512, 1597272119, 0, *(unsigned __int16 *)(a2 + 4));
        UsbhInsertQueuePortChangeObject(a1, v20, (__int64 *)va, v81, v82);
        v62 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 10;
        *(_DWORD *)(v62 + a2 + 1384) = 10;
        goto LABEL_66;
      case 9:
        Log(a1, 512, 1597272120, 0, *(unsigned __int16 *)(a2 + 4));
        UsbhInsertQueuePortChangeObject(a1, v20, (__int64 *)va, v81, v82);
        goto LABEL_66;
      default:
        Log(a1, 512, 1597272152, 0, *(unsigned __int16 *)(a2 + 4));
        v63 = v11;
        v72 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v72 + a2 + 1384) = 19;
        goto LABEL_90;
    }
    goto LABEL_90;
  }
  v31 = v82;
  v32 = v81;
  v33 = UsbhInsertQueuePortChangeObject(a1, v20, (__int64 *)va, v81, v82);
  v34 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v35 = *(_QWORD *)(a1 + 64);
    if ( v35 )
    {
      v36 = *(_QWORD *)(v35 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
      *(_DWORD *)v36 = 846214239;
      *(_QWORD *)(v36 + 8) = 0LL;
      *(_QWORD *)(v36 + 16) = v33;
      *(_QWORD *)(v36 + 24) = v34;
    }
  }
  if ( v33 < 0 )
  {
    Log(a1, 8, 1902727218, a2, v20);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v73,
        1,
        21,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        v20,
        v75);
    if ( v32 == 1 )
    {
      Log(a1, 512, 1902735480, v31, *(unsigned __int16 *)(a2 + 4));
      UsbhSignalSyncDeviceResetPdo(a1, v31, -1073741823);
      if ( (unsigned int)UsbhLogSignalDriverResetEvent(a1, a2) )
        UsbhSetPcqEventStatus(a1, a2, 3LL, 30);
    }
    else if ( v32 == 2 )
    {
      LOBYTE(v74) = 1;
      UsbhFreePortChangeQueueTimeoutObject(a1, a2, v31, v74);
    }
    v63 = v78;
LABEL_90:
    UsbhUnlockPcqWithTag(a1, a2, v63);
    goto LABEL_50;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      20,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      v20);
  if ( (UsbhLogMask & 8) != 0 )
  {
    v37 = *(_QWORD *)(a1 + 64);
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
      *(_DWORD *)v38 = 827353457;
      *(_QWORD *)(v38 + 8) = 0LL;
      *(_QWORD *)(v38 + 16) = a2;
      *(_QWORD *)(v38 + 24) = v20;
    }
  }
  v39 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = 4;
  *(_DWORD *)(v39 + a2 + 1384) = 4;
  v40 = *(unsigned __int16 *)(a2 + 4);
  v41 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v42 = *(_QWORD *)(a1 + 64);
    if ( v42 )
    {
      v43 = *(_QWORD *)(v42 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
      *(_DWORD *)v43 = 757952880;
      *(_QWORD *)(v43 + 8) = 0LL;
      *(_QWORD *)(v43 + 16) = v41;
      *(_QWORD *)(v43 + 24) = v40;
    }
  }
  v44 = *(_DWORD *)(a2 + 12);
  v45 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v45 + a2 + 1384) = v44;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v78);
  v46 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
  if ( *(_DWORD *)(a2 + 2412) != 1 )
  {
    v47 = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(a2 + 2412) = 1;
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( v47 )
      {
        v48 = *(_QWORD *)(v47 + 64);
        if ( v48 )
        {
          v49 = *(_QWORD *)(v48 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v48 + 880)) & *(_DWORD *)(v48 + 884));
          *(_DWORD *)v49 = 1464029265;
          *(_QWORD *)(v49 + 8) = 0LL;
          *(_QWORD *)(v49 + 16) = a2;
          *(_QWORD *)(v49 + 24) = 0LL;
        }
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
    IoQueueWorkItem(*(PIO_WORKITEM *)(a2 + 2456), UsbhHubProcessChangeWorker, DelayedWorkQueue, (PVOID)a2);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 2448), v46);
LABEL_50:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v50, v51, 26, v76, v20, v77);
}
