/*
 * XREFs of RtlStackDbStackAdd @ 0x18010D254
 * Callers:
 *     RtlpHpStackTraceAddStack @ 0x1800FFF48 (RtlpHpStackTraceAddStack.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpStackDbEntryCleanup @ 0x18010D9A4 (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbEntryCreate @ 0x18010DA20 (RtlpStackDbEntryCreate.c)
 *     RtlpStackDbRefCountIncrement @ 0x18010DBD0 (RtlpStackDbRefCountIncrement.c)
 *     RtlpStackDbStackComparitor @ 0x18010E3EC (RtlpStackDbStackComparitor.c)
 */

_QWORD *__fastcall RtlStackDbStackAdd(__int64 a1, unsigned __int8 *a2, unsigned int a3)
{
  _QWORD *v3; // r13
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
  _RTL_SRWLOCK *v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int64 v20; // r10
  __int64 v21; // r9
  int v22; // r8d
  __int64 v23; // r9
  int v24; // r8d
  char v25; // di
  unsigned __int64 v26; // rax
  __int64 v27; // rbx
  char *v28; // rax
  _QWORD *v29; // r9
  unsigned __int64 v30; // rcx
  unsigned int v31; // edi
  __int64 v32; // r10
  __int64 v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // edi
  __int64 v37; // rcx
  __int64 v38; // rdx
  void (__fastcall *v40)(__int64, __int64, char *, _QWORD *); // [rsp+20h] [rbp-20h]
  unsigned int v41; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int8 *v42; // [rsp+30h] [rbp-10h]
  __int64 v43; // [rsp+80h] [rbp+40h]
  __int64 v44; // [rsp+80h] [rbp+40h]
  __int64 v45; // [rsp+80h] [rbp+40h]
  __int64 v46; // [rsp+98h] [rbp+58h]

  v3 = 0LL;
  v4 = a2;
  if ( !a1 || !a3 || !a2 )
    return v3;
  v41 = a3;
  v6 = 314159LL;
  v7 = a3;
  v8 = 8LL * a3;
  v42 = a2;
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
  v17 = (_RTL_SRWLOCK *)(a1 + 32);
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  v18 = a1 + 16;
  v19 = 0LL;
  while ( 1 )
  {
    v20 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    v21 = v20 & v6;
    if ( v19 )
      goto LABEL_27;
    v22 = *(_DWORD *)(a1 + 20) >> 5;
    if ( !v22 )
      break;
    v43 = v20 & v6;
    v19 = *(_QWORD *)(a1 + 24)
        + 8LL
        * ((37
          * (BYTE6(v43)
           + 37
           * (BYTE5(v43)
            + 37
            * (BYTE4(v43)
             + 37 * (BYTE3(v43) + 37 * (BYTE2(v43) + 37 * (BYTE1(v43) + 37 * ((unsigned __int8)v21 + 11623883)))))))
          + HIBYTE(v43)) & (unsigned int)(v22 - 1));
LABEL_27:
    while ( 1 )
    {
      v19 = *(_QWORD *)v19;
      if ( (v19 & 1) != 0 )
        break;
      if ( v21 == (v20 & *(_QWORD *)(v19 + 8)) )
        goto LABEL_31;
    }
    v19 = 0LL;
LABEL_31:
    if ( !v19 )
      goto LABEL_39;
    if ( (unsigned int)RtlpStackDbStackComparitor(v19, &v41) )
      goto LABEL_35;
  }
  v19 = 0LL;
LABEL_35:
  if ( !v19 )
  {
LABEL_39:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
    v3 = (_QWORD *)RtlpStackDbEntryCreate(a1, &v41, v6);
    if ( !v3 )
      return 0LL;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
    v19 = 0LL;
    while ( 1 )
    {
      v23 = v6 & (-1LL << (*(_BYTE *)(a1 + 20) & 0x1F));
      if ( v19 )
        goto LABEL_45;
      v24 = *(_DWORD *)(a1 + 20) >> 5;
      if ( !v24 )
        break;
      v19 = *(_QWORD *)(a1 + 24)
          + 8LL
          * ((37
            * (BYTE6(v23)
             + 37
             * (BYTE5(v23)
              + 37
              * (BYTE4(v23)
               + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))
            + HIBYTE(v23)) & (unsigned int)(v24 - 1));
LABEL_45:
      while ( 1 )
      {
        v19 = *(_QWORD *)v19;
        if ( (v19 & 1) != 0 )
          break;
        if ( v23 == ((-1LL << (*(_BYTE *)(a1 + 20) & 0x1F)) & *(_QWORD *)(v19 + 8)) )
          goto LABEL_49;
      }
      v19 = 0LL;
LABEL_49:
      if ( !v19 )
        goto LABEL_56;
      if ( (unsigned int)RtlpStackDbStackComparitor(v19, &v41) )
        goto LABEL_53;
    }
    v19 = 0LL;
LABEL_53:
    if ( v19 )
    {
      if ( !(unsigned int)RtlpStackDbRefCountIncrement(v19 + 16) )
        v19 = 0LL;
      goto LABEL_82;
    }
LABEL_56:
    v40 = *(void (__fastcall **)(__int64, __int64, char *, _QWORD *))(a1 + 56);
    v46 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v18 >= (unsigned int)(2 * (*(_DWORD *)(a1 + 20) >> 5)) )
    {
      v25 = -1;
      v26 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
      if ( v26 <= 0xFFFFFFFF )
      {
        v27 = (unsigned int)v26;
        if ( (unsigned int)v26 < 4 )
          v27 = 4LL;
        v28 = (char *)(*(__int64 (__fastcall **)(__int64))(a1 + 48))(8LL * (unsigned int)v27);
        v29 = 0LL;
        if ( v28 )
        {
          if ( (((_DWORD)v27 - 1) & (unsigned int)v27) != 0 )
          {
            do
            {
              ++v25;
              LODWORD(v27) = (unsigned int)v27 >> 1;
            }
            while ( (_DWORD)v27 );
            v27 = (unsigned int)(1 << v25);
          }
          if ( (unsigned int)v27 > 0x4000000 )
            v27 = 0x4000000LL;
          v30 = (unsigned int)v27;
          if ( v28 > &v28[8 * v27] )
            v30 = 0LL;
          if ( v30 )
            memset64(v28, v18 | 1, v30);
          v31 = 0;
          v32 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
          if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v33 = *(_QWORD *)(v18 + 8);
              while ( 1 )
              {
                v29 = *(_QWORD **)(v33 + 8LL * v31);
                if ( ((unsigned __int8)v29 & 1) != 0 )
                  break;
                *(_QWORD *)(v33 + 8LL * v31) = *v29;
                v44 = v32 & v29[1];
                v34 = (37
                     * (BYTE6(v44)
                      + 37
                      * (BYTE5(v44)
                       + 37
                       * (BYTE4(v44)
                        + 37
                        * (BYTE3(v44) + 37 * (BYTE2(v44) + 37 * (BYTE1(v44) + 37 * ((unsigned __int8)v44 + 11623883)))))))
                     + HIBYTE(v44)) & (unsigned int)(v27 - 1);
                *v29 = *(_QWORD *)&v28[8 * v34];
                *(_QWORD *)&v28[8 * v34] = v29;
              }
              ++v31;
            }
            while ( v31 < *(_DWORD *)(v18 + 4) >> 5 );
          }
          *(_DWORD *)(v18 + 4) &= 0x1Fu;
          v35 = *(_QWORD *)(v18 + 8);
          *(_DWORD *)(v18 + 4) |= 32 * v27;
          *(_QWORD *)(v18 + 8) = v28;
          if ( v35 )
            v40(v35, v46, v28, v29);
        }
        else if ( *(_DWORD *)(a1 + 20) < 0x20u )
        {
          v19 = 0LL;
LABEL_82:
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 32));
          RtlpStackDbEntryCleanup(a1, v3);
          return (_QWORD *)v19;
        }
      }
    }
    v36 = *(_DWORD *)(v18 + 4);
    v45 = v3[1] & (-1LL << (v36 & 0x1F));
    v37 = *(_QWORD *)(v18 + 8);
    v38 = (37
         * (BYTE6(v45)
          + 37
          * (BYTE5(v45)
           + 37
           * (BYTE4(v45)
            + 37 * (BYTE3(v45) + 37 * (BYTE2(v45) + 37 * (BYTE1(v45) + 37 * ((unsigned __int8)v45 + 11623883)))))))
         + HIBYTE(v45)) & ((v36 >> 5) - 1);
    *v3 = *(_QWORD *)(v37 + 8 * v38);
    *(_QWORD *)(v37 + 8 * v38) = v3;
    ++*(_DWORD *)v18;
    RtlReleaseSRWLockExclusive(v17);
    return v3;
  }
  if ( !(unsigned int)RtlpStackDbRefCountIncrement(v19 + 16) )
    v19 = 0LL;
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 32));
  return (_QWORD *)v19;
}
