/*
 * XREFs of RtlpLocateRelatedBlocks @ 0x14025B850
 * Callers:
 *     RtlpLogHeapFailure @ 0x14017CFD8 (RtlpLogHeapFailure.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLocateRelatedBlocks(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v4; // rdx
  __int64 result; // rax
  _QWORD *v6; // rcx
  unsigned __int64 *v7; // r8
  unsigned __int64 i; // rdx
  _QWORD *v9; // rdx
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  _QWORD *v12; // r9
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // r9
  int v17; // edx
  int v18; // eax
  unsigned __int16 v19; // ax
  unsigned __int64 j; // rcx
  unsigned __int16 v21; // ax
  int v22; // ecx
  unsigned __int16 v23; // r10
  int v24; // ecx
  unsigned __int16 v25; // ax
  __int64 v26; // rdx
  int v27; // ecx
  __int16 v28; // ax
  int v29; // ecx
  int v30; // [rsp+8h] [rbp-10h]
  int v31; // [rsp+8h] [rbp-10h]
  int v32; // [rsp+8h] [rbp-10h]
  int v33; // [rsp+8h] [rbp-10h]
  int v34; // [rsp+8h] [rbp-10h]

  v4 = (_QWORD *)(a1 + 288);
  for ( result = *(_QWORD *)(a1 + 288); ; result = *(_QWORD *)result )
  {
    if ( (_QWORD *)result == v4 )
    {
      v7 = (unsigned __int64 *)(a1 + 272);
      for ( i = *v7; (unsigned __int64 *)i != v7; i = *(_QWORD *)i )
      {
        if ( (i & 0xFFFFFFFFFFFF0000uLL) <= a2 && *(_QWORD *)(i + 40) + (i & 0xFFFFFFFFFFFF0000uLL) > a2 )
          dword_140359198 = 5;
      }
      return result;
    }
    v6 = (_QWORD *)(result - 24);
    if ( *(_QWORD *)(result - 24 + 48) <= a2 && v6[9] > a2 )
      break;
  }
  v9 = (_QWORD *)v6[12];
  v10 = 0LL;
  v11 = 0LL;
  while ( v9 != v6 + 12 )
  {
    v12 = v9 - 2;
    v13 = v9[2];
    v14 = v13 + v9[3];
    if ( v14 < a2 && v14 > (unsigned __int64)v10 )
      v10 = (_QWORD *)(v13 + v9[3]);
    if ( v13 > a2 )
    {
      if ( v11 && v13 >= v11[4] )
        v12 = v11;
      v11 = v12;
    }
    v9 = (_QWORD *)*v9;
  }
  v15 = 0LL;
  v16 = 0LL;
  if ( v10 )
    v6 = v10;
  if ( (unsigned __int64)v6 < a2 )
  {
    v17 = *(_DWORD *)(a1 + 124);
    do
    {
      v16 = (__int64)v6;
      if ( v17 )
      {
        v18 = *((_DWORD *)v6 + 2);
        v17 = *(_DWORD *)(a1 + 124);
        LOWORD(v30) = v18;
        if ( (v17 & v18) != 0 )
          v30 = *(_DWORD *)(a1 + 136) ^ v18;
        v19 = v30;
      }
      else
      {
        v19 = *((_WORD *)v6 + 4);
      }
      if ( !v19 )
        break;
      v6 += 2 * v19;
    }
    while ( (unsigned __int64)v6 < a2 );
  }
  for ( j = (unsigned __int64)(v11 - 2); j > a2; j += -16LL * v21 )
  {
    v15 = j;
    v21 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(j + 12);
    if ( !v21 )
      break;
  }
  qword_1403591C8 = v16;
  qword_1403591D0 = v15;
  if ( !v16 || !v15 )
    goto LABEL_71;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v22 = *(_DWORD *)(v16 + 8);
    LOWORD(v31) = v22;
    if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
      v31 = *(_DWORD *)(a1 + 136) ^ v22;
    v23 = v31;
  }
  else
  {
    v23 = *(_WORD *)(v16 + 8);
  }
  result = v16 + 16LL * v23;
  if ( result != v15 - 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v15 + 12)) )
  {
    dword_140359198 = 4;
  }
  else
  {
LABEL_71:
    if ( *(_DWORD *)(a1 + 124) )
    {
      v24 = *(_DWORD *)(v16 + 8);
      LOWORD(v32) = v24;
      if ( (*(_DWORD *)(a1 + 124) & v24) != 0 )
        v32 = *(_DWORD *)(a1 + 136) ^ v24;
      v25 = v32;
    }
    else
    {
      v25 = *(_WORD *)(v16 + 8);
    }
    v26 = 2LL * v25;
    if ( v15 )
      word_1403591F0 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(v15 + 12);
    if ( v16 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v27 = *(_DWORD *)(v16 + 8);
        LOWORD(v33) = v27;
        if ( (*(_DWORD *)(a1 + 124) & v27) != 0 )
          v33 = *(_DWORD *)(a1 + 136) ^ v27;
        v28 = v33;
      }
      else
      {
        v28 = *(_WORD *)(v16 + 8);
      }
      word_1403591F4 = v28;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      v29 = *(_DWORD *)(v16 + 8 * v26 + 8);
      LOWORD(v34) = v29;
      if ( (*(_DWORD *)(a1 + 124) & v29) != 0 )
        v34 = *(_DWORD *)(a1 + 136) ^ v29;
      result = (unsigned __int16)v34;
    }
    else
    {
      result = *(unsigned __int16 *)(v16 + 8 * v26 + 8);
    }
    if ( word_1403591F0 == (_WORD)result )
    {
      if ( word_1403591F4 != (*(_WORD *)(a1 + 140) ^ *(_WORD *)(v16 + 8 * v26 + 12)) )
        dword_140359198 = 7;
    }
    else
    {
      dword_140359198 = 6;
    }
  }
  return result;
}
