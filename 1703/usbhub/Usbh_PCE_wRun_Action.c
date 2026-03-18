/*
 * XREFs of Usbh_PCE_wRun_Action @ 0x1C000FE10
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x1C0008C10 (UsbhUnlockPcqWithTag.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C000F560 (UsbhHubRunPortChangeQueue.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall Usbh_PCE_wRun_Action(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rdx
  KIRQL v7; // al
  __int64 v8; // r8
  char v9; // cl
  KIRQL v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int16 v19; // ax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // r9d
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  KIRQL v54; // [rsp+70h] [rbp+8h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      a3,
      33,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v8 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v9 = UsbhLogMask;
  v10 = v7;
  v54 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v10 = v7;
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 724267376;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = 5LL;
      *(_QWORD *)(v12 + 24) = v8;
      v9 = UsbhLogMask;
    }
  }
  v13 = *(unsigned __int16 *)(a2 + 4);
  v14 = *(int *)(a2 + 12);
  if ( (v9 & 0x10) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
    {
      v10 = v7;
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
  *(_DWORD *)v18 = 5;
  *(_DWORD *)(v18 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v18 + 8) = -1;
  *(_QWORD *)(v18 + 12) = 0LL;
  *(_QWORD *)(v18 + 20) = 0LL;
  *(_DWORD *)(v18 + 28) = 0;
  v19 = UsbhLogMask;
  v20 = *(int *)(a2 + 12);
  v21 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v22 = *(_QWORD *)(a1 + 64);
    if ( v22 )
    {
      v10 = v54;
      v23 = *(_QWORD *)(v22 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
      *(_DWORD *)v23 = 812660063;
      *(_QWORD *)(v23 + 8) = 0LL;
      *(_QWORD *)(v23 + 16) = v20;
      *(_QWORD *)(v23 + 24) = v21;
      v19 = UsbhLogMask;
    }
  }
  switch ( (_DWORD)v20 )
  {
    case 5:
      v30 = *(unsigned __int16 *)(a2 + 4);
      if ( (v19 & 0x200) != 0 )
      {
        v31 = *(_QWORD *)(a1 + 64);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
          *(_DWORD *)v32 = 896546143;
          *(_QWORD *)(v32 + 8) = 0LL;
          *(_QWORD *)(v32 + 16) = 5LL;
          *(_QWORD *)(v32 + 24) = v30;
        }
      }
      v33 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 12;
      *(_DWORD *)(v33 + a2 + 1384) = 12;
      goto LABEL_25;
    case 6:
LABEL_17:
      KeResetEvent((PRKEVENT)(a2 + 496));
      v24 = *(unsigned __int16 *)(a2 + 4);
      v25 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v26 = *(_QWORD *)(a1 + 64);
        if ( v26 )
        {
          v10 = v54;
          v27 = *(_QWORD *)(v26 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
          *(_DWORD *)v27 = 757952880;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 16) = v25;
          *(_QWORD *)(v27 + 24) = v24;
        }
      }
LABEL_20:
      v28 = *(_DWORD *)(a2 + 12);
      v29 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v29 + a2 + 1384) = v28;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
      return;
    case 4:
      v40 = *(unsigned __int16 *)(a2 + 4);
      if ( (v19 & 0x200) != 0 )
      {
        v41 = *(_QWORD *)(a1 + 64);
        if ( v41 )
        {
          v42 = *(_QWORD *)(v41 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v41 + 880)) & *(_DWORD *)(v41 + 884));
          *(_DWORD *)v42 = 862991711;
          *(_QWORD *)(v42 + 8) = 0LL;
          *(_QWORD *)(v42 + 16) = 4LL;
          *(_QWORD *)(v42 + 24) = v40;
        }
      }
      v43 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 3;
      *(_DWORD *)(v43 + a2 + 1384) = 3;
LABEL_25:
      v34 = *(int *)(a2 + 12);
      v35 = *(unsigned __int16 *)(a2 + 4);
      *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v36 = *(_QWORD *)(a1 + 64);
        if ( v36 )
        {
          v37 = *(_QWORD *)(v36 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
          *(_DWORD *)v37 = 757952880;
          *(_QWORD *)(v37 + 24) = v35;
          *(_QWORD *)(v37 + 16) = v34;
          *(_QWORD *)(v37 + 8) = 0LL;
        }
      }
      v38 = *(_DWORD *)(a2 + 12);
      v39 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v39 + a2 + 1384) = v38;
LABEL_29:
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v54);
LABEL_30:
      UsbhHubRunPortChangeQueue(a1, a2, a3);
      return;
  }
  switch ( (int)v20 )
  {
    case 3:
      Log(a1, 512, 1597337650, v20, *(unsigned __int16 *)(a2 + 4));
      v48 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 14;
      *(_DWORD *)(v48 + a2 + 1384) = 14;
      break;
    case 8:
      Log(a1, 512, 1597337650, v20, *(unsigned __int16 *)(a2 + 4));
      v49 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 10;
      *(_DWORD *)(v49 + a2 + 1384) = 10;
      break;
    case 9:
      Log(a1, 512, 1597337652, v20, *(unsigned __int16 *)(a2 + 4));
      v44 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 8;
      *(_DWORD *)(v44 + a2 + 1384) = 8;
      v45 = *(_DWORD *)(a2 + 12);
      *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
      Log(a1, 16, 1886465325, v45, *(unsigned __int16 *)(a2 + 4));
      v46 = *(_DWORD *)(a2 + 12);
      v47 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v47 + a2 + 1384) = v46;
      goto LABEL_29;
    case 10:
    case 14:
      Log(a1, 512, 1597337649, v20, *(unsigned __int16 *)(a2 + 4));
      break;
    case 12:
      Log(a1, 512, 1597337650, v20, *(unsigned __int16 *)(a2 + 4));
      v50 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 13;
      *(_DWORD *)(v50 + a2 + 1384) = 13;
      break;
    case 16:
      Log(a1, 512, 1597337655, v20, *(unsigned __int16 *)(a2 + 4));
      v52 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 17;
      *(_DWORD *)(v52 + a2 + 1384) = 17;
      *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
      UsbhUnlockPcqWithTag(a1, a2, v54);
      goto LABEL_30;
    case 17:
      Log(a1, 512, 1597337654, v20, *(unsigned __int16 *)(a2 + 4));
      v51 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 17;
      *(_DWORD *)(v51 + a2 + 1384) = 17;
      break;
    case 19:
      KeResetEvent((PRKEVENT)(a2 + 496));
      v53 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v53 + a2 + 1384) = 19;
      break;
    case 20:
      goto LABEL_17;
    default:
      Log(a1, 512, 1597337656, v20, *(unsigned __int16 *)(a2 + 4));
      Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      goto LABEL_20;
  }
  UsbhUnlockPcqWithTag(a1, a2, v10);
}
