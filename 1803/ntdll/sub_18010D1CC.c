/*
 * XREFs of sub_18010D1CC @ 0x18010D1CC
 * Callers:
 *     sub_1800FCA5C @ 0x1800FCA5C (sub_1800FCA5C.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_18010DA2C @ 0x18010DA2C (sub_18010DA2C.c)
 *     sub_18010DAA8 @ 0x18010DAA8 (sub_18010DAA8.c)
 *     sub_18010DC58 @ 0x18010DC58 (sub_18010DC58.c)
 *     sub_18010E558 @ 0x18010E558 (sub_18010E558.c)
 */

__int64 __fastcall sub_18010D1CC(__int64 a1, char *a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned __int8 *v4; // r9
  __int64 v6; // rdi
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // r10
  __int64 v13; // r8
  int v14; // r9d
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r8
  int v19; // r9d
  unsigned int v20; // ecx
  void (__fastcall *v21)(_QWORD, _QWORD, _QWORD); // r12
  __int64 v22; // r13
  char v23; // di
  unsigned __int64 v24; // rax
  __int64 v25; // rbx
  char *v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rcx
  __int64 v29; // r10
  __int64 v30; // r12
  _QWORD *v31; // r11
  unsigned __int64 v32; // rcx
  __int64 v33; // rdi
  unsigned int v34; // edi
  unsigned __int64 v35; // r15
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned int v39; // [rsp+30h] [rbp-48h] BYREF
  char *v40; // [rsp+38h] [rbp-40h]
  _QWORD *v41; // [rsp+80h] [rbp+8h]
  void (__fastcall *v42)(_QWORD, _QWORD, _QWORD); // [rsp+98h] [rbp+20h]

  v3 = 0LL;
  v4 = (unsigned __int8 *)a2;
  if ( !a1 || !a3 || !a2 )
    return v3;
  v39 = a3;
  v6 = 314159LL;
  v7 = a3;
  v8 = 8LL * a3;
  v40 = a2;
  if ( (unsigned __int64)v8 >= 8 )
  {
    v8 -= 8LL * (unsigned int)v7;
    do
    {
      a2 = (char *)(v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v6))))));
      v9 = v4[6] + 37LL * (_QWORD)a2;
      v10 = v4[7];
      v4 += 8;
      v6 = v10 + 37 * v9;
      --v7;
    }
    while ( v7 );
  }
  if ( v8 >= 1 && v8 <= 7 )
  {
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_22:
      v6 = *v4 + 37 * v6;
      goto LABEL_23;
    }
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_21:
      v6 = *v4++ + 37 * v6;
      goto LABEL_22;
    }
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_20:
      v6 = *v4++ + 37 * v6;
      goto LABEL_21;
    }
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_19:
      v6 = *v4++ + 37 * v6;
      goto LABEL_20;
    }
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_18:
      v6 = *v4++ + 37 * v6;
      goto LABEL_19;
    }
    v8 = (unsigned int)(v8 - 1);
    if ( !(_DWORD)v8 )
    {
LABEL_17:
      v6 = *v4++ + 37 * v6;
      goto LABEL_18;
    }
    if ( (_DWORD)v8 == 1 )
    {
      v6 = *v4++ + 37 * v6;
      goto LABEL_17;
    }
  }
LABEL_23:
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 32), a2, v8, (__int64)v4);
  v11 = a1 + 16;
  while ( 1 )
  {
    v12 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    v13 = v12 & v6;
    if ( v3 )
      goto LABEL_27;
    v14 = *(_DWORD *)(a1 + 20) >> 5;
    if ( !v14 )
      break;
    v3 = *(_QWORD *)(a1 + 24)
       + 8
       * ((((v12 & (unsigned __int64)v6) >> 56)
         + 37
         * ((unsigned __int8)((v12 & (unsigned __int64)v6) >> 48)
          + 37
          * ((unsigned __int8)((unsigned __int16)((v12 & (unsigned __int64)v6) >> 32) >> 8)
           + 37
           * ((unsigned __int8)((v12 & (unsigned __int64)v6) >> 32)
            + 37
            * ((((unsigned int)v12 & (unsigned int)v6) >> 24)
             + 37
             * ((unsigned __int8)(((unsigned int)v12 & (unsigned int)v6) >> 16)
              + 37 * ((unsigned __int8)((unsigned __int16)(v12 & v6) >> 8) + 37 * ((unsigned __int8)v13 + 11623883)))))))) & (unsigned int)(v14 - 1));
LABEL_27:
    while ( 1 )
    {
      v3 = *(_QWORD *)v3;
      if ( (v3 & 1) != 0 )
        break;
      if ( v13 == (v12 & *(_QWORD *)(v3 + 8)) )
        goto LABEL_31;
    }
    v3 = 0LL;
LABEL_31:
    if ( !v3 )
      goto LABEL_39;
    if ( (unsigned int)sub_18010E558(v3, &v39) )
      goto LABEL_35;
  }
  v3 = 0LL;
