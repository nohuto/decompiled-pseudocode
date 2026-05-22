/*
 * XREFs of ?MPCSixDofProcessor_HomeEvent_@ISMTracing@@QEAAXK_N00K0M0@Z @ 0x1800444C4
 * Callers:
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_N_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N11AEBIAEA_N$$QEAM1@Z @ 0x18004184C (--$MPCSixDofProcessor_HomeEvent@K_N_N_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N11AEBIAEA_N$$QEA.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEvent_(
        ISMTracing *this,
        int a2,
        char a3,
        char a4,
        bool a5,
        char a6,
        bool a7,
        float a8,
        bool a9)
{
  const struct _TlgProvider_t *v9; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-81h] BYREF
  int *v11; // [rsp+58h] [rbp-61h]
  __int64 v12; // [rsp+60h] [rbp-59h]
  char *v13; // [rsp+68h] [rbp-51h]
  __int64 v14; // [rsp+70h] [rbp-49h]
  char *v15; // [rsp+78h] [rbp-41h]
  __int64 v16; // [rsp+80h] [rbp-39h]
  bool *v17; // [rsp+88h] [rbp-31h]
  __int64 v18; // [rsp+90h] [rbp-29h]
  char *v19; // [rsp+98h] [rbp-21h]
  __int64 v20; // [rsp+A0h] [rbp-19h]
  bool *v21; // [rsp+A8h] [rbp-11h]
  __int64 v22; // [rsp+B0h] [rbp-9h]
  float *v23; // [rsp+B8h] [rbp-1h]
  __int64 v24; // [rsp+C0h] [rbp+7h]
  bool *v25; // [rsp+C8h] [rbp+Fh]
  __int64 v26; // [rsp+D0h] [rbp+17h]
  int v27; // [rsp+100h] [rbp+47h] BYREF
  char v28; // [rsp+108h] [rbp+4Fh] BYREF
  char v29; // [rsp+110h] [rbp+57h] BYREF

  v29 = a4;
  v28 = a3;
  v27 = a2;
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v9 > 4u
    && (*((_QWORD *)v9 + 2) & 0x400000000001LL) != 0
    && (*((_QWORD *)v9 + 3) & 0x400000000001LL) == *((_QWORD *)v9 + 3) )
  {
    v12 = 4LL;
    v11 = &v27;
    v13 = &v28;
    v15 = &v29;
    v17 = &a5;
    v19 = &a6;
    v21 = &a7;
    v23 = &a8;
    v25 = &a9;
    v14 = 1LL;
    v16 = 1LL;
    v18 = 1LL;
    v20 = 4LL;
    v22 = 1LL;
    v24 = 4LL;
    v26 = 1LL;
    TlgWrite(v9, &unk_18010D6A3, 0LL, 0LL, 0xAu, &pData);
  }
}
