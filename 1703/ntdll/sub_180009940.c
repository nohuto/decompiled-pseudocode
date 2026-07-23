/*
 * XREFs of sub_180009940 @ 0x180009940
 * Callers:
 *     sub_1800096A8 @ 0x1800096A8 (sub_1800096A8.c)
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 * Callees:
 *     sub_180009BD0 @ 0x180009BD0 (sub_180009BD0.c)
 *     sub_180009E2C @ 0x180009E2C (sub_180009E2C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180029050 @ 0x180029050 (sub_180029050.c)
 *     sub_18002CBD0 @ 0x18002CBD0 (sub_18002CBD0.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

_QWORD *__fastcall sub_180009940(PRTL_SRWLOCK SRWLock, size_t Size, unsigned int a3, unsigned int a4)
{
  size_t v4; // r12
  unsigned int v5; // r13d
  unsigned int v7; // r15d
  int v8; // ebp
  __int64 i; // rax
  unsigned __int64 Ptr; // rdi
  int v11; // ebx
  _QWORD *v12; // r14
  int v13; // eax
  unsigned __int64 v14; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rdx
  __int64 v17; // r10
  int v18; // eax
  unsigned int v19; // eax
  int v20; // ecx
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rbx
  unsigned __int64 v23; // rcx
  _RTL_SRWLOCK *v25; // rbx
  PRTL_SRWLOCK *v26; // rcx

  v4 = (unsigned int)Size;
  v5 = a3 + 2;
  if ( (_DWORD)Size == a3 )
    v5 = a3;
  v7 = (v5 + 15) >> 4;
  v8 = a4 & 1;
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive(SRWLock);
  for ( i = (v7 + 1) << 16; ; i = (v7 + 1) << 16 )
  {
    Ptr = (unsigned __int64)SRWLock[1].Ptr;
    v11 = (__int64)SRWLock[2].Ptr & 1;
    v12 = 0LL;
    while ( Ptr )
    {
      v13 = sub_18002CBD0(i, Ptr);
      if ( !v13 )
        goto LABEL_16;
      if ( v13 < 0 )
      {
        v14 = *(_QWORD *)Ptr;
        v12 = (_QWORD *)Ptr;
      }
      else
      {
        v14 = *(_QWORD *)(Ptr + 8);
      }
      if ( v11 && v14 )
        Ptr ^= v14;
      else
        Ptr = v14;
      i = (v7 + 1) << 16;
    }
    Ptr = (unsigned __int64)v12;
LABEL_16:
    if ( Ptr )
      break;
    if ( !v8 )
      RtlReleaseSRWLockExclusive(SRWLock);
    v25 = (_RTL_SRWLOCK *)sub_180009E2C(SRWLock, v5, a4);
    if ( !v25 )
      return 0LL;
    if ( !v8 )
      RtlAcquireSRWLockExclusive(SRWLock);
    if ( ((__int64)SRWLock[13].Ptr & 0x8000000) == 0 )
    {
      v26 = (PRTL_SRWLOCK *)SRWLock[4].Ptr;
      if ( *v26 != &SRWLock[3] )
        __fastfail(3u);
      v25->Ptr = &SRWLock[3];
      v25[1].Ptr = v26;
      *v26 = v25;
      SRWLock[4].Ptr = v25;
    }
    sub_180009BD0(SRWLock, v25, &v25[6]);
  }
  v15 = (_QWORD *)(Ptr - 8);
  v16 = v15;
  v17 = HIDWORD(*v15);
  v18 = v17 ^ HIDWORD(v15) ^ HIDWORD(qword_18015BFA8);
  if ( (v18 & 0xFF0000) != 0 )
  {
    v19 = (unsigned int)v15 ^ *((_DWORD *)v15 + 2);
    goto LABEL_20;
  }
  if ( (_WORD)v18 )
  {
    v16 = &v15[-2 * (unsigned __int16)(v17 ^ WORD2(v15) ^ WORD2(qword_18015BFA8))];
    v19 = (unsigned int)v16 ^ *((_DWORD *)v16 + 2);
LABEL_20:
    v20 = (unsigned __int8)(qword_18015BFA8 ^ v19);
    goto LABEL_21;
  }
  v20 = 0;
LABEL_21:
  v21 = ((unsigned __int64)v16 - (unsigned int)(v20 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (*(_WORD *)(v21 + 34) ^ 0xABED) == *(_WORD *)(v21 + 32) )
  {
    if ( (unsigned int)sub_180029050((_DWORD)SRWLock, v21, (_DWORD)v15, v7 + 1, a4) )
    {
      v22 = v15 + 2;
      v23 = 16 * ((WORD1(qword_18015BFA8) ^ ((unsigned int)v15 >> 16) ^ *((unsigned __int16 *)v15 + 1)) - 1);
      if ( (unsigned int)v4 >= (unsigned int)v23 )
      {
        *((_DWORD *)v15 + 2) &= ~0x100u;
      }
      else
      {
        *((_DWORD *)v15 + 2) |= 0x100u;
        HIBYTE(v22[v23 / 8 - 1]) = 0;
        if ( (_DWORD)v23 - (_DWORD)v4 == 1 )
        {
          *(_WORD *)((char *)v22 + (unsigned int)v23 - 2) |= 0x8000u;
        }
        else
        {
          *(_WORD *)((char *)v22 + (unsigned int)v23 - 2) &= 0xE000u;
          *(_WORD *)((char *)v22 + (unsigned int)v23 - 2) |= (v23 - v4) & 0x1FFF;
        }
      }
      if ( !v8 )
        RtlReleaseSRWLockExclusive(SRWLock);
      if ( (a4 & 2) != 0 )
        memset(v15 + 2, 0, v4);
      return v22;
    }
  }
  else
  {
    sub_1800A4DFC(17, SRWLock[7].Ptr, v21, (_DWORD)v15, 0LL, 0LL);
  }
  v22 = 0LL;
  if ( !v8 )
    RtlReleaseSRWLockExclusive(SRWLock);
  return v22;
}
