/*
 * XREFs of ?MPCGamepadInputHelper_UpdateGamepadFocus_@ISMTracing@@QEAAXAEB_NAEBK00000000@Z @ 0x180055710
 * Callers:
 *     ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x180055860 (-UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCGamepadInputHelper_UpdateGamepadFocus_(
        ISMTracing *this,
        const bool *a2,
        const unsigned int *a3,
        const bool *a4,
        const bool *a5,
        const bool *a6,
        const bool *a7,
        const bool *a8,
        const bool *a9,
        const bool *a10,
        const bool *a11)
{
  __int64 v14; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-B1h] BYREF
  const bool *v16; // [rsp+58h] [rbp-91h]
  __int64 v17; // [rsp+60h] [rbp-89h]
  const unsigned int *v18; // [rsp+68h] [rbp-81h]
  __int64 v19; // [rsp+70h] [rbp-79h]
  const bool *v20; // [rsp+78h] [rbp-71h]
  __int64 v21; // [rsp+80h] [rbp-69h]
  const bool *v22; // [rsp+88h] [rbp-61h]
  __int64 v23; // [rsp+90h] [rbp-59h]
  const bool *v24; // [rsp+98h] [rbp-51h]
  __int64 v25; // [rsp+A0h] [rbp-49h]
  const bool *v26; // [rsp+A8h] [rbp-41h]
  __int64 v27; // [rsp+B0h] [rbp-39h]
  const bool *v28; // [rsp+B8h] [rbp-31h]
  __int64 v29; // [rsp+C0h] [rbp-29h]
  const bool *v30; // [rsp+C8h] [rbp-21h]
  __int64 v31; // [rsp+D0h] [rbp-19h]
  const bool *v32; // [rsp+D8h] [rbp-11h]
  __int64 v33; // [rsp+E0h] [rbp-9h]
  const bool *v34; // [rsp+E8h] [rbp-1h]
  __int64 v35; // [rsp+F0h] [rbp+7h]

  v14 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v14 > 4u && (*(_BYTE *)(v14 + 16) & 1) != 0 && (*(_QWORD *)(v14 + 24) & 1LL) == *(_QWORD *)(v14 + 24) )
  {
    v22 = a5;
    v24 = a6;
    v26 = a7;
    v28 = a8;
    v30 = a9;
    v32 = a10;
    v34 = a11;
    v16 = a2;
    v17 = 1LL;
    v18 = a3;
    v19 = 4LL;
    v20 = a4;
    v21 = 1LL;
    v23 = 1LL;
    v25 = 1LL;
    v27 = 1LL;
    v29 = 1LL;
    v31 = 1LL;
    v33 = 1LL;
    v35 = 1LL;
    TlgWrite((TraceLoggingHProvider)v14, &unk_1800EE6FB, 0LL, 0LL, 0xCu, &pData);
  }
}
