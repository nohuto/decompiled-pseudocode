/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x140043FF0
 * Callers:
 *     RtlIsNameInExpression @ 0x140043EC0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x140043F50 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     RtlDoesNameContainWildCards @ 0x140044510 (RtlDoesNameContainWildCards.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, __int64 a2, char a3, char a4, __int64 a5)
{
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // bp
  __int64 v9; // r14
  __int16 v11; // r11
  int v13; // r9d
  __int16 v14; // r11
  __int16 *v15; // r12
  unsigned __int16 v16; // r10
  unsigned __int64 v17; // rcx
  __int64 v18; // rbx
  unsigned int v19; // edi
  unsigned int v20; // r15d
  __int64 v21; // rax
  unsigned int v22; // esi
  __int16 v23; // ax
  _OWORD *v24; // r8
  unsigned __int16 v25; // dx
  __int16 v26; // bp
  unsigned __int16 v27; // r14
  char v28; // al
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned __int16 v32; // dx
  unsigned __int16 v33; // cx
  unsigned int v34; // r8d
  __int64 v35; // rax
  __int16 v36; // bp
  bool v37; // zf
  unsigned __int16 v38; // cx
  __int64 v39; // rax
  __int16 v40; // bx
  __int64 v42; // rax
  __int64 v43; // rdi
  __m128i v44; // xmm1
  __int16 v45; // eax^2
  __int16 v46; // di
  unsigned __int64 v47; // xmm1_8
  unsigned __int16 v48; // di
  unsigned __int64 v49; // r9
  unsigned __int16 v50; // di
  unsigned __int16 v51; // cx
  unsigned __int16 v52; // cx
  __int64 v53; // rax
  __int64 v54; // rax
  _OWORD *PoolWithTag; // rax
  _OWORD *v56; // rcx
  __int128 v57; // xmm1
  __int16 *v58; // rcx
  __int128 v59; // xmm1
  char v60; // [rsp+20h] [rbp-C8h]
  __int16 v61; // [rsp+22h] [rbp-C6h]
  __int16 v62; // [rsp+22h] [rbp-C6h]
  unsigned __int16 v64; // [rsp+26h] [rbp-C2h]
  unsigned __int16 v67; // [rsp+38h] [rbp-B0h]
  UNICODE_STRING Name; // [rsp+40h] [rbp-A8h] BYREF
  unsigned int v69; // [rsp+50h] [rbp-98h]
  PVOID P; // [rsp+58h] [rbp-90h]
  int v71; // [rsp+60h] [rbp-88h]
  __int16 v72; // [rsp+70h] [rbp-78h] BYREF
  char v73; // [rsp+90h] [rbp-58h] BYREF

  v5 = *(_WORD *)a2;
  v6 = 0;
  v60 = 0;
  v9 = a2;
  v64 = 0;
  P = 0LL;
  if ( !v5 )
    return *a1 + v5 == 0;
  v11 = *a1;
  v61 = *a1;
  if ( !*a1 )
    return *a1 + v5 == 0;
  if ( v11 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  if ( **((_WORD **)a1 + 1) == 42 )
  {
    v44 = *(__m128i *)a1;
    *(_DWORD *)(&Name.MaximumLength + 1) = HIDWORD(*(_QWORD *)a1);
    v45 = v44.m128i_i16[1];
    v46 = v44.m128i_i16[0];
    v47 = _mm_srli_si128(v44, 8).m128i_u64[0];
    v48 = v46 - 2;
    Name.Length = v48;
    Name.MaximumLength = v45 - 2;
    Name.Buffer = (wchar_t *)(v47 + 2);
    if ( !RtlDoesNameContainWildCards(&Name) )
    {
      if ( v5 >= (unsigned __int16)(v61 - 2) )
      {
        v49 = (unsigned __int64)(v5 - v48) >> 1;
        if ( !a3 )
          return memcmp((const void *)(v47 + 2), (const void *)(*(_QWORD *)(v9 + 8) + 2LL * (unsigned int)v49), v48) == 0;
        v50 = v48 >> 1;
        if ( !v50 )
          return 1;
        while ( 1 )
        {
          v51 = *(_WORD *)(v47 + 2 + 2LL * v6);
          if ( a4 )
            v51 = *(_WORD *)(a5 + 2LL * v51);
          if ( *(_WORD *)(a5 + 2LL * *(unsigned __int16 *)(*(_QWORD *)(v9 + 8) + 2LL * ((unsigned int)v49 + v6))) != v51 )
            break;
          if ( ++v6 >= v50 )
            return 1;
        }
      }
      return 0;
    }
    v11 = v61;
  }
  v72 = 0;
  v13 = 1;
  *(_QWORD *)&Name.Length = &v73;
  v14 = 2 * v11;
  v69 = 1;
  v62 = v14;
  v15 = &v72;
  v16 = 0;
  v67 = 0;
LABEL_8:
  if ( v16 < *(_WORD *)v9 )
  {
    v17 = (unsigned __int64)v16 >> 1;
    v16 += 2;
    v67 = v16;
    v64 = *(_WORD *)(*(_QWORD *)(v9 + 8) + 2 * v17);
    goto LABEL_10;
  }
  v60 = 1;
  if ( v15[v13 - 1] != v14 )
  {
LABEL_10:
    LODWORD(v18) = 0;
    v19 = 0;
    v20 = 0;
LABEL_11:
    v21 = (unsigned int)v18;
    v18 = (unsigned int)(v18 + 1);
    v22 = ((unsigned int)(unsigned __int16)v15[v21] + 1) >> 1;
    v23 = 0;
    v24 = *(_OWORD **)&Name.Length;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v25 = *a1;
            if ( (_WORD)v22 == *a1 )
              goto LABEL_37;
            LOWORD(v22) = v23 + v22;
            v26 = 2 * v22;
            if ( (_WORD)v22 == v25 )
            {
              v14 = v62;
              v31 = v19++;
              *((_WORD *)v24 + v31) = v62;
              goto LABEL_21;
            }
            v27 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v22 >> 1));
            v28 = a3;
            if ( a3 && a4 )
            {
              v27 = *(_WORD *)(a5 + 2LL * v27);
              v28 = a3;
            }
            if ( v19 >= 0xE && !P )
            {
              v71 = v25 >> 1;
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v71 + 1), 0x6E725346u);
              P = PoolWithTag;
              if ( !PoolWithTag )
                RtlRaiseStatus(-1073741801);
              v56 = *(_OWORD **)&Name.Length;
              v24 = PoolWithTag;
              v16 = v67;
              *(_QWORD *)&Name.Length = PoolWithTag;
              *PoolWithTag = *v56;
              v57 = v56[1];
              LODWORD(v56) = v71;
              PoolWithTag[1] = v57;
              v58 = (__int16 *)PoolWithTag + (unsigned int)(2 * (_DWORD)v56 + 2);
              v28 = a3;
              *(_OWORD *)v58 = *(_OWORD *)v15;
              v59 = *((_OWORD *)v15 + 1);
              v15 = v58;
              *((_OWORD *)v58 + 1) = v59;
            }
            if ( v27 != 42 )
              break;
            v9 = a2;
            v29 = v19;
            v30 = v19 + 1;
            *((_WORD *)v24 + v29) = v26;
            v23 = 2;
            *((_WORD *)v24 + v30) = v26 + 3;
            v19 = v30 + 1;
          }
          if ( v27 == 60 )
            break;
          v36 = v26 + 4;
          if ( v27 == 62 )
          {
            v23 = 2;
            v9 = a2;
            if ( !v60 )
            {
              if ( v64 != 46 )
              {
                v35 = v19++;
                *((_WORD *)v24 + v35) = v36;
                goto LABEL_37;
              }
              v23 = 2;
            }
          }
          else
          {
            if ( v27 != 34 )
            {
              if ( !v60 )
              {
                v37 = v27 == 63;
                goto LABEL_43;
              }
LABEL_76:
              v9 = a2;
LABEL_37:
              v14 = v62;
              goto LABEL_21;
            }
            if ( !v60 )
            {
              v37 = v64 == 46;
LABEL_43:
              if ( v37 )
              {
                v54 = v19++;
                *((_WORD *)v24 + v54) = v36;
                goto LABEL_76;
              }
              if ( v28 )
                v38 = *(_WORD *)(a5 + 2LL * v64);
              else
                v38 = v64;
              v14 = v62;
              v37 = v27 == v38;
              v9 = a2;
              if ( v37 )
              {
                v39 = v19++;
                *((_WORD *)v24 + v39) = v36;
              }
LABEL_21:
              if ( (unsigned int)v18 < v69 )
              {
                while ( v20 < v19 )
                {
                  v32 = *((_WORD *)v24 + v20);
                  do
                  {
                    v33 = v15[v18];
                    v34 = v18;
                    if ( v33 >= v32 )
                      break;
                    v18 = (unsigned int)(v18 + 1);
                  }
                  while ( (unsigned int)v18 < v69 );
                  v18 = v34 + 1;
                  if ( v33 >= v32 )
                    v18 = v34;
                  v24 = *(_OWORD **)&Name.Length;
                  ++v20;
                  if ( (unsigned int)v18 >= v69 )
                    goto LABEL_22;
                }
                goto LABEL_11;
              }
LABEL_22:
              if ( !v19 )
              {
                if ( P )
                  ExFreePoolWithTag(P, 0);
                return 0;
              }
              v13 = v19;
              *(_QWORD *)&Name.Length = v15;
              v15 = (__int16 *)v24;
              v69 = v19;
              if ( v60 )
                goto LABEL_49;
              goto LABEL_8;
            }
            v23 = 2;
            v9 = a2;
          }
        }
        v9 = a2;
        if ( v64 == 46 && !v60 )
          break;
LABEL_54:
        v42 = v19;
        v43 = v19 + 1;
        *((_WORD *)v24 + v42) = v26;
        v23 = 2;
        *((_WORD *)v24 + v43) = v26 + 3;
        v19 = v43 + 1;
      }
      v52 = v16;
      if ( v16 < *(_WORD *)a2 )
      {
        while ( *(_WORD *)(*(_QWORD *)(a2 + 8) + 2 * ((unsigned __int64)v52 >> 1)) != 46 )
        {
          v52 += 2;
          if ( v52 >= *(_WORD *)a2 )
            goto LABEL_72;
        }
        goto LABEL_54;
      }
LABEL_72:
      v53 = v19++;
      *((_WORD *)v24 + v53) = v26 + 3;
      v23 = 2;
    }
  }
LABEL_49:
  v40 = v15[v13 - 1];
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    v14 = v62;
  }
  return v40 == v14;
}
