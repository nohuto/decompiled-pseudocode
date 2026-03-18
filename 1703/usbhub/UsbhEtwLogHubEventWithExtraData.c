/*
 * XREFs of UsbhEtwLogHubEventWithExtraData @ 0x1C0059060
 * Callers:
 *     UsbhCreateDevice @ 0x1C00215F4 (UsbhCreateDevice.c)
 *     UsbhInitializeDevice @ 0x1C0026FA0 (UsbhInitializeDevice.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0005320 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C00082F0 (UsbhEtwGetHubInfo.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogHubEventWithExtraData(__int64 a1, const EVENT_DESCRIPTOR *a2, int a3, __int64 a4, int a5)
{
  _DWORD *v7; // rax
  int v9; // [rsp+60h] [rbp-68h] BYREF
  int v10; // [rsp+68h] [rbp-60h] BYREF
  __int16 v11; // [rsp+6Ch] [rbp-5Ch]
  __int16 v12; // [rsp+6Eh] [rbp-5Ah]
  __int16 v13; // [rsp+70h] [rbp-58h]
  __int16 v14; // [rsp+72h] [rbp-56h]
  _BYTE v15[40]; // [rsp+78h] [rbp-50h] BYREF

  v9 = a3;
  if ( dword_1C0069650 )
  {
    v7 = FdoExt(a1);
    v10 = v7[1298];
    v11 = *((_WORD *)v7 + 2598);
    v12 = v7[1300];
    v13 = *((_WORD *)v7 + 2614);
    v14 = *((_WORD *)v7 + 2615);
    UsbhEtwGetHubInfo((__int64)v7, (__int64)v15);
    UsbhEtwWrite(a2, 0LL, (unsigned __int64)&v10, 12LL, v15, 36LL, &v9, 4LL, a4, a5, 0LL);
  }
}
