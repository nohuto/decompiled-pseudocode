/*
 * XREFs of ?TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0HHIIIKK@Z @ 0x1C01973D8
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01A8830 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingRimHidDeviceArrivedEvent(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        struct _UNICODE_STRING *a7,
        struct _UNICODE_STRING *a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15)
{
  const GUID *v15; // r8
  const GUID *v16; // r9
  int v17; // [rsp+38h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-C0h] BYREF
  int *v19; // [rsp+68h] [rbp-A0h]
  __int64 v20; // [rsp+70h] [rbp-98h]
  int *v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  int *v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  int *v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  char *v27; // [rsp+A8h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-58h]
  char *v29; // [rsp+B8h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-48h]
  _DWORD *v31; // [rsp+C8h] [rbp-40h]
  __int64 v32; // [rsp+D0h] [rbp-38h]
  PWSTR Buffer; // [rsp+D8h] [rbp-30h]
  _DWORD v34[2]; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD *v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  PWSTR v37; // [rsp+F8h] [rbp-10h]
  _DWORD v38[2]; // [rsp+100h] [rbp-8h] BYREF
  char *v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]
  char *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  char *v43; // [rsp+128h] [rbp+20h]
  __int64 v44; // [rsp+130h] [rbp+28h]
  char *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  char *v47; // [rsp+148h] [rbp+40h]
  __int64 v48; // [rsp+150h] [rbp+48h]
  char *v49; // [rsp+158h] [rbp+50h]
  __int64 v50; // [rsp+160h] [rbp+58h]
  char *v51; // [rsp+168h] [rbp+60h]
  __int64 v52; // [rsp+170h] [rbp+68h]
  int v53; // [rsp+1B0h] [rbp+A8h] BYREF
  int v54; // [rsp+1B8h] [rbp+B0h] BYREF
  int v55; // [rsp+1C0h] [rbp+B8h] BYREF

  v55 = a4;
  v54 = a3;
  v53 = a2;
  if ( dword_1C0324850 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x800000000000uLL) )
    {
      v17 = (unsigned __int16)v16;
      v19 = &v17;
      v21 = &v53;
      v23 = &v54;
      v25 = &v55;
      v27 = &a5;
      v29 = &a6;
      v31 = v34;
      Buffer = a7->Buffer;
      v34[0] = a7->Length;
      v35 = v38;
      v20 = 4LL;
      v37 = a8->Buffer;
      v38[0] = a8->Length;
      v39 = &a9;
      v41 = &a10;
      v43 = &a11;
      v45 = &a12;
      v47 = &a13;
      v49 = &a14;
      v51 = &a15;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 2LL;
      v34[1] = 0;
      v36 = 2LL;
      v38[1] = 0;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EAFDE, v15, v16, 0x13u, &pData);
    }
  }
}
