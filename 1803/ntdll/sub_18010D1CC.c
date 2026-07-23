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

__int64 __fastcall sub_18010D1CC(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned __int8 *v4; // r9
  __int64 v6; // rdi
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  unsigned __int64 v17; // rsi
  __int64 v18; // r10
  __int64 v19; // r8
  int v20; // r9d
  unsigned __int64 v21; // r8
  int v22; // r9d
  unsigned int v23; // ecx
  void (__fastcall *v24)(_QWORD, _QWORD, _QWORD); // r12
  __int64 v25; // r13
  char v26; // di
  unsigned __int64 v27; // rax
  __int64 v28; // rbx
  char *v29; // rax
  __int64 v30; // r8
  unsigned __int64 v31; // rcx
  __int64 v32; // r10
  __int64 v33; // r12
  _QWORD *v34; // r11
  unsigned __int64 v35; // rcx
  __int64 v36; // rdi
  unsigned int v37; // edi
  unsigned __int64 v38; // r15
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned int v42; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 *v43; // [rsp+38h] [rbp-40h]
  _QWORD *v44; // [rsp+80h] [rbp+8h]
  void (__fastcall *v45)(_QWORD, _QWORD, _QWORD); // [rsp+98h] [rbp+20h]

  v3 = 0LL;
  v4 = a2;
  if ( !a1 || !a3 || !a2 )
    return v3;
  v42 = a3;
  v6 = 314159LL;
  v7 = a3;
  v8 = 8LL * a3;
  v43 = a2;
  if ( (unsigned __int64)v8 >= 8 )
  {
    v8 -= 8LL * (unsigned int)v7;
    do
    {
      v9 = v4[6] + 37 * (v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v6))))));
      v10 = v4[7];
      v4 += 8;
      v6 = v10 + 37 * v9;
      --v7;
    }
    while ( v7 );
  }
  if ( v8 >= 1 && v8 <= 7 )
  {
    v11 = v8 - 1;
    if ( !v11 )
    {
LABEL_22:
      v6 = *v4 + 37 * v6;
      goto LABEL_23;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
LABEL_21:
      v6 = *v4++ + 37 * v6;
      goto LABEL_22;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
LABEL_20:
      v6 = *v4++ + 37 * v6;
      goto LABEL_21;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
LABEL_19:
      v6 = *v4++ + 37 * v6;
      goto LABEL_20;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
LABEL_18:
      v6 = *v4++ + 37 * v6;
      goto LABEL_19;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
LABEL_17:
      v6 = *v4++ + 37 * v6;
      goto LABEL_18;
    }
    if ( v16 == 1 )
    {
      v6 = *v4++ + 37 * v6;
      goto LABEL_17;
    }
  }
LABEL_23:
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  v17 = a1 + 16;
  while ( 1 )
  {
    v18 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    v19 = v18 & v6;
    if ( v3 )
      goto LABEL_27;
    v20 = *(_DWORD *)(a1 + 20) >> 5;
    if ( !v20 )
      break;
    v3 = *(_QWORD *)(a1 + 24)
       + 8
       * ((((v18 & (unsigned __int64)v6) >> 56)
         + 37
         * ((unsigned __int8)((v18 & (unsigned __int64)v6) >> 48)
          + 37
          * ((unsigned __int8)((unsigned __int16)((v18 & (unsigned __int64)v6) >> 32) >> 8)
           + 37
           * ((unsigned __int8)((v18 & (unsigned __int64)v6) >> 32)
            + 37
            * ((((unsigned int)v18 & (unsigned int)v6) >> 24)
             + 37
             * ((unsigned __int8)(((unsigned int)v18 & (unsigned int)v6) >> 16)
              + 37 * ((unsigned __int8)((unsigned __int16)(v18 & v6) >> 8) + 37 * ((unsigned __int8)v19 + 11623883)))))))) & (unsigned int)(v20 - 1));
LABEL_27:
    while ( 1 )
    {
      v3 = *(_QWORD *)v3;
      if ( (v3 & 1) != 0 )
        break;
      if ( v19 == (v18 & *(_QWORD *)(v3 + 8)) )
        goto LABEL_31;
    }
    v3 = 0LL;
LABEL_31:
    if ( !v3 )
      goto LABEL_39;
    if ( (unsigned int)sub_18010E558(v3, &v42) )
      goto LABEL_35;
  }
  v3 = 0LL;
