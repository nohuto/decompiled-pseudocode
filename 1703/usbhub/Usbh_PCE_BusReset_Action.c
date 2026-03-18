/*
 * XREFs of Usbh_PCE_BusReset_Action @ 0x1C0007410
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhiSignalResumeEvent @ 0x1C0007C00 (UsbhiSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0007EAC (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0008C10 (UsbhUnlockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x1C0009998 (UsbhFlushPortChangeQueue.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 */

void __fastcall Usbh_PCE_BusReset_Action(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  KIRQL v5; // al
  __int64 v6; // r9
  char v7; // cl
  KIRQL v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // ebp
  KSPIN_LOCK *v27; // rsi
  KIRQL v28; // r14
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // r10d
  int v35; // r8d
  __int64 v36; // rax
  int v37; // r10d
  __int64 v38; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_DWORD **)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v4);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v6 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v7 = UsbhLogMask;
  v8 = v5;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 64);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
      *(_DWORD *)v10 = 724267376;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = 9LL;
      *(_QWORD *)(v10 + 24) = v6;
      v7 = UsbhLogMask;
    }
  }
  v11 = *(unsigned __int16 *)(a2 + 4);
  v12 = *(int *)(a2 + 12);
  if ( (v7 & 0x10) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 724267376;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = v12;
      *(_QWORD *)(v14 + 24) = v11;
    }
  }
  v15 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v15;
  v16 = a2 + 32 * (v15 + 43);
  *(_DWORD *)v16 = 9;
  *(_DWORD *)(v16 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v16 + 8) = -1;
  *(_QWORD *)(v16 + 12) = 0LL;
  *(_QWORD *)(v16 + 20) = 0LL;
  *(_DWORD *)(v16 + 28) = 0;
  v17 = UsbhLogMask;
  v18 = *(int *)(a2 + 12);
  v19 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v20 = *(_QWORD *)(a1 + 64);
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
      *(_DWORD *)v21 = 812661040;
      *(_QWORD *)(v21 + 8) = 0LL;
      *(_QWORD *)(v21 + 16) = v18;
      *(_QWORD *)(v21 + 24) = v19;
      v17 = UsbhLogMask;
    }
  }
  if ( (_DWORD)v18 == 6 )
  {
    v22 = *(unsigned __int16 *)(a2 + 4);
    if ( (v17 & 0x200) != 0 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = *(_QWORD *)(v23 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
        *(_DWORD *)v24 = 862992688;
        *(_QWORD *)(v24 + 8) = 0LL;
        *(_QWORD *)(v24 + 16) = 6LL;
        *(_QWORD *)(v24 + 24) = v22;
      }
    }
    v25 = *(_QWORD *)(a1 + 64);
    v26 = 0;
    if ( !v25 )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *(_DWORD *)v25 != 541218120 )
      UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
    v27 = (KSPIN_LOCK *)(v25 + 4944);
    v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v25 + 4944));
    Log(a1, 16, 1936282195, *(_DWORD *)(a2 + 696), *(unsigned __int16 *)(a2 + 4));
    if ( *(_DWORD *)(a2 + 696) == 3 )
    {
      Log(a1, 16, 1936282232, 3, *(unsigned __int16 *)(a2 + 4));
      *(_DWORD *)(a2 + 696) = 0;
      KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
      v26 = 1;
    }
    KeReleaseSpinLock(v27, v28);
    if ( v26 )
      UsbhSetPcqEventStatus(a1, a2, 1LL);
    v29 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(v29 + a2 + 1384) = 1;
    Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    v30 = *(_DWORD *)(a2 + 12);
    v31 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v31 + a2 + 1384) = v30;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v8);
  }
  else
  {
    if ( (_DWORD)v18 == 11 )
    {
LABEL_25:
      Log(a1, 512, 809070641, v18, *(unsigned __int16 *)(a2 + 4));
      UsbhiSignalResumeEvent(a1, a2);
      v32 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(v32 + a2 + 1384) = 1;
    }
    else
    {
      switch ( (int)v18 )
      {
        case 1:
          Log(a1, 512, 809070642, v18, *(unsigned __int16 *)(a2 + 4));
          v33 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = v34;
          *(_DWORD *)(v33 + a2 + 1384) = v34;
          UsbhFlushPortChangeQueue(a1, a2);
          break;
        case 2:
        case 3:
        case 4:
        case 14:
          v35 = 809070644;
          goto LABEL_34;
        case 7:
          goto LABEL_25;
        case 15:
        case 16:
        case 17:
          v35 = 809070645;
LABEL_34:
          Log(a1, 512, v35, v18, *(unsigned __int16 *)(a2 + 4));
          v36 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = v37;
          *(_DWORD *)(v36 + a2 + 1384) = v37;
          break;
        default:
          Log(a1, 512, 809070680, v18, *(unsigned __int16 *)(a2 + 4));
          v38 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v38 + a2 + 1384) = 19;
          break;
      }
    }
    UsbhUnlockPcqWithTag(a1, a2, v8, 0LL);
  }
}
