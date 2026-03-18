/*
 * XREFs of Usbh_PCE_wChange_Action @ 0x1C000F4E0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x1C0007AAC (UsbhUnlockPcqWithTag.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D4D4 (WPP_RECORDER_SF_dq.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C004208C (UsbhRemoveQueuedSuspend.c)
 *     UsbhiSignalSuspendEvent @ 0x1C004323C (UsbhiSignalSuspendEvent.c)
 */

__int64 *__fastcall Usbh_PCE_wChange_Action(__int64 a1, __int64 a2, char a3)
{
  __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  KIRQL v10; // al
  __int64 v11; // r8
  KIRQL v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // r14
  int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // r8d
  __int64 v27; // r9
  __int64 v28; // r10
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v34; // rax
  __int64 *v35; // rcx
  __int64 v36; // rax
  int v37; // r8d
  __int64 v38; // r9
  __int64 v39; // r10
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // ecx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 *v54; // rdx
  __int64 *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax

  v6 = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v7);
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v9 = *(_QWORD *)(v7 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
    *(_DWORD *)v9 = 812660273;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = a2;
    *(_QWORD *)(v9 + 24) = v8;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      43,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v11 = *(unsigned __int16 *)(a2 + 4);
  v12 = v10;
  *(_DWORD *)(a2 + 448) = 1;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 724267376;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = 16LL;
      *(_QWORD *)(v14 + 24) = v11;
    }
  }
  v15 = *(unsigned __int16 *)(a2 + 4);
  v16 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 64);
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
      *(_DWORD *)v18 = 724267376;
      *(_QWORD *)(v18 + 8) = 0LL;
      *(_QWORD *)(v18 + 16) = v16;
      *(_QWORD *)(v18 + 24) = v15;
    }
  }
  v19 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v19;
  v20 = a2 + 32 * (v19 + 43);
  *(_DWORD *)v20 = 16;
  v21 = *(_DWORD *)(a2 + 12);
  *(_QWORD *)(v20 + 12) = 0LL;
  *(_QWORD *)(v20 + 20) = 0LL;
  *(_DWORD *)(v20 + 28) = 0;
  v22 = a2 + 456;
  *(_DWORD *)(v20 + 4) = v21;
  *(_DWORD *)(v20 + 8) = -1;
  v23 = *(_DWORD *)(a2 + 12);
  if ( *(_QWORD *)v22 == v22 )
  {
    KeResetEvent((PRKEVENT)(a2 + 496));
    if ( v23 != 3 )
    {
      switch ( v23 )
      {
        case 8:
        case 10:
          v58 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 8;
          *(_DWORD *)(v58 + a2 + 1384) = 8;
          goto LABEL_69;
        case 12:
        case 17:
          goto LABEL_69;
        case 13:
          v57 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 12;
          *(_DWORD *)(v57 + a2 + 1384) = 12;
          goto LABEL_69;
        case 14:
          break;
        default:
          goto LABEL_68;
      }
    }
    v44 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 3;
    *(_DWORD *)(v44 + a2 + 1384) = 3;
    v45 = *(unsigned __int16 *)(a2 + 4);
    v46 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v47 = *(_QWORD *)(a1 + 64);
      if ( v47 )
      {
        v48 = *(_QWORD *)(v47 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884));
        *(_DWORD *)v48 = 757952880;
        *(_QWORD *)(v48 + 8) = 0LL;
        *(_QWORD *)(v48 + 16) = v46;
        *(_QWORD *)(v48 + 24) = v45;
      }
    }
    v49 = *(_DWORD *)(a2 + 12);
    v50 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v50 + a2 + 1384) = v49;
    goto LABEL_23;
  }
  switch ( v23 )
  {
    case 12:
      goto LABEL_16;
    case 3:
    case 8:
    case 10:
      goto LABEL_26;
    case 13:
LABEL_16:
      v6 = *(__int64 **)v22;
      if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22 || (v24 = *v6, *(__int64 **)(*v6 + 8) != v6) )
        __fastfail(3u);
      *(_QWORD *)v22 = v24;
      *(_QWORD *)(v24 + 8) = v22;
      v25 = *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 12;
      *(_DWORD *)(32 * v25 + a2 + 1384) = 12;
      v26 = *((_DWORD *)v6 - 2);
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
      v32 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v32 + a2 + 8) = v31;
      if ( v26 )
        *(_DWORD *)(v32 + a2 + 12) = v26;
LABEL_23:
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v12);
      return v6;
    case 14:
LABEL_26:
      v6 = *(__int64 **)v22;
      if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22 || (v34 = *v6, *(__int64 **)(*v6 + 8) != v6) )
        __fastfail(3u);
      *(_QWORD *)v22 = v34;
      v35 = v6 - 2;
      *(_QWORD *)(v34 + 8) = v22;
      if ( (*(_DWORD *)(a2 + 2408) & 2) != 0 && (v35[1] & 1) != 0 )
      {
        UsbhRemoveQueuedSuspend(a1, a2, v15, v16);
        UsbhiSignalSuspendEvent(a1, a2);
        v54 = *(__int64 **)v22;
        v35 = v6 - 2;
        v55 = v6;
        if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22 )
          __fastfail(3u);
        *v6 = (__int64)v54;
        v6[1] = v22;
        v6 = 0LL;
        v54[1] = (__int64)v55;
        *(_QWORD *)v22 = v55;
        v56 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_BYTE *)(a2 + 2839) = 1;
        *(_DWORD *)(a2 + 12) = 14;
        *(_DWORD *)(v56 + a2 + 1384) = 14;
      }
      else if ( v23 != 3 && (v23 == 8 || v23 == 10) )
      {
        v51 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 8;
        *(_DWORD *)(v51 + a2 + 1384) = 8;
      }
      else
      {
        v36 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 3;
        *(_DWORD *)(v36 + a2 + 1384) = 3;
      }
      v37 = *((_DWORD *)v35 + 2);
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
      v43 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v43 + a2 + 8) = v42;
      if ( v37 )
        *(_DWORD *)(v43 + a2 + 12) = v37;
      goto LABEL_23;
    case 17:
      v6 = *(__int64 **)v22;
      if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22 || (v52 = *v6, *(__int64 **)(*v6 + 8) != v6) )
        __fastfail(3u);
      *(_QWORD *)v22 = v52;
      *(_QWORD *)(v52 + 8) = v22;
      v53 = *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 17;
      *(_DWORD *)(32 * v53 + a2 + 1384) = 17;
      break;
    default:
LABEL_68:
      v59 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v59 + a2 + 1384) = 19;
      break;
  }
LABEL_69:
  UsbhUnlockPcqWithTag(a1, a2, v12);
  return v6;
}
