/*
 * XREFs of ?RtlCopyBufferToMdl@@YAJPEAXPEAU_MDL@@_K2PEA_K@Z @ 0x1C004B9C8
 * Callers:
 *     NdisMFreeNetBufferSGList @ 0x1C0007030 (NdisMFreeNetBufferSGList.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 */

__int64 __fastcall RtlCopyBufferToMdl(
        char *Src,
        PMDL MemoryDescriptorList,
        unsigned __int64 a3,
        size_t a4,
        unsigned __int64 *a5)
{
  PMDL v7; // rdi
  unsigned __int64 ByteCount; // rax
  size_t v10; // rbp
  __int64 v11; // r15
  char *MappedSystemVa; // rax
  size_t v13; // r15
  char *v14; // rcx
  size_t v15; // rbx

  v7 = MemoryDescriptorList;
  for ( *a5 = 0LL; v7; a3 -= ByteCount )
  {
    ByteCount = v7->ByteCount;
    if ( a3 < ByteCount )
      break;
    v7 = v7->Next;
  }
  v10 = a4;
  while ( 1 )
  {
    if ( !v7 || !v10 )
    {
      *a5 = a4 - v10;
      return 0LL;
    }
    v11 = v7->ByteCount;
    if ( v7->ByteCount )
      break;
LABEL_14:
    v7 = v7->Next;
  }
  if ( (v7->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)v7->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v7, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
  if ( MappedSystemVa )
  {
    v13 = v11 - a3;
    v14 = &MappedSystemVa[a3];
    a3 = 0LL;
    v15 = v10;
    if ( v10 >= v13 )
      v15 = v13;
    memmove(v14, Src, v15);
    Src += v15;
    v10 -= v15;
    goto LABEL_14;
  }
  return 3221225626LL;
}
