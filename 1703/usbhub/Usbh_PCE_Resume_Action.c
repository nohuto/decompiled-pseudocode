/*
 * XREFs of Usbh_PCE_Resume_Action @ 0x1C000BF20
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhiSignalResumeEvent @ 0x1C0007C00 (UsbhiSignalResumeEvent.c)
 *     UsbhSetResumePending @ 0x1C0007E28 (UsbhSetResumePending.c)
 *     UsbhSetPcqEventStatus @ 0x1C0007EAC (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0008C10 (UsbhUnlockPcqWithTag.c)
 *     UsbhDecHubBusy @ 0x1C000B310 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000BC70 (UsbhIncHubBusy.c)
 *     UsbhInsertQueuePortChangeObject @ 0x1C000D1F0 (UsbhInsertQueuePortChangeObject.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C004129C (UsbhRemoveQueuedSuspend.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0042448 (UsbhiSignalSuspendEvent.c)
 */

LONG __fastcall Usbh_PCE_Resume_Action(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rdx
  int v6; // r13d
  _QWORD *v7; // r14
  KIRQL v8; // al
  __int64 v9; // r8
  char v10; // cl
  KIRQL v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int16 v20; // ax
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  KSPIN_LOCK *v29; // rsi
  KIRQL v30; // al
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  struct _KEVENT *v42; // rbx
  __int64 Signalling; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rdx
  _QWORD *v47; // rax
  _QWORD *v48; // rcx
  LONG result; // eax
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rsi
  KIRQL v54; // al
  KIRQL v55; // di
  __int64 v56; // rax
  int v57; // r8d
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  int v63; // edi
  __int64 v64; // rax
  int v65; // r8d
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  volatile int Lock; // eax
  __int64 Timeout; // [rsp+20h] [rbp-58h]
  __int64 Timeouta; // [rsp+20h] [rbp-58h]
  __int64 Timeoutb; // [rsp+20h] [rbp-58h]
  _DWORD v74[4]; // [rsp+30h] [rbp-48h] BYREF
  KIRQL v75; // [rsp+80h] [rbp+8h]

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
  v10 = UsbhLogMask;
  v11 = v8;
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
      *(_QWORD *)(v13 + 16) = 3LL;
      *(_QWORD *)(v13 + 24) = v9;
      v10 = UsbhLogMask;
    }
  }
  v14 = *(unsigned __int16 *)(a2 + 4);
  v15 = *(int *)(a2 + 12);
  if ( (v10 & 0x10) != 0 )
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
  *(_DWORD *)v19 = 3;
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
    v23 = *(_QWORD *)(a1 + 64);
    if ( v23 )
    {
      v24 = *(_QWORD *)(v23 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
      *(_DWORD *)v24 = 812659551;
      *(_QWORD *)(v24 + 8) = 0LL;
      *(_QWORD *)(v24 + 16) = v21;
      *(_QWORD *)(v24 + 24) = v22;
      v20 = UsbhLogMask;
    }
  }
  if ( (_DWORD)v21 == 1 )
  {
    v25 = *(unsigned __int16 *)(a2 + 4);
    if ( (v20 & 0x200) != 0 )
    {
      v26 = *(_QWORD *)(a1 + 64);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v26 + 880)) & *(_DWORD *)(v26 + 884));
        *(_DWORD *)v27 = 862991199;
        *(_QWORD *)(v27 + 8) = 0LL;
        *(_QWORD *)(v27 + 16) = 1LL;
        *(_QWORD *)(v27 + 24) = v25;
      }
    }
    v28 = *(_QWORD *)(a1 + 64);
    if ( !v28 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v28 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    v29 = (KSPIN_LOCK *)(v28 + 4944);
    v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v28 + 4944));
    v31 = *(unsigned __int16 *)(a2 + 4);
    v32 = *(int *)(a2 + 696);
    v75 = v30;
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v33 = *(_QWORD *)(a1 + 64);
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
        *(_DWORD *)v34 = 1397909875;
        *(_QWORD *)(v34 + 8) = 0LL;
        *(_QWORD *)(v34 + 16) = v32;
        *(_QWORD *)(v34 + 24) = v31;
      }
    }
    if ( *(_DWORD *)(a2 + 696) == 3 )
    {
      Log(a1, 16, 1936282232, 3, *(unsigned __int16 *)(a2 + 4));
      *(_DWORD *)(a2 + 696) = 0;
      KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
      v30 = v75;
      v6 = 1;
    }
    KeReleaseSpinLock(v29, v30);
    if ( v6 )
      UsbhSetPcqEventStatus(a1, a2, 1LL, 30);
    v35 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(v35 + a2 + 1384) = 1;
    v36 = *(unsigned __int16 *)(a2 + 4);
    v37 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v38 = *(_QWORD *)(a1 + 64);
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
        *(_DWORD *)v39 = 757952880;
        *(_QWORD *)(v39 + 8) = 0LL;
        *(_QWORD *)(v39 + 16) = v37;
        *(_QWORD *)(v39 + 24) = v36;
      }
    }
    v40 = *(_DWORD *)(a2 + 12);
    v41 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v41 + a2 + 1384) = v40;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v11);
    v42 = *(struct _KEVENT **)(a1 + 64);
    if ( !v42 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( v42->Header.LockNV != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    v42[142].Header.Type = 1;
    KeWaitForSingleObject(&v42[139], Executive, 0, 0, 0LL);
    Signalling = v42[142].Header.Signalling;
    if ( (UsbhLogMask & 0x10000) != 0 )
    {
      v44 = *(_QWORD *)(a1 + 64);
      if ( v44 )
      {
        v45 = *(_QWORD *)(v44 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v44 + 880)) & *(_DWORD *)(v44 + 884));
        *(_DWORD *)v45 = 1667581000;
        *(_QWORD *)(v45 + 8) = 0LL;
        *(_QWORD *)(v45 + 16) = v7;
        *(_QWORD *)(v45 + 24) = Signalling;
      }
    }
    if ( v42[142].Header.Signalling )
    {
      if ( v7 == (_QWORD *)1936941672 )
      {
        Lock = v42[130].Header.Lock;
        if ( Lock )
          v42[130].Header.LockNV = Lock - 1;
      }
      else if ( v7 )
      {
        v46 = v7[1];
        v47 = v7 + 1;
        v48 = (_QWORD *)v7[2];
        if ( *(_QWORD **)(v46 + 8) != v7 + 1 || (_QWORD *)*v48 != v47 )
          __fastfail(3u);
        *v48 = v46;
        *(_QWORD *)(v46 + 8) = v48;
        v7[2] = v7 + 1;
        *v47 = v47;
        ExFreePoolWithTag(v7, 0);
      }
    }
    return KeSetEvent(v42 + 139, 0, 0);
  }
  else if ( (_DWORD)v21 == 6 )
  {
    v50 = *(unsigned __int16 *)(a2 + 4);
    v74[0] = 0x100000;
    if ( (v20 & 0x200) != 0 )
    {
      v51 = *(_QWORD *)(a1 + 64);
      if ( v51 )
      {
        v52 = *(_QWORD *)(v51 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v51 + 880)) & *(_DWORD *)(v51 + 884));
        *(_DWORD *)v52 = 846213983;
        *(_QWORD *)(v52 + 8) = 0LL;
        *(_QWORD *)(v52 + 16) = 6LL;
        *(_QWORD *)(v52 + 24) = v50;
      }
    }
    v53 = *(_QWORD *)(a1 + 64);
    if ( !v53 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v53 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    Log(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 20) = 10;
    v54 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v53 + 4944));
    *(_BYTE *)(a2 + 2838) = 0;
    v55 = v54;
    *(_DWORD *)(a2 + 696) = 3;
    KeResetEvent((PRKEVENT)(a2 + 712));
    KeReleaseSpinLock((PKSPIN_LOCK)(v53 + 4944), v55);
    Log(a1, 16, 1886479734, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 20) = 10;
    v56 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(v56 + a2 + 1384) = 1;
    Log(a1, 16, v57, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 10;
    KeResetEvent((PRKEVENT)(a2 + 472));
    UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)v74, 0, 0LL);
    Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    v58 = *(_DWORD *)(a2 + 12);
    v59 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v59 + a2 + 8) = v58;
    *(_DWORD *)(v59 + a2 + 12) = 0x100000;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v11);
    return UsbhDecHubBusy(a1, v60, v7);
  }
  else
  {
    switch ( (int)v21 )
    {
      case 2:
      case 3:
      case 4:
      case 14:
        UsbhiSignalResumeEvent(a1, a2);
        v65 = 1597206581;
        goto LABEL_66;
      case 5:
      case 12:
      case 13:
        Timeoutb = *(unsigned __int16 *)(a2 + 4);
        v74[0] = 0x100000;
        Log(a1, 512, 1597206583, v21, Timeoutb);
        UsbhSetResumePending(a1, a2);
        UsbhSetPcqEventStatus(a1, a2, 1LL, 10);
        UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)v74, 0, 0LL);
        UsbhUnlockPcqWithTag(a1, a2, v11);
        return UsbhDecHubBusy(a1, v66, v7);
      case 7:
      case 11:
        Timeout = *(unsigned __int16 *)(a2 + 4);
        v74[0] = 0x100000;
        Log(a1, 512, 1597206577, v21, Timeout);
        UsbhSetResumePending(a1, a2);
        v61 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 18;
        *(_DWORD *)(v61 + a2 + 1384) = 18;
        UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)v74, 0, 0LL);
        UsbhSetPcqEventStatus(a1, a2, 2LL, 10);
        KeResetEvent((PRKEVENT)(a2 + 472));
        goto LABEL_51;
      case 8:
      case 9:
      case 10:
        if ( (_DWORD)v21 == 9 )
        {
          v63 = 4;
        }
        else
        {
          v63 = 14;
          if ( (_DWORD)v21 == 8 )
            v63 = 3;
        }
        UsbhRemoveQueuedSuspend(a1, a2);
        UsbhiSignalSuspendEvent(a1, a2);
        Log(a1, 512, 1597206580, v63, *(unsigned __int16 *)(a2 + 4));
        if ( *(_DWORD *)(a2 + 400) == 5 )
        {
          Timeouta = *(unsigned __int16 *)(a2 + 4);
          v74[0] = 0x100000;
          Log(a1, 512, 1597206610, v21, Timeouta);
          UsbhSetResumePending(a1, a2);
          UsbhInsertQueuePortChangeObject(a1, *(unsigned __int16 *)(a2 + 4), (unsigned int)v74, 0, 0LL);
        }
        v64 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v63;
        *(_DWORD *)(v64 + a2 + 1384) = v63;
        goto LABEL_51;
      case 15:
      case 16:
      case 17:
      case 20:
        UsbhiSignalResumeEvent(a1, a2);
        v65 = 1597206582;
        goto LABEL_66;
      case 18:
        v65 = 1597206584;
LABEL_66:
        Log(a1, 512, v65, v21, *(unsigned __int16 *)(a2 + 4));
        v67 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v21;
        *(_DWORD *)(v67 + a2 + 1384) = v21;
LABEL_51:
        UsbhUnlockPcqWithTag(a1, a2, v11);
        result = UsbhDecHubBusy(a1, v62, v7);
        break;
      default:
        Log(a1, 512, 1597206616, v21, *(unsigned __int16 *)(a2 + 4));
        v68 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v68 + a2 + 1384) = 19;
        UsbhUnlockPcqWithTag(a1, a2, v11);
        result = UsbhDecHubBusy(a1, v69, v7);
        break;
    }
  }
  return result;
}
