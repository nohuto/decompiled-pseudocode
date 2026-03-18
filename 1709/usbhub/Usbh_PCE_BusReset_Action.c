/*
 * XREFs of Usbh_PCE_BusReset_Action @ 0x1C0006730
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C000ED90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhiSignalResumeEvent @ 0x1C0006680 (UsbhiSignalResumeEvent.c)
 *     UsbhLogSignalResumeEvent @ 0x1C00068E0 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0006B28 (UsbhSetPcqEventStatus.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0007AAC (UsbhUnlockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x1C0008C58 (UsbhFlushPortChangeQueue.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhLockPcqWithTag @ 0x1C0025F00 (UsbhLockPcqWithTag.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

void __fastcall Usbh_PCE_BusReset_Action(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rdx
  int v6; // eax
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d
  __int64 v10; // rax
  __int64 v11; // rcx
  KIRQL v12; // dl
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // r8d
  __int64 v16; // rax
  int v17; // r10d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 NewIrql; // [rsp+50h] [rbp+18h] BYREF

  NewIrql = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_DWORD **)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v5);
  v6 = UsbhLockPcqWithTag(a1, a2, 9, (unsigned int)&NewIrql, 0);
  Log(a1, 512, 809070640, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v8 == 1 )
  {
    Log(a1, v9, 809070642, v7, *(unsigned __int16 *)(a2 + 4));
    v19 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(v19 + a2 + 1384) = 1;
    UsbhFlushPortChangeQueue(a1, a2);
    goto LABEL_13;
  }
  if ( v8 <= 1 )
    goto LABEL_23;
  if ( v8 <= 4 )
  {
LABEL_21:
    v15 = 809070644;
    goto LABEL_22;
  }
  if ( v8 != 6 )
  {
    if ( v8 == 11 || v8 == 7 )
    {
      Log(a1, v9, 809070641, v7, *(unsigned __int16 *)(a2 + 4));
      UsbhiSignalResumeEvent(a1, a2);
      v14 = *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(a2 + 12) = 1;
      *(_DWORD *)(32 * v14 + a2 + 1384) = 1;
LABEL_13:
      LOBYTE(v13) = NewIrql;
      UsbhUnlockPcqWithTag(a1, a2, v13, 0LL);
      return;
    }
    if ( v8 != 14 )
    {
      if ( (unsigned int)(v8 - 15) <= 2 )
      {
        v15 = 809070645;
LABEL_22:
        Log(a1, v9, v15, v7, *(unsigned __int16 *)(a2 + 4));
        v16 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = v17;
        *(_DWORD *)(v16 + a2 + 1384) = v17;
        goto LABEL_13;
      }
LABEL_23:
      Log(a1, v9, 809070680, v7, *(unsigned __int16 *)(a2 + 4));
      v13 = 19LL;
      v18 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v18 + a2 + 1384) = 19;
      goto LABEL_13;
    }
    goto LABEL_21;
  }
  Log(a1, v9, 809070643, v7, *(unsigned __int16 *)(a2 + 4));
  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2) )
    UsbhSetPcqEventStatus(a1, a2, 1LL);
  v10 = *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 400) = 0;
  *(_DWORD *)(a2 + 12) = 1;
  *(_DWORD *)(32 * v10 + a2 + 1384) = 1;
  Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
  v11 = *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 448) = 0;
  v12 = NewIrql;
  *(_DWORD *)(32 * v11 + a2 + 1384) = *(_DWORD *)(a2 + 12);
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v12);
}
