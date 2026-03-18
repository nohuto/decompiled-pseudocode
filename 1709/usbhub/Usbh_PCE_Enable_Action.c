/*
 * XREFs of Usbh_PCE_Enable_Action @ 0x1C0012530
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x1C0007AAC (UsbhUnlockPcqWithTag.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D4D4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall Usbh_PCE_Enable_Action(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  KIRQL v5; // al
  __int64 v6; // r8
  KIRQL v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rdx
  KSPIN_LOCK *v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  KIRQL v35; // dl
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  KIRQL v39; // si
  __int64 v40; // rcx
  PVOID v41; // r9
  __int64 v42; // rax
  int v43; // r10d
  __int64 v44; // rax

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
  v7 = v5;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v9 = 724267376;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = 1LL;
      *(_QWORD *)(v9 + 24) = v6;
    }
  }
  v10 = *(unsigned __int16 *)(a2 + 4);
  v11 = *(int *)(a2 + 12);
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
      *(_QWORD *)(v13 + 16) = v11;
      *(_QWORD *)(v13 + 24) = v10;
    }
  }
  v14 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v14;
  v15 = a2 + 32 * (v14 + 43);
  *(_DWORD *)v15 = 1;
  *(_DWORD *)(v15 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v15 + 8) = -1;
  *(_QWORD *)(v15 + 12) = 0LL;
  *(_QWORD *)(v15 + 20) = 0LL;
  *(_DWORD *)(v15 + 28) = 0;
  v16 = *(int *)(a2 + 12);
  v17 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
      *(_DWORD *)v19 = 812658992;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = v16;
      *(_QWORD *)(v19 + 24) = v17;
    }
  }
  if ( (_DWORD)v16 == 1 )
  {
LABEL_14:
    KeResetEvent((PRKEVENT)(a2 + 472));
    v21 = *(unsigned __int16 *)(a2 + 4);
    v22 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        v23 = *(_QWORD *)(v20 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
        *(_DWORD *)v23 = 1986359664;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 16) = v22;
        *(_QWORD *)(v23 + 24) = v21;
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 10;
    if ( *(_QWORD *)(a2 + 456) == a2 + 456 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v20,
          v21,
          14,
          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
          *(_WORD *)(a2 + 4),
          a2);
      v24 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v25 = *(_QWORD *)(a1 + 64);
        if ( v25 )
        {
          v26 = *(_QWORD *)(v25 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
          *(_DWORD *)v26 = 1414360677;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 16) = 0LL;
          *(_QWORD *)(v26 + 24) = v24;
        }
      }
      v27 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 2;
      *(_DWORD *)(v27 + a2 + 1384) = 2;
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
      v32 = (KSPIN_LOCK *)(a2 + 440);
      v33 = *(_DWORD *)(a2 + 12);
      v34 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v34 + a2 + 1384) = v33;
      v35 = v7;
    }
    else
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v20,
          v21,
          15,
          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
          *(_WORD *)(a2 + 4),
          a2);
      Log(a1, 512, 1701729095, 0, *(unsigned __int16 *)(a2 + 4));
      v36 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 4;
      *(_DWORD *)(v36 + a2 + 1384) = 4;
      Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
      v37 = *(_DWORD *)(a2 + 12);
      v38 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v38 + a2 + 1384) = v37;
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v7);
      v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
      if ( *(_DWORD *)(a2 + 2412) != 1 )
      {
        v40 = *(_QWORD *)(a2 + 16);
        *(_DWORD *)(a2 + 2412) = 1;
        Log(v40, 512, 1364214615, a2, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
        IoQueueWorkItem(
          *(PIO_WORKITEM *)(a2 + 2456),
          (PIO_WORKITEM_ROUTINE)UsbhHubProcessChangeWorker,
          DelayedWorkQueue,
          v41);
      }
      v35 = v39;
      v32 = (KSPIN_LOCK *)(a2 + 2448);
    }
    KeReleaseSpinLock(v32, v35);
  }
  else
  {
    switch ( (int)v16 )
    {
      case 2:
      case 3:
      case 4:
      case 8:
      case 9:
      case 10:
      case 14:
      case 15:
      case 16:
      case 17:
      case 20:
        Log(a1, 512, 808546354, v16, *(unsigned __int16 *)(a2 + 4));
        v42 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v43;
        *(_DWORD *)(v42 + a2 + 1384) = v43;
        break;
      case 18:
        goto LABEL_14;
      default:
        Log(a1, 512, 808546392, v16, *(unsigned __int16 *)(a2 + 4));
        v44 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v44 + a2 + 1384) = 19;
        break;
    }
    UsbhUnlockPcqWithTag(a1, a2, v7);
  }
}
