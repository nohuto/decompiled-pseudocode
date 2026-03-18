/*
 * XREFs of SmHpBufferAlloc @ 0x140271CC0
 * Callers:
 *     SmHpChunkAlloc @ 0x1402720E4 (SmHpChunkAlloc.c)
 * Callees:
 *     SmBinaryArrayGrow @ 0x140271B64 (SmBinaryArrayGrow.c)
 *     SmHpBufferUpdateFullness @ 0x140271F94 (SmHpBufferUpdateFullness.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

char *__fastcall SmHpBufferAlloc(_DWORD *a1)
{
  _QWORD *PoolWithTag; // rsi
  char *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // edx
  _WORD *v7; // r9
  __int64 v8; // r8
  _WORD *v9; // rdx
  unsigned __int64 i; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x42436D73u);
  if ( !PoolWithTag )
    return 0LL;
  v4 = (unsigned int)a1[136];
  if ( (_DWORD)v4 != -1 )
  {
    _BitScanReverse((unsigned int *)&v5, v4);
    v3 = (char *)(*(_QWORD *)&a1[2 * v5] + 16 * (v4 ^ (unsigned int)(1 << v5)));
    a1[136] = *((_DWORD *)v3 + 2);
    goto LABEL_9;
  }
  v6 = a1[64];
  if ( v6 > a1[65] )
  {
    v3 = 0LL;
    goto LABEL_13;
  }
  v3 = SmBinaryArrayGrow((__int64)a1, v6);
  if ( v3 )
  {
    LODWORD(v4) = a1[64];
    a1[64] = v4 + 1;
LABEL_9:
    PoolWithTag[2] = 0LL;
    v7 = v3 + 8;
    *((_DWORD *)PoolWithTag + 4) = v4;
    v8 = 0LL;
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    *((_QWORD *)v3 + 1) = 0LL;
    *(_QWORD *)v3 = PoolWithTag;
    v9 = (_WORD *)((char *)PoolWithTag + (unsigned int)a1[70]);
    for ( i = (unsigned __int64)v9 + (unsigned int)a1[68];
          i <= (unsigned __int64)(PoolWithTag + 512);
          i += (unsigned int)a1[68] )
    {
      LOWORD(v8) = v8 + 1;
      *v7 = (_WORD)v9 - (_WORD)PoolWithTag;
      v7 = v9;
      v9 = (_WORD *)i;
    }
    *v7 = -1;
    SmHpBufferUpdateFullness(a1, v3, v8);
    PoolWithTag = 0LL;
  }
LABEL_13:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v3;
}
