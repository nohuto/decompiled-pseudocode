/*
 * XREFs of sub_18010A41C @ 0x18010A41C
 * Callers:
 *     sub_1800FE3D0 @ 0x1800FE3D0 (sub_1800FE3D0.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_18010AB7C @ 0x18010AB7C (sub_18010AB7C.c)
 *     sub_18010ABF8 @ 0x18010ABF8 (sub_18010ABF8.c)
 *     sub_18010ADA8 @ 0x18010ADA8 (sub_18010ADA8.c)
 *     sub_18010B5D0 @ 0x18010B5D0 (sub_18010B5D0.c)
 */

_QWORD *__fastcall sub_18010A41C(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  _QWORD *v3; // r13
  unsigned __int8 *v4; // r9
  __int64 v6; // rdi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  _RTL_SRWLOCK *v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rbx
  unsigned int v20; // r10d
  __int64 v21; // r9
  __int64 v22; // r8
  unsigned int v23; // r10d
  __int64 v24; // r8
  char v25; // di
  unsigned __int64 v26; // rbx
  char *v27; // rax
  _QWORD *v28; // r9
  unsigned __int64 v29; // rcx
  unsigned int v30; // edi
  __int64 v31; // r10
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // edi
  __int64 v36; // rcx
  __int64 v37; // rdx
  void (__fastcall *v39)(__int64, __int64, char *, _QWORD *); // [rsp+20h] [rbp-20h]
  unsigned int v40; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int8 *v41; // [rsp+30h] [rbp-10h]
  __int64 v42; // [rsp+80h] [rbp+40h]
  __int64 v43; // [rsp+80h] [rbp+40h]
  __int64 v44; // [rsp+80h] [rbp+40h]
  __int64 v45; // [rsp+98h] [rbp+58h]

  v3 = 0LL;
  v4 = a2;
  if ( !a1 || !a3 || !a2 )
    return v3;
  v40 = a3;
  v6 = 314159LL;
  v7 = 8LL * a3;
  v41 = a2;
  if ( v7 >= 8 )
  {
    v8 = v7 >> 3;
    v7 -= 8 * (v7 >> 3);
    do
    {
      v9 = v4[6] + 37 * (v4[5] + 37 * (v4[4] + 37 * (v4[3] + 37 * (v4[2] + 37 * (v4[1] + 37 * (*v4 + 37 * v6))))));
      v10 = v4[7];
      v4 += 8;
      v6 = v10 + 37 * v9;
      --v8;
    }
    while ( v8 );
  }
  if ( v7 - 1 <= 6 )
  {
    v11 = v7 - 1;
    if ( !v11 )
    {
LABEL_21:
      v6 = *v4 + 37 * v6;
      goto LABEL_22;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
LABEL_20:
      v6 = *v4++ + 37 * v6;
      goto LABEL_21;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
LABEL_19:
      v6 = *v4++ + 37 * v6;
      goto LABEL_20;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
LABEL_18:
      v6 = *v4++ + 37 * v6;
      goto LABEL_19;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
LABEL_17:
      v6 = *v4++ + 37 * v6;
      goto LABEL_18;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
LABEL_16:
      v6 = *v4++ + 37 * v6;
      goto LABEL_17;
    }
    if ( v16 == 1 )
    {
      v6 = *v4++ + 37 * v6;
      goto LABEL_16;
    }
  }
LABEL_22:
  v17 = (_RTL_SRWLOCK *)(a1 + 32);
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  v18 = a1 + 16;
  v19 = 0LL;
  while ( 1 )
  {
    v20 = *(_DWORD *)(a1 + 20);
    v21 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    v22 = v21 & v6;
    if ( v19 )
      goto LABEL_26;
    if ( v20 < 0x20 )
      break;
    v42 = v21 & v6;
    v19 = *(_QWORD *)(a1 + 24)
        + 8LL
        * ((37
          * (BYTE6(v42)
           + 37
           * (BYTE5(v42)
            + 37
            * (BYTE4(v42)
             + 37 * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v22 + 11623883)))))))
          + HIBYTE(v42)) & ((v20 >> 5) - 1));
LABEL_26:
    while ( 1 )
    {
      v19 = *(_QWORD *)v19;
      if ( (v19 & 1) != 0 )
        break;
      if ( v22 == (v21 & *(_QWORD *)(v19 + 8)) )
        goto LABEL_30;
    }
    v19 = 0LL;
LABEL_30:
    if ( !v19 )
      goto LABEL_38;
    if ( (unsigned int)sub_18010B5D0(v19, &v40) )
      goto LABEL_34;
  }
  v19 = 0LL;
