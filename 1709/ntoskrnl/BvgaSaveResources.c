/*
 * XREFs of BvgaSaveResources @ 0x140832FE0
 * Callers:
 *     BvgaDriverInitialize @ 0x140832E50 (BvgaDriverInitialize.c)
 * Callees:
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void BvgaSaveResources()
{
  const void **v0; // rbx
  unsigned __int64 v1; // rsi
  unsigned int *v2; // rdi
  PVOID PoolWithTag; // rax
  PVOID v4; // rbp

  v0 = (const void **)ResourceList;
  v1 = 4LL;
  v2 = (unsigned int *)&ResourceSize;
  do
  {
    if ( *v0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *v2, 0x6D427642u);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
        KeBugCheck(0x7Du);
      memmove(PoolWithTag, *v0, *v2);
      *v0 = v4;
    }
    v1 += 4LL;
    ++v2;
    ++v0;
  }
  while ( v1 < 0x1C );
}
