/*
 * XREFs of Usbh_PCE_wChange_Action @ 0x1C00103B0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x1C0008C10 (UsbhUnlockPcqWithTag.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003C218 (WPP_RECORDER_SF_dq.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C004129C (UsbhRemoveQueuedSuspend.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0042448 (UsbhiSignalSuspendEvent.c)
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
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 **v23; // r14
  int v24; // r15d
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // r8d
  __int64 v28; // r9
  __int64 v29; // r10
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  KIRQL v34; // dl
  __int64 v36; // rax
  __int64 *v37; // r13
  __int64 v38; // rax
  int v39; // r8d
  __int64 v40; // r9
  __int64 v41; // r10
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // ecx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 *v56; // rcx
  __int64 *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  KIRQL v62; // [rsp+80h] [rbp+8h]

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
  v62 = v10;
  *(_DWORD *)(a2 + 448) = 1;
  v13 = UsbhLogMask;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 64);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 724267376;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = 16LL;
      *(_QWORD *)(v15 + 24) = v11;
      v13 = UsbhLogMask;
    }
  }
  v16 = *(unsigned __int16 *)(a2 + 4);
  v17 = *(int *)(a2 + 12);
  if ( (v13 & 0x10) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
      *(_DWORD *)v19 = 724267376;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = v17;
      *(_QWORD *)(v19 + 24) = v16;
    }
  }
  v20 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v20;
  v21 = a2 + 32 * (v20 + 43);
  *(_DWORD *)v21 = 16;
  v22 = *(_DWORD *)(a2 + 12);
  *(_QWORD *)(v21 + 12) = 0LL;
  *(_QWORD *)(v21 + 20) = 0LL;
  *(_DWORD *)(v21 + 28) = 0;
  v23 = (__int64 **)(a2 + 456);
  *(_DWORD *)(v21 + 4) = v22;
  *(_DWORD *)(v21 + 8) = -1;
  v24 = *(_DWORD *)(a2 + 12);
  if ( *v23 == (__int64 *)v23 )
  {
    KeResetEvent((PRKEVENT)(a2 + 496));
    if ( v24 != 3 )
    {
      switch ( v24 )
      {
        case 8:
        case 10:
          v60 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 8;
          *(_DWORD *)(v60 + a2 + 1384) = 8;
          goto LABEL_71;
        case 12:
        case 17:
          goto LABEL_71;
        case 13:
          v59 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 12;
          *(_DWORD *)(v59 + a2 + 1384) = 12;
          goto LABEL_71;
        case 14:
          break;
        default:
          goto LABEL_70;
      }
    }
    v46 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 3;
    *(_DWORD *)(v46 + a2 + 1384) = 3;
    v47 = *(unsigned __int16 *)(a2 + 4);
    v48 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v49 = *(_QWORD *)(a1 + 64);
      if ( v49 )
      {
        v50 = *(_QWORD *)(v49 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v49 + 880)) & *(_DWORD *)(v49 + 884));
        *(_DWORD *)v50 = 757952880;
        *(_QWORD *)(v50 + 8) = 0LL;
        *(_QWORD *)(v50 + 16) = v48;
        *(_QWORD *)(v50 + 24) = v47;
      }
    }
    v51 = *(_DWORD *)(a2 + 12);
    v52 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v52 + a2 + 1384) = v51;
    goto LABEL_23;
  }
  switch ( v24 )
  {
    case 12:
LABEL_16:
      v6 = *v23;
      v25 = **v23;
      if ( (__int64 **)(*v23)[1] != v23 || *(__int64 **)(v25 + 8) != v6 )
        __fastfail(3u);
      *v23 = (__int64 *)v25;
      *(_QWORD *)(v25 + 8) = v23;
      v26 = *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 12;
      *(_DWORD *)(32 * v26 + a2 + 1384) = 12;
      v27 = *((_DWORD *)v6 - 2);
      v28 = *(unsigned __int16 *)(a2 + 4);
      v29 = *(int *)(a2 + 12);
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
      v33 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v33 + a2 + 8) = v32;
      if ( v27 )
        *(_DWORD *)(v33 + a2 + 12) = v27;
LABEL_23:
      v34 = v12;
LABEL_24:
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v34);
      return v6;
    case 3:
    case 8:
    case 10:
      goto LABEL_27;
    case 13:
      goto LABEL_16;
    case 14:
LABEL_27:
      v6 = *v23;
      v36 = **v23;
      if ( (__int64 **)(*v23)[1] != v23 || *(__int64 **)(v36 + 8) != v6 )
        __fastfail(3u);
      *v23 = (__int64 *)v36;
      v37 = v6 - 2;
      *(_QWORD *)(v36 + 8) = v23;
      if ( (*(_DWORD *)(a2 + 2408) & 2) != 0 && (v37[1] & 1) != 0 )
      {
        UsbhRemoveQueuedSuspend(a1, a2);
        UsbhiSignalSuspendEvent(a1, a2);
        v56 = *v23;
        v57 = v6;
        if ( (__int64 **)(*v23)[1] != v23 )
          __fastfail(3u);
        *v6 = (__int64)v56;
        v37[3] = (__int64)v23;
        v6 = 0LL;
        v56[1] = (__int64)v57;
        *v23 = v57;
        v58 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_BYTE *)(a2 + 2839) = 1;
        *(_DWORD *)(a2 + 12) = 14;
        *(_DWORD *)(v58 + a2 + 1384) = 14;
      }
      else if ( v24 != 3 && (v24 == 8 || v24 == 10) )
      {
        v53 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 8;
        *(_DWORD *)(v53 + a2 + 1384) = 8;
      }
      else
      {
        v38 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 3;
        *(_DWORD *)(v38 + a2 + 1384) = 3;
      }
      v39 = *((_DWORD *)v37 + 2);
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
      v45 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v45 + a2 + 8) = v44;
      if ( v39 )
        *(_DWORD *)(v45 + a2 + 12) = v39;
      v34 = v62;
      goto LABEL_24;
    case 17:
      v6 = *v23;
      v54 = **v23;
      if ( (__int64 **)(*v23)[1] != v23 || *(__int64 **)(v54 + 8) != v6 )
        __fastfail(3u);
      *v23 = (__int64 *)v54;
      *(_QWORD *)(v54 + 8) = v23;
      v55 = *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 17;
      *(_DWORD *)(32 * v55 + a2 + 1384) = 17;
      break;
    default:
LABEL_70:
      v61 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v61 + a2 + 1384) = 19;
      break;
  }
LABEL_71:
  UsbhUnlockPcqWithTag(a1, a2, v12);
  return v6;
}
