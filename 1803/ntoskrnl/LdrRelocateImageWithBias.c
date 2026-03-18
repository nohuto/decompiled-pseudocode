/*
 * XREFs of LdrRelocateImageWithBias @ 0x14062BD04
 * Callers:
 *     MiUseLargeDriverPage @ 0x1405F83BC (MiUseLargeDriverPage.c)
 *     LdrRelocateImage @ 0x14062BCF0 (LdrRelocateImage.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14003EEE0 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x140040D20 (RtlImageDirectoryEntryToData.c)
 *     LdrProcessRelocationBlockLongLong @ 0x14062BDE0 (LdrProcessRelocationBlockLongLong.c)
 */

ULONG __stdcall LdrRelocateImageWithBias(
        PVOID NewAddress,
        LONGLONG AdditionalBias,
        PCCH LoaderName,
        ULONG Success,
        ULONG Conflict,
        ULONG Invalid)
{
  ULONG v6; // ebx
  PIMAGE_NT_HEADERS v8; // rdi
  int v9; // eax
  _DWORD *v10; // rax
  ULONG v11; // esi
  int v12; // r8d
  PCCH v14; // [rsp+70h] [rbp+18h] BYREF
  ULONG Size; // [rsp+78h] [rbp+20h] BYREF

  v14 = LoaderName;
  v6 = 0;
  Size = 0;
  if ( RtlImageNtHeaderEx(1u, NewAddress, 0LL, (PIMAGE_NT_HEADERS *)&v14) >= 0 )
  {
    v8 = (PIMAGE_NT_HEADERS)v14;
    v9 = *((unsigned __int16 *)v14 + 12);
    if ( v9 == 267 || v9 == 523 )
    {
      v10 = RtlImageDirectoryEntryToData(NewAddress, 1u, 5u, &Size);
      if ( !v10 )
        return (v8->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
      v11 = Size;
      if ( !Size )
        return (v8->FileHeader.Characteristics & 1) != 0 ? 0xC0000018 : 0;
      while ( 1 )
      {
        v12 = v10[1];
        v11 -= v12;
        v10 = LdrProcessRelocationBlockLongLong(
                v8->FileHeader.Machine,
                (int)NewAddress + *v10,
                (PUSHORT)((unsigned int)(v12 - 8) >> 1),
                (LONGLONG)(v10 + 2));
        if ( !v10 )
          break;
        if ( !v11 )
          return v6;
      }
    }
  }
  return -1073741701;
}
