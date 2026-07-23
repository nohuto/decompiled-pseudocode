/*
 * XREFs of RtlpIsNameInExpressionPrivate @ 0x1800F858C
 * Callers:
 *     RtlIsNameInExpression @ 0x1800F84F0 (RtlIsNameInExpression.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180002AF0 (RtlRaiseStatus.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memcmp @ 0x180094960 (memcmp.c)
 *     RtlDoesNameContainWildCards @ 0x1800F84A0 (RtlDoesNameContainWildCards.c)
 */

char __fastcall RtlpIsNameInExpressionPrivate(unsigned __int16 *a1, unsigned __int16 *a2, char a3, __int64 a4)
{
  unsigned __int16 v4; // bx
  unsigned __int16 *v5; // r13
  unsigned __int16 *v8; // rdx
  void *v9; // r10
  char v10; // r11
  unsigned __int16 v11; // r14
  __m128i v13; // xmm0
  unsigned __int16 v14; // r9
  const void *v15; // r11
  unsigned __int64 v16; // r10
  unsigned __int16 v18; // r9
  char *v19; // r8
  char *v20; // r15
  int v21; // ebp
  unsigned __int16 v22; // r9
  __int16 v23; // r14
  unsigned __int64 v24; // rcx
  __int64 v25; // r12
  __int64 v26; // rdi
  __int16 v27; // cx
  unsigned int v28; // eax
  __int16 v29; // bp
  __int16 v30; // r13
  _OWORD *Heap; // rax
  __int128 v32; // xmm1
  char *v33; // rcx
  char *v34; // rax
  __int64 v35; // rax
  unsigned __int16 v36; // cx
  __int64 v37; // rax
  __int16 v38; // bp
  unsigned __int16 v39; // ax
  __int64 v40; // rax
  unsigned int v41; // edx
  char *v42; // rax
  unsigned __int16 v43; // cx
  __int16 v44; // di
  char v45; // [rsp+20h] [rbp-D8h]
  unsigned __int16 v46; // [rsp+22h] [rbp-D6h]
  unsigned int v48; // [rsp+28h] [rbp-D0h]
  unsigned __int16 v50; // [rsp+38h] [rbp-C0h]
  unsigned int v51; // [rsp+3Ch] [rbp-BCh]
  unsigned int v52; // [rsp+40h] [rbp-B8h]
  char *v53; // [rsp+48h] [rbp-B0h]
  int v54; // [rsp+50h] [rbp-A8h]
  _UNICODE_STRING Expression; // [rsp+60h] [rbp-98h] BYREF
  __int64 v57; // [rsp+70h] [rbp-88h]
  _WORD v58[16]; // [rsp+80h] [rbp-78h] BYREF
  char v59; // [rsp+A0h] [rbp-58h] BYREF

  v4 = 0;
  v5 = a2;
  v57 = a4;
  v8 = a1;
  v46 = 0;
  v9 = 0LL;
  v10 = 0;
  v45 = 0;
  if ( !*v5 )
    return *v5 + *a1 == 0;
  v11 = *a1;
  if ( !*a1 )
    return *v5 + *a1 == 0;
  if ( v11 == 2 && **((_WORD **)a1 + 1) == 42 )
    return 1;
  if ( **((_WORD **)a1 + 1) != 42 )
    goto LABEL_17;
  v13 = *(__m128i *)a1;
  *(_QWORD *)&Expression.Length = v13.m128i_i64[0];
  Expression.Length = v13.m128i_i16[0] - 2;
  Expression.Buffer = (wchar_t *)(_mm_srli_si128(v13, 8).m128i_u64[0] + 2);
  if ( RtlDoesNameContainWildCards(&Expression) )
  {
    v8 = a1;
    v10 = 0;
LABEL_17:
    v58[0] = 0;
    v19 = (char *)v58;
    v52 = 1;
    v53 = (char *)v58;
    v20 = &v59;
    v21 = 1;
    v50 = 0;
    v22 = 0;
    v23 = 2 * v11;
LABEL_18:
    if ( v22 >= *v5 )
    {
      v45 = 1;
      v10 = 1;
      if ( *(_WORD *)&v19[2 * (v21 - 1)] == v23 )
        goto LABEL_75;
    }
    else
    {
      v24 = (unsigned __int64)v22 >> 1;
      v22 += 2;
      v50 = v22;
      v46 = *(_WORD *)(*((_QWORD *)v5 + 1) + 2 * v24);
    }
    v51 = 0;
    LODWORD(v25) = 0;
    LODWORD(v26) = 0;
    while ( 1 )
    {
      v27 = 0;
      v28 = ((unsigned int)*(unsigned __int16 *)&v19[2 * (unsigned int)v25] + 1) >> 1;
      v25 = (unsigned int)(v25 + 1);
      while ( 1 )
      {
        if ( (_WORD)v28 == *v8 )
          goto LABEL_52;
        LOWORD(v28) = v27 + v28;
        v48 = v28;
        v29 = 2 * v28;
        if ( (_WORD)v28 == *v8 )
        {
          *(_WORD *)&v20[2 * (unsigned int)v26] = v23;
          goto LABEL_46;
        }
        v30 = *(_WORD *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v28 >> 1));
        if ( (unsigned int)v26 >= 0xE && !v9 )
        {
          v54 = *v8 >> 1;
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)(v54 + 1));
          v9 = Heap;
          if ( !Heap )
            RtlRaiseStatus(-1073741801);
          v8 = a1;
          v22 = v50;
          v10 = v45;
          *Heap = *(_OWORD *)v20;
          v32 = *((_OWORD *)v20 + 1);
          v33 = (char *)Heap + 2 * (unsigned int)(2 * v54 + 2);
          v20 = (char *)Heap;
          Heap[1] = v32;
          v34 = v53;
          v53 = v33;
          *(_OWORD *)v33 = *(_OWORD *)v34;
          *((_OWORD *)v33 + 1) = *((_OWORD *)v34 + 1);
        }
        if ( v30 == 42 )
        {
          v35 = (unsigned int)v26;
          v26 = (unsigned int)(v26 + 1);
          *(_WORD *)&v20[2 * v35] = v29;
          *(_WORD *)&v20[2 * v26] = v29 + 3;
          LODWORD(v26) = v26 + 1;
LABEL_31:
          v5 = a2;
          goto LABEL_32;
        }
        if ( v30 == 60 )
        {
          v5 = a2;
          if ( v10 || v46 != 46 )
            goto LABEL_41;
          v36 = v22;
          if ( v22 >= *a2 )
          {
LABEL_39:
            *(_WORD *)&v20[2 * (unsigned int)v26] = v29 + 3;
          }
          else
          {
            while ( *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)v36 >> 1)) != 46 )
            {
              v36 += 2;
              if ( v36 >= *a2 )
                goto LABEL_39;
            }
