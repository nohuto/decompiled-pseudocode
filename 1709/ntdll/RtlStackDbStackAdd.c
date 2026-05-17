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

_QWORD *__fastcall RtlStackDbStackAdd(__int64 a1, char *a2, unsigned int a3)
{
  _QWORD *v3; // r13
  unsigned __int8 *v4; // r9
  __int64 v6; // rdi
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  volatile signed __int64 *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // r10
  __int64 v15; // r9
  int v16; // r8d
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // r8
  __int64 v19; // r9
  __int64 v20; // r9
  int v21; // r8d
  char v22; // di
  unsigned __int64 v23; // rax
  __int64 v24; // rbx
  char *v25; // rax
  _QWORD *v26; // r9
  unsigned __int64 v27; // rcx
  unsigned int v28; // edi
  __int64 v29; // r10
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // edi
  __int64 v34; // rcx
  __int64 v35; // rdx
  void (__fastcall *v37)(__int64, __int64, char *, _QWORD *); // [rsp+20h] [rbp-20h]
  unsigned int v38; // [rsp+28h] [rbp-18h] BYREF
  char *v39; // [rsp+30h] [rbp-10h]
  __int64 v40; // [rsp+80h] [rbp+40h]
  __int64 v41; // [rsp+80h] [rbp+40h]
  __int64 v42; // [rsp+80h] [rbp+40h]
  __int64 v43; // [rsp+98h] [rbp+58h]

  v3 = 0LL;
  v4 = (unsigned __int8 *)a2;
  if ( !a1 || !a3 || !a2 )
    return v3;
  v38 = a3;
  v6 = 314159LL;
  v7 = a3;
  v8 = 8LL * a3;
  v39 = a2;
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
  v11 = (volatile signed __int64 *)(a1 + 32);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 32), a2, v8, (__int64)v4);
  v12 = a1 + 16;
  v13 = 0LL;
  while ( 1 )
  {
    v14 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
    v15 = v14 & v6;
    if ( v13 )
      goto LABEL_27;
    v16 = *(_DWORD *)(a1 + 20) >> 5;
    if ( !v16 )
      break;
    v40 = v14 & v6;
    v13 = *(_QWORD *)(a1 + 24)
        + 8LL
        * ((37
          * (BYTE6(v40)
           + 37
           * (BYTE5(v40)
            + 37
            * (BYTE4(v40)
             + 37 * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v15 + 11623883)))))))
          + HIBYTE(v40)) & (unsigned int)(v16 - 1));
LABEL_27:
    while ( 1 )
    {
      v13 = *(_QWORD *)v13;
      if ( (v13 & 1) != 0 )
        break;
      if ( v15 == (v14 & *(_QWORD *)(v13 + 8)) )
        goto LABEL_31;
    }
    v13 = 0LL;
LABEL_31:
    if ( !v13 )
      goto LABEL_39;
    if ( (unsigned int)RtlpStackDbStackComparitor(v13, &v38) )
      goto LABEL_35;
  }
  v13 = 0LL;
LABEL_35:
  if ( !v13 )
  {
LABEL_39:
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
    v3 = (_QWORD *)RtlpStackDbEntryCreate(a1, &v38, v6);
    if ( !v3 )
      return 0LL;
    RtlAcquireSRWLockExclusive(a1 + 32, v17, v18, v19);
    v13 = 0LL;
    while ( 1 )
    {
      v20 = v6 & (-1LL << (*(_BYTE *)(a1 + 20) & 0x1F));
      if ( v13 )
        goto LABEL_45;
      v21 = *(_DWORD *)(a1 + 20) >> 5;
      if ( !v21 )
        break;
      v13 = *(_QWORD *)(a1 + 24)
          + 8LL
          * ((37
            * (BYTE6(v20)
             + 37
             * (BYTE5(v20)
              + 37
              * (BYTE4(v20)
               + 37 * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883)))))))
            + HIBYTE(v20)) & (unsigned int)(v21 - 1));
LABEL_45:
      while ( 1 )
      {
        v13 = *(_QWORD *)v13;
        if ( (v13 & 1) != 0 )
          break;
        if ( v20 == ((-1LL << (*(_BYTE *)(a1 + 20) & 0x1F)) & *(_QWORD *)(v13 + 8)) )
          goto LABEL_49;
      }
      v13 = 0LL;
