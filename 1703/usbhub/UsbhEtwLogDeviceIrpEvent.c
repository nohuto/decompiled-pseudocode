/*
 * XREFs of UsbhEtwLogDeviceIrpEvent @ 0x1C001B654
 * Callers:
 *     UsbhCompletePdoWakeIrp @ 0x1C00018C8 (UsbhCompletePdoWakeIrp.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0006D04 (UsbhSyncResetDeviceInternal.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0019630 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPower_WaitWake @ 0x1C0020DF0 (UsbhPdoPower_WaitWake.c)
 *     UsbhFdoResetPdoPort @ 0x1C003DE90 (UsbhFdoResetPdoPort.c)
 *     UsbhCompleteCanceledPdoWakeIrp @ 0x1C0046270 (UsbhCompleteCanceledPdoWakeIrp.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C005706C (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C00573BC (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0005320 (UsbhEtwWrite.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhEtwGetDeviceInfo @ 0x1C001B768 (UsbhEtwGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UsbhEtwLogDeviceIrpEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3, int a4)
{
  _DWORD *v7; // rax
  int ActivityIdIrp; // eax
  const GUID *v9; // rdx
  int v10; // [rsp+50h] [rbp-29h] BYREF
  int v11; // [rsp+58h] [rbp-21h] BYREF
  __int16 v12; // [rsp+5Ch] [rbp-1Dh]
  __int16 v13; // [rsp+5Eh] [rbp-1Bh]
  __int16 v14; // [rsp+60h] [rbp-19h]
  __int16 v15; // [rsp+62h] [rbp-17h]
  _BYTE v16[16]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v17[48]; // [rsp+78h] [rbp-1h] BYREF

  v10 = a4;
  if ( dword_1C0069650 )
  {
    v7 = FdoExt(*(_QWORD *)(a1 + 1176));
    v11 = v7[1298];
    v12 = *((_WORD *)v7 + 2598);
    v13 = v7[1300];
    v14 = *((_WORD *)v7 + 2614);
    v15 = *((_WORD *)v7 + 2615);
    UsbhEtwGetDeviceInfo(a1, v17);
    if ( a2 && g_IoGetActivityIdIrp )
      ActivityIdIrp = g_IoGetActivityIdIrp(a2, v16);
    else
      ActivityIdIrp = -1073741823;
    v9 = (const GUID *)v16;
    if ( ActivityIdIrp < 0 )
      v9 = 0LL;
    UsbhEtwWrite(a3, v9, (unsigned __int64)&v11, 12LL, v17, 44LL, &v10, 4LL, 0LL);
  }
}
