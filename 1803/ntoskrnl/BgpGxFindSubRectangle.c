/*
 * XREFs of BgpGxFindSubRectangle @ 0x140840DEC
 * Callers:
 *     AnFwDisplayFade @ 0x14083B548 (AnFwDisplayFade.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     BgpGxRectangleCreate @ 0x14083C2B0 (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxFindSubRectangle(unsigned int *a1, int a2, __int64 *a3, unsigned int *a4, _BYTE *a5)
{
  unsigned int *v5; // r13
  __int64 *v6; // r11
  unsigned int *v7; // rsi
  unsigned int v8; // r12d
  unsigned int v9; // r9d
  unsigned int v10; // r10d
  unsigned int v11; // ebp
  __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // ebx
  unsigned int v15; // r15d
  unsigned int v16; // r14d
  unsigned int v17; // r8d
  unsigned int i; // edx
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // r11d
  unsigned int v24; // r8d
  __int64 v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  int v30; // edi
  __int64 v31; // rbp
  __int64 result; // rax
  unsigned int v33; // ecx
  size_t v34; // rdi
  char *v35; // rbx
  char *v36; // rsi
  __int64 v37; // r12
  char v38; // [rsp+20h] [rbp-68h]
  _DWORD v39[24]; // [rsp+28h] [rbp-60h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = a1;
  if ( !a4 )
    return 3221225485LL;
  if ( !a1 )
    return 3221225485LL;
  v8 = a1[2];
  if ( ((v8 - 24) & 0xFFFFFFF7) != 0 )
    return 3221225485LL;
  v9 = *a1;
  v10 = a1[1];
  v11 = 0;
  v12 = *((_QWORD *)a1 + 3);
  v13 = 0;
  v14 = v8 >> 3;
  v15 = v9;
  v38 = 0;
  v16 = v10;
  if ( a2 == -16777216 && v14 == 4 )
  {
    v17 = 0;
    if ( v9 )
    {
      do
      {
        for ( i = 0; i < v10; ++i )
        {
          if ( *(_DWORD *)v12 )
          {
            v38 = 1;
            v19 = i;
            if ( i >= v16 )
              v19 = v16;
            v16 = v19;
            v20 = i;
            if ( i <= v13 )
              v20 = v13;
            v13 = v20;
            v21 = v17;
            if ( v17 >= v15 )
              v21 = v15;
            v15 = v21;
            v22 = v17;
            if ( v17 <= v11 )
              v22 = v11;
            v11 = v22;
          }
          v12 += 4LL;
        }
        ++v17;
      }
      while ( v17 < v9 );
      goto LABEL_38;
    }
LABEL_49:
    *a5 = 1;
    *a3 = 0LL;
    return 0LL;
  }
  v23 = 0;
  if ( !v9 )
    goto LABEL_49;
  do
  {
    v24 = 0;
    if ( v10 )
    {
      v25 = v14;
      do
      {
        if ( *(_BYTE *)(v12 + 2) != BYTE2(a2) || *(_WORD *)v12 != (_WORD)a2 )
        {
          v38 = 1;
          v26 = v24;
          if ( v24 >= v16 )
            v26 = v16;
          v16 = v26;
          v27 = v24;
          if ( v24 <= v13 )
            v27 = v13;
          v13 = v27;
          v28 = v23;
          if ( v23 >= v15 )
            v28 = v15;
          v15 = v28;
          v29 = v23;
          if ( v23 <= v11 )
            v29 = v11;
          v11 = v29;
          v25 = v14;
        }
        v12 += v25;
        ++v24;
      }
      while ( v24 < v10 );
    }
    ++v23;
  }
  while ( v23 < v9 );
  v7 = a1;
  v5 = a4;
  v6 = a3;
LABEL_38:
  if ( !v38 )
    goto LABEL_49;
  v30 = v13 - v16 + 1;
  v31 = v11 - v15 + 1;
  v39[0] = v30;
  v39[1] = v31;
  if ( !v15 && !v16 && v30 == v10 && (_DWORD)v31 == v9 )
    return 3221226021LL;
  result = BgpGxRectangleCreate(v39, v8, v6);
  if ( (int)result >= 0 )
  {
    v33 = v14 * v7[1];
    v34 = v14 * v30;
    v35 = (char *)(*((_QWORD *)v7 + 3) + v15 * v33 + v16 * v14);
    v36 = *(char **)(*a3 + 24);
    if ( (_DWORD)v31 )
    {
      v37 = v33;
      do
      {
        memmove(v36, v35, v34);
        v36 += v34;
        v35 += v37;
        --v31;
      }
      while ( v31 );
    }
    *v5 = v16;
    v5[1] = v15;
    *a5 = 0;
    return 0LL;
  }
  return result;
}
