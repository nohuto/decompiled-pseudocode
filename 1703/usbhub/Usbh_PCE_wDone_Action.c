/*
 * XREFs of Usbh_PCE_wDone_Action @ 0x1C0010890
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0007EAC (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0008C10 (UsbhUnlockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x1C0009998 (UsbhFlushPortChangeQueue.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhHubQueueProcessChangeWorker @ 0x1C00274C8 (UsbhHubQueueProcessChangeWorker.c)
 *     UsbhLogSignalSuspendEvent @ 0x1C0027698 (UsbhLogSignalSuspendEvent.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall Usbh_PCE_wDone_Action(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  KIRQL v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  KIRQL v12; // r14
  char v13; // cl
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int16 v20; // ax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // r8d
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  int v46; // r8d
  int v47; // r8d
  int v48; // r8d
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // [rsp+20h] [rbp-48h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  v7 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v8 = *(_QWORD *)(v6 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
    *(_DWORD *)v8 = 812660319;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = a2;
    *(_QWORD *)(v8 + 24) = v7;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      36,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v11 = *(unsigned __int16 *)(a2 + 4);
  v12 = v9;
  *(_DWORD *)(a2 + 448) = 1;
  v13 = UsbhLogMask;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v14 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v14 = 724267376;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = 6LL;
      *(_QWORD *)(v14 + 24) = v11;
      v13 = UsbhLogMask;
    }
  }
  v15 = *(unsigned __int16 *)(a2 + 4);
  v16 = *(int *)(a2 + 12);
  if ( (v13 & 0x10) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v17 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v17 = 724267376;
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_QWORD *)(v17 + 16) = v16;
      *(_QWORD *)(v17 + 24) = v15;
    }
  }
  v18 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v18;
  v19 = a2 + 32 * (v18 + 43);
  *(_DWORD *)v19 = 6;
  *(_DWORD *)(v19 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v19 + 8) = -1;
  *(_QWORD *)(v19 + 12) = 0LL;
  *(_QWORD *)(v19 + 20) = 0LL;
  *(_DWORD *)(v19 + 28) = 0;
  v20 = UsbhLogMask;
  v21 = *(int *)(a2 + 12);
  v22 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    if ( v10 )
    {
      v23 = *(_QWORD *)(v10 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
      *(_DWORD *)v23 = 829437535;
      *(_QWORD *)(v23 + 8) = 0LL;
      *(_QWORD *)(v23 + 16) = v21;
      *(_QWORD *)(v23 + 24) = v22;
      v20 = UsbhLogMask;
    }
  }
  if ( (_DWORD)v21 == 12 )
  {
    v24 = *(unsigned __int16 *)(a2 + 4);
    if ( (v20 & 0x200) != 0 )
    {
      v25 = *(_QWORD *)(a1 + 64);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
        *(_DWORD *)v26 = 862991967;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 16) = 0LL;
        *(_QWORD *)(v26 + 24) = v24;
        LOBYTE(v20) = UsbhLogMask;
      }
    }
    v27 = *(unsigned __int16 *)(a2 + 4);
    v28 = *(int *)(a2 + 12);
    if ( (v20 & 0x10) != 0 )
    {
      v29 = *(_QWORD *)(a1 + 64);
      if ( v29 )
      {
        v30 = *(_QWORD *)(v29 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
        *(_DWORD *)v30 = 1986359664;
        *(_QWORD *)(v30 + 8) = 0LL;
        *(_QWORD *)(v30 + 16) = v28;
        *(_QWORD *)(v30 + 24) = v27;
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 30;
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    v31 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_QWORD *)(a2 + 384) = 0LL;
    *(_DWORD *)(a2 + 12) = 6;
    *(_DWORD *)(v31 + a2 + 1384) = 6;
LABEL_25:
    v32 = *(int *)(a2 + 12);
    v33 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v34 = *(_QWORD *)(a1 + 64);
      if ( v34 )
      {
        v35 = *(_QWORD *)(v34 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
        *(_DWORD *)v35 = 757952880;
        *(_QWORD *)(v35 + 24) = v33;
        *(_QWORD *)(v35 + 16) = v32;
        *(_QWORD *)(v35 + 8) = 0LL;
      }
    }
    v36 = *(_DWORD *)(a2 + 12);
    v37 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v37 + a2 + 1384) = v36;
LABEL_29:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v12);
    return;
  }
  if ( (_DWORD)v21 == 3 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        3,
        38,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        *(_WORD *)(a2 + 4),
        a2);
      v20 = UsbhLogMask;
    }
    v38 = *(unsigned __int16 *)(a2 + 4);
    if ( (v20 & 0x200) != 0 )
    {
      v39 = *(_QWORD *)(a1 + 64);
      if ( v39 )
      {
        v40 = *(_QWORD *)(v39 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
        *(_DWORD *)v40 = 879769183;
        *(_QWORD *)(v40 + 8) = 0LL;
        *(_QWORD *)(v40 + 16) = 0LL;
        *(_QWORD *)(v40 + 24) = v38;
      }
    }
    v41 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 2;
    *(_DWORD *)(v41 + a2 + 1384) = 2;
    *(_QWORD *)(a2 + 384) = 0LL;
    goto LABEL_25;
  }
  v42 = v21 - 8;
  if ( !v42 )
  {
    Log(a1, 512, 1597403190, a2, *(unsigned __int16 *)(a2 + 4));
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        40,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        *(_WORD *)(a2 + 4));
    Log(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 30;
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    v43 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_QWORD *)(a2 + 384) = 0LL;
    *(_DWORD *)(a2 + 12) = 7;
    *(_DWORD *)(v43 + a2 + 1384) = 7;
    if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2) )
    {
      Log(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 16) = 30;
    }
    Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    v44 = *(_DWORD *)(a2 + 12);
    v45 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v45 + a2 + 1384) = v44;
    goto LABEL_29;
  }
  v46 = v42 - 2;
  if ( v46 )
  {
    v47 = v46 - 3;
    if ( !v47 )
    {
      Log(a1, 512, 1597403186, a2, *(unsigned __int16 *)(a2 + 4));
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          37,
          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
          *(_WORD *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 30);
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      v54 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 6;
      *(_DWORD *)(v54 + a2 + 1384) = 6;
      goto LABEL_60;
    }
    v48 = v47 - 1;
    if ( v48 )
    {
      v57 = *(unsigned __int16 *)(a2 + 4);
      if ( v48 != 3 )
      {
        Log(a1, 512, 1597403224, a2, v57);
        v49 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v49 + a2 + 1384) = 19;
LABEL_61:
        UsbhUnlockPcqWithTag(a1, a2, v12);
        return;
      }
      Log(a1, 512, 1597403186, a2, v57);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          42,
          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
          *(_WORD *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL, 30);
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      v52 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 15;
      *(_DWORD *)(v52 + a2 + 1384) = 15;
LABEL_60:
      UsbhFlushPortChangeQueue(a1, a2, v50, v51);
      *(_QWORD *)(a2 + 384) = 0LL;
      goto LABEL_61;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        0,
        39,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        *(_WORD *)(a2 + 4),
        a2);
    Log(a1, 512, 1597403189, 0, *(unsigned __int16 *)(a2 + 4));
    v53 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 4;
    *(_DWORD *)(v53 + a2 + 1384) = 4;
  }
  else
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        0,
        41,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        *(_WORD *)(a2 + 4),
        a2);
    Log(a1, 512, 1597403191, 0, *(unsigned __int16 *)(a2 + 4));
    v55 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 9;
    *(_DWORD *)(v55 + a2 + 1384) = 9;
  }
  *(_QWORD *)(a2 + 384) = 0LL;
  UsbhUnlockPcqWithTag(a1, a2, v12);
  UsbhHubQueueProcessChangeWorker(v56, a2);
}
