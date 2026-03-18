/*
 * XREFs of ?LogDeviceArrivedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C004EB78
 * Callers:
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C004EA80 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void __fastcall CHidInput::LogDeviceArrivedEvent(
        CHidInput *this,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        struct _UNICODE_STRING *a8,
        struct _UNICODE_STRING *a9)
{
  const GUID *v9; // r9
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v12; // [rsp+60h] [rbp-A0h]
  __int64 v13; // [rsp+68h] [rbp-98h]
  int *v14; // [rsp+70h] [rbp-90h]
  __int64 v15; // [rsp+78h] [rbp-88h]
  int *v16; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+88h] [rbp-78h]
  char *v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  char *v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  char *v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  _DWORD *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  PWSTR Buffer; // [rsp+D0h] [rbp-30h]
  _DWORD v27[2]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD *v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  PWSTR v30; // [rsp+F0h] [rbp-10h]
  _DWORD v31[6]; // [rsp+F8h] [rbp-8h] BYREF
  int v32; // [rsp+140h] [rbp+40h] BYREF
  int v33; // [rsp+148h] [rbp+48h] BYREF

  v33 = a4;
  v32 = a3;
  if ( dword_1C0186860 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0186860, 0x800000000000uLL) )
    {
      v10 = (unsigned __int16)v9;
      v12 = &v10;
      v14 = &v32;
      v16 = &v33;
      v18 = &a5;
      v20 = &a6;
      v22 = &a7;
      v24 = v27;
      Buffer = a8->Buffer;
      v27[0] = a8->Length;
      v28 = v31;
      v30 = a9->Buffer;
      v31[0] = a9->Length;
      v13 = 4LL;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 2LL;
      v27[1] = 0;
      v29 = 2LL;
      v31[1] = 0;
      TlgWrite((TraceLoggingHProvider)&dword_1C0186860, &unk_1C016A8C6, 0LL, v9, 0xCu, &pData);
    }
  }
}
