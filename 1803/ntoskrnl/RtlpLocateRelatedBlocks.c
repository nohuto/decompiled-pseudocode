/*
 * XREFs of RtlpLocateRelatedBlocks @ 0x14029370C
 * Callers:
 *     RtlpHpHeapHandleError @ 0x14029367C (RtlpHpHeapHandleError.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLocateRelatedBlocks(__int64 a1, unsigned __int64 a2)
{
  __int64 *v4; // rcx
  __int64 result; // rax
  _QWORD *v6; // r9
  unsigned __int64 *v7; // r8
  unsigned __int64 i; // rdx
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rbx
  _QWORD *v12; // r11
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
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  unsigned __int16 v27; // dx
  __int64 v28; // rdx
  int v29; // ecx
  unsigned __int16 v30; // ax
  int v31; // ecx
  int v32; // [rsp+8h] [rbp-10h]
  int v33; // [rsp+8h] [rbp-10h]
  int v34; // [rsp+8h] [rbp-10h]
  int v35; // [rsp+8h] [rbp-10h]
  int v36; // [rsp+8h] [rbp-10h]

  v4 = (__int64 *)(a1 + 288);
  for ( result = *v4; ; result = *(_QWORD *)result )
  {
    if ( (__int64 *)result == v4 )
    {
      v7 = (unsigned __int64 *)(a1 + 272);
      for ( i = *v7; (unsigned __int64 *)i != v7; i = *(_QWORD *)i )
      {
        if ( (i & 0xFFFFFFFFFFFF0000uLL) <= a2 && *(_QWORD *)(i + 40) + (i & 0xFFFFFFFFFFFF0000uLL) > a2 )
          dword_14039C048 = 5;
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
    if ( v14 < a2 && v14 > v10 )
      v10 = v13 + v9[3];
    if ( v13 > a2 )
    {
      if ( v11 && v13 >= v11[4] )
        v12 = v11;
      v11 = v12;
    }
    v9 = (_QWORD *)*v9;
  }
  v15 = 0LL;
  if ( !v10 )
    v10 = (unsigned __int64)v6;
  v16 = 0LL;
  if ( v10 < a2 )
  {
    v17 = *(_DWORD *)(a1 + 124);
    do
    {
      v16 = v10;
      if ( v17 )
      {
        v18 = *(_DWORD *)(v10 + 8);
        v17 = *(_DWORD *)(a1 + 124);
        LOWORD(v32) = v18;
        if ( (v17 & v18) != 0 )
          v32 = *(_DWORD *)(a1 + 136) ^ v18;
        v19 = v32;
      }
      else
      {
        v19 = *(_WORD *)(v10 + 8);
      }
      if ( !v19 )
        break;
      v10 += 16LL * v19;
    }
    while ( v10 < a2 );
  }
  for ( j = (unsigned __int64)(v11 - 2); j > a2; j += -16LL * v21 )
  {
    v15 = j;
    v21 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(j + 12);
    if ( !v21 )
      break;
  }
  qword_14039C078 = v16;
  qword_14039C080 = v15;
  if ( !v16 || !v15 )
    goto LABEL_41;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v22 = *(_DWORD *)(v16 + 8);
    LOWORD(v33) = v22;
    if ( (v22 & *(_DWORD *)(a1 + 124)) != 0 )
      v33 = *(_DWORD *)(a1 + 136) ^ v22;
    v23 = v33;
  }
  else
  {
    v23 = *(_WORD *)(v16 + 8);
  }
  result = v16 + 16LL * v23;
  if ( result != v15 - 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v15 + 12)) )
  {
    dword_14039C048 = 4;
  }
  else
  {
LABEL_41:
    v24 = *(_DWORD *)(a1 + 124);
    if ( v24 )
    {
      v25 = *(_DWORD *)(v16 + 8);
      v26 = *(_DWORD *)(a1 + 124);
      LOWORD(v34) = v25;
      if ( (v26 & v25) != 0 )
        v34 = *(_DWORD *)(a1 + 136) ^ v25;
      v27 = v34;
      v24 = *(_DWORD *)(a1 + 124);
    }
    else
    {
      v27 = *(_WORD *)(v16 + 8);
      v26 = 0;
    }
    v28 = 2LL * v27;
    if ( v15 )
    {
      qword_14039C088 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v15 + 12);
      v26 = *(_DWORD *)(a1 + 124);
      v24 = v26;
    }
    if ( v16 )
    {
      if ( v26 )
      {
        v29 = *(_DWORD *)(v16 + 8);
        LOWORD(v35) = v29;
        if ( (*(_DWORD *)(a1 + 124) & v29) != 0 )
          v35 = *(_DWORD *)(a1 + 136) ^ v29;
        v30 = v35;
      }
      else
      {
        v30 = *(_WORD *)(v16 + 8);
      }
      qword_14039C090 = v30;
      v24 = *(_DWORD *)(a1 + 124);
    }
    if ( v24 )
    {
      v31 = *(_DWORD *)(v16 + 8 * v28 + 8);
      LOWORD(v36) = v31;
      if ( (*(_DWORD *)(a1 + 124) & v31) != 0 )
        v36 = *(_DWORD *)(a1 + 136) ^ v31;
      LOWORD(result) = v36;
    }
    else
    {
      LOWORD(result) = *(_WORD *)(v16 + 8 * v28 + 8);
    }
    result = (unsigned __int16)result;
    if ( qword_14039C088 == (unsigned __int16)result )
    {
      result = *(unsigned __int16 *)(a1 + 140);
      if ( qword_14039C090 != (result ^ *(unsigned __int16 *)(v16 + 8 * v28 + 12)) )
        dword_14039C048 = 7;
    }
    else
    {
      dword_14039C048 = 6;
    }
  }
  return result;
}
