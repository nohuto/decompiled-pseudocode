/*
 * XREFs of SmBinaryArrayGrow @ 0x140271B64
 * Callers:
 *     SmHpBufferAlloc @ 0x140271CC0 (SmHpBufferAlloc.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

char *__fastcall SmBinaryArrayGrow(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  unsigned int v4; // ecx
  unsigned int v5; // ebp
  char *v6; // rdi
  __int64 v7; // rsi
  SIZE_T v8; // r15
  char *PoolWithTag; // rax

  v2 = a1;
  _BitScanReverse((unsigned int *)&a1, a2);
  v3 = 0LL;
  v5 = a2 ^ (1 << v4);
  if ( v4 < 0x20 )
  {
    v6 = *(char **)(v2 + 8 * a1);
    v7 = (unsigned int)a1;
    if ( v6 )
      return &v6[16 * v5];
    v8 = (unsigned int)(16 * (1 << a1));
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x41426D73u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)v8);
      *(_QWORD *)(v2 + 8 * v7) = v6;
      return &v6[16 * v5];
    }
  }
  return (char *)v3;
}
