/*
 * XREFs of RtlGenerate8dot3Name @ 0x1800F5810
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     GetNextWchar @ 0x1800F56B4 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x1800F5798 (RtlComputeLfnChecksum.c)
 */

__int64 __fastcall RtlGenerate8dot3Name(unsigned __int16 *a1, char a2, __int64 a3, unsigned __int16 *a4)
{
  char v7; // r12
  unsigned int v8; // esi
  char v9; // r8
  __int16 NextWchar; // ax
  unsigned int v11; // edi
  __int64 v12; // r15
  bool v13; // zf
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // cx
  int v16; // eax
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // r11
  unsigned int i; // r8d
  __int16 v20; // dx
  __int64 v21; // rax
  __int16 v22; // dx
  unsigned int v23; // edi
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // cx
  __int64 v26; // rdx
  int v27; // eax
  unsigned __int16 v28; // ax
  int v29; // r11d
  unsigned __int16 v30; // r9
  __int64 v31; // r8
  _WORD *v32; // r10
  __int16 v33; // ax
  unsigned __int16 v34; // cx
  unsigned int v35; // r10d
  unsigned int v36; // edi
  char v37; // bp
  __int64 v38; // rax
  char v39; // cl
  __int16 v40; // r8
  unsigned __int16 *v41; // r15
  _WORD *v42; // r14
  int v43; // eax
  unsigned int v44; // ecx
  unsigned int j; // edx
  int v46; // eax
  unsigned int v48; // [rsp+24h] [rbp-64h] BYREF
  unsigned int v49; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int16 *v50; // [rsp+30h] [rbp-58h]
  _WORD v51[8]; // [rsp+38h] [rbp-50h] BYREF

  v50 = a4;
  if ( !a2 || (v7 = 1, !NlsMbOemCodePageTag) )
    v7 = 0;
  if ( !*(_BYTE *)(a3 + 3) )
  {
    v8 = -1;
    v48 = 0;
    if ( !*a1 || (v9 = 1, **((_WORD **)a1 + 1) != 46) )
      v9 = 0;
    while ( 1 )
    {
      NextWchar = GetNextWchar(a1, &v48, v9, a2);
      if ( !NextWchar )
        break;
      v9 = 0;
      if ( NextWchar == 46 )
        v8 = v48;
    }
    v11 = 0;
    v12 = NlsUnicodeToMbOemData;
    v13 = v8 == *a1 >> 1;
    v48 = 0;
    *(_BYTE *)(a3 + 3) = 0;
    if ( v13 )
      v8 = -1;
    v49 = v8;
    while ( 1 )
    {
      v14 = GetNextWchar(a1, &v48, 1, a2);
      v15 = v14;
      if ( !v14 || v48 >= v8 || *(_BYTE *)(a3 + 3) >= 6u )
        break;
      if ( v7 )
      {
        if ( v14 <= 0x7Fu || (v13 = *(_BYTE *)(v12 + 2LL * v14 + 1) == 0, v16 = 2, v13) )
          v16 = 1;
        v11 += v16;
        if ( v11 > 6 )
          break;
      }
      *(_WORD *)(a3 + 2LL * (unsigned __int8)(*(_BYTE *)(a3 + 3))++ + 4) = v15;
    }
    if ( !v7 )
      v11 = *(unsigned __int8 *)(a3 + 3);
    if ( v11 <= 2 )
    {
      v17 = RtlComputeLfnChecksum(a1);
      *(_WORD *)a3 = v17;
      v18 = v17;
      for ( i = 0; i < 4; ++i )
      {
        v20 = 48;
        if ( (v18 & 0xFu) > 9 )
          v20 = 55;
        v21 = i + *(unsigned __int8 *)(a3 + 3);
        v22 = (v18 & 0xF) + v20;
        v18 >>= 4;
        *(_WORD *)(a3 + 2 * v21 + 4) = v22;
      }
      *(_BYTE *)(a3 + 3) += 4;
      *(_BYTE *)(a3 + 2) = 1;
    }
    if ( v8 == -1 )
    {
      *(_DWORD *)(a3 + 20) = 0;
    }
    else
    {
      *(_WORD *)(a3 + 24) = 46;
      v23 = 1;
      for ( *(_DWORD *)(a3 + 20) = 1; ; ++*(_DWORD *)(a3 + 20) )
      {
        v24 = GetNextWchar(a1, &v49, 1, a2);
        v25 = v24;
        if ( !v24 )
          break;
        v26 = *(unsigned int *)(a3 + 20);
        if ( (unsigned int)v26 >= 4 )
          goto LABEL_41;
        if ( v7 )
        {
          if ( v24 <= 0x7Fu || (v13 = *(_BYTE *)(NlsUnicodeToMbOemData + 2LL * v24 + 1) == 0, v27 = 2, v13) )
            v27 = 1;
          v23 += v27;
          if ( v23 > 4 )
          {
LABEL_41:
            *(_WORD *)(a3 + 2LL * (unsigned int)(v26 - 1) + 24) = 126;
            break;
          }
        }
        *(_WORD *)(a3 + 2 * v26 + 24) = v25;
      }
    }
  }
  if ( ++*(_DWORD *)(a3 + 32) > 4u && !*(_BYTE *)(a3 + 2) )
  {
    v28 = RtlComputeLfnChecksum(a1);
    *(_WORD *)a3 = v28;
    v30 = v28;
    if ( 2 - v29 < (unsigned int)(6 - v29) )
    {
      v31 = 4LL;
      v32 = (_WORD *)(a3 + 2 * ((unsigned int)(2 - v29) + 2LL));
      do
      {
        v33 = 48;
        v34 = v30 & 0xF;
        if ( v34 > 9u )
          v33 = 55;
        v30 >>= 4;
        *v32++ = v34 + v33;
        --v31;
      }
      while ( v31 );
    }
    *(_DWORD *)(a3 + 32) = 1;
    *(_BYTE *)(a3 + 3) = 6 - v29;
    *(_BYTE *)(a3 + 2) = 1;
  }
  v35 = *(_DWORD *)(a3 + 32);
  v36 = 1;
  v37 = 1;
  do
  {
    if ( !v35 )
      break;
    v38 = 8 - v36++;
    v39 = 0;
    v40 = v35 % 0xA + 48;
    v35 /= 0xAu;
    v51[v38] = v40;
    if ( v40 == 57 )
      v39 = v37;
    v37 = v39;
  }
  while ( v36 <= 7 );
  v41 = v50;
  v42 = &v51[8 - v36];
  *v42 = 126;
  if ( (unsigned __int8)(*(_BYTE *)(a3 + 3) - 1) > 0xBu )
  {
    *v41 = 0;
  }
  else
  {
    memmove(*((void **)v41 + 1), (const void *)(a3 + 4), 2 * (unsigned int)*(unsigned __int8 *)(a3 + 3));
    *v41 = 2 * *(unsigned __int8 *)(a3 + 3);
  }
  memmove((void *)(*((_QWORD *)v41 + 1) + 2 * ((unsigned __int64)*v41 >> 1)), v42, 2 * v36);
  *v41 += 2 * v36;
  v43 = *(_DWORD *)(a3 + 20);
  if ( v43 )
  {
    memmove(
      (void *)(*((_QWORD *)v41 + 1) + 2 * ((unsigned __int64)*v41 >> 1)),
      (const void *)(a3 + 24),
      (unsigned int)(2 * v43));
    *v41 += 2 * *(_WORD *)(a3 + 20);
  }
  if ( !v37 )
    return 0LL;
  if ( v7 )
  {
    v44 = 0;
    for ( j = 0; v44 < *(unsigned __int8 *)(a3 + 3); ++v44 )
    {
      if ( *(_WORD *)(a3 + 2LL * v44 + 4) <= 0x7Fu
        || (v46 = 2, !*(_BYTE *)(NlsUnicodeToMbOemData + 2LL * *(unsigned __int16 *)(a3 + 2LL * v44 + 4) + 1)) )
      {
        v46 = 1;
      }
      j += v46;
      if ( j > 7 - v36 )
        break;
    }
    *(_BYTE *)(a3 + 3) = v44;
  }
  else
  {
    --*(_BYTE *)(a3 + 3);
  }
  if ( *(_BYTE *)(a3 + 3) )
    return 0LL;
  else
    return 3221226535LL;
}