LABEL_35:
  if ( !v3 )
  {
LABEL_39:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
    v44 = (_QWORD *)sub_18010DAA8(a1, &v42, v6);
    if ( !v44 )
      return 0LL;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
    v3 = 0LL;
    while ( 1 )
    {
      v21 = v6 & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
      if ( v3 )
        goto LABEL_45;
      v22 = *(_DWORD *)(a1 + 20) >> 5;
      if ( !v22 )
        break;
      v3 = *(_QWORD *)(a1 + 24)
         + 8
         * ((HIBYTE(v21)
           + 37
           * (BYTE6(v21)
            + 37
            * (BYTE5(v21)
             + 37
             * (BYTE4(v21)
              + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))) & (unsigned int)(v22 - 1));
LABEL_45:
      while ( 1 )
      {
        v3 = *(_QWORD *)v3;
        if ( (v3 & 1) != 0 )
          break;
        if ( v21 == ((-1LL << (*(_DWORD *)(a1 + 20) & 0x1F)) & *(_QWORD *)(v3 + 8)) )
          goto LABEL_49;
      }
      v3 = 0LL;
LABEL_49:
      if ( !v3 )
        goto LABEL_56;
      if ( (unsigned int)sub_18010E558(v3, &v42) )
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
    v23 = *(_DWORD *)(a1 + 20);
    v24 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 56);
    v25 = *(_QWORD *)(a1 + 64);
    v45 = v24;
    if ( *(_DWORD *)v17 >= 2 * (v23 >> 5) )
    {
      v26 = -1;
      v27 = 2 * ((unsigned __int64)v23 >> 5);
      if ( v27 <= 0xFFFFFFFF )
      {
        v28 = (unsigned int)v27;
        if ( (unsigned int)v27 < 4 )
          v28 = 4LL;
        v29 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(8LL * (unsigned int)v28, v25);
        v30 = 0LL;
        if ( v29 )
        {
          if ( (((_DWORD)v28 - 1) & (unsigned int)v28) != 0 )
          {
            do
            {
              ++v26;
              LODWORD(v28) = (unsigned int)v28 >> 1;
            }
            while ( (_DWORD)v28 );
            v28 = (unsigned int)(1 << v26);
          }
          if ( (unsigned int)v28 > 0x4000000 )
            v28 = 0x4000000LL;
          v31 = (unsigned int)v28;
          if ( v29 > &v29[8 * v28] )
            v31 = 0LL;
          if ( v31 )
            memset64(v29, v17 | 1, v31);
          v32 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
          if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v33 = *(_QWORD *)(a1 + 24);
              while ( 1 )
              {
                v34 = *(_QWORD **)(v33 + 8LL * (unsigned int)v30);
                if ( ((unsigned __int8)v34 & 1) != 0 )
                  break;
                *(_QWORD *)(v33 + 8LL * (unsigned int)v30) = *v34;
                v35 = ((((unsigned __int64)v32 & v34[1]) >> 56)
                     + 37
                     * ((unsigned __int8)(((unsigned __int64)v32 & v34[1]) >> 48)
                      + 37
                      * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v32 & v34[1]) >> 32) >> 8)
                       + 37
                       * ((unsigned __int8)(((unsigned __int64)v32 & v34[1]) >> 32)
                        + 37
                        * ((((unsigned int)v32 & (_DWORD)v34[1]) >> 24)
                         + 37
                         * ((unsigned __int8)(((unsigned int)v32 & (_DWORD)v34[1]) >> 16)
                          + 37
                          * (37 * ((unsigned __int8)(v32 & v34[1]) + 11623883)
                           + (unsigned __int8)((unsigned __int16)(v32 & v34[1]) >> 8)))))))) & (unsigned int)(v28 - 1);
                *v34 = *(_QWORD *)&v29[8 * v35];
                *(_QWORD *)&v29[8 * v35] = v34;
              }
              v30 = (unsigned int)(v30 + 1);
            }
            while ( (unsigned int)v30 < *(_DWORD *)(a1 + 20) >> 5 );
            v24 = v45;
          }
          v36 = *(_QWORD *)(a1 + 24);
          v23 = (32 * v28) | *(_DWORD *)(a1 + 20) & 0x1F;
          *(_QWORD *)(a1 + 24) = v29;
          *(_DWORD *)(a1 + 20) = v23;
          if ( v36 )
          {
            v24(v36, v25, v30);
            v23 = *(_DWORD *)(a1 + 20);
          }
        }
        else
        {
          v23 = *(_DWORD *)(a1 + 20);
          if ( v23 < 0x20 )
          {
            v3 = 0LL;
LABEL_82:
            RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
            sub_18010DA2C(a1, v44);
            return v3;
          }
        }
      }
    }
    v3 = (__int64)v44;
    v37 = v23 >> 5;
    v38 = v44[1] & (-1LL << (v23 & 0x1F));
    v39 = *(_QWORD *)(a1 + 24);
    v40 = (HIBYTE(v38)
         + 37
         * (BYTE6(v38)
          + 37
          * (BYTE5(v38)
           + 37
           * (BYTE4(v38)
            + 37 * (BYTE3(v38) + 37 * (BYTE2(v38) + 37 * (37 * ((unsigned __int8)v38 + 11623883) + BYTE1(v38)))))))) & (v37 - 1);
    *v44 = *(_QWORD *)(v39 + 8 * v40);
    *(_QWORD *)(v39 + 8 * v40) = v44;
    ++*(_DWORD *)v17;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
    return v3;
  }
  if ( !(unsigned int)sub_18010DC58(v3 + 16) )
    v3 = 0LL;
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  return v3;
}
