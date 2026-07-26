/*
 * XREFs of ?RtlCopyMdlToBuffer@@YAJPEAU_MDL@@_KPEAX1PEA_K@Z @ 0x1C0013C9C
 * Callers:
 *     NdisMAllocateNetBufferSGList @ 0x1C0006420 (NdisMAllocateNetBufferSGList.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 */

__int64 __fastcall RtlCopyMdlToBuffer(
        PMDL MemoryDescriptorList,
        unsigned __int64 a2,
        char *a3,
        size_t a4,
        unsigned __int64 *a5)
{
  PMDL v8; // rdi
  unsigned __int64 ByteCount; // rax
  size_t v10; // rbp
  __int64 v11; // r15
  char *MappedSystemVa; // rax
  size_t v13; // r15
  char *v14; // rdx
  size_t v15; // rbx

  v8 = MemoryDescriptorList;
  for ( *a5 = 0LL; v8; a2 -= ByteCount )
  {
    ByteCount = v8->ByteCount;
    if ( a2 < ByteCount )
      break;
    v8 = v8->Next;
  }
  v10 = a4;
  while ( 1 )
  {
    if ( !v8 || !v10 )
    {
      *a5 = a4 - v10;
      return 0LL;
    }
    v11 = v8->ByteCount;
    if ( v8->ByteCount )
      break;
LABEL_13:
    v8 = v8->Next;
  }
  if ( (v8->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)v8->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
  if ( MappedSystemVa )
  {
    v13 = v11 - a2;
    v14 = &MappedSystemVa[a2];
    a2 = 0LL;
    v15 = v10;
    if ( v10 >= v13 )
      v15 = v13;
    memmove(a3, v14, v15);
    a3 += v15;
    v10 -= v15;
    goto LABEL_13;
  }
  return 3221225626LL;
}
