/*
 * XREFs of UsbhCancelResetTimeout @ 0x1C0019250
 * Callers:
 *     UsbhReset1Complete @ 0x1C00092A0 (UsbhReset1Complete.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x1C000BA70 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhReset2Complete @ 0x1C00143E0 (UsbhReset2Complete.c)
 *     UsbhCancelEnumeration @ 0x1C0027D3C (UsbhCancelEnumeration.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0044E40 (UsbhSoftDisconnectPdo.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0051900 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x1C00520E0 (UsbhReset1Debounce.c)
 *     UsbhReset1DropDevice @ 0x1C0052320 (UsbhReset1DropDevice.c)
 *     UsbhReset2CycleDevice @ 0x1C0052850 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x1C00528C0 (UsbhReset2DropDevice.c)
 * Callees:
 *     UsbhWait @ 0x1C0005CE4 (UsbhWait.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhReferenceListRemove @ 0x1C00262E4 (UsbhReferenceListRemove.c)
 *     UsbhWaitForResetTimeout @ 0x1C0027448 (UsbhWaitForResetTimeout.c)
 *     UsbhCancelQueuedTimeout @ 0x1C00279CC (UsbhCancelQueuedTimeout.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     UsbhDisablePort @ 0x1C0043BCC (UsbhDisablePort.c)
 */

void __fastcall UsbhCancelResetTimeout(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9
  char v7; // bp
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _DWORD *v12; // rdi
  KSPIN_LOCK *v13; // rdi
  KIRQL v14; // r12
  void *v15; // r10
  KIRQL v16; // al
  KIRQL v17; // al
  KIRQL v18; // r10

  v3 = *(unsigned __int16 *)(a2 + 4);
  v7 = 1;
  if ( (UsbhLogMask & 4) != 0 )
  {
    v8 = *(_QWORD *)(a2 + 16);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 1414685027;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a2;
        *(_QWORD *)(v10 + 24) = v3;
      }
    }
  }
  v11 = *(_QWORD *)(a2 + 16);
  if ( !v11 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v12 = *(_DWORD **)(v11 + 64);
  if ( !v12 )
    UsbhTrapFatal_Dbg(v11, 0LL);
  if ( *v12 != 541218120 )
    UsbhTrapFatal_Dbg(v11, *(_QWORD *)(v11 + 64));
  v13 = (KSPIN_LOCK *)(v12 + 1236);
  if ( KeCancelTimer((PKTIMER)(a2 + 552)) )
  {
    v14 = KeAcquireSpinLockRaiseToDpc(v13);
    Log(*(_QWORD *)(a2 + 16), 4, 1667322417, a2, _InterlockedExchange64((volatile __int64 *)(a2 + 680), 0LL));
    *(_DWORD *)(a2 + 696) = 0;
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    if ( !a3 )
      *(_DWORD *)(a2 + 696) = 0;
    Log(*(_QWORD *)(a2 + 16), 4, 1667323992, a2, *(unsigned __int16 *)(a2 + 4));
    KeSetEvent((PRKEVENT)(a2 + 768), 0, 0);
    if ( *(_DWORD *)(a2 + 696) == 1 )
    {
      *(_DWORD *)(a2 + 696) = 0;
      KeReleaseSpinLock(v13, v14);
      UsbhWait(a1, 50);
    }
    else
    {
      KeReleaseSpinLock(v13, v14);
    }
    if ( a3 == 1 )
      UsbhDisablePort(a1);
  }
  else
  {
    v7 = 0;
    v17 = KeAcquireSpinLockRaiseToDpc(v13);
    if ( *(_DWORD *)(a2 + 696) == 4 )
    {
      KeReleaseSpinLock(v13, v17);
      if ( !(unsigned __int8)UsbhCancelQueuedTimeout(a1, a2) )
        UsbhWaitForResetTimeout(a1, a2);
    }
    else
    {
      Log(*(_QWORD *)(a2 + 16), 4, 1668768052, 0LL, *(unsigned __int16 *)(a2 + 4));
      KeReleaseSpinLock(v13, v18);
      UsbhWaitForResetTimeout(a1, a2);
      UsbhCancelQueuedTimeout(a1, a2);
    }
  }
  v16 = KeAcquireSpinLockRaiseToDpc(v13);
  KeReleaseSpinLock(v13, v16);
  if ( v7 )
    UsbhReferenceListRemove(*(_QWORD *)(a2 + 16), a2 + 552);
}
