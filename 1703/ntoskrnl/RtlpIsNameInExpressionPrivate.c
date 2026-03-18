/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x140115180
 * Callers:
 *     RtlIsNameInExpression @ 0x1401150F0 (RtlIsNameInExpression.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     RtlDoesNameContainWildCards @ 0x140115640 (RtlDoesNameContainWildCards.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memcmp @ 0x14016A960 (memcmp.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, __int64 a2, char a3, __int64 a4)
{
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // bp
  __int64 v8; // r12
  unsigned __int16 *v9; // r9
  unsigned __int16 v10; // r11
  __int16 v12; // r11
  __int16 *v13; // r15
  unsigned int v14; // r13d
  unsigned __int16 v15; // r10
  unsigned __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned int v18; // ebx
  unsigned int v19; // r14d
  __int64 v20; // rax
  unsigned int v21; // edi
  __int16 v22; // ax
  _OWORD *v23; // r8
  unsigned __int16 v24; // dx
  __int16 v25; // bp
  __int16 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int16 v31; // bp
  bool v32; // zf
  unsigned __int16 v33; // cx
  __int64 v34; // rax
  __int16 v35; // bx
  __int64 v36; // rax
  __int64 v37; // rbx
  __m128i v38; // xmm1
  __int16 v39; // di
  unsigned __int64 v40; // xmm1_8
  unsigned __int16 v41; // di
  unsigned __int64 v42; // r9
  unsigned __int16 v43; // di
  unsigned __int16 v44; // cx
  __int64 v45; // rax
  __int64 v46; // rax
  _OWORD *PoolWithTag; // rax
  _OWORD *v48; // rcx
  __int128 v49; // xmm1
  __int16 *v50; // rcx
  __int128 v51; // xmm1
  char v52; // [rsp+20h] [rbp-C8h]
  unsigned __int16 v53; // [rsp+22h] [rbp-C6h]
  __int16 v54; // [rsp+22h] [rbp-C6h]
  unsigned __int16 v55; // [rsp+24h] [rbp-C4h]
  unsigned __int16 v56; // [rsp+26h] [rbp-C2h]
  UNICODE_STRING Name; // [rsp+38h] [rbp-B0h] BYREF
  PVOID P; // [rsp+48h] [rbp-A0h]
  int v61; // [rsp+50h] [rbp-98h]
  unsigned __int16 *v62; // [rsp+58h] [rbp-90h]
  __int64 v63; // [rsp+60h] [rbp-88h]
  __int16 v64; // [rsp+70h] [rbp-78h] BYREF
  char v65; // [rsp+90h] [rbp-58h] BYREF

  v4 = *(_WORD *)a2;
  v5 = 0;
  v63 = a4;
  v52 = 0;
  v8 = a2;
  v62 = a1;
  v9 = a1;
  v55 = 0;
  P = 0LL;
  if ( !v4 )
    return v4 + *a1 == 0;
  v10 = *a1;
  v53 = *a1;
  if ( !*a1 )
    return v4 + *a1 == 0;
  if ( v10 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  if ( **((_WORD **)a1 + 1) == 42 )
  {
    v38 = *(__m128i *)a1;
    *(_QWORD *)&Name.Length = v38.m128i_i64[0];
    v39 = v38.m128i_i16[0];
    v40 = _mm_srli_si128(v38, 8).m128i_u64[0];
    v41 = v39 - 2;
    Name.Length = v41;
    Name.Buffer = (wchar_t *)(v40 + 2);
    if ( !RtlDoesNameContainWildCards(&Name) )
    {
      if ( v4 >= (unsigned __int16)(v53 - 2) )
      {
        v42 = (unsigned __int64)(v4 - v41) >> 1;
        if ( !a3 )
          return memcmp((const void *)(v40 + 2), (const void *)(*(_QWORD *)(v8 + 8) + 2LL * (unsigned int)v42), v41) == 0;
        v43 = v41 >> 1;
        if ( !v43 )
          return 1;
        while ( *(_WORD *)(a4 + 2LL * *(unsigned __int16 *)(*(_QWORD *)(v8 + 8) + 2LL * ((unsigned int)v42 + v5))) == *(_WORD *)(v40 + 2 + 2LL * v5) )
        {
          if ( ++v5 >= v43 )
            return 1;
        }
      }
      return 0;
    }
    v9 = v62;
    v10 = v53;
  }
  v12 = 2 * v10;
  *(_QWORD *)&Name.Length = &v65;
  v54 = v12;
  v13 = &v64;
  v64 = 0;
  v14 = 1;
  v15 = 0;
  v56 = 0;
  while ( 2 )
  {
    if ( v15 >= *(_WORD *)v8 )
    {
      v52 = 1;
      if ( v13[v14 - 1] == v12 )
      {
LABEL_42:
        v35 = v13[v14 - 1];
        if ( P )
        {
          ExFreePoolWithTag(P, 0);
          v12 = v54;
        }
        return v35 == v12;
      }
    }
    else
    {
      v16 = (unsigned __int64)v15 >> 1;
      v15 += 2;
      v56 = v15;
      v55 = *(_WORD *)(*(_QWORD *)(v8 + 8) + 2 * v16);
    }
    LODWORD(v17) = 0;
    v18 = 0;
    v19 = 0;
    while ( 2 )
    {
      v20 = (unsigned int)v17;
      v17 = (unsigned int)(v17 + 1);
      v21 = ((unsigned int)(unsigned __int16)v13[v20] + 1) >> 1;
      v22 = 0;
      v23 = *(_OWORD **)&Name.Length;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v24 = *v9;
              if ( (_WORD)v21 == *v9 )
                goto LABEL_30;
              LOWORD(v21) = v22 + v21;
              v25 = 2 * v21;
              if ( (_WORD)v21 == v24 )
              {
                v12 = v54;
                v29 = v18++;
                *((_WORD *)v23 + v29) = v54;
                goto LABEL_18;
              }
              v26 = *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v21 >> 1));
              if ( v18 >= 0xE && !P )
              {
                v61 = v24 >> 1;
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v61 + 1), 0x6E725346u);
                P = PoolWithTag;
                if ( !PoolWithTag )
                  RtlRaiseStatus(-1073741801);
                v48 = *(_OWORD **)&Name.Length;
                v23 = PoolWithTag;
                v9 = v62;
                v15 = v56;
                *(_QWORD *)&Name.Length = PoolWithTag;
                *PoolWithTag = *v48;
                v49 = v48[1];
                LODWORD(v48) = v61;
                PoolWithTag[1] = v49;
                v50 = (__int16 *)PoolWithTag + (unsigned int)(2 * (_DWORD)v48 + 2);
                *(_OWORD *)v50 = *(_OWORD *)v13;
                v51 = *((_OWORD *)v13 + 1);
                v13 = v50;
                *((_OWORD *)v50 + 1) = v51;
              }
              if ( v26 != 42 )
                break;
              v8 = a2;
              v27 = v18;
              v28 = v18 + 1;
              *((_WORD *)v23 + v27) = v25;
              v22 = 2;
              *((_WORD *)v23 + v28) = v25 + 3;
              v18 = v28 + 1;
            }
            if ( v26 != 60 )
              break;
            v8 = a2;
            if ( v55 != 46 || v52 )
              goto LABEL_46;
            v44 = v15;
            if ( v15 >= *(_WORD *)a2 )
            {
LABEL_64:
              v45 = v18++;
              *((_WORD *)v23 + v45) = v25 + 3;
              v22 = 2;
            }
            else
            {
              while ( *(_WORD *)(*(_QWORD *)(a2 + 8) + 2 * ((unsigned __int64)v44 >> 1)) != 46 )
              {
                v44 += 2;
                if ( v44 >= *(_WORD *)a2 )
                {
                  v15 = v56;
                  goto LABEL_64;
                }
              }
              v15 = v56;
LABEL_46:
              v36 = v18;
              v37 = v18 + 1;
              *((_WORD *)v23 + v36) = v25;
              v22 = 2;
              *((_WORD *)v23 + v37) = v25 + 3;
              v18 = v37 + 1;
            }
          }
          v31 = v25 + 4;
          if ( v26 != 62 )
            break;
          v22 = 2;
          v8 = a2;
          if ( !v52 )
          {
            if ( v55 != 46 )
            {
              v12 = v54;
              v46 = v18++;
              *((_WORD *)v23 + v46) = v31;
              goto LABEL_18;
            }
            v22 = 2;
          }
        }
        if ( v26 != 34 )
        {
          if ( !v52 )
          {
            v32 = v26 == 63;
            goto LABEL_36;
          }
LABEL_29:
          v8 = a2;
LABEL_30:
          v12 = v54;
          goto LABEL_18;
        }
        if ( !v52 )
          break;
        v22 = 2;
        v8 = a2;
      }
      v32 = v55 == 46;
LABEL_36:
      if ( v32 )
      {
        v30 = v18++;
        *((_WORD *)v23 + v30) = v31;
        goto LABEL_29;
      }
      if ( a3 )
        v33 = *(_WORD *)(v63 + 2LL * v55);
      else
        v33 = v55;
      v12 = v54;
      v32 = v26 == (__int16)v33;
      v8 = a2;
      if ( v32 )
      {
        v34 = v18++;
        *((_WORD *)v23 + v34) = v31;
      }
LABEL_18:
      if ( (unsigned int)v17 < v14 )
      {
        while ( v19 < v18 )
        {
          do
          {
            if ( (unsigned __int16)v13[v17] >= *((_WORD *)v23 + v19) )
              break;
            v17 = (unsigned int)(v17 + 1);
          }
          while ( (unsigned int)v17 < v14 );
          ++v19;
          if ( (unsigned int)v17 >= v14 )
            goto LABEL_19;
        }
        continue;
      }
      break;
    }
LABEL_19:
    if ( v18 )
    {
      v14 = v18;
      *(_QWORD *)&Name.Length = v13;
      v13 = (__int16 *)v23;
      if ( v52 )
        goto LABEL_42;
      continue;
    }
    break;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0;
}
