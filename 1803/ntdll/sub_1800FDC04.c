/*
 * XREFs of sub_1800FDC04 @ 0x1800FDC04
 * Callers:
 *     sub_1800FC664 @ 0x1800FC664 (sub_1800FC664.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FDC04(__int64 a1, unsigned __int64 a2)
{
  __int64 *v4; // rcx
  __int64 result; // rax
  __int64 v6; // r9
  _QWORD *v7; // r9
  unsigned __int64 v8; // rdx
  int v9; // r8d
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rbx
  _QWORD *v13; // r11
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // r9
  int v18; // edx
  int v19; // eax
  unsigned __int16 v20; // ax
  unsigned __int64 i; // rcx
  unsigned __int16 v22; // ax
  int v23; // eax
  unsigned __int16 v24; // r10
  int v25; // eax
  int v26; // eax
  int v27; // ecx
  unsigned __int16 v28; // dx
  __int64 v29; // rdx
  int v30; // eax
  unsigned __int16 v31; // ax
  int v32; // eax
  int v33; // [rsp+8h] [rbp-10h]
  int v34; // [rsp+8h] [rbp-10h]
  int v35; // [rsp+8h] [rbp-10h]
  int v36; // [rsp+8h] [rbp-10h]
  int v37; // [rsp+8h] [rbp-10h]

  v4 = (__int64 *)(a1 + 288);
  for ( result = *v4; ; result = *(_QWORD *)result )
  {
    if ( (__int64 *)result == v4 )
    {
      v7 = (_QWORD *)(a1 + 272);
      v8 = *(_QWORD *)(a1 + 272);
      if ( v8 != a1 + 272 )
      {
        v9 = dword_1801597B8;
        do
        {
          if ( (v8 & 0xFFFFFFFFFFFF0000uLL) <= a2 )
          {
            result = 5LL;
            if ( *(_QWORD *)(v8 + 40) + (v8 & 0xFFFFFFFFFFFF0000uLL) > a2 )
              v9 = 5;
            dword_1801597B8 = v9;
          }
          v8 = *(_QWORD *)v8;
        }
        while ( (_QWORD *)v8 != v7 );
      }
      return result;
    }
    v6 = result - 24;
    if ( *(_QWORD *)(result - 24 + 48) <= a2 && *(_QWORD *)(v6 + 72) > a2 )
      break;
  }
  v10 = *(_QWORD **)(v6 + 96);
  v11 = 0LL;
  v12 = 0LL;
  while ( v10 != (_QWORD *)(v6 + 96) )
  {
    v13 = v10 - 2;
    v14 = v10[2];
    v15 = v14 + v10[3];
    if ( v15 < a2 && v15 > v11 )
      v11 = v14 + v10[3];
    if ( v14 > a2 )
    {
      if ( v12 && v14 >= v12[4] )
        v13 = v12;
      v12 = v13;
    }
    v10 = (_QWORD *)*v10;
  }
  v16 = 0LL;
  if ( !v11 )
    v11 = v6;
  v17 = 0LL;
  if ( v11 < a2 )
  {
    v18 = *(_DWORD *)(a1 + 124);
    do
    {
      v17 = v11;
      if ( v18 )
      {
        v19 = *(_DWORD *)(v11 + 8);
        v18 = *(_DWORD *)(a1 + 124);
        LOWORD(v33) = v19;
        if ( (v18 & v19) != 0 )
          v33 = *(_DWORD *)(a1 + 136) ^ v19;
        v20 = v33;
      }
      else
      {
        v20 = *(_WORD *)(v11 + 8);
      }
      if ( !v20 )
        break;
      v11 += 16LL * v20;
    }
    while ( v11 < a2 );
  }
  for ( i = (unsigned __int64)(v12 - 2); i > a2; i += -16LL * v22 )
  {
    v16 = i;
    v22 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(i + 12);
    if ( !v22 )
      break;
  }
  qword_1801597E8 = v17;
  qword_1801597F0 = v16;
  if ( !v17 || !v16 )
    goto LABEL_49;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v23 = *(_DWORD *)(v17 + 8);
    LOWORD(v34) = v23;
    if ( (v23 & *(_DWORD *)(a1 + 124)) != 0 )
      v34 = *(_DWORD *)(a1 + 136) ^ v23;
    v24 = v34;
  }
  else
  {
    v24 = *(_WORD *)(v17 + 8);
  }
  result = v17 + 16LL * v24;
  if ( result != v16 - 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v16 + 12)) )
  {
    dword_1801597B8 = 4;
  }
  else
  {
LABEL_49:
    v25 = *(_DWORD *)(a1 + 124);
    if ( v25 )
    {
      v26 = *(_DWORD *)(v17 + 8);
      v27 = *(_DWORD *)(a1 + 124);
      LOWORD(v35) = v26;
      if ( (v27 & v26) != 0 )
        v35 = *(_DWORD *)(a1 + 136) ^ v26;
      v28 = v35;
      v25 = *(_DWORD *)(a1 + 124);
    }
    else
    {
      v28 = *(_WORD *)(v17 + 8);
      v27 = 0;
    }
    v29 = 2LL * v28;
    if ( v16 )
    {
      qword_1801597F8 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v16 + 12);
      v27 = *(_DWORD *)(a1 + 124);
      v25 = v27;
    }
    if ( v17 )
    {
      if ( v27 )
      {
        v30 = *(_DWORD *)(v17 + 8);
        LOWORD(v36) = v30;
        if ( (v30 & *(_DWORD *)(a1 + 124)) != 0 )
          v36 = *(_DWORD *)(a1 + 136) ^ v30;
        v31 = v36;
      }
      else
      {
        v31 = *(_WORD *)(v17 + 8);
      }
      qword_180159800 = v31;
      v25 = *(_DWORD *)(a1 + 124);
    }
    if ( v25 )
    {
      v32 = *(_DWORD *)(v17 + 8 * v29 + 8);
      LOWORD(v37) = v32;
      if ( (v32 & *(_DWORD *)(a1 + 124)) != 0 )
        v37 = *(_DWORD *)(a1 + 136) ^ v32;
      LOWORD(result) = v37;
    }
    else
    {
      LOWORD(result) = *(_WORD *)(v17 + 8 * v29 + 8);
    }
    result = (unsigned __int16)result;
    if ( qword_1801597F8 == (unsigned __int16)result )
    {
      result = *(unsigned __int16 *)(a1 + 140);
      if ( qword_180159800 != (result ^ *(unsigned __int16 *)(v17 + 8 * v29 + 12)) )
        dword_1801597B8 = 7;
    }
    else
    {
      dword_1801597B8 = 6;
    }
  }
  return result;
}
