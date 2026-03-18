/*
 * XREFs of UsbhEtwLogDeviceIrpEvent @ 0x1C001C0E0
 * Callers:
 *     UsbhCompletePdoWakeIrp @ 0x1C0001978 (UsbhCompletePdoWakeIrp.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006C34 (UsbhSyncResetDeviceInternal.c)
 *     UsbhPdoPower_WaitWake @ 0x1C00088F0 (UsbhPdoPower_WaitWake.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0019BB0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhFdoResetPdoPort @ 0x1C003ED40 (UsbhFdoResetPdoPort.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C0047030 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0056F70 (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C00572C0 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C001DD00 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhEtwLogDeviceIrpEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3)
{
  __int64 v5; // rax
  _DWORD *v6; // rdx
  const GUID *v7; // rdx
  _BYTE v8[16]; // [rsp+98h] [rbp-20h] BYREF

  if ( dword_1C006A650 )
  {
    v5 = *(_QWORD *)(a1 + 1176);
    if ( !v5 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v6 = *(_DWORD **)(v5 + 64);
    if ( !v6 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(a1 + 1176), 0LL);
    if ( *v6 != 541218120 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(a1 + 1176), v6);
    if ( a2 && g_IoGetActivityIdIrp && (int)g_IoGetActivityIdIrp(a2, v8) >= 0 )
      v7 = (const GUID *)v8;
    else
      v7 = 0LL;
    UsbhEtwWrite(a3, v7);
  }
}