LABEL_35:
  if ( !v3 )
  {
LABEL_39:
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
    v41 = (_QWORD *)sub_18010DAA8(a1, &v39, v6);
    if ( !v41 )
      return 0LL;
    RtlAcquireSRWLockExclusive(a1 + 32, v15, v16, v17);
    v3 = 0LL;
    while ( 1 )
    {
      v18 = v6 & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
      if ( v3 )
        goto LABEL_45;
      v19 = *(_DWORD *)(a1 + 20) >> 5;
      if ( !v19 )
        break;
      v3 = *(_QWORD *)(a1 + 24)
         + 8
         * ((HIBYTE(v18)
           + 37
           * (BYTE6(v18)
            + 37
            * (BYTE5(v18)
             + 37
             * (BYTE4(v18)
              + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))) & (unsigned int)(v19 - 1));
LABEL_45:
      while ( 1 )
      {
        v3 = *(_QWORD *)v3;
        if ( (v3 & 1) != 0 )
          break;
        if ( v18 == ((-1LL << (*(_DWORD *)(a1 + 20) & 0x1F)) & *(_QWORD *)(v3 + 8)) )
          goto LABEL_49;
      }
      v3 = 0LL;
LABEL_49:
      if ( !v3 )
        goto LABEL_56;
      if ( (unsigned int)sub_18010E558(v3, &v39) )
        goto LABEL_53;
    }
    v3 = 0LL;
LABEL_53:
    if ( v3 )
    {
      if ( !(unsigned int)sub_18010DC58(v3 + 16) )
        v3 = 0LL;
      goto LABEL_82;
    }
LABEL_56:
    v20 = *(_DWORD *)(a1 + 20);
    v21 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 56);
    v22 = *(_QWORD *)(a1 + 64);
    v42 = v21;
    if ( *(_DWORD *)v11 >= 2 * (v20 >> 5) )
    {
      v23 = -1;
      v24 = 2 * ((unsigned __int64)v20 >> 5);
      if ( v24 <= 0xFFFFFFFF )
      {
        v25 = (unsigned int)v24;
        if ( (unsigned int)v24 < 4 )
          v25 = 4LL;
        v26 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v25, v22);
        v27 = 0LL;
        if ( v26 )
        {
          if ( (((_DWORD)v25 - 1) & (unsigned int)v25) != 0 )
          {
            do
            {
              ++v23;
              LODWORD(v25) = (unsigned int)v25 >> 1;
            }
            while ( (_DWORD)v25 );
            v25 = (unsigned int)(1 << v23);
          }
          if ( (unsigned int)v25 > 0x4000000 )
            v25 = 0x4000000LL;
          v28 = (unsigned int)v25;
          if ( v26 > &v26[8 * v25] )
            v28 = 0LL;
          if ( v28 )
            memset64(v26, v11 | 1, v28);
          v29 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
          if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v30 = *(_QWORD *)(a1 + 24);
              while ( 1 )
              {
                v31 = *(_QWORD **)(v30 + 8LL * (unsigned int)v27);
                if ( ((unsigned __int8)v31 & 1) != 0 )
                  break;
                *(_QWORD *)(v30 + 8LL * (unsigned int)v27) = *v31;
                v32 = ((((unsigned __int64)v29 & v31[1]) >> 56)
                     + 37
                     * ((unsigned __int8)(((unsigned __int64)v29 & v31[1]) >> 48)
                      + 37
                      * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v29 & v31[1]) >> 32) >> 8)
                       + 37
                       * ((unsigned __int8)(((unsigned __int64)v29 & v31[1]) >> 32)
                        + 37
                        * ((((unsigned int)v29 & (_DWORD)v31[1]) >> 24)
                         + 37
                         * ((unsigned __int8)(((unsigned int)v29 & (_DWORD)v31[1]) >> 16)
                          + 37
                          * (37 * ((unsigned __int8)(v29 & v31[1]) + 11623883)
                           + (unsigned __int8)((unsigned __int16)(v29 & v31[1]) >> 8)))))))) & (unsigned int)(v25 - 1);
                *v31 = *(_QWORD *)&v26[8 * v32];
                *(_QWORD *)&v26[8 * v32] = v31;
              }
              v27 = (unsigned int)(v27 + 1);
            }
            while ( (unsigned int)v27 < *(_DWORD *)(a1 + 20) >> 5 );
            v21 = v42;
          }
          v33 = *(_QWORD *)(a1 + 24);
          v20 = (32 * v25) | *(_DWORD *)(a1 + 20) & 0x1F;
          *(_QWORD *)(a1 + 24) = v26;
          *(_DWORD *)(a1 + 20) = v20;
          if ( v33 )
          {
            v21(v33, v22, v27);
            v20 = *(_DWORD *)(a1 + 20);
          }
        }
        else
        {
          v20 = *(_DWORD *)(a1 + 20);
          if ( v20 < 0x20 )
          {
            v3 = 0LL;
LABEL_82:
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
            sub_18010DA2C(a1, v41);
            return v3;
          }
        }
      }
    }
    v3 = (__int64)v41;
    v34 = v20 >> 5;
    v35 = v41[1] & (-1LL << (v20 & 0x1F));
    v36 = *(_QWORD *)(a1 + 24);
    v37 = (HIBYTE(v35)
         + 37
         * (BYTE6(v35)
          + 37
          * (BYTE5(v35)
           + 37
           * (BYTE4(v35)
            + 37 * (BYTE3(v35) + 37 * (BYTE2(v35) + 37 * (37 * ((unsigned __int8)v35 + 11623883) + BYTE1(v35)))))))) & (v34 - 1);
    *v41 = *(_QWORD *)(v36 + 8 * v37);
    *(_QWORD *)(v36 + 8 * v37) = v41;
    ++*(_DWORD *)v11;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
    return v3;
  }
  if ( !(unsigned int)sub_18010DC58(v3 + 16) )
    v3 = 0LL;
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
  return v3;
}
