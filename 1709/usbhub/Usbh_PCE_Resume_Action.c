/*
 * XREFs of Usbh_PCE_Resume_Action @ 0x1C00129D0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhiSignalResumeEvent @ 0x1C0006680 (UsbhiSignalResumeEvent.c)
 *     UsbhSetResumePending @ 0x1C0006AA4 (UsbhSetResumePending.c)
 *     UsbhSetPcqEventStatus @ 0x1C0006B28 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0007AAC (UsbhUnlockPcqWithTag.c)
 *     UsbhDecHubBusy @ 0x1C000B930 (UsbhDecHubBusy.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C000C580 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhIncHubBusy @ 0x1C0013140 (UsbhIncHubBusy.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C004208C (UsbhRemoveQueuedSuspend.c)
 *     UsbhiSignalSuspendEvent @ 0x1C004323C (UsbhiSignalSuspendEvent.c)
 */

LONG __fastcall Usbh_PCE_Resume_Action(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v5; // rdx
  int v6; // r13d
  _QWORD *v7; // r14
  KIRQL v8; // al
  __int64 v9; // r8
  KIRQL v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  KSPIN_LOCK *v27; // rsi
  KIRQL v28; // al
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  struct _KEVENT *v40; // rbx
  __int64 Signalling; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  LONG result; // eax
  __int64 v48; // rsi
  KIRQL v49; // al
  KIRQL v50; // di
  __int64 v51; // rax
  int v52; // r8d
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // edi
  __int64 v59; // rax
  int v60; // r8d
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  volatile int Lock; // eax
  __int64 Timeout; // [rsp+20h] [rbp-58h]
  __int64 Timeouta; // [rsp+20h] [rbp-58h]
  __int64 Timeoutb; // [rsp+20h] [rbp-58h]
  __int64 Timeoutc; // [rsp+20h] [rbp-58h]
  _DWORD v70[4]; // [rsp+30h] [rbp-48h] BYREF
  KIRQL v71; // [rsp+80h] [rbp+8h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_DWORD **)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v5);
  v6 = 0;
  v7 = (_QWORD *)UsbhIncHubBusy(a1, a3, a1, 1383162736, 0);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v9 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v10 = v8;
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
      *(_QWORD *)(v12 + 16) = 3LL;
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
  *(_DWORD *)v18 = 3;
  *(_DWORD *)(v18 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v18 + 8) = -1;
  *(_QWORD *)(v18 + 12) = 0LL;
  *(_QWORD *)(v18 + 20) = 0LL;
  *(_DWORD *)(v18 + 28) = 0;
  v19 = *(int *)(a2 + 12);
  v20 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v21 = *(_QWORD *)(a1 + 64);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v21 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
      *(_DWORD *)v22 = 812659551;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 16) = v19;
      *(_QWORD *)(v22 + 24) = v20;
    }
  }
  if ( (_DWORD)v19 == 1 )
  {
    v23 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v24 = *(_QWORD *)(a1 + 64);
      if ( v24 )
      {
        v25 = *(_QWORD *)(v24 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
        *(_DWORD *)v25 = 862991199;
        *(_QWORD *)(v25 + 8) = 0LL;
        *(_QWORD *)(v25 + 16) = 1LL;
        *(_QWORD *)(v25 + 24) = v23;
      }
    }
    v26 = *(_QWORD *)(a1 + 64);
    if ( !v26 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v26 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    v27 = (KSPIN_LOCK *)(v26 + 4944);
    v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 4944));
    v29 = *(unsigned __int16 *)(a2 + 4);
    v30 = *(int *)(a2 + 696);
    v71 = v28;
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v31 = *(_QWORD *)(a1 + 64);
      if ( v31 )
      {
        v32 = *(_QWORD *)(v31 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
        *(_DWORD *)v32 = 1397909875;
        *(_QWORD *)(v32 + 8) = 0LL;
        *(_QWORD *)(v32 + 16) = v30;
        *(_QWORD *)(v32 + 24) = v29;
      }
    }
    if ( *(_DWORD *)(a2 + 696) == 3 )
    {
      Log(a1, 16, 1936282232, 3, *(unsigned __int16 *)(a2 + 4));
      *(_DWORD *)(a2 + 696) = 0;
      KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
      v28 = v71;
      v6 = 1;
    }
    KeReleaseSpinLock(v27, v28);
    if ( v6 )
      UsbhSetPcqEventStatus(a1, a2, 1LL, 30);
    v33 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(v33 + a2 + 1384) = 1;
    v34 = *(unsigned __int16 *)(a2 + 4);
    v35 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v36 = *(_QWORD *)(a1 + 64);
      if ( v36 )
      {
        v37 = *(_QWORD *)(v36 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
        *(_DWORD *)v37 = 757952880;
        *(_QWORD *)(v37 + 8) = 0LL;
        *(_QWORD *)(v37 + 16) = v35;
        *(_QWORD *)(v37 + 24) = v34;
      }
    }
    v38 = *(_DWORD *)(a2 + 12);
    v39 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v39 + a2 + 1384) = v38;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
    v40 = *(struct _KEVENT **)(a1 + 64);
    if ( !v40 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( v40->Header.LockNV != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    v40[142].Header.Type = 1;
    KeWaitForSingleObject(&v40[139], Executive, 0, 0, 0LL);
    Signalling = v40[142].Header.Signalling;
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      v42 = *(_QWORD *)(a1 + 64);
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
        *(_DWORD *)v43 = 1667581000;
        *(_QWORD *)(v43 + 8) = 0LL;
        *(_QWORD *)(v43 + 16) = v7;
        *(_QWORD *)(v43 + 24) = Signalling;
      }
    }
    if ( v40[142].Header.Signalling )
    {
      if ( v7 == (_QWORD *)1936941672 )
      {
        Lock = v40[130].Header.Lock;
        if ( Lock )
          v40[130].Header.LockNV = Lock - 1;
      }
      else if ( v7 )
      {
        v44 = v7[1];
        v45 = v7 + 1;
        if ( *(_QWORD **)(v44 + 8) != v7 + 1 || (v46 = (_QWORD *)v7[2], (_QWORD *)*v46 != v45) )
          __fastfail(3u);
        *v46 = v44;
        *(_QWORD *)(v44 + 8) = v46;
        v7[2] = v7 + 1;
        *v45 = v45;
        ExFreePoolWithTag(v7, 0);
      }
    }
    return KeSetEvent(v40 + 139, 0, 0);
  }
  else if ( (_DWORD)v19 == 6 )
  {
    Timeout = *(unsigned __int16 *)(a2 + 4);
    v70[0] = 0x100000;
    Log(a1, 512, 1597206578, 6, Timeout);
    v48 = FdoExt(a1);
    Log(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 20) = 10;
    v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v48 + 4944));
    *(_BYTE *)(a2 + 2838) = 0;
    v50 = v49;
    *(_DWORD *)(a2 + 696) = 3;
    KeResetEvent((PRKEVENT)(a2 + 712));
    KeReleaseSpinLock((PKSPIN_LOCK)(v48 + 4944), v50);
    Log(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 20) = 10;
    v51 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(v51 + a2 + 1384) = 1;
    Log(a1, 16, v52, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 10;
    KeResetEvent((PRKEVENT)(a2 + 472));
    UsbhInsertQueuePortChangeObject(a1, *(_WORD *)(a2 + 4), v70, 0, 0LL);
    Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    v53 = *(_DWORD *)(a2 + 12);
    v54 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v54 + a2 + 8) = v53;
    *(_DWORD *)(v54 + a2 + 12) = 0x100000;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
    return UsbhDecHubBusy(a1, v55, v7);
  }
  else
  {
    switch ( (int)v19 )
    {
      case 2:
      case 3:
      case 4:
      case 14:
        UsbhiSignalResumeEvent(a1, a2);
        v60 = 1597206581;
        goto LABEL_61;
      case 5:
      case 12:
      case 13:
        Timeoutc = *(unsigned __int16 *)(a2 + 4);
        v70[0] = 0x100000;
        Log(a1, 512, 1597206583, v19, Timeoutc);
        UsbhSetResumePending(a1, a2);
        UsbhSetPcqEventStatus(a1, a2, 1LL, 10);
        UsbhInsertQueuePortChangeObject(a1, *(_WORD *)(a2 + 4), v70, 0, 0LL);
        UsbhUnlockPcqWithTag(a1, a2, v10);
        return UsbhDecHubBusy(a1, v61, v7);
      case 7:
      case 11:
        Timeouta = *(unsigned __int16 *)(a2 + 4);
        v70[0] = 0x100000;
        Log(a1, 512, 1597206577, v19, Timeouta);
        UsbhSetResumePending(a1, a2);
        v56 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 18;
        *(_DWORD *)(v56 + a2 + 1384) = 18;
        UsbhInsertQueuePortChangeObject(a1, *(_WORD *)(a2 + 4), v70, 0, 0LL);
        UsbhSetPcqEventStatus(a1, a2, 2LL, 10);
        KeResetEvent((PRKEVENT)(a2 + 472));
        goto LABEL_46;
      case 8:
      case 9:
      case 10:
        if ( (_DWORD)v19 == 9 )
        {
          v58 = 4;
        }
        else
        {
          v58 = 14;
          if ( (_DWORD)v19 == 8 )
            v58 = 3;
        }
        UsbhRemoveQueuedSuspend(a1, a2, 0x1C0000000uLL, v14);
        UsbhiSignalSuspendEvent(a1, a2);
        Log(a1, 512, 1597206580, v58, *(unsigned __int16 *)(a2 + 4));
        if ( *(_DWORD *)(a2 + 400) == 5 )
        {
          Timeoutb = *(unsigned __int16 *)(a2 + 4);
          v70[0] = 0x100000;
          Log(a1, 512, 1597206610, v19, Timeoutb);
          UsbhSetResumePending(a1, a2);
          UsbhInsertQueuePortChangeObject(a1, *(_WORD *)(a2 + 4), v70, 0, 0LL);
        }
        v59 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v58;
        *(_DWORD *)(v59 + a2 + 1384) = v58;
        goto LABEL_46;
      case 15:
      case 16:
      case 17:
      case 20:
        UsbhiSignalResumeEvent(a1, a2);
        v60 = 1597206582;
        goto LABEL_61;
      case 18:
        v60 = 1597206584;
LABEL_61:
        Log(a1, 512, v60, v19, *(unsigned __int16 *)(a2 + 4));
        v62 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v19;
        *(_DWORD *)(v62 + a2 + 1384) = v19;
LABEL_46:
        UsbhUnlockPcqWithTag(a1, a2, v10);
        result = UsbhDecHubBusy(a1, v57, v7);
        break;
      default:
        Log(a1, 512, 1597206616, v19, *(unsigned __int16 *)(a2 + 4));
        v63 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v63 + a2 + 1384) = 19;
        UsbhUnlockPcqWithTag(a1, a2, v10);
        result = UsbhDecHubBusy(a1, v64, v7);
        break;
    }
  }
  return result;
}