LABEL_49:
      if ( !v13 )
        goto LABEL_56;
      if ( (unsigned int)RtlpStackDbStackComparitor(v13, &v38) )
        goto LABEL_53;
    }
    v13 = 0LL;
LABEL_53:
    if ( v13 )
    {
      if ( !(unsigned int)RtlpStackDbRefCountIncrement(v13 + 16) )
        v13 = 0LL;
      goto LABEL_82;
    }
LABEL_56:
    v37 = *(void (__fastcall **)(__int64, __int64, char *, _QWORD *))(a1 + 56);
    v43 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v12 >= (unsigned int)(2 * (*(_DWORD *)(a1 + 20) >> 5)) )
    {
      v22 = -1;
      v23 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
      if ( v23 <= 0xFFFFFFFF )
      {
        v24 = (unsigned int)v23;
        if ( (unsigned int)v23 < 4 )
          v24 = 4LL;
        v25 = (char *)(*(__int64 (__fastcall **)(__int64))(a1 + 48))(8LL * (unsigned int)v24);
        v26 = 0LL;
        if ( v25 )
        {
          if ( (((_DWORD)v24 - 1) & (unsigned int)v24) != 0 )
          {
            do
            {
              ++v22;
              LODWORD(v24) = (unsigned int)v24 >> 1;
            }
            while ( (_DWORD)v24 );
            v24 = (unsigned int)(1 << v22);
          }
          if ( (unsigned int)v24 > 0x4000000 )
            v24 = 0x4000000LL;
          v27 = (unsigned int)v24;
          if ( v25 > &v25[8 * v24] )
            v27 = 0LL;
          if ( v27 )
            memset64(v25, v12 | 1, v27);
          v28 = 0;
          v29 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
          if ( (*(_DWORD *)(a1 + 20) & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v30 = *(_QWORD *)(v12 + 8);
              while ( 1 )
              {
                v26 = *(_QWORD **)(v30 + 8LL * v28);
                if ( ((unsigned __int8)v26 & 1) != 0 )
                  break;
                *(_QWORD *)(v30 + 8LL * v28) = *v26;
                v41 = v29 & v26[1];
                v31 = (37
                     * (BYTE6(v41)
                      + 37
                      * (BYTE5(v41)
                       + 37
                       * (BYTE4(v41)
                        + 37
                        * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
                     + HIBYTE(v41)) & (unsigned int)(v24 - 1);
                *v26 = *(_QWORD *)&v25[8 * v31];
                *(_QWORD *)&v25[8 * v31] = v26;
              }
              ++v28;
            }
            while ( v28 < *(_DWORD *)(v12 + 4) >> 5 );
          }
          *(_DWORD *)(v12 + 4) &= 0x1Fu;
          v32 = *(_QWORD *)(v12 + 8);
          *(_DWORD *)(v12 + 4) |= 32 * v24;
          *(_QWORD *)(v12 + 8) = v25;
          if ( v32 )
            v37(v32, v43, v25, v26);
        }
        else if ( *(_DWORD *)(a1 + 20) < 0x20u )
        {
          v13 = 0LL;
LABEL_82:
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
          RtlpStackDbEntryCleanup(a1, v3);
          return (_QWORD *)v13;
        }
      }
    }
    v33 = *(_DWORD *)(v12 + 4);
    v42 = v3[1] & (-1LL << (v33 & 0x1F));
    v34 = *(_QWORD *)(v12 + 8);
    v35 = (37
         * (BYTE6(v42)
          + 37
          * (BYTE5(v42)
           + 37
           * (BYTE4(v42)
            + 37 * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
         + HIBYTE(v42)) & ((v33 >> 5) - 1);
    *v3 = *(_QWORD *)(v34 + 8 * v35);
    *(_QWORD *)(v34 + 8 * v35) = v3;
    ++*(_DWORD *)v12;
    RtlReleaseSRWLockExclusive(v11);
    return v3;
  }
  if ( !(unsigned int)RtlpStackDbRefCountIncrement(v13 + 16) )
    v13 = 0LL;
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 32));
  return (_QWORD *)v13;
}