LABEL_41:
            v37 = (unsigned int)v26;
            v26 = (unsigned int)(v26 + 1);
            *(_WORD *)&v20[2 * v37] = v29;
            *(_WORD *)&v20[2 * v26] = v29 + 3;
          }
          LODWORD(v26) = v26 + 1;
          goto LABEL_32;
        }
        v38 = v29 + 4;
        if ( v30 != 62 )
          break;
        v28 = v48;
        v5 = a2;
        v27 = 2;
        if ( !v10 )
        {
          if ( v46 != 46 )
          {
            *(_WORD *)&v20[2 * (unsigned int)v26] = v38;
LABEL_46:
            LODWORD(v26) = v26 + 1;
            goto LABEL_52;
          }
LABEL_32:
          v28 = v48;
          v27 = 2;
        }
      }
      if ( v30 == 34 )
      {
        if ( !v10 )
        {
          v39 = v46;
          if ( v46 == 46 )
            goto LABEL_50;
LABEL_66:
          if ( a3 )
            v43 = *(_WORD *)(v57 + 2LL * v39);
          else
            v43 = v39;
          if ( v30 == v43 )
            goto LABEL_50;
          goto LABEL_51;
        }
        goto LABEL_31;
      }
      if ( !v10 )
      {
        if ( v30 != 63 )
        {
          v39 = v46;
          goto LABEL_66;
        }
LABEL_50:
        v40 = (unsigned int)v26;
        LODWORD(v26) = v26 + 1;
        *(_WORD *)&v20[2 * v40] = v38;
      }
LABEL_51:
      v5 = a2;
LABEL_52:
      v19 = v53;
      if ( (unsigned int)v25 < v52 )
      {
        v41 = v51;
        do
        {
          if ( v41 >= (unsigned int)v26 )
            break;
          for ( ; (unsigned int)v25 < v52; v25 = (unsigned int)(v25 + 1) )
          {
            if ( *(_WORD *)&v53[2 * v25] >= *(_WORD *)&v20[2 * v41] )
              break;
          }
          ++v41;
        }
        while ( (unsigned int)v25 < v52 );
        v51 = v41;
        v8 = a1;
        if ( (unsigned int)v25 < v52 )
          continue;
      }
      if ( (_DWORD)v26 )
      {
        v53 = v20;
        v42 = v19;
        v52 = v26;
        v19 = v20;
        v20 = v42;
        v21 = v26;
        if ( v10 )
        {
LABEL_75:
          v44 = *(_WORD *)&v19[2 * (v21 - 1)];
          if ( v9 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
          return v44 == v23;
        }
        goto LABEL_18;
      }
      if ( v9 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      return 0;
    }
  }
  if ( *v5 < (unsigned __int16)(v11 - 2) )
    return 0;
  v16 = (unsigned __int64)(*v5 - v14) >> 1;
  if ( !a3 )
    return memcmp(v15, (const void *)(*((_QWORD *)v5 + 1) + 2LL * (unsigned int)v16), v14) == 0;
  v18 = v14 >> 1;
  if ( v18 )
  {
    while ( *(_WORD *)(a4 + 2LL * *(unsigned __int16 *)(*((_QWORD *)v5 + 1) + 2LL * ((unsigned int)v16 + v4))) == *((_WORD *)v15 + v4) )
    {
      if ( ++v4 >= v18 )
        return 1;
    }
    return 0;
  }
  return 1;
}
