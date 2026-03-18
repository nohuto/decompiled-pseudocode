/*
 * XREFs of WmiVerifierCopyEvent @ 0x140252904
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x1407835E0 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall WmiVerifierCopyEvent(unsigned int *Src)
{
  SIZE_T v2; // rsi
  PVOID PoolWithTag; // rax
  PVOID v4; // rbx

  v2 = *Src;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x70696D57u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
    memmove(PoolWithTag, Src, (unsigned int)v2);
  return v4;
}
