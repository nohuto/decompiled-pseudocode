/*
 * XREFs of UsbhEtwLogDevicePowerEvent @ 0x1C0005004
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhPdoDevicePowerState @ 0x1C0004108 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C0006480 (UsbhPdoUnblockPendedD0IrpWI.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0005320 (UsbhEtwWrite.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhEtwGetDeviceInfo @ 0x1C001B768 (UsbhEtwGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhEtwLogDevicePowerEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3)
{
  int ActivityIdIrp; // eax
  const GUID *v7; // rdx
  _BYTE v8[16]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v9[48]; // [rsp+88h] [rbp-9h] BYREF

  if ( dword_1C0069650 )
  {
    FdoExt(*(_QWORD *)(a1 + 1176));
    UsbhEtwGetDeviceInfo(a1, v9);
    if ( a2 && g_IoGetActivityIdIrp )
      ActivityIdIrp = g_IoGetActivityIdIrp(a2, v8);
    else
      ActivityIdIrp = -1073741823;
    v7 = (const GUID *)v8;
    if ( ActivityIdIrp < 0 )
      v7 = 0LL;
    UsbhEtwWrite(a3, v7);
  }
}