LABEL_34:
  if ( !v19 )
  {
LABEL_38:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
    v3 = (_QWORD *)sub_18010ABF8(a1, &v40, v6);
    if ( !v3 )
      return 0LL;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
    v19 = 0LL;
    while ( 1 )
    {
      v23 = *(_DWORD *)(a1 + 20);
      v24 = v6 & (-1LL << (*(_BYTE *)(a1 + 20) & 0x1F));
      if ( v19 )
        goto LABEL_44;
      if ( v23 < 0x20 )
        break;
      v19 = *(_QWORD *)(a1 + 24)
          + 8LL
          * ((37
            * (BYTE6(v24)
             + 37
             * (BYTE5(v24)
              + 37
              * (BYTE4(v24)
               + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))
            + HIBYTE(v24)) & ((v23 >> 5) - 1));
LABEL_44:
      while ( 1 )
      {
        v19 = *(_QWORD *)v19;
        if ( (v19 & 1) != 0 )
          break;
        if ( v24 == ((-1LL << (*(_BYTE *)(a1 + 20) & 0x1F)) & *(_QWORD *)(v19 + 8)) )
          goto LABEL_48;
      }
      v19 = 0LL;
LABEL_48:
      if ( !v19 )
        goto LABEL_55;
      if ( (unsigned int)sub_18010B5D0(v19, &v40) )
        goto LABEL_52;
    }
    v19 = 0LL;
LABEL_52:
    if ( v19 )
    {
      if ( !(unsigned int)sub_18010ADA8(v19 + 16) )
        v19 = 0LL;
      goto LABEL_81;
    }
LABEL_55:
    v39 = *(void (__fastcall **)(__int64, __int64, char *, _QWORD *))(a1 + 56);
    v45 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v18 >= (unsigned int)(2 * (*(_DWORD *)(a1 + 20) >> 5)) )
    {
      v25 = -1;
      v26 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
      if ( v26 <= 0xFFFFFFFF )
      {
        if ( (unsigned int)v26 < 4 )
          v26 = 4LL;
        v27 = (char *)(*(__int64 (__fastcall **)(__int64))(a1 + 48))(8LL * (unsigned int)v26);
        v28 = 0LL;
        if ( v27 )
        {
          if ( (((_DWORD)v26 - 1) & (unsigned int)v26) != 0 )
          {
            do
            {
              ++v25;
              LODWORD(v26) = (unsigned int)v26 >> 1;
            }
            while ( (_DWORD)v26 );
            v26 = (unsigned int)(1 << v25);
          }
          if ( (unsigned int)v26 > 0x4000000 )
            v26 = 0x4000000LL;
          v29 = (8 * v26 + 7) >> 3;
          if ( v27 > &v27[8 * v26] )
            v29 = 0LL;
          if ( v29 )
            memset64(v27, v18 | 1, v29);
          v30 = 0;
          v31 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
          if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v32 = *(_QWORD *)(v18 + 8);
              while ( 1 )
              {
                v28 = *(_QWORD **)(v32 + 8LL * v30);
                if ( ((unsigned __int8)v28 & 1) != 0 )
                  break;
                *(_QWORD *)(v32 + 8LL * v30) = *v28;
                v43 = v31 & v28[1];
                v33 = (37
                     * (BYTE6(v43)
                      + 37
                      * (BYTE5(v43)
                       + 37
                       * (BYTE4(v43)
                        + 37
                        * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (BYTE1(v43) + 37 * ((unsigned __int8)v43 + 11623883)))))))
                     + HIBYTE(v43)) & (unsigned int)(v26 - 1);
                *v28 = *(_QWORD *)&v27[8 * v33];
                *(_QWORD *)&v27[8 * v33] = v28;
              }
              ++v30;
            }
            while ( v30 < *(_DWORD *)(v18 + 4) >> 5 );
          }
          *(_DWORD *)(v18 + 4) &= 0x1Fu;
          v34 = *(_QWORD *)(v18 + 8);
          *(_DWORD *)(v18 + 4) |= 32 * v26;
          *(_QWORD *)(v18 + 8) = v27;
          if ( v34 )
            v39(v34, v45, v27, v28);
        }
        else if ( *(_DWORD *)(a1 + 20) < 0x20u )
        {
          v19 = 0LL;
LABEL_81:
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
          sub_18010AB7C(a1, v3);
          return (_QWORD *)v19;
        }
      }
    }
    v35 = *(_DWORD *)(v18 + 4);
    v44 = v3[1] & (-1LL << (v35 & 0x1F));
    v36 = *(_QWORD *)(v18 + 8);
    v37 = (37
         * (BYTE6(v44)
          + 37
          * (BYTE5(v44)
           + 37
           * (BYTE4(v44)
            + 37 * (BYTE3(v44) + 37 * (BYTE2(v44) + 37 * (BYTE1(v44) + 37 * ((unsigned __int8)v44 + 11623883)))))))
         + HIBYTE(v44)) & ((v35 >> 5) - 1);
    *v3 = *(_QWORD *)(v36 + 8 * v37);
    *(_QWORD *)(v36 + 8 * v37) = v3;
    ++*(_DWORD *)v18;
    RtlReleaseSRWLockExclusive(v17);
    return v3;
  }
  if ( !(unsigned int)sub_18010ADA8(v19 + 16) )
    v19 = 0LL;
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  return (_QWORD *)v19;
}
