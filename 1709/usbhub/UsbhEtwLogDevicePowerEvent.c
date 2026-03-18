/*
 * XREFs of UsbhEtwLogDevicePowerEvent @ 0x1C0004E6C
 * Callers:
 *     UsbhPdoUnblockPendedD0IrpWI @ 0x1C00016D0 (UsbhPdoUnblockPendedD0IrpWI.c)
 *     UsbhPdoSetD0 @ 0x1C0003260 (UsbhPdoSetD0.c)
 *     UsbhPdoDevicePowerState @ 0x1C0003C98 (UsbhPdoDevicePowerState.c)
 * Callees:
 *     UsbhEtwGetActivityId @ 0x1C0004F74 (UsbhEtwGetActivityId.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C001DD00 (UsbhEtwWrite.c)
 *     UsbhEtwGetDeviceInfo @ 0x1C001FF38 (UsbhEtwGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogDevicePowerEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3)
{
  int ActivityId; // eax
  const GUID *v7; // rdx
  _BYTE v8[16]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v9[48]; // [rsp+88h] [rbp-9h] BYREF

  if ( dword_1C006A650 )
  {
    FdoExt(*(_QWORD *)(a1 + 1176));
    UsbhEtwGetDeviceInfo(a1, v9);
    ActivityId = UsbhEtwGetActivityId(a2, v8);
    v7 = (const GUID *)v8;
    if ( ActivityId < 0 )
      v7 = 0LL;
    UsbhEtwWrite(a3, v7);
  }
}
