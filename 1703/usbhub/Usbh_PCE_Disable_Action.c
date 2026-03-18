/*
 * XREFs of Usbh_PCE_Disable_Action @ 0x1C000C730
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0007EAC (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0008C10 (UsbhUnlockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x1C0009998 (UsbhFlushPortChangeQueue.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000B540 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C004129C (UsbhRemoveQueuedSuspend.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0042448 (UsbhiSignalSuspendEvent.c)
 */

__int64 __fastcall Usbh_PCE_Disable_Action(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  KIRQL v5; // al
  __int64 v6; // rdx
  __int64 v7; // r8
  char v8; // cl
  KIRQL v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int16 v17; // ax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 result; // rax
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // r9
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_DWORD **)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v4);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v7 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v8 = UsbhLogMask;
  v9 = v5;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    if ( v6 )
    {
      v10 = *(_QWORD *)(v6 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
      *(_DWORD *)v10 = 724267376;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = 2LL;
      *(_QWORD *)(v10 + 24) = v7;
      v8 = UsbhLogMask;
    }
  }
  v11 = *(unsigned __int16 *)(a2 + 4);
  v12 = *(int *)(a2 + 12);
  if ( (v8 & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    if ( v6 )
    {
      v13 = *(_QWORD *)(v6 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
      *(_DWORD *)v13 = 724267376;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = v12;
      *(_QWORD *)(v13 + 24) = v11;
    }
  }
  v14 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v14;
  v15 = a2 + 32 * (v14 + 43);
  *(_DWORD *)v15 = 2;
  *(_DWORD *)(v15 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v15 + 8) = -1;
  *(_QWORD *)(v15 + 12) = 0LL;
  *(_QWORD *)(v15 + 20) = 0LL;
  *(_DWORD *)(v15 + 28) = 0;
  v16 = *(int *)(a2 + 12);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v11,
      11,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      a2);
  v17 = UsbhLogMask;
  v18 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 64);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
      *(_DWORD *)v20 = 812659295;
      *(_QWORD *)(v20 + 8) = 0LL;
      *(_QWORD *)(v20 + 16) = v16;
      *(_QWORD *)(v20 + 24) = v18;
      v17 = UsbhLogMask;
    }
  }
  if ( (_DWORD)v16 == 4 )
  {
    v21 = *(unsigned __int16 *)(a2 + 4);
    if ( (v17 & 0x200) != 0 )
    {
      v22 = *(_QWORD *)(a1 + 64);
      if ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
        *(_DWORD *)v23 = 862990943;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 16) = 4LL;
        *(_QWORD *)(v23 + 24) = v21;
      }
    }
    v24 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 5;
    *(_DWORD *)(v24 + a2 + 1384) = 5;
    v25 = *(unsigned __int16 *)(a2 + 4);
    v26 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v27 = *(_QWORD *)(a1 + 64);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
        *(_DWORD *)v28 = 1986359664;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_QWORD *)(v28 + 16) = v26;
        *(_QWORD *)(v28 + 24) = v25;
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 20;
    v29 = *(unsigned __int16 *)(a2 + 4);
    v30 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v31 = *(_QWORD *)(a1 + 64);
      if ( v31 )
      {
        v32 = *(_QWORD *)(v31 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
        *(_DWORD *)v32 = 757952880;
        *(_QWORD *)(v32 + 8) = 0LL;
        *(_QWORD *)(v32 + 16) = v30;
        *(_QWORD *)(v32 + 24) = v29;
      }
    }
    v33 = *(_DWORD *)(a2 + 12);
    v34 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v34 + a2 + 1384) = v33;
    goto LABEL_26;
  }
  if ( (_DWORD)v16 == 7 )
  {
    Log(a1, 512, 1597141041, 7, *(unsigned __int16 *)(a2 + 4));
    Log(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    v42 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
    *(_DWORD *)(v42 + a2 + 24) = 30;
    v43 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 11;
    *(_DWORD *)(v43 + a2 + 1384) = 11;
    UsbhFlushPortChangeQueue(a1, a2, v42, v44);
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    v45 = *(_DWORD *)(a2 + 12);
    v46 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v46 + a2 + 1384) = v45;
LABEL_26:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v9);
    goto LABEL_27;
  }
  switch ( (int)v16 )
  {
    case 1:
    case 2:
    case 18:
      Log(a1, 512, 1597141042, v16, *(unsigned __int16 *)(a2 + 4));
      v48 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 6;
      *(_DWORD *)(v48 + a2 + 1384) = 6;
      UsbhSetPcqEventStatus(a1, a2, 2LL, 30);
      UsbhFlushPortChangeQueue(a1, a2, v49, v50);
      goto LABEL_45;
    case 3:
    case 12:
      Log(a1, 512, 1597141044, v16, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 20);
      v54 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 12;
      *(_DWORD *)(v54 + a2 + 1384) = 12;
      break;
    case 5:
    case 16:
    case 17:
      Log(a1, 512, 1597141048, v16, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 20);
      v57 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v16;
      *(_DWORD *)(v57 + a2 + 1384) = v16;
      break;
    case 6:
    case 11:
    case 15:
      Log(a1, 512, 1597141045, v16, *(unsigned __int16 *)(a2 + 4));
      UsbhFlushPortChangeQueue(a1, a2, v51, v52);
      UsbhSetPcqEventStatus(a1, a2, 2LL, 30);
LABEL_45:
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      break;
    case 8:
      UsbhRemoveQueuedSuspend(a1, a2);
      UsbhiSignalSuspendEvent(a1, a2);
      Log(a1, 512, 1597141047, v16, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 20);
      v55 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 12;
      *(_DWORD *)(v55 + a2 + 1384) = 12;
      break;
    case 9:
      UsbhRemoveQueuedSuspend(a1, a2);
      Log(a1, 512, 1597141046, v16, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 20);
      v47 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 5;
      *(_DWORD *)(v47 + a2 + 1384) = 5;
      break;
    case 10:
      UsbhRemoveQueuedSuspend(a1, a2);
      UsbhiSignalSuspendEvent(a1, a2);
      Log(a1, 512, 1597141047, v16, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 20);
      v56 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 13;
      *(_DWORD *)(v56 + a2 + 1384) = 13;
      break;
    case 13:
    case 14:
      Log(a1, 512, 1597141049, v16, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 20);
      v58 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 13;
      *(_DWORD *)(v58 + a2 + 1384) = 13;
      break;
    default:
      v53 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v53 + a2 + 1384) = 19;
      UsbhSetPcqEventStatus(a1, a2, 2LL, 20);
      break;
  }
  UsbhUnlockPcqWithTag(a1, a2, v9);
LABEL_27:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4));
  v35 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v36 = *(_QWORD *)(a1 + 64);
    if ( v36 )
    {
      v37 = *(_QWORD *)(v36 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
      *(_DWORD *)v37 = 1129346859;
      *(_QWORD *)(v37 + 8) = 0LL;
      *(_QWORD *)(v37 + 16) = 0LL;
      *(_QWORD *)(v37 + 24) = v35;
    }
  }
  result = UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 472), 660000, 729239619, 6u, a2);
  v39 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v40 = *(_QWORD *)(a1 + 64);
    if ( v40 )
    {
      result = 1129346861LL;
      v41 = *(_QWORD *)(v40 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
      *(_DWORD *)v41 = 1129346861;
      *(_QWORD *)(v41 + 8) = 0LL;
      *(_QWORD *)(v41 + 16) = 0LL;
      *(_QWORD *)(v41 + 24) = v39;
    }
  }
  return result;
}
