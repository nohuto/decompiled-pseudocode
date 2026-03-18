/*
 * XREFs of UsbhEtwLogHubException @ 0x1C0059150
 * Callers:
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0005320 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C00082F0 (UsbhEtwGetHubInfo.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 */

void __fastcall UsbhEtwLogHubException(__int64 a1, int a2, int a3, int a4, char a5, __int64 a6, int a7)
{
  __int64 v7; // rbx
  _DWORD *v8; // rax
  int v9; // [rsp+78h] [rbp-49h]
  int v10; // [rsp+90h] [rbp-31h] BYREF
  int v11; // [rsp+98h] [rbp-29h] BYREF
  int v12; // [rsp+A0h] [rbp-21h] BYREF
  int v13; // [rsp+A8h] [rbp-19h] BYREF
  __int16 v14; // [rsp+ACh] [rbp-15h]
  __int16 v15; // [rsp+AEh] [rbp-13h]
  __int16 v16; // [rsp+B0h] [rbp-11h]
  __int16 v17; // [rsp+B2h] [rbp-Fh]
  _BYTE v18[40]; // [rsp+B8h] [rbp-9h] BYREF

  v7 = a6;
  v12 = a2;
  v11 = a3;
  v10 = a4;
  if ( dword_1C0069650 )
  {
    v8 = FdoExt(a1);
    v13 = v8[1298];
    v14 = *((_WORD *)v8 + 2598);
    v15 = v8[1300];
    v16 = *((_WORD *)v8 + 2614);
    v17 = *((_WORD *)v8 + 2615);
    UsbhEtwGetHubInfo((__int64)v8, (__int64)v18);
    v9 = a7;
    UsbhEtwWrite(
      &USBHUB_ETW_EVENT_HUB_EXCEPTION,
      0LL,
      (unsigned __int64)&v13,
      12LL,
      v18,
      36LL,
      &v12,
      4LL,
      &v11,
      4LL,
      &v10,
      4LL,
      &a5,
      4LL,
      v7,
      v9,
      0LL);
  }
}
