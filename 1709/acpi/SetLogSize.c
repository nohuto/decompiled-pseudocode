/*
 * XREFs of SetLogSize @ 0x1C0011928
 * Callers:
 *     AMLIInitialize @ 0x1C00AD4B4 (AMLIInitialize.c)
 * Callees:
 *     memset @ 0x1C002C4C0 (memset.c)
 */

char SetLogSize()
{
  char v0; // bl
  PVOID PoolWithTag; // rax

  v0 = 0;
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    qword_1C0079788 = 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3960uLL, 0x474F4C45u);
  P = PoolWithTag;
  if ( PoolWithTag )
  {
    qword_1C0079788 = 204LL;
    memset(PoolWithTag, 0, 0x3960uLL);
    return 1;
  }
  return v0;
}
