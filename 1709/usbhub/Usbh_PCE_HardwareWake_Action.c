/*
 * XREFs of Usbh_PCE_HardwareWake_Action @ 0x1C0015AA0
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0006B28 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0007AAC (UsbhUnlockPcqWithTag.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C004208C (UsbhRemoveQueuedSuspend.c)
 */

void __fastcall Usbh_PCE_HardwareWake_Action(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdx
  KIRQL v5; // al
  KIRQL v6; // bp
  int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  int v20; // r11d
  __int64 v21; // rax
  int v22; // r11d
  __int64 v23; // r9
  int v24; // ecx
  __int64 v25; // rax
  int v26; // r10d
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // r10d
  __int64 v33; // rax
  __int64 v34; // [rsp+20h] [rbp-18h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_DWORD **)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v4);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v34 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v6 = v5;
  Log(a1, 16, 1886464811, 12LL, v34);
  Log(a1, 16, v7, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
  v8 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v8;
  v9 = a2 + 32 * (v8 + 43);
  *(_DWORD *)v9 = 12;
  *(_DWORD *)(v9 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v9 + 8) = -1;
  *(_QWORD *)(v9 + 12) = 0LL;
  *(_QWORD *)(v9 + 20) = 0LL;
  *(_DWORD *)(v9 + 28) = 0;
  v10 = *(int *)(a2 + 12);
  v11 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 812659249;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = v10;
      *(_QWORD *)(v13 + 24) = v11;
    }
  }
  if ( (_DWORD)v10 == 2 )
  {
LABEL_8:
    v14 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 829436465;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = v10;
        *(_QWORD *)(v16 + 24) = v14;
      }
    }
    v17 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v10;
    *(_DWORD *)(v17 + a2 + 1384) = v10;
    Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    v18 = *(_DWORD *)(a2 + 12);
    v19 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = v20;
    *(_DWORD *)(v19 + a2 + 1384) = v18;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v6);
  }
  else
  {
    switch ( (int)v10 )
    {
      case 1:
      case 18:
      case 20:
        Log(a1, 512, 825389110, v10, *(unsigned __int16 *)(a2 + 4));
        v31 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v32;
        *(_DWORD *)(v31 + a2 + 1384) = v32;
        break;
      case 3:
      case 4:
      case 14:
        goto LABEL_8;
      case 5:
      case 6:
      case 11:
      case 12:
      case 13:
      case 15:
      case 16:
      case 17:
        Log(a1, 512, 825389107, v10, *(unsigned __int16 *)(a2 + 4));
        v24 = a1;
        v25 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v26;
        *(_DWORD *)(v25 + a2 + 1384) = v26;
        if ( *(_DWORD *)(a2 + 400) != 5 )
          goto LABEL_26;
        Log(a1, 512, 825389161, v23, *(unsigned __int16 *)(a2 + 4));
        break;
      case 7:
        Log(a1, 512, 825389106, v10, *(unsigned __int16 *)(a2 + 4));
        v21 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 2;
        *(_DWORD *)(v21 + a2 + 1384) = 2;
        *(_DWORD *)(a2 + 400) = v22;
        goto LABEL_22;
      case 8:
      case 10:
        Log(a1, 512, 825389108, v10, *(unsigned __int16 *)(a2 + 4));
        v27 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 10;
        *(_DWORD *)(v27 + a2 + 1384) = 10;
        break;
      case 9:
        Log(a1, 512, 825389109, v10, *(unsigned __int16 *)(a2 + 4));
        UsbhRemoveQueuedSuspend(a1, a2, v28, v29);
        v30 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 4;
        *(_DWORD *)(v30 + a2 + 1384) = 4;
LABEL_22:
        UsbhSetPcqEventStatus(a1, a2, 2LL, 10);
        KeResetEvent((PRKEVENT)(a2 + 472));
        break;
      default:
        Log(a1, 512, 825389144, v10, *(unsigned __int16 *)(a2 + 4));
        v33 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 19;
        *(_DWORD *)(v33 + a2 + 1384) = 19;
        break;
    }
    v24 = a1;
LABEL_26:
    UsbhUnlockPcqWithTag(v24, a2, v6);
  }
}
