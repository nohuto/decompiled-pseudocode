/*
 * XREFs of RtlpMuiRegCreateRegistryInfo @ 0x140636A1C
 * Callers:
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140179BE8 (RtlpMuiRegCreateKernelRegistryInfo.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_DWORD *RtlpMuiRegCreateRegistryInfo()
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v1; // rbx
  _DWORD *result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA8uLL, 0x72746C6Du);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0xA8uLL);
  result = v1;
  *v1 = 1024;
  return result;
}
