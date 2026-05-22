/*
 * XREFs of ?MPCInputRouter_Update3DFocusWNF_@ISMTracing@@QEAAX_K0KKKK@Z @ 0x1800A8750
 * Callers:
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800AAB90 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCInputRouter_Update3DFocusWNF_(
        ISMTracing *this,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-51h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-31h]
  int v11; // [rsp+60h] [rbp-29h]
  int v12; // [rsp+64h] [rbp-25h]
  __int64 *v13; // [rsp+68h] [rbp-21h]
  int v14; // [rsp+70h] [rbp-19h]
  int v15; // [rsp+74h] [rbp-15h]
  int *v16; // [rsp+78h] [rbp-11h]
  int v17; // [rsp+80h] [rbp-9h]
  int v18; // [rsp+84h] [rbp-5h]
  char *v19; // [rsp+88h] [rbp-1h]
  int v20; // [rsp+90h] [rbp+7h]
  int v21; // [rsp+94h] [rbp+Bh]
  char *v22; // [rsp+98h] [rbp+Fh]
  int v23; // [rsp+A0h] [rbp+17h]
  int v24; // [rsp+A4h] [rbp+1Bh]
  char *v25; // [rsp+A8h] [rbp+1Fh]
  int v26; // [rsp+B0h] [rbp+27h]
  int v27; // [rsp+B4h] [rbp+2Bh]
  __int64 v28; // [rsp+E0h] [rbp+57h] BYREF
  __int64 v29; // [rsp+E8h] [rbp+5Fh] BYREF
  int v30; // [rsp+F0h] [rbp+67h] BYREF

  v30 = a4;
  v29 = a3;
  v28 = a2;
  v7 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v7 )
  {
    if ( *v7 )
    {
      v8 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 1) != 0 && (*(_QWORD *)(v8 + 24) & 1LL) == *(_QWORD *)(v8 + 24) )
      {
        v12 = 0;
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v10 = &v28;
        v13 = &v29;
        v16 = &v30;
        v19 = &a5;
        v22 = &a6;
        v25 = &a7;
        v11 = 8;
        v14 = 8;
        v17 = 4;
        v20 = 4;
        v23 = 4;
        v26 = 4;
        TlgWrite((TraceLoggingHProvider)v8, &unk_1800F0834, 0LL, 0LL, 8u, &pData);
      }
    }
  }
}
