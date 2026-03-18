/*
 * XREFs of Usbh_PCE_psPAUSED_Action @ 0x1C00236A0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSignalDriverResetEvent @ 0x1C0007D84 (UsbhSignalDriverResetEvent.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0008C10 (UsbhUnlockPcqWithTag.c)
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0008E44 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhFlushPortChangeQueue @ 0x1C0009998 (UsbhFlushPortChangeQueue.c)
 *     UsbhFreePortChangeQueueObject @ 0x1C0009A54 (UsbhFreePortChangeQueueObject.c)
 *     UsbhSignalPauseEvent @ 0x1C0009B90 (UsbhSignalPauseEvent.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A028 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhRefPdo @ 0x1C000B0C0 (UsbhRefPdo.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhCancelResetTimeout @ 0x1C00218C4 (UsbhCancelResetTimeout.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 *     UsbhBusUnlatchPdo @ 0x1C005059C (UsbhBusUnlatchPdo.c)
 */

void __fastcall Usbh_PCE_psPAUSED_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  KIRQL v8; // al
  __int64 v9; // r8
  KIRQL v10; // r13
  char v11; // cl
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  KSPIN_LOCK *v24; // rsi
  KIRQL v25; // r14
  _DWORD *v26; // rdx
  __int64 **v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  unsigned __int16 v34; // si
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  KIRQL v38; // al
  char v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // esi
  int v48; // esi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 *v52; // r8
  __int64 v53; // rax
  KSPIN_LOCK *v54; // r15
  KIRQL v55; // si
  int v56; // r9d
  KIRQL v58; // [rsp+98h] [rbp+20h]

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
  v11 = UsbhLogMask;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 724267376;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = 19LL;
      *(_QWORD *)(v13 + 24) = v9;
      v11 = UsbhLogMask;
    }
  }
  v14 = *(unsigned __int16 *)(a2 + 4);
  v15 = *(int *)(a2 + 12);
  if ( (v11 & 0x10) != 0 )
  {
    v16 = *(_QWORD *)(a1 + 64);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
      *(_DWORD *)v17 = 724267376;
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_QWORD *)(v17 + 16) = v15;
      *(_QWORD *)(v17 + 24) = v14;
    }
  }
  v18 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v18;
  v19 = a2 + 32 * (v18 + 43);
  *(_DWORD *)v19 = 19;
  *(_DWORD *)(v19 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v19 + 8) = -1;
  *(_QWORD *)(v19 + 12) = 0LL;
  *(_QWORD *)(v19 + 20) = 0LL;
  *(_DWORD *)(v19 + 28) = 0;
  v20 = *(_DWORD *)(a2 + 12);
  if ( v20 == 12 || v20 >= 5 && (v20 <= 6 || v20 == 16) )
  {
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1384) = v20;
    v21 = *(_QWORD *)(a1 + 64);
    if ( !v21 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v21 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v21);
    v22 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v23 = *(_QWORD *)(v21 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
      *(_DWORD *)v23 = 1397778803;
      *(_QWORD *)(v23 + 8) = 0LL;
      *(_QWORD *)(v23 + 16) = 0LL;
      *(_QWORD *)(v23 + 24) = v22;
    }
    v24 = (KSPIN_LOCK *)(v21 + 4944);
    v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 4944));
    if ( *(_QWORD *)(a2 + 792) )
    {
      *(_QWORD *)(a2 + 792) = 0LL;
      KeSetEvent((PRKEVENT)(a2 + 800), 0, 0);
    }
    KeReleaseSpinLock(v24, v25);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        55,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        *(_WORD *)(a2 + 4));
    v26 = *(_DWORD **)(a1 + 64);
    if ( !v26 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *v26 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v26);
    v27 = (__int64 **)(a2 + 456);
    while ( *v27 != (__int64 *)v27 )
    {
      v52 = *v27;
      v53 = **v27;
      if ( (__int64 **)(*v27)[1] != v27 || *(__int64 **)(v53 + 8) != v52 )
        __fastfail(3u);
      *v27 = (__int64 *)v53;
      *(_QWORD *)(v53 + 8) = v27;
      UsbhFreePortChangeQueueObject(a1, a2, (__int64)(v52 - 2), 1);
    }
    v28 = *(unsigned __int16 *)(a2 + 4);
    v29 = *(int *)(a2 + 12);
    *(_DWORD *)(a2 + 2876) = 0;
    *(_BYTE *)(a2 + 2839) = 0;
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v30 = *(_QWORD *)(a1 + 64);
      if ( v30 )
      {
        v31 = *(_QWORD *)(v30 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
        *(_DWORD *)v31 = 757952880;
        *(_QWORD *)(v31 + 8) = 0LL;
        *(_QWORD *)(v31 + 16) = v29;
        *(_QWORD *)(v31 + 24) = v28;
      }
    }
    v32 = *(_DWORD *)(a2 + 12);
    v33 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v33 + a2 + 1384) = v32;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
    v34 = *(_WORD *)(a2 + 4);
    v35 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v36 = *(_QWORD *)(a1 + 64);
      if ( v36 )
      {
        v37 = *(_QWORD *)(v36 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
        *(_DWORD *)v37 = 1329877100;
        *(_QWORD *)(v37 + 16) = v34;
        *(_QWORD *)(v37 + 8) = 0LL;
        *(_QWORD *)(v37 + 24) = 1884308559LL;
      }
    }
    v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    v39 = UsbhLogMask;
    v58 = v38;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v40 = *(_QWORD *)(a1 + 64);
      if ( v40 )
      {
        v41 = *(_QWORD *)(v40 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
        *(_DWORD *)v41 = 1413771367;
        *(_QWORD *)(v41 + 16) = v34;
        *(_QWORD *)(v41 + 8) = 0LL;
        *(_QWORD *)(v41 + 24) = 0LL;
        v39 = UsbhLogMask;
      }
    }
    if ( v34 )
    {
      v42 = *(_QWORD *)(a1 + 64);
      if ( !v42 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v42 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v42);
      if ( v34 <= *(unsigned __int8 *)(v42 + 2938) )
      {
        v43 = *(_QWORD *)(v42 + 3056);
        if ( v43 )
        {
          v44 = v43 + 2928LL * (v34 - 1);
          if ( (v39 & 8) != 0 )
          {
            v43 = *(_QWORD *)(v42 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
            *(_DWORD *)v43 = 1044672615;
            *(_QWORD *)(v43 + 16) = v34;
            *(_QWORD *)(v43 + 8) = 0LL;
            *(_QWORD *)(v43 + 24) = v44;
          }
          if ( v44 )
          {
            v35 = *(_QWORD *)(v44 + 392);
            if ( v35 )
              v35 = UsbhRefPdo(v43, v35, 0LL, 1884308559);
          }
        }
      }
    }
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v58);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v45 = *(_QWORD *)(a1 + 64);
      if ( v45 )
      {
        v46 = *(_QWORD *)(v45 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
        *(_DWORD *)v46 = 1634744625;
        *(_QWORD *)(v46 + 8) = 0LL;
        *(_QWORD *)(v46 + 16) = a2;
        *(_QWORD *)(v46 + 24) = v35;
      }
    }
    if ( v35 )
    {
      v54 = (KSPIN_LOCK *)(v5 + 5168);
      *(_DWORD *)(a2 + 416) = 1;
      v55 = KeAcquireSpinLockRaiseToDpc(v54);
      if ( *((_QWORD *)PdoExt(v35) + 108) )
      {
        Log(a1, 4, 825847906, v35, 0LL);
        KeReleaseSpinLock(v54, v55);
        UsbhCancelResetTimeout(a1, a2, 1);
        UsbhReleaseEnumBusLockEx(a1, a3, *(_WORD *)(a2 + 4));
        UsbhSignalSyncDeviceResetPdo(a1, v35, -1073741823);
        UsbhSignalDriverResetEvent(a1, a2);
      }
      else
      {
        KeReleaseSpinLock(v54, v55);
      }
      UsbhBusUnlatchPdo(a1, v35, a2, v56, 0LL);
    }
  }
  else
  {
    UsbhFlushPortChangeQueue(a1, a2, v14, v15);
    v47 = v20 - 10;
    if ( v47 )
    {
      v48 = v47 - 3;
      if ( v48 )
      {
        if ( v48 == 1 )
        {
          v49 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 3;
          *(_DWORD *)(v49 + a2 + 1384) = 3;
        }
      }
      else
      {
        v50 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v50 + a2 + 1384) = 12;
      }
    }
    else
    {
      v51 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 8;
      *(_DWORD *)(v51 + a2 + 1384) = 8;
    }
    UsbhSignalPauseEvent(a1, a2);
    UsbhUnlockPcqWithTag(a1, a2, v10);
  }
}
