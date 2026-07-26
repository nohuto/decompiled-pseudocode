/*
 * XREFs of ?RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z @ 0x1C0011248
 * Callers:
 *     NdisCopyFromNetBufferToNetBuffer @ 0x1C004E6D0 (NdisCopyFromNetBufferToNetBuffer.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 */

__int64 __fastcall RtlCopyMdlToMdl(
        PMDL MemoryDescriptorList,
        unsigned __int64 a2,
        struct _MDL *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  PMDL i; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  char *MappedSystemVa; // r15
  char *v14; // r15
  size_t v15; // r13
  char *v16; // r14
  size_t j; // r12
  size_t v19; // rbp
  unsigned __int64 v20; // rax
  char *v21; // r14
  unsigned __int64 ByteCount; // rax
  unsigned __int64 v23; // [rsp+60h] [rbp+8h]

  for ( i = MemoryDescriptorList; i; a2 -= ByteCount )
  {
    ByteCount = i->ByteCount;
    if ( a2 < ByteCount )
      break;
    i = i->Next;
  }
  while ( a3 )
  {
    v11 = a3->ByteCount;
    if ( a4 < v11 )
      break;
    a3 = a3->Next;
    a4 -= v11;
  }
  v10 = a5;
  if ( a5 && i && a3 )
  {
    v12 = a5;
    if ( i->ByteCount - a2 <= a5 )
      v12 = i->ByteCount - a2;
    v23 = v12;
    if ( (i->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)i->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
    if ( !MappedSystemVa )
      return 3221225626LL;
    v14 = &MappedSystemVa[a2];
    v15 = a3->ByteCount - a4;
    v16 = (char *)((a3->MdlFlags & 5) != 0
                 ? a3->MappedSystemVa
                 : MmMapLockedPagesSpecifyCache(a3, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag));
    if ( !v16 )
      return 3221225626LL;
    v21 = &v16[a4];
    for ( j = v23; ; j -= v19 )
    {
LABEL_26:
      v19 = j;
      if ( v15 < j )
        v19 = v15;
      memmove(v21, v14, v19);
      if ( a5 == v19 )
        break;
      v20 = a5 - v19;
      a5 -= v19;
      if ( v15 == v19 )
      {
        while ( 1 )
        {
          a3 = a3->Next;
          if ( !a3 )
            goto LABEL_40;
          v15 = a3->ByteCount;
          if ( a3->ByteCount )
          {
            if ( (a3->MdlFlags & 5) != 0 )
              v21 = (char *)a3->MappedSystemVa;
            else
              v21 = (char *)MmMapLockedPagesSpecifyCache(a3, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
            if ( v21 )
            {
              v20 = a5;
              goto LABEL_38;
            }
            return 3221225626LL;
          }
        }
      }
      v21 += v19;
      v15 -= v19;
LABEL_38:
      if ( j == v19 )
      {
        while ( 1 )
        {
          i = i->Next;
          if ( !i )
            break;
          if ( i->ByteCount )
          {
            j = v20;
            if ( i->ByteCount <= v20 )
              j = i->ByteCount;
            if ( (i->MdlFlags & 5) != 0 )
              v14 = (char *)i->MappedSystemVa;
            else
              v14 = (char *)MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
            if ( v14 )
              goto LABEL_26;
            return 3221225626LL;
          }
        }
LABEL_40:
        v10 -= v20;
        break;
      }
      v14 += v19;
    }
    *a6 = v10;
  }
  else
  {
    *a6 = 0LL;
  }
  return 0LL;
}
