/*
 * XREFs of ExpUnicodeStringToNonpagedWStr @ 0x1407C2670
 * Callers:
 *     ExGetFirmwareEnvironmentVariable @ 0x14057FF60 (ExGetFirmwareEnvironmentVariable.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1407BEE40 (ExSetFirmwareEnvironmentVariable.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall ExpUnicodeStringToNonpagedWStr(const void **a1)
{
  unsigned __int64 v1; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v4; // rbx

  v1 = *(unsigned __int16 *)a1;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v1 + 2, 0x72766E45u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, a1[1], (unsigned int)v1);
    v4[v1 >> 1] = 0;
  }
  return v4;
}
