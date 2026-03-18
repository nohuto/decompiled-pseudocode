/*
 * XREFs of Usbh_PCE_psPAUSED_Action @ 0x1C000BA70
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSignalDriverResetEvent @ 0x1C0006A00 (UsbhSignalDriverResetEvent.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0007AAC (UsbhUnlockPcqWithTag.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0007CD8 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhFlushPortChangeQueue @ 0x1C0008C58 (UsbhFlushPortChangeQueue.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C0008D14 (UsbhFreePortChangeQueueObject.c)
 *     UsbhSignalPauseEvent @ 0x1C0008E50 (UsbhSignalPauseEvent.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A898 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhRefPdo @ 0x1C000B180 (UsbhRefPdo.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhCancelResetTimeout @ 0x1C0019250 (UsbhCancelResetTimeout.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D4D4 (WPP_RECORDER_SF_dq.c)
 *     UsbhBusUnlatchPdo @ 0x1C0051360 (UsbhBusUnlatchPdo.c)
 */

void __fastcall Usbh_PCE_psPAUSED_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  KIRQL v8; // al
  __int64 v9; // r8
  KIRQL v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebp
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  KSPIN_LOCK *v23; // rbp
  KIRQL v24; // r14
  _DWORD *v25; // rdx
  __int64 v26; // r14
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  unsigned __int16 v33; // bp
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  KIRQL v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // ebp
  int v47; // ebp
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 *v51; // r8
  __int64 v52; // rax
  KSPIN_LOCK *v53; // r15
  KIRQL v54; // si
  int v55; // r9d

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v6 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v7 = *(_QWORD *)(v5 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
    *(_DWORD *)v7 = 812661041;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)(v7 + 16) = a2;
    *(_QWORD *)(v7 + 24) = v6;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      a3,
      45,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v9 = *(unsigned __int16 *)(a2 + 4);
  v10 = v8;
  *(_DWORD *)(a2 + 448) = 1;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 724267376;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 19LL;
      *(_QWORD *)(v12 + 24) = v9;
    }
  }
  v13 = *(unsigned __int16 *)(a2 + 4);
  v14 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
      *(_DWORD *)v16 = 724267376;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 16) = v14;
      *(_QWORD *)(v16 + 24) = v13;
    }
  }
  v17 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v17;
  v18 = a2 + 32 * (v17 + 43);
  *(_DWORD *)v18 = 19;
  *(_DWORD *)(v18 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v18 + 8) = -1;
  *(_QWORD *)(v18 + 12) = 0LL;
  *(_QWORD *)(v18 + 20) = 0LL;
  *(_DWORD *)(v18 + 28) = 0;
  v19 = *(_DWORD *)(a2 + 12);
  if ( v19 == 12 || v19 >= 5 && (v19 <= 6 || v19 == 16) )
  {
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1384) = v19;
    v20 = *(_QWORD *)(a1 + 64);
    if ( !v20 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v20 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v20);
    v21 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v22 = *(_QWORD *)(v20 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
      *(_DWORD *)v22 = 1397778803;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 16) = 0LL;
      *(_QWORD *)(v22 + 24) = v21;
    }
    v23 = (KSPIN_LOCK *)(v20 + 4944);
    v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 4944));
    if ( *(_QWORD *)(a2 + 792) )
    {
      *(_QWORD *)(a2 + 792) = 0LL;
      KeSetEvent((PRKEVENT)(a2 + 800), 0, 0);
    }
    KeReleaseSpinLock(v23, v24);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        55,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        *(_WORD *)(a2 + 4));
    v25 = *(_DWORD **)(a1 + 64);
    if ( !v25 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *v25 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v25);
    v26 = a2 + 456;
    while ( *(_QWORD *)v26 != v26 )
    {
      v51 = *(__int64 **)v26;
      if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 || (v52 = *v51, *(__int64 **)(*v51 + 8) != v51) )
        __fastfail(3u);
      *(_QWORD *)v26 = v52;
      *(_QWORD *)(v52 + 8) = v26;
      UsbhFreePortChangeQueueObject(a1, a2, (__int64)(v51 - 2), 1);
    }
    v27 = *(unsigned __int16 *)(a2 + 4);
    v28 = *(int *)(a2 + 12);
    *(_DWORD *)(a2 + 2876) = 0;
    *(_BYTE *)(a2 + 2839) = 0;
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
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
    v33 = *(_WORD *)(a2 + 4);
    v34 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v35 = *(_QWORD *)(a1 + 64);
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
        *(_DWORD *)v36 = 1329877100;
        *(_QWORD *)(v36 + 16) = v33;
        *(_QWORD *)(v36 + 8) = 0LL;
        *(_QWORD *)(v36 + 24) = 1884308559LL;
      }
    }
    v37 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v38 = *(_QWORD *)(a1 + 64);
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
        *(_DWORD *)v39 = 1413771367;
        *(_QWORD *)(v39 + 16) = v33;
        *(_QWORD *)(v39 + 8) = 0LL;
        *(_QWORD *)(v39 + 24) = 0LL;
      }
    }
    if ( v33 )
    {
      v40 = *(_QWORD *)(a1 + 64);
      if ( !v40 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v40 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v40);
      if ( v33 <= *(unsigned __int8 *)(v40 + 2938) )
      {
        v41 = *(_QWORD *)(v40 + 3056);
        if ( v41 )
        {
          v42 = 2928LL * v33;
          v43 = v42 + v41 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v42 = *(_QWORD *)(v40 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
            *(_DWORD *)v42 = 1044672615;
            *(_QWORD *)(v42 + 16) = v33;
            *(_QWORD *)(v42 + 8) = 0LL;
            *(_QWORD *)(v42 + 24) = v43;
          }
          if ( v43 )
          {
            v34 = *(_QWORD *)(v43 + 392);
            if ( v34 )
              v34 = UsbhRefPdo(v42, v34, 0LL, 1884308559);
          }
        }
      }
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v37);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v44 = *(_QWORD *)(a1 + 64);
      if ( v44 )
      {
        v45 = *(_QWORD *)(v44 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v44 + 880)) & *(_DWORD *)(v44 + 884));
        *(_DWORD *)v45 = 1634744625;
        *(_QWORD *)(v45 + 8) = 0LL;
        *(_QWORD *)(v45 + 16) = a2;
        *(_QWORD *)(v45 + 24) = v34;
      }
    }
    if ( v34 )
    {
      v53 = (KSPIN_LOCK *)(v5 + 5168);
      *(_DWORD *)(a2 + 416) = 1;
      v54 = KeAcquireSpinLockRaiseToDpc(v53);
      if ( *(_QWORD *)(PdoExt(v34) + 864) )
      {
        Log(a1, 4, 825847906, v34, 0LL);
        KeReleaseSpinLock(v53, v54);
        UsbhCancelResetTimeout(a1, a2, 1LL);
        UsbhReleaseEnumBusLockEx(a1, a3, *(_WORD *)(a2 + 4));
        UsbhSignalSyncDeviceResetPdo(a1, v34, -1073741823);
        UsbhSignalDriverResetEvent(a1, a2);
      }
      else
      {
        KeReleaseSpinLock(v53, v54);
      }
      UsbhBusUnlatchPdo(a1, v34, a2, v55, 0LL);
    }
  }
  else
  {
    UsbhFlushPortChangeQueue(a1, a2, v13, v14);
    v46 = v19 - 10;
    if ( v46 )
    {
      v47 = v46 - 3;
      if ( v47 )
      {
        if ( v47 == 1 )
        {
          v48 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 3;
          *(_DWORD *)(v48 + a2 + 1384) = 3;
        }
      }
      else
      {
        v49 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v49 + a2 + 1384) = 12;
      }
    }
    else
    {
      v50 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 8;
      *(_DWORD *)(v50 + a2 + 1384) = 8;
    }
    UsbhSignalPauseEvent(a1, a2);
    UsbhUnlockPcqWithTag(a1, a2, v10);
  }
}
