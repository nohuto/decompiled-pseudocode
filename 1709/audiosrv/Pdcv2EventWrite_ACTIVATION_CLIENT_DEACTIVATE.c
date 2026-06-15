/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_DEACTIVATE @ 0x18002BF24
 * Callers:
 *     Pdcv2ActivationClientDeactivate @ 0x18002BB08 (Pdcv2ActivationClientDeactivate.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     McTemplateU0qqzr1qzr3qqxqpqqzr11q @ 0x1800DF648 (McTemplateU0qqzr1qzr3qqxqpqqzr11q.c)
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
  int v11; // r11d
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r9d
  int v15; // [rsp+80h] [rbp-80h] BYREF
  int v16; // [rsp+84h] [rbp-7Ch] BYREF
  int v17; // [rsp+88h] [rbp-78h] BYREF
  int v18; // [rsp+8Ch] [rbp-74h] BYREF
  int v19; // [rsp+90h] [rbp-70h] BYREF
  ULONGLONG v20; // [rsp+98h] [rbp-68h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v22[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-50h]
  void *v24; // [rsp+C0h] [rbp-40h] BYREF
  int v25; // [rsp+C8h] [rbp-38h]
  int v26; // [rsp+CCh] [rbp-34h]
  void *v27; // [rsp+D0h] [rbp-30h]
  int v28; // [rsp+D8h] [rbp-28h]
  int v29; // [rsp+DCh] [rbp-24h]
  int *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+100h] [rbp+0h] BYREF
  int *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  int *v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  ULONGLONG *v38; // [rsp+130h] [rbp+30h]
  __int64 v39; // [rsp+138h] [rbp+38h]
  __int64 *v40; // [rsp+140h] [rbp+40h]
  __int64 v41; // [rsp+148h] [rbp+48h]
  int *v42; // [rsp+150h] [rbp+50h]
  __int64 v43; // [rsp+158h] [rbp+58h]
  int *v44; // [rsp+160h] [rbp+60h]
  __int64 v45; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+170h] [rbp+70h] BYREF

  v3 = -1;
  v17 = a3;
  v4 = -1LL;
  v15 = -1;
  v16 = -1;
  v5 = &word_180104218;
  v7 = -1LL;
  v8 = &word_180104218;
  v9 = &word_180104218;
  if ( a2 )
  {
    v5 = (const WCHAR *)(a2 + 23);
    v3 = a2[56];
    v16 = a2[6];
    v15 = a2[55];
  }
  if ( a1 )
  {
    v9 = (const WCHAR *)(a1 + 72);
    v8 = (const WCHAR *)(a1 + 328);
    v7 = GetTickCount64() - *(_QWORD *)(a1 + 40);
    LOBYTE(a3) = v17;
  }
  if ( (Microsoft_Windows_PDCEnableBits & 0x200000) != 0 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v5[v12] );
    v13 = -1LL;
    do
      ++v13;
    while ( v8[v13] );
    do
      ++v4;
    while ( v9[v4] );
    v14 = v4;
    v10 = v15;
    McTemplateU0qqzr1qzr3qqxqpqqzr11q(v12, (_DWORD)a2, v16, v14, (__int64)v9, v13, (__int64)v8, v3, v15, v7, a3, a1);
  }
  else
  {
    v10 = v15;
  }
  if ( v7 >= 0x3E8
    && dword_18014A430 > 5u
    && (qword_18014A440 & 0x400000000000LL) != 0
    && (qword_18014A448 & 0x400000000000LL) == qword_18014A448 )
  {
    v30 = &v16;
    v15 = v3;
    v18 = v10;
    v20 = v7;
    v21 = a1;
    v19 = 2;
    v31 = 4LL;
    TlgCreateWsz(&pDesc, v9);
    TlgCreateWsz(&v33, v8);
    v35 = 4LL;
    v36 = &v18;
    v34 = &v15;
    v38 = &v20;
    v37 = 4LL;
    v40 = &v21;
    v39 = 8LL;
    v42 = &v17;
    v44 = &v19;
    v41 = 8LL;
    v43 = 4LL;
    v45 = 4LL;
    TlgCreateWsz(&v46, v5);
    v22[1] = 5;
    v23 = 0x400000000000LL;
    v24 = off_18014A438;
    v22[0] = ((unsigned int)&unk_18011240A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v25 = *(unsigned __int16 *)off_18014A438;
    v27 = &unk_180112415;
    v26 = v11;
    v28 = 155;
    v29 = 1;
    EtwEventWriteTransfer(qword_18014A450, v22, 0LL, 0LL, 12, &v24);
  }
}
