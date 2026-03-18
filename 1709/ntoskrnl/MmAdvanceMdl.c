/*
 * XREFs of MmAdvanceMdl @ 0x1402163B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall MmAdvanceMdl(PMDL Mdl, ULONG NumberOfBytes)
{
  ULONG ByteOffset; // ebx
  unsigned int v5; // r10d
  __int64 ByteCount; // r9
  unsigned __int64 v7; // r11
  ULONG v8; // ecx
  bool v9; // zf
  char MdlFlags; // al
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  struct _MDL *Next; // rdi
  PMDL v15; // rax
  unsigned int v16; // edx
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rcx
  CSHORT v19; // ax

  if ( NumberOfBytes >= Mdl->ByteCount )
    return -1073741584;
  byte_140389170 = 1;
  ByteOffset = Mdl->ByteOffset;
  v5 = 0;
  ByteCount = Mdl->ByteCount;
  v7 = (((ByteOffset + LODWORD(Mdl->StartVa)) & 0xFFFuLL) + ByteCount + 4095) >> 12;
  if ( !ByteOffset )
    goto LABEL_10;
  v8 = 4096 - ByteOffset;
  if ( NumberOfBytes >= 4096 - ByteOffset )
  {
    Mdl->StartVa = (char *)Mdl->StartVa + 4096;
    MdlFlags = Mdl->MdlFlags;
    NumberOfBytes -= v8;
    Mdl->ByteOffset = 0;
    Mdl->ByteCount = ByteCount - v8;
    if ( (MdlFlags & 1) != 0 )
      Mdl->MappedSystemVa = (char *)Mdl->MappedSystemVa + v8;
    v5 = 1;
LABEL_10:
    if ( NumberOfBytes )
    {
      Mdl->ByteCount -= NumberOfBytes;
      Mdl->ByteOffset = NumberOfBytes & 0xFFF;
      v5 += NumberOfBytes >> 12;
      Mdl->StartVa = (char *)Mdl->StartVa + 4096 * (unsigned __int64)(NumberOfBytes >> 12);
      if ( (Mdl->MdlFlags & 1) != 0 )
        Mdl->MappedSystemVa = (char *)Mdl->MappedSystemVa + NumberOfBytes;
    }
    if ( v5 )
    {
      if ( (Mdl->MdlFlags & 0x200) != 0 )
      {
        v11 = (__int64 *)(&Mdl[1].Next + v7);
        do
        {
          v12 = *v11;
          ++v7;
          ++v11;
        }
        while ( v12 >= 0 );
      }
      v13 = v5;
      do
      {
        Next = Mdl[1].Next;
        v15 = Mdl + 1;
        if ( v7 )
        {
          v16 = 1;
          do
          {
            v17 = v16;
            if ( v16 == v7 )
              v18 = (unsigned __int64)Next | 0x8000000000000000uLL;
            else
              v18 = *(_QWORD *)&v15->Size & 0x7FFFFFFFFFFFFFFFLL;
            v15->Next = (struct _MDL *)v18;
            ++v16;
            v15 = (PMDL)((char *)v15 + 8);
          }
          while ( v17 < v7 );
        }
        --v13;
      }
      while ( v13 );
      v19 = Mdl->MdlFlags;
      if ( (v19 & 0x200) == 0 )
        Mdl->MdlFlags = v19 | 0x200;
    }
    return 0;
  }
  v9 = (Mdl->MdlFlags & 1) == 0;
  Mdl->ByteCount = ByteCount - NumberOfBytes;
  Mdl->ByteOffset = ByteOffset + NumberOfBytes;
  if ( !v9 )
    Mdl->MappedSystemVa = (char *)Mdl->MappedSystemVa + NumberOfBytes;
  return 0;
}
