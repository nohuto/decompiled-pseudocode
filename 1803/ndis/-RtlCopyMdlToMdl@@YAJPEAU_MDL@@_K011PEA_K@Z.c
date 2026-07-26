/*
 * XREFs of ?RtlCopyMdlToMdl@@YAJPEAU_MDL@@_K011PEA_K@Z @ 0x1C004BABC
 * Callers:
 *     NdisCopyFromNetBufferToNetBuffer @ 0x1C004D3E0 (NdisCopyFromNetBufferToNetBuffer.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
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
  unsigned __int64 ByteCount; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  char *MappedSystemVa; // rbp
  char *v16; // rbp
  size_t v17; // r13
  char *v18; // r15
  char *v19; // r15
  size_t j; // r12
  size_t v21; // r14
  unsigned __int64 v22; // rax
  size_t Size; // [rsp+60h] [rbp+8h]

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
  v12 = a5;
  if ( a5 && i && a3 )
  {
    v13 = a5;
    if ( i->ByteCount - a2 <= a5 )
      v13 = i->ByteCount - a2;
    Size = v13;
    if ( (i->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)i->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
    if ( !MappedSystemVa )
      return 3221225626LL;
    v16 = &MappedSystemVa[a2];
    v17 = a3->ByteCount - a4;
    v18 = (char *)((a3->MdlFlags & 5) != 0
                 ? a3->MappedSystemVa
                 : MmMapLockedPagesSpecifyCache(a3, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag));
    if ( !v18 )
      return 3221225626LL;
    v19 = &v18[a4];
    for ( j = Size; ; j -= v21 )
    {
LABEL_23:
      v21 = v17;
      if ( v17 >= j )
        v21 = j;
      memmove(v19, v16, v21);
      if ( a5 == v21 )
        break;
      v22 = a5 - v21;
      a5 -= v21;
      if ( v17 == v21 )
      {
        while ( 1 )
        {
          a3 = a3->Next;
          if ( !a3 )
            goto LABEL_46;
          v17 = a3->ByteCount;
          if ( a3->ByteCount )
          {
            if ( (a3->MdlFlags & 5) != 0 )
              v19 = (char *)a3->MappedSystemVa;
            else
              v19 = (char *)MmMapLockedPagesSpecifyCache(a3, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
            if ( v19 )
            {
              v22 = a5;
              goto LABEL_35;
            }
            return 3221225626LL;
          }
        }
      }
      v19 += v21;
      v17 -= v21;
LABEL_35:
      if ( j == v21 )
      {
        while ( 1 )
        {
          i = i->Next;
          if ( !i )
            break;
          if ( i->ByteCount )
          {
            j = v22;
            if ( i->ByteCount <= v22 )
              j = i->ByteCount;
            if ( (i->MdlFlags & 5) != 0 )
              v16 = (char *)i->MappedSystemVa;
            else
              v16 = (char *)MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
            if ( v16 )
              goto LABEL_23;
            return 3221225626LL;
          }
        }
LABEL_46:
        v12 -= v22;
        break;
      }
      v16 += v21;
    }
    *a6 = v12;
  }
  else
  {
    *a6 = 0LL;
  }
  return 0LL;
}
