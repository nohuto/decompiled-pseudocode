/*
 * XREFs of NdisQueryBufferSafe @ 0x1C005BA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisQueryBufferSafe(PMDL MemoryDescriptorList, _QWORD *a2, _DWORD *a3, int a4)
{
  PVOID MappedSystemVa; // rax
  __int64 result; // rax

  if ( a2 )
  {
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
      MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(
                         MemoryDescriptorList,
                         0,
                         MmCached,
                         0LL,
                         0,
                         a4 | ndisMdlMappingNxFlag);
    *a2 = MappedSystemVa;
  }
  result = MemoryDescriptorList->ByteCount;
  *a3 = result;
  return result;
}
