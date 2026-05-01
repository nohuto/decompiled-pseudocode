/*
 * XREFs of ?HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE@@PEBGKPEAPEAXPEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x180040714
 * Callers:
 *     ?HampActNotifyRmStarted@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180047A8C (-HampActNotifyRmStarted@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     Pdcv2ActivationClientActivate @ 0x180049ECC (Pdcv2ActivationClientActivate.c)
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
  int v10; // r10d
  int v11; // r10d
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  char v15; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-75h] BYREF
  int v17; // [rsp+48h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-69h] BYREF
  unsigned int *v19; // [rsp+70h] [rbp-49h]
  int v20; // [rsp+78h] [rbp-41h]
  int v21; // [rsp+7Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-39h] BYREF
  char *v23; // [rsp+90h] [rbp-29h]
  int v24; // [rsp+98h] [rbp-21h]
  int v25; // [rsp+9Ch] [rbp-1Dh]
  int *v26; // [rsp+A0h] [rbp-19h]
  int v27; // [rsp+A8h] [rbp-11h]
  int v28; // [rsp+ACh] [rbp-Dh]
  __int64 v29; // [rsp+B0h] [rbp-9h]
  int v30; // [rsp+B8h] [rbp-1h]
  int v31; // [rsp+BCh] [rbp+3h]

  v8 = a4;
  v16 = Pdcv2ActivationClientActivate(a1, a2, a3, a4, (__int64)pwsz, 0, a7, a8);
  v9 = v16;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
  {
    v21 = 0;
    v19 = &v16;
    v20 = v10;
    TlgCreateWsz(&pDesc, pwsz);
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v23 = &v15;
    v26 = &v17;
    v15 = v8;
    v24 = 1;
    v17 = a8;
    v27 = v11;
    v29 = a7;
    v30 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005A45B, v12, v13, 7u, &pData);
    return v16;
  }
  return v9;
}
