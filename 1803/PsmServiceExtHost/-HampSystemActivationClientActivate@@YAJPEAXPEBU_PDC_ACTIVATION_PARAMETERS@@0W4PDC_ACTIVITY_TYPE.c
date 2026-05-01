/*
 * XREFs of ?HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE@@PEBGKPEAPEAXPEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x18003562C
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18001B8A0 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     Pdcv2ActivationClientActivate @ 0x1800357F8 (Pdcv2ActivationClientActivate.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HampSystemActivationClientActivate(
        int a1,
        int a2,
        int a3,
        int a4,
        const WCHAR *pwsz,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  char v8; // bl
  unsigned int v9; // r9d
  int v10; // r11d
  int v11; // r11d
  int v12; // r10d
  char v14; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v15; // [rsp+44h] [rbp-75h] BYREF
  int v16; // [rsp+48h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-69h] BYREF
  unsigned int *v18; // [rsp+70h] [rbp-49h]
  int v19; // [rsp+78h] [rbp-41h]
  int v20; // [rsp+7Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-39h] BYREF
  char *v22; // [rsp+90h] [rbp-29h]
  int v23; // [rsp+98h] [rbp-21h]
  int v24; // [rsp+9Ch] [rbp-1Dh]
  int *v25; // [rsp+A0h] [rbp-19h]
  int v26; // [rsp+A8h] [rbp-11h]
  int v27; // [rsp+ACh] [rbp-Dh]
  __int64 v28; // [rsp+B0h] [rbp-9h]
  int v29; // [rsp+B8h] [rbp-1h]
  int v30; // [rsp+BCh] [rbp+3h]

  v8 = a4;
  v15 = Pdcv2ActivationClientActivate(a1, a2, a3, a4, (__int64)pwsz, 0, a7, a8);
  v9 = v15;
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v20 = 0;
    v18 = &v15;
    v19 = v10;
    TlgCreateWsz(&pDesc, pwsz);
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v22 = &v14;
    v25 = &v16;
    v14 = v8;
    v23 = 1;
    v16 = a8;
    v26 = v11;
    v28 = a7;
    v29 = v12;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_18008073D, 0LL, 0LL, 7u, &pData);
    return v15;
  }
  return v9;
}
