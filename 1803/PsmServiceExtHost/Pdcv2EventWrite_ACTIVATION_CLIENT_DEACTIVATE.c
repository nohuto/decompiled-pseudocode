/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x180035D54
 * Callers:
 *     Pdcv2ActivationClientDeactivate @ 0x180035B44 (Pdcv2ActivationClientDeactivate.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     McTemplateU0qqzr1qzr3qqxqpqqzr11q @ 0x180036374 (McTemplateU0qqzr1qzr3qqxqpqqzr11q.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE(__int64 a1, _DWORD *a2, int a3)
{
  int v3; // r15d
  __int64 v4; // rbx
  const WCHAR *v5; // r14
  ULONGLONG v7; // rsi
  const WCHAR *v8; // r12
  const WCHAR *v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r9d
  int v13; // ebx
  int v14; // [rsp+80h] [rbp-80h] BYREF
  int v15; // [rsp+84h] [rbp-7Ch] BYREF
  int v16; // [rsp+88h] [rbp-78h] BYREF
  int v17; // [rsp+8Ch] [rbp-74h] BYREF
  int v18; // [rsp+90h] [rbp-70h] BYREF
  ULONGLONG v19; // [rsp+98h] [rbp-68h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  int *v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+F0h] [rbp-10h] BYREF
  int *v26; // [rsp+100h] [rbp+0h]
  __int64 v27; // [rsp+108h] [rbp+8h]
  int *v28; // [rsp+110h] [rbp+10h]
  __int64 v29; // [rsp+118h] [rbp+18h]
  ULONGLONG *v30; // [rsp+120h] [rbp+20h]
  __int64 v31; // [rsp+128h] [rbp+28h]
  __int64 *v32; // [rsp+130h] [rbp+30h]
  __int64 v33; // [rsp+138h] [rbp+38h]
  int *v34; // [rsp+140h] [rbp+40h]
  __int64 v35; // [rsp+148h] [rbp+48h]
  int *v36; // [rsp+150h] [rbp+50h]
  __int64 v37; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+160h] [rbp+60h] BYREF

  v3 = -1;
  v16 = a3;
  v4 = -1LL;
  v14 = -1;
  v15 = -1;
  v5 = &pwsz;
  v7 = -1LL;
  v8 = &pwsz;
  v9 = &pwsz;
  if ( a2 )
  {
    v5 = (const WCHAR *)(a2 + 23);
    v3 = a2[56];
    v15 = a2[6];
    v14 = a2[55];
  }
  if ( a1 )
  {
    v9 = (const WCHAR *)(a1 + 72);
    v8 = (const WCHAR *)(a1 + 328);
    v7 = GetTickCount64() - *(_QWORD *)(a1 + 40);
    LOBYTE(a3) = v16;
  }
  if ( (Microsoft_Windows_PDCEnableBits & 0x200000) != 0 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v5[v10] );
    v11 = -1LL;
    do
      ++v11;
    while ( v8[v11] );
    do
      ++v4;
    while ( v9[v4] );
    v12 = v4;
    v13 = v14;
    McTemplateU0qqzr1qzr3qqxqpqqzr11q(v10, (_DWORD)a2, v15, v12, (__int64)v9, v11, (__int64)v8, v3, v14, v7, a3, a1);
  }
  else
  {
    v13 = v14;
  }
  if ( dword_180092170 > 5u && v7 >= 0x3E8 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_180092170, 0x400000000000uLL) )
    {
      v22 = &v15;
      v14 = v3;
      v17 = v13;
      v19 = v7;
      v20 = a1;
      v18 = 2;
      v23 = 4LL;
      TlgCreateWsz(&pDesc, v9);
      TlgCreateWsz(&v25, v8);
      v27 = 4LL;
      v28 = &v17;
      v26 = &v14;
      v30 = &v19;
      v29 = 4LL;
      v32 = &v20;
      v31 = 8LL;
      v34 = &v16;
      v36 = &v18;
      v33 = 8LL;
      v35 = 4LL;
      v37 = 4LL;
      TlgCreateWsz(&v38, v5);
      TlgWrite((TraceLoggingHProvider)&dword_180092170, &unk_18008439C, 0LL, 0LL, 0xCu, &pData);
    }
  }
}
