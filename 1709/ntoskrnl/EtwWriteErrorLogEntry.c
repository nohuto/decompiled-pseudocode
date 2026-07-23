/*
 * XREFs of EtwWriteErrorLogEntry @ 0x140594E00
 * Callers:
 *     IopErrorLogThread @ 0x140594B30 (IopErrorLogThread.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x140087F40 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall EtwWriteErrorLogEntry(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8)
{
  __int16 v8; // r15
  int v9; // eax
  __int64 v11; // r14
  unsigned __int16 v12; // r11
  unsigned __int16 v13; // r10
  char v14; // al
  __int16 v15; // ax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // edi
  unsigned __int16 v19; // r8
  unsigned int v20; // edx
  __int64 v21; // rax
  unsigned int v22; // esi
  unsigned int v23; // edi
  unsigned __int16 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // edi
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // r14
  _WORD *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // edi
  __int64 v33; // rax
  __int64 result; // rax
  unsigned __int16 v35; // [rsp+98h] [rbp-80h] BYREF
  __int16 v36; // [rsp+9Ch] [rbp-7Ch] BYREF
  unsigned int v37; // [rsp+A0h] [rbp-78h] BYREF
  int v38; // [rsp+A8h] [rbp-70h] BYREF
  char v39; // [rsp+ACh] [rbp-6Ch]
  char v40; // [rsp+ADh] [rbp-6Bh]
  __int16 v41; // [rsp+AEh] [rbp-6Ah]
  __int64 v42; // [rsp+B0h] [rbp-68h]
  _OWORD v43[25]; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v44; // [rsp+248h] [rbp+130h] BYREF
  _QWORD v45[6]; // [rsp+250h] [rbp+138h]
  int v46; // [rsp+280h] [rbp+168h]
  int v47; // [rsp+284h] [rbp+16Ch]
  unsigned __int16 *v48; // [rsp+288h] [rbp+170h]
  __int64 v49; // [rsp+290h] [rbp+178h]
  __int64 v50; // [rsp+298h] [rbp+180h]
  int v51; // [rsp+2A0h] [rbp+188h]
  int v52; // [rsp+2A4h] [rbp+18Ch]

  v8 = IopErrorLogSession;
  v9 = *(_DWORD *)(a2 + 12) >> 30;
  v11 = a3;
  v12 = 0;
  v13 = 0;
  if ( v9 == 1 )
    v14 = 4;
  else
    v14 = (v9 == 2) + 2;
  v39 = v14;
  v15 = *(_WORD *)(a2 + 8);
  v45[1] = a2 + 12;
  v16 = -1LL;
  v41 = v15;
  v17 = -1LL;
  v45[2] = 4LL;
  v38 = 0;
  v40 = 0;
  v42 = 0LL;
  v44 = a4;
  v45[0] = 8LL;
  do
    ++v17;
  while ( *(_WORD *)(a5 + 2 * v17) );
  v45[5] = a5;
  v36 = v17 + 1;
  v45[4] = 2LL;
  v46 = 2 * (unsigned __int16)(v17 + 1);
  v49 = 2LL;
  v18 = 5;
  v48 = &a7;
  v45[3] = &v36;
  v47 = 0;
  if ( a7 )
  {
    v18 = 6;
    v50 = a8;
    v51 = a7;
    v52 = 0;
  }
  v19 = *(_WORD *)(a2 + 4);
  v20 = *(unsigned __int16 *)(a2 + 2) + 40;
  if ( v20 > (unsigned int)v11 )
    v20 = v11;
  v37 = v20;
  if ( v19 && *(unsigned __int16 *)(a2 + 6) < v20 )
    *(_WORD *)(a2 + 6) = v20;
  v21 = 2LL * v18;
  v22 = v19;
  v35 = 0;
  v23 = v18 + 1;
  *(_WORD *)(a2 + 4) = v19 + 1;
  v24 = 0;
  v45[v21 - 1] = &v35;
  v45[v21] = 2LL;
  v25 = 2LL * v23;
  v45[2 * v23 - 1] = a6;
  do
    ++v16;
  while ( *(_WORD *)(a6 + 2 * v16) );
  HIDWORD(v45[2 * v23]) = 0;
  v26 = v23 + 1;
  LODWORD(v45[v25]) = 2 * (unsigned __int16)(v16 + 1);
  if ( v22 )
  {
    v27 = (*(unsigned __int16 *)(a2 + 6) + a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    v28 = a2 + v11;
    do
    {
      v29 = (_WORD *)(v27 + 2LL * v13);
      if ( (unsigned __int64)v29 >= v28 )
        break;
      if ( !*v29 )
      {
        ++v24;
        v12 = v13 + 1;
        v35 = v24;
      }
      ++v13;
    }
    while ( v24 < v22 );
    v30 = 2LL * v26++;
    v45[v30 - 1] = v27;
    LODWORD(v45[v30]) = 2 * v12;
    HIDWORD(v45[v30]) = 0;
  }
  v31 = 2LL * v26;
  v35 = v24 + 1;
  v32 = v26 + 1;
  v45[v31 - 1] = &v37;
  v45[v31] = 4LL;
  v33 = 2LL * v32;
  LODWORD(v45[v33]) = v20;
  v45[v33 - 1] = a2;
  HIDWORD(v45[v33]) = 0;
  memset(v43, 0, sizeof(v43));
  *((_QWORD *)&v43[23] + 1) = EtwpHostSiloState;
  *(GUID *)((char *)&v43[1] + 8) = LegacyEventLogGuid;
  WORD3(v43[7]) = v8;
  LODWORD(v43[7]) = 1;
  BYTE4(v43[7]) = -1;
  v43[8] = _mm_load_si128((const __m128i *)&_xmm);
  DWORD2(v43[7]) = 64;
  result = EtwpEventWriteFull(
             (__int64)v43,
             1u,
             0LL,
             0,
             (__int64)&v38,
             0,
             4,
             0LL,
             0LL,
             v32 + 1,
             (__int64)&v44,
             0LL,
             0LL,
             0LL,
             0,
             0LL,
             0LL);
  if ( (int)result < 0 )
    --*(_WORD *)(a2 + 4);
  return result;
}
