/*
 * XREFs of CcCreateVacbArray @ 0x140515D0C
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400AD640 (CcInitializeCacheMapEx.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcCreateVacbArray(__int64 a1, __int64 a2)
{
  int v2; // r12d
  int v3; // r15d
  __int64 v6; // rdi
  size_t v7; // r14
  char *PoolWithTag; // rsi
  __int64 result; // rax
  char *v10; // rcx
  char *v11; // r8
  char **v12; // rax
  char *v13; // rdx
  unsigned int v14; // edx
  int v15; // ecx

  v2 = 0;
  v3 = 0;
  if ( HIDWORD(a2) )
  {
    LODWORD(v6) = -1;
  }
  else if ( (unsigned int)a2 > 0x100000 )
  {
    LODWORD(v6) = 8 * ((unsigned int)a2 >> 18);
  }
  else
  {
    LODWORD(v6) = HIDWORD(a2) + 32;
  }
  v7 = (unsigned int)v6;
  if ( a2 < 0 )
    return 3221225536LL;
  if ( (_DWORD)v6 == 32 )
  {
    PoolWithTag = (char *)(a1 + 56);
  }
  else
  {
    if ( (unsigned int)v6 > 0x400 )
    {
      v14 = 0;
      v7 = 1024LL;
      LODWORD(v6) = 1032;
      v15 = 25;
      v3 = 1;
      do
      {
        v15 += 7;
        ++v14;
      }
      while ( a2 > 1LL << v15 );
      if ( v14 >= CcMaxVacbLevelsSeen )
        CcMaxVacbLevelsSeen = v14 + 1;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 && a2 > 0x200000 )
      {
        v2 = 1;
        LODWORD(v6) = ((v6 + 15) & 0xFFFFFFF0) + v6;
      }
      if ( (_DWORD)v7 == 1024 )
      {
        LODWORD(v6) = v6 + 8;
        v3 = 1;
      }
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v6, 0x70566343u);
    if ( !PoolWithTag )
    {
      result = 3221225626LL;
      *(_DWORD *)(a1 + 156) = -1073741670;
      return result;
    }
  }
  memset(PoolWithTag, 0, v7);
  if ( v3 )
  {
    v6 = (unsigned int)(v6 - 8);
    *(_QWORD *)&PoolWithTag[v6] = 0LL;
  }
  if ( v2 )
  {
    v10 = &PoolWithTag[v7];
    v11 = &PoolWithTag[(unsigned int)v6];
    if ( &PoolWithTag[v7] < v11 )
    {
      v12 = (char **)(a1 + 16);
      do
      {
        v13 = *v12;
        if ( *((char ***)*v12 + 1) != v12 )
          __fastfail(3u);
        *(_QWORD *)v10 = v13;
        *((_QWORD *)v10 + 1) = v12;
        *((_QWORD *)v13 + 1) = v10;
        *v12 = v10;
        v10 += 16;
      }
      while ( v10 < v11 );
    }
  }
  *(_QWORD *)(a1 + 88) = PoolWithTag;
  result = 0LL;
  *(_QWORD *)(a1 + 32) = a2;
  return result;
}
