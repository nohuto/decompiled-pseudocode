/*
 * XREFs of UsbhEtwLogDeviceInformation @ 0x1C0058F78
 * Callers:
 *     UsbhEtwRundown @ 0x1C002802C (UsbhEtwRundown.c)
 *     UsbhDeletePdo @ 0x1C0055030 (UsbhDeletePdo.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhEtwWrite @ 0x1C001DD00 (UsbhEtwWrite.c)
 *     UsbhEtwGetDeviceInfo @ 0x1C001FF38 (UsbhEtwGetDeviceInfo.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogDeviceInformation(__int64 a1, const EVENT_DESCRIPTOR *a2, char a3)
{
  _DWORD *v6; // rax
  int v7; // [rsp+60h] [rbp-9h] BYREF
  int v8; // [rsp+68h] [rbp-1h] BYREF
  __int16 v9; // [rsp+6Ch] [rbp+3h]
  __int16 v10; // [rsp+6Eh] [rbp+5h]
  __int16 v11; // [rsp+70h] [rbp+7h]
  __int16 v12; // [rsp+72h] [rbp+9h]
  _BYTE v13[48]; // [rsp+78h] [rbp+Fh] BYREF

  if ( dword_1C006A650 )
  {
    v6 = FdoExt(*(_QWORD *)(a1 + 1176));
    v8 = v6[1298];
    v9 = *((_WORD *)v6 + 2598);
    v10 = v6[1300];
    v11 = *((_WORD *)v6 + 2614);
    v12 = *((_WORD *)v6 + 2615);
    UsbhEtwGetDeviceInfo(a1, (__int64)v13);
    v7 = *(_DWORD *)(a1 + 788);
    if ( a3 )
      UsbhEtwWrite(a2, 0LL, (unsigned __int64)&v8, 12LL, v13, 44LL, &v7, 4LL, a1 + 1392, 18LL, 0LL);
    else
      UsbhEtwWrite(a2, 0LL, (unsigned __int64)&v8, 12LL, v13, 44LL, &v7, 4LL, 0LL);
  }
}
