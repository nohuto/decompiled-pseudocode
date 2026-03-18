/*
 * XREFs of SetLogSize @ 0x1C0049390
 * Callers:
 *     AMLIInitialize @ 0x1C009B7E4 (AMLIInitialize.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 */

char SetLogSize()
{
  char v0; // bl
  PVOID PoolWithTag; // rax

  v0 = 0;
  if ( qword_1C0067790 )
  {
    ExFreePoolWithTag(qword_1C0067790, 0);
    qword_1C0067790 = 0LL;
    qword_1C0067788 = 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3960uLL, 0x474F4C45u);
  qword_1C0067790 = PoolWithTag;
  if ( PoolWithTag )
  {
    qword_1C0067788 = 204LL;
    memset(PoolWithTag, 0, 0x3960uLL);
    return 1;
  }
  return v0;
}
