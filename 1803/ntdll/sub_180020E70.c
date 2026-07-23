/*
 * XREFs of sub_180020E70 @ 0x180020E70
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     sub_18005F208 @ 0x18005F208 (sub_18005F208.c)
 * Callees:
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_1800235C8 @ 0x1800235C8 (sub_1800235C8.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180070AAC @ 0x180070AAC (sub_180070AAC.c)
 *     sub_180074240 @ 0x180074240 (sub_180074240.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_180105C90 @ 0x180105C90 (sub_180105C90.c)
 */

char *__fastcall sub_180020E70(PRTL_SRWLOCK SRWLock, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r13d
  unsigned int v7; // eax
  int v8; // ebx
  int v9; // r15d
  unsigned __int64 v10; // r14
  unsigned int v11; // ebp
  PVOID Ptr; // rax
  unsigned __int64 v13; // rbx
  _QWORD *v14; // r8
  int v15; // edx
  unsigned int v16; // ecx
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rdx
  void *v20; // rcx
  __int64 v21; // rax
  char *v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // r9
  int v25; // edx
  unsigned __int64 v26; // rdx
  int v27; // eax
  unsigned __int64 v28; // rcx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // r8
  int v33; // r9d
  __int16 v34; // ax
  __int16 v35; // cx
  signed __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  signed __int64 v39; // rtt
  __int64 v41; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v42; // [rsp+88h] [rbp+20h]

  v4 = a3 + 2;
  if ( a2 == a3 )
    v4 = a3;
  v7 = ((v4 + 15) >> 4) + 1;
  if ( ((__int64)SRWLock[14].Ptr & 1) == 0 )
    v7 = (v4 + 15) >> 4;
  v42 = v7 + 1;
  v8 = (v7 + 1) << 16;
  v9 = a4 & 1;
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive(SRWLock);
  LOBYTE(v41) = -1;
  v10 = (unsigned __int64)&SRWLock[2];
  v11 = v8;
  while ( 1 )
  {
    Ptr = SRWLock[3].Ptr;
    v13 = *(_QWORD *)v10;
    if ( ((unsigned __int8)Ptr & 1) != 0 )
    {
      if ( v13 )
        v13 ^= v10;
      else
        v13 = 0LL;
    }
    v14 = 0LL;
    v15 = (unsigned __int8)Ptr & 1;
    while ( v13 )
    {
      v16 = qword_18015A440 ^ (v13 - 8) ^ *(_DWORD *)(v13 - 8);
      if ( v11 < v16 )
      {
        v17 = *(_QWORD *)v13;
        v14 = (_QWORD *)v13;
      }
      else
      {
        if ( v11 <= v16 )
          goto LABEL_23;
        v17 = *(_QWORD *)(v13 + 8);
      }
      if ( v15 && v17 )
        v13 ^= v17;
      else
        v13 = v17;
    }
    v13 = (unsigned __int64)v14;
LABEL_23:
    if ( v13 )
      break;
    if ( !v9 )
      RtlReleaseSRWLockExclusive(SRWLock);
    v18 = sub_180074240(SRWLock, v4, a4);
    if ( !v18 )
      return 0LL;
    if ( !v9 )
      RtlAcquireSRWLockExclusive(SRWLock);
    LOBYTE(v41) = -1;
    v19 = (unsigned __int64)&SRWLock[4] ^ (unsigned __int64)SRWLock[5].Ptr;
    if ( (PRTL_SRWLOCK)(v19 ^ *(_QWORD *)v19) != &SRWLock[4] )
      __fastfail(3u);
    v20 = (void *)(v18 ^ (unsigned __int64)&SRWLock[4]);
    *(_QWORD *)v18 = v20;
    *(_QWORD *)(v18 + 8) = v18 ^ v19;
    *(_QWORD *)v19 = v18 ^ v19;
    SRWLock[5].Ptr = v20;
    if ( ((__int64)SRWLock[14].Ptr & 1) != 0 && ((v18 + 80) & 0xFFF) != 0 )
    {
      v21 = sub_180105C90(v20, v18, v18 + 48);
      if ( v21 )
        sub_1800235C8(SRWLock, v18, v21);
    }
    sub_1800235C8(SRWLock, v18, v18 + 48);
  }
  v23 = v13 - 8;
  v24 = HIDWORD(*(_QWORD *)(v13 - 8));
  if ( (((unsigned int)v24 ^ HIDWORD(qword_18015A440) ^ ((v13 - 8) >> 32)) & 0xFF0000) != 0 )
  {
    v25 = (unsigned __int8)(*(_BYTE *)v13 ^ qword_18015A440 ^ (v13 - 8));
    goto LABEL_45;
  }
  v26 = (v13 - 8) >> 32;
  if ( (unsigned __int16)v24 ^ (unsigned __int16)(v26 ^ WORD2(qword_18015A440)) )
  {
    v23 = v13 - 8 - 16LL * (unsigned __int16)(WORD2(qword_18015A440) ^ v24 ^ v26);
    v27 = HIDWORD(v23) ^ HIDWORD(qword_18015A440) ^ HIDWORD(*(_QWORD *)v23);
    if ( (v27 & 0xFF0000) != 0 )
    {
LABEL_43:
      v25 = (unsigned __int8)(qword_18015A440 ^ v23 ^ *(_BYTE *)(v23 + 8));
      goto LABEL_45;
    }
    if ( (_WORD)v27 )
    {
      v23 -= 16LL * (unsigned __int16)(WORD2(qword_18015A440) ^ WORD2(v23) ^ HIDWORD(*(_QWORD *)v23));
      goto LABEL_43;
    }
  }
  v25 = 0;
LABEL_45:
  v28 = (v23 - (unsigned int)(v25 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (*(_WORD *)(v28 + 34) ^ 0xABED) != *(_WORD *)(v28 + 32) )
  {
    sub_18009A5F0(18, (unsigned int)SRWLock ^ (__int64)SRWLock[8].Ptr, v28, v13 - 8, 0LL, 0LL);
    goto LABEL_47;
  }
  if ( !(unsigned int)sub_18001FD20(SRWLock, v28, v13 - 8, v42, a4, &v41) )
  {
LABEL_47:
    v22 = 0LL;
    if ( !v9 )
      RtlReleaseSRWLockExclusive(SRWLock);
    return v22;
  }
  v22 = (char *)(v13 + 8);
  v30 = 16 * (WORD1(qword_18015A440) ^ ((unsigned int)(v13 - 8) >> 16) ^ *(unsigned __int16 *)(v13 - 6)) - 16;
  if ( ((__int64)SRWLock[14].Ptr & 1) != 0 && ((v13 + 24) & 0xFFF) == 0 )
  {
    v22 = (char *)(v13 + 24);
    v30 = 16 * (WORD1(qword_18015A440) ^ ((unsigned int)(v13 - 8) >> 16) ^ *(unsigned __int16 *)(v13 - 6)) - 32;
  }
  v31 = *(_DWORD *)v13;
  if ( a2 >= (unsigned int)v30 )
  {
    *(_DWORD *)v13 = v31 & 0xFFFFFEFF;
  }
  else
  {
    v32 = (unsigned int)v30;
    v33 = v30 - a2;
    *(_DWORD *)v13 = v31 | 0x100;
    v22[v30 - 1] = 0;
    v34 = *(_WORD *)&v22[v30 - 2];
    v35 = v34 ^ ((v30 - a2) ^ v34) & 0x1FFF;
    if ( v33 == 1 )
      v35 = v34 | 0x8000;
    *(_WORD *)&v22[v32 - 2] = v35;
  }
  if ( !v9 )
  {
    v36 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 0LL, 1LL);
    if ( v36 != 1 )
    {
      do
      {
        if ( (v36 & 4) != 0 || (v36 & 2) == 0 )
          v37 = -1LL;
        else
          v37 = 3LL;
        v38 = v37 + v36;
        v39 = v36;
        v36 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v37 + v36, v36);
      }
      while ( v39 != v36 );
      if ( v37 == 3 )
        sub_180070AAC(SRWLock, v38, 0LL);
    }
  }
  if ( (a4 & 2) != 0 )
    memset(v22, 0, a2);
  return v22;
}
