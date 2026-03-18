/*
 * XREFs of WmiVerifierCopyEvent @ 0x140279E44
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x1407C5990 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall WmiVerifierCopyEvent(unsigned int *Src)
{
  unsigned int v1; // esi
  PVOID PoolWithTag; // rax
  PVOID v4; // rbx

  v1 = *Src;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *Src, 0x70696D57u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
    memmove(PoolWithTag, Src, v1);
  return v4;
}
