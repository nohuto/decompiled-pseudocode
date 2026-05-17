/*
 * XREFs of sub_1800FF3B0 @ 0x1800FF3B0
 * Callers:
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall sub_1800FF3B0(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *i; // rax
  _QWORD *v6; // rcx
  unsigned __int64 *v7; // r8
  unsigned __int64 v8; // rdx
  int v9; // r9d
  _QWORD *v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // rdi
  _QWORD *v13; // r9
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // r9
  int v18; // edx
  int v19; // eax
  unsigned __int16 v20; // ax
  unsigned __int64 j; // rcx
  unsigned __int16 v22; // ax
  int v23; // eax
  unsigned __int16 v24; // r10
  int v25; // eax
  unsigned __int16 v26; // ax
  __int64 v27; // rcx
  int v28; // eax
  __int16 v29; // ax
  int v30; // eax
  int v32; // [rsp+8h] [rbp-10h]
  int v33; // [rsp+8h] [rbp-10h]
  int v34; // [rsp+8h] [rbp-10h]
  int v35; // [rsp+8h] [rbp-10h]
  int v36; // [rsp+8h] [rbp-10h]

  v4 = (_QWORD *)(a1 + 288);
  for ( i = *(_QWORD **)(a1 + 288); ; i = (_QWORD *)*i )
  {
    if ( i == v4 )
    {
      v7 = (unsigned __int64 *)(a1 + 272);
      v8 = *v7;
      if ( (unsigned __int64 *)*v7 != v7 )
      {
        v9 = dword_1801586B8;
        do
        {
          if ( (v8 & 0xFFFFFFFFFFFF0000uLL) <= a2 )
          {
            LOWORD(i) = 5;
            if ( *(_QWORD *)(v8 + 40) + (v8 & 0xFFFFFFFFFFFF0000uLL) > a2 )
              v9 = 5;
            dword_1801586B8 = v9;
          }
          v8 = *(_QWORD *)v8;
        }
        while ( (unsigned __int64 *)v8 != v7 );
      }
      return (__int16)i;
    }
    v6 = i - 3;
    if ( i[3] <= a2 && v6[9] > a2 )
      break;
  }
  v10 = (_QWORD *)v6[12];
  v11 = 0LL;
  v12 = 0LL;
  while ( v10 != v6 + 12 )
  {
    v13 = v10 - 2;
    v14 = v10[2];
    v15 = v14 + v10[3];
    if ( v15 < a2 && v15 > (unsigned __int64)v11 )
      v11 = (_QWORD *)(v14 + v10[3]);
    if ( v14 > a2 )
    {
      if ( v12 && v14 >= v12[4] )
        v13 = v12;
      v12 = v13;
    }
    v10 = (_QWORD *)*v10;
  }
  v16 = 0LL;
  v17 = 0LL;
  if ( v11 )
    v6 = v11;
  if ( (unsigned __int64)v6 < a2 )
  {
    v18 = *(_DWORD *)(a1 + 124);
    do
    {
      v17 = (__int64)v6;
      if ( v18 )
      {
        v19 = *((_DWORD *)v6 + 2);
        v18 = *(_DWORD *)(a1 + 124);
        LOWORD(v32) = v19;
        if ( (v18 & v19) != 0 )
          v32 = *(_DWORD *)(a1 + 136) ^ v19;
        v20 = v32;
      }
      else
      {
        v20 = *((_WORD *)v6 + 4);
      }
      if ( !v20 )
        break;
      v6 += 2 * v20;
    }
    while ( (unsigned __int64)v6 < a2 );
  }
  for ( j = (unsigned __int64)(v12 - 2); j > a2; j += -16LL * v22 )
  {
    v16 = j;
    v22 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(j + 12);
    if ( !v22 )
      break;
  }
  qword_1801586E8 = v17;
  qword_1801586F0 = v16;
  if ( !v17 || !v16 )
    goto LABEL_75;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v23 = *(_DWORD *)(v17 + 8);
    LOWORD(v33) = v23;
    if ( (v23 & *(_DWORD *)(a1 + 124)) != 0 )
      v33 = *(_DWORD *)(a1 + 136) ^ v23;
    v24 = v33;
  }
  else
  {
    v24 = *(_WORD *)(v17 + 8);
  }
  i = (_QWORD *)(v17 + 16LL * v24);
  if ( i != (_QWORD *)(v16 - 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v16 + 12))) )
  {
    dword_1801586B8 = 4;
  }
  else
  {
LABEL_75:
    if ( *(_DWORD *)(a1 + 124) )
    {
      v25 = *(_DWORD *)(v17 + 8);
      LOWORD(v34) = v25;
      if ( (v25 & *(_DWORD *)(a1 + 124)) != 0 )
        v34 = *(_DWORD *)(a1 + 136) ^ v25;
      v26 = v34;
    }
    else
    {
      v26 = *(_WORD *)(v17 + 8);
    }
    v27 = 2LL * v26;
    if ( v16 )
      word_180158710 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(v16 + 12);
    if ( v17 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v28 = *(_DWORD *)(v17 + 8);
        LOWORD(v35) = v28;
        if ( (v28 & *(_DWORD *)(a1 + 124)) != 0 )
          v35 = *(_DWORD *)(a1 + 136) ^ v28;
        v29 = v35;
      }
      else
      {
        v29 = *(_WORD *)(v17 + 8);
      }
      word_180158714 = v29;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      v30 = *(_DWORD *)(v17 + 8 * v27 + 8);
      LOWORD(v36) = v30;
      if ( (v30 & *(_DWORD *)(a1 + 124)) != 0 )
        v36 = *(_DWORD *)(a1 + 136) ^ v30;
      LOWORD(i) = v36;
    }
    else
    {
      LOWORD(i) = *(_WORD *)(v17 + 8 * v27 + 8);
    }
    if ( word_180158710 == (_WORD)i )
    {
      LOWORD(i) = *(_WORD *)(a1 + 140) ^ *(_WORD *)(v17 + 8 * v27 + 12);
      if ( word_180158714 != (_WORD)i )
        dword_1801586B8 = 7;
    }
    else
    {
      dword_1801586B8 = 6;
    }
  }
  return (__int16)i;
}
