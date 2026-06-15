/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x180028080
 * Callers:
 *     Pdcv2ActivationClientDeactivate @ 0x180027E28 (Pdcv2ActivationClientDeactivate.c)
 * Callees:
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     Template_qqzr1qzr3qqxqpqqzr11q @ 0x1800D2B4C (Template_qqzr1qzr3qqxqpqqzr11q.c)
 */

void __fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(__int64 a1, _DWORD *a2, int a3)
{
  int v3; // r15d
  __int64 v4; // rbx
  const WCHAR *v5; // r14
  ULONGLONG v7; // rsi
  const WCHAR *v8; // r12
  const WCHAR *v9; // r13
  int v10; // ebx
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // r9d
  int v16; // [rsp+80h] [rbp-80h] BYREF
  int v17; // [rsp+84h] [rbp-7Ch] BYREF
  int v18; // [rsp+88h] [rbp-78h] BYREF
  int v19; // [rsp+8Ch] [rbp-74h] BYREF
  int v20; // [rsp+90h] [rbp-70h] BYREF
  ULONGLONG v21; // [rsp+98h] [rbp-68h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  int *v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+F0h] [rbp-10h] BYREF
  int *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  int *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  ULONGLONG *v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  __int64 *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  int *v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]
  int *v38; // [rsp+150h] [rbp+50h]
  __int64 v39; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+160h] [rbp+60h] BYREF

  v3 = -1;
  v18 = a3;
  v4 = -1LL;
  v16 = -1;
  v17 = -1;
  v5 = &word_1800EAD74;
  v7 = -1LL;
  v8 = &word_1800EAD74;
  v9 = &word_1800EAD74;
  if ( a2 )
  {
    v5 = (const WCHAR *)(a2 + 23);
    v3 = a2[56];
    v17 = a2[6];
    v16 = a2[55];
  }
  if ( a1 )
  {
    v9 = (const WCHAR *)(a1 + 72);
    v8 = (const WCHAR *)(a1 + 328);
    v7 = GetTickCount64() - *(_QWORD *)(a1 + 40);
    LOBYTE(a3) = v18;
  }
  if ( (Microsoft_Windows_PDCEnableBits & 0x200000) != 0 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v5[v13] );
    v14 = -1LL;
    do
      ++v14;
    while ( v8[v14] );
    do
      ++v4;
    while ( v9[v4] );
    v15 = v4;
    v10 = v16;
    Template_qqzr1qzr3qqxqpqqzr11q(v13, (_DWORD)a2, v17, v15, (__int64)v9, v14, (__int64)v8, v3, v16, v7, a3, a1);
  }
  else
  {
    v10 = v16;
  }
  if ( v7 >= 0x3E8 && dword_18012A3B0 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18012A3B0, 0x400000000000uLL) )
    {
      v24 = &v17;
      v16 = v3;
      v19 = v10;
      v21 = v7;
      v22 = a1;
      v20 = 2;
      v25 = 4LL;
      TlgCreateWsz(&pDesc, v9);
      TlgCreateWsz(&v27, v8);
      v29 = 4LL;
      v30 = &v19;
      v28 = &v16;
      v32 = &v21;
      v31 = 4LL;
      v34 = &v22;
      v33 = 8LL;
      v36 = &v18;
      v38 = &v20;
      v35 = 8LL;
      v37 = 4LL;
      v39 = 4LL;
      TlgCreateWsz(&v40, v5);
      TlgWrite((TraceLoggingHProvider)&dword_18012A3B0, &unk_1800FBBCC, v11, v12, 0xCu, &pData);
    }
  }
}
