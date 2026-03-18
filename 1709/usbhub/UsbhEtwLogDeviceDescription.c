/*
 * XREFs of UsbhEtwLogDeviceDescription @ 0x1C001FE2C
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C0019BB0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhEtwRundown @ 0x1C002802C (UsbhEtwRundown.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C001DD00 (UsbhEtwWrite.c)
 *     UsbhEtwGetDeviceInfo @ 0x1C001FF38 (UsbhEtwGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogDeviceDescription(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  _DWORD *v4; // rax
  int v5; // [rsp+38h] [rbp-70h]
  int v6; // [rsp+50h] [rbp-58h] BYREF
  __int16 v7; // [rsp+54h] [rbp-54h]
  __int16 v8; // [rsp+56h] [rbp-52h]
  __int16 v9; // [rsp+58h] [rbp-50h]
  __int16 v10; // [rsp+5Ah] [rbp-4Eh]
  _BYTE v11[48]; // [rsp+60h] [rbp-48h] BYREF

  if ( dword_1C006A650 && *(_QWORD *)(a1 + 2232) )
  {
    if ( *(_DWORD *)(a1 + 2240) )
    {
      v4 = FdoExt(*(_QWORD *)(a1 + 1176));
      v6 = v4[1298];
      v7 = *((_WORD *)v4 + 2598);
      v8 = v4[1300];
      v9 = *((_WORD *)v4 + 2614);
      v10 = *((_WORD *)v4 + 2615);
      UsbhEtwGetDeviceInfo(a1, v11);
      v5 = *(_DWORD *)(a1 + 2240);
      UsbhEtwWrite(a2, 0LL, (unsigned __int64)&v6, 12LL, v11, 44LL, *(_QWORD *)(a1 + 2232), v5, 0LL);
    }
  }
}
