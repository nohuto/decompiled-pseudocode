/*
 * XREFs of Usbh_PCE_Disable_Action @ 0x1C000C030
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0006B28 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0007AAC (UsbhUnlockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x1C0008C58 (UsbhFlushPortChangeQueue.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0013490 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D4D4 (WPP_RECORDER_SF_dq.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C004208C (UsbhRemoveQueuedSuspend.c)
 *     UsbhiSignalSuspendEvent @ 0x1C004323C (UsbhiSignalSuspendEvent.c)
 */

__int64 __fastcall Usbh_PCE_Disable_Action(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  KIRQL v5; // al
  __int64 v6; // rdx
  __int64 v7; // r8
  KIRQL v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 result; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // r9
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax

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
  v8 = v5;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    if ( v6 )
    {
      v9 = *(_QWORD *)(v6 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
      *(_DWORD *)v9 = 724267376;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = 2LL;
      *(_QWORD *)(v9 + 24) = v7;
    }
  }
  v10 = *(unsigned __int16 *)(a2 + 4);
  v11 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    if ( v6 )
    {
      v12 = *(_QWORD *)(v6 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
      *(_DWORD *)v12 = 724267376;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = v11;
      *(_QWORD *)(v12 + 24) = v10;
    }
  }
  v13 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v13;
  v14 = a2 + 32 * (v13 + 43);
  *(_DWORD *)v14 = 2;
  *(_DWORD *)(v14 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v14 + 8) = -1;
  *(_QWORD *)(v14 + 12) = 0LL;
  *(_QWORD *)(v14 + 20) = 0LL;
  *(_DWORD *)(v14 + 28) = 0;
  v15 = *(int *)(a2 + 12);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v10,
      11,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      a2);
  v16 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 64);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
      *(_DWORD *)v18 = 812659295;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 16) = v15;
      *(_QWORD *)(v18 + 24) = v16;
    }
  }
  if ( (_DWORD)v15 == 4 )
  {
    v19 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
        *(_DWORD *)v21 = 862990943;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = 4LL;
        *(_QWORD *)(v21 + 24) = v19;
      }
    }
    v22 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 5;
    *(_DWORD *)(v22 + a2 + 1384) = 5;
    v23 = *(unsigned __int16 *)(a2 + 4);
    v24 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v25 = *(_QWORD *)(a1 + 64);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
        *(_DWORD *)v26 = 1986359664;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 16) = v24;
        *(_QWORD *)(v26 + 24) = v23;
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 20;
    v27 = *(unsigned __int16 *)(a2 + 4);
    v28 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v29 = *(_QWORD *)(a1 + 64);
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
        *(_DWORD *)v30 = 757952880;
        *(_QWORD *)(v30 + 8) = 0LL;
        *(_QWORD *)(v30 + 16) = v28;
        *(_QWORD *)(v30 + 24) = v27;
      }
    }
    v31 = *(_DWORD *)(a2 + 12);
    v32 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v32 + a2 + 1384) = v31;
    goto LABEL_26;
  }
  if ( (_DWORD)v15 == 7 )
  {
    Log(a1, 512, 1597141041, 7, *(unsigned __int16 *)(a2 + 4));
    Log(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    v40 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
    *(_DWORD *)(v40 + a2 + 24) = 30;
    v41 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 11;
    *(_DWORD *)(v41 + a2 + 1384) = 11;
    UsbhFlushPortChangeQueue(a1, a2, v40, v42);
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    v43 = *(_DWORD *)(a2 + 12);
    v44 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v44 + a2 + 1384) = v43;
LABEL_26:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v8);
    goto LABEL_27;
  }
  switch ( (int)v15 )
  {
    case 1:
    case 2:
    case 18:
      Log(a1, 512, 1597141042, v15, *(unsigned __int16 *)(a2 + 4));
      v46 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 6;
      *(_DWORD *)(v46 + a2 + 1384) = 6;
      UsbhSetPcqEventStatus(a1, a2, 2LL, 30);
      UsbhFlushPortChangeQueue(a1, a2, v47, v48);
      goto LABEL_45;
    case 3:
    case 12:
      Log(a1, 512, 1597141044, v15, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 20);
      v52 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 12;
      *(_DWORD *)(v52 + a2 + 1384) = 12;
      break;
    case 5:
    case 16:
    case 17:
      Log(a1, 512, 1597141048, v15, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 20);
      v55 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v15;
      *(_DWORD *)(v55 + a2 + 1384) = v15;
      break;
    case 6:
    case 11:
    case 15:
      Log(a1, 512, 1597141045, v15, *(unsigned __int16 *)(a2 + 4));
      UsbhFlushPortChangeQueue(a1, a2, v49, v50);
      UsbhSetPcqEventStatus(a1, a2, 2LL, 30);
LABEL_45:
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      break;
    case 8:
      UsbhRemoveQueuedSuspend(a1, a2, v16, v11);
      UsbhiSignalSuspendEvent(a1, a2);
      Log(a1, 512, 1597141047, v15, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 20);
      v53 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 12;
      *(_DWORD *)(v53 + a2 + 1384) = 12;
      break;
    case 9:
      UsbhRemoveQueuedSuspend(a1, a2, v16, v11);
      Log(a1, 512, 1597141046, v15, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 20);
      v45 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 5;
      *(_DWORD *)(v45 + a2 + 1384) = 5;
      break;
    case 10:
      UsbhRemoveQueuedSuspend(a1, a2, v16, v11);
      UsbhiSignalSuspendEvent(a1, a2);
      Log(a1, 512, 1597141047, v15, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 20);
      v54 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 13;
      *(_DWORD *)(v54 + a2 + 1384) = 13;
      break;
    case 13:
    case 14:
      Log(a1, 512, 1597141049, v15, *(unsigned __int16 *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 20);
      v56 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 13;
      *(_DWORD *)(v56 + a2 + 1384) = 13;
      break;
    default:
      v51 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v51 + a2 + 1384) = 19;
      UsbhSetPcqEventStatus(a1, a2, 2LL, 20);
      break;
  }
  UsbhUnlockPcqWithTag(a1, a2, v8);
LABEL_27:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4));
  v33 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v34 = *(_QWORD *)(a1 + 64);
    if ( v34 )
    {
      v35 = *(_QWORD *)(v34 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
      *(_DWORD *)v35 = 1129346859;
      *(_QWORD *)(v35 + 8) = 0LL;
      *(_QWORD *)(v35 + 16) = 0LL;
      *(_QWORD *)(v35 + 24) = v33;
    }
  }
  result = UsbhWaitEventWithTimeoutEx(a1, a2 + 472, 660000LL, 729239619LL, 6, a2);
  v37 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v38 = *(_QWORD *)(a1 + 64);
    if ( v38 )
    {
      result = 1129346861LL;
      v39 = *(_QWORD *)(v38 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
      *(_DWORD *)v39 = 1129346861;
      *(_QWORD *)(v39 + 8) = 0LL;
      *(_QWORD *)(v39 + 16) = 0LL;
      *(_QWORD *)(v39 + 24) = v37;
    }
  }
  return result;
}
