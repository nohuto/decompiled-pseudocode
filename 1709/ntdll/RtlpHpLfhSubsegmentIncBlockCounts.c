/*
 * XREFs of RtlpHpLfhSubsegmentIncBlockCounts @ 0x180107368
 * Callers:
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180107228 (RtlpHpLfhSubsegmentCommitBlock.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentIncBlockCounts(__int64 a1, unsigned int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  char v6; // cl
  int v7; // ebp
  __int64 v8; // r11
  __int64 v9; // r14
  signed __int16 *v10; // rdi
  unsigned int v11; // esi
  __int64 v12; // rbx
  int v13; // r15d
  signed __int16 *v14; // r12
  signed __int16 v15; // dx
  bool v16; // zf
  signed __int16 v17; // ax
  unsigned int v18; // eax
  _DWORD *v20; // [rsp+68h] [rbp+20h]

  v20 = a4;
  v6 = *(_BYTE *)(a1 + 44);
  v7 = 0;
  v8 = a2 >> v6;
  v9 = 2 * v8;
  v10 = (signed __int16 *)(2 * v8 + a1 + *(unsigned __int16 *)(a1 + 46));
  _m_prefetchw(v10);
  v11 = -1;
  LODWORD(v12) = 0;
  v13 = 0;
  v14 = &v10[((a2 + a3 - 1) >> v6) - (unsigned int)v8 + 1];
  if ( v10 < v14 )
  {
    do
    {
      while ( 1 )
      {
        v15 = *v10;
        while ( v15 > 0 )
        {
          v17 = _InterlockedCompareExchange16(v10, v15 + 1, v15);
          v16 = v15 == v17;
          v15 = v17;
          if ( v16 )
            goto LABEL_14;
        }
        if ( v7 )
          break;
        v7 = 1;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
      }
      if ( v15 == -1 )
      {
        v12 = v9 >> 1;
        v18 = v9 >> 1;
        if ( v11 != -1 )
          v18 = v11;
        v11 = v18;
      }
      else
      {
        ++v13;
      }
      *v10 = v15 + 1;
LABEL_14:
      ++v10;
      v9 += 2LL;
    }
    while ( v10 < v14 );
    a4 = v20;
  }
  if ( a5 )
    *a5 = v13;
  if ( v11 != -1 )
  {
    v7 = 0;
    *a4 = v12 - v11 + 1;
  }
  if ( v7 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
  return v11;
}
