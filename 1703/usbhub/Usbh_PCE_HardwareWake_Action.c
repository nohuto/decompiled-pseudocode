/*
 * XREFs of Usbh_PCE_HardwareWake_Action @ 0x1C0016B34
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000FBC0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhSetPcqEventStatus @ 0x1C0007EAC (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0008C10 (UsbhUnlockPcqWithTag.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhLockPcqWithTag @ 0x1C0025430 (UsbhLockPcqWithTag.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C004129C (UsbhRemoveQueuedSuspend.c)
 */

void __fastcall Usbh_PCE_HardwareWake_Action(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rdx
  int v6; // eax
  __int64 v7; // r9
  int v8; // r10d
  int v9; // r11d
  __int64 v10; // rax
  int v11; // r10d
  __int64 v12; // rcx
  KIRQL v13; // dl
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // r10d
  __int64 v19; // rax
  __int64 v20; // r9
  int v21; // r11d
  __int64 v22; // rax
  int v23; // r10d
  __int64 NewIrql; // [rsp+50h] [rbp+18h] BYREF

  NewIrql = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_DWORD **)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v5);
  v6 = UsbhLockPcqWithTag(a1, a2, 12, (unsigned int)&NewIrql, 0);
  Log(a1, 512, 825389104, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v8 > 10 )
  {
    if ( v8 <= 13 )
      goto LABEL_27;
    if ( v8 == 14 )
      goto LABEL_9;
    if ( v8 <= 17 )
    {
LABEL_27:
      Log(a1, v9, 825389107, v7, *(unsigned __int16 *)(a2 + 4));
      v22 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = v23;
      *(_DWORD *)(v22 + a2 + 1384) = v23;
      if ( *(_DWORD *)(a2 + 400) == 5 )
        Log(a1, v21, 825389161, v20, *(unsigned __int16 *)(a2 + 4));
      goto LABEL_29;
    }
    if ( v8 != 18 && v8 != 20 )
    {
LABEL_26:
      Log(a1, v9, 825389144, v7, *(unsigned __int16 *)(a2 + 4));
      v19 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v19 + a2 + 1384) = 19;
      goto LABEL_29;
    }
LABEL_25:
    Log(a1, v9, 825389110, v7, *(unsigned __int16 *)(a2 + 4));
    v17 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v18;
    *(_DWORD *)(v17 + a2 + 1384) = v18;
    goto LABEL_29;
  }
  if ( v8 == 10 )
    goto LABEL_19;
  if ( v8 == 1 )
    goto LABEL_25;
  if ( v8 <= 1 )
    goto LABEL_26;
  if ( v8 <= 4 )
  {
LABEL_9:
    Log(a1, v9, 825389105, v7, *(unsigned __int16 *)(a2 + 4));
    v10 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v11;
    *(_DWORD *)(v10 + a2 + 1384) = v11;
    Log(a1, 16, 1886465325, *(int *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
    v12 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    v13 = NewIrql;
    *(_DWORD *)(32 * v12 + a2 + 1384) = *(_DWORD *)(a2 + 12);
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v13);
    return;
  }
  if ( v8 <= 6 )
    goto LABEL_27;
  if ( v8 == 7 )
  {
    Log(a1, v9, 825389106, v7, *(unsigned __int16 *)(a2 + 4));
    v15 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 2;
    *(_DWORD *)(v15 + a2 + 1384) = 2;
    *(_DWORD *)(a2 + 400) = 0;
    goto LABEL_18;
  }
  if ( v8 == 8 )
  {
LABEL_19:
    Log(a1, v9, 825389108, v7, *(unsigned __int16 *)(a2 + 4));
    v16 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 10;
    *(_DWORD *)(v16 + a2 + 1384) = 10;
    goto LABEL_29;
  }
  Log(a1, v9, 825389109, v7, *(unsigned __int16 *)(a2 + 4));
  UsbhRemoveQueuedSuspend(a1, a2);
  v14 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 12) = 4;
  *(_DWORD *)(v14 + a2 + 1384) = 4;
LABEL_18:
  UsbhSetPcqEventStatus(a1, a2, 2LL, 10);
  KeResetEvent((PRKEVENT)(a2 + 472));
LABEL_29:
  UsbhUnlockPcqWithTag(a1, a2, NewIrql);
}
