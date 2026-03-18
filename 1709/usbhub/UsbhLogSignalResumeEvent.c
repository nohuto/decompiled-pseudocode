/*
 * XREFs of UsbhLogSignalResumeEvent @ 0x1C00068E0
 * Callers:
 *     UsbhiSignalResumeEvent @ 0x1C0006680 (UsbhiSignalResumeEvent.c)
 *     UsbhSignalResumeEvent @ 0x1C00066B0 (UsbhSignalResumeEvent.c)
 *     Usbh_PCE_BusReset_Action @ 0x1C0006730 (Usbh_PCE_BusReset_Action.c)
 *     UsbhWaitConnect @ 0x1C00121B0 (UsbhWaitConnect.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhLogSignalResumeEvent(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v5; // rax
  KSPIN_LOCK *v6; // rbp
  KIRQL v7; // al
  __int64 v8; // r8
  KIRQL v9; // r14
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx

  v2 = 0;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v6 = (KSPIN_LOCK *)(v5 + 4944);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 4944));
  v8 = *(unsigned __int16 *)(a2 + 4);
  v9 = v7;
  v10 = *(int *)(a2 + 696);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 64);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
      *(_DWORD *)v12 = 1397909875;
      *(_QWORD *)(v12 + 8) = 0LL;
      *(_QWORD *)(v12 + 16) = v10;
      *(_QWORD *)(v12 + 24) = v8;
    }
  }
  if ( *(_DWORD *)(a2 + 696) == 3 )
  {
    Log(a1, 16, 1936282232, 3, *(unsigned __int16 *)(a2 + 4));
    *(_DWORD *)(a2 + 696) = 0;
    KeSetEvent((PRKEVENT)(a2 + 712), 0, 0);
    v2 = 1;
  }
  KeReleaseSpinLock(v6, v9);
  return v2;
}
