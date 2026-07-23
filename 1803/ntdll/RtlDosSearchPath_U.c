/*
 * XREFs of RtlDosSearchPath_U @ 0x180087400
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlGetFullPathName_UEx @ 0x18003C1A0 (RtlGetFullPathName_UEx.c)
 *     RtlInitUnicodeStringEx @ 0x18003F6D0 (RtlInitUnicodeStringEx.c)
 *     sub_18004F794 @ 0x18004F794 (sub_18004F794.c)
 *     RtlDetermineDosPathNameType_U @ 0x18007A0F0 (RtlDetermineDosPathNameType_U.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

ULONG __cdecl RtlDosSearchPath_U(
        PCWSTR Path,
        PCWSTR FileName,
        PCWSTR Extension,
        ULONG BufferLength,
        PWSTR Buffer,
        PWSTR *FilePart)
{
  RTL_PATH_TYPE v10; // eax
  PCWSTR v11; // rcx
  ULONG v12; // ebx
  WCHAR v14; // ax
  unsigned int Length; // r15d
  int v16; // ebp
  unsigned int v17; // esi
  WCHAR *Heap; // rbp
  size_t v19; // r13
  WCHAR v20; // ax
  WCHAR *v21; // rsi
  ULONG BytesRequired; // [rsp+30h] [rbp-48h] BYREF
  ULONG v23; // [rsp+34h] [rbp-44h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF

  v10 = RtlDetermineDosPathNameType_U(FileName);
  v11 = FileName;
  if ( v10 == RtlPathTypeRelative )
  {
    v14 = *FileName;
    v12 = 0;
    while ( v14 )
    {
      if ( v14 == 46 )
        goto LABEL_10;
      v14 = *++v11;
    }
    if ( !Extension )
    {
LABEL_10:
      Length = 0;
      goto LABEL_11;
    }
    if ( RtlInitUnicodeStringEx(&DestinationString, Extension) < 0 )
      return 0;
    Length = DestinationString.Length;
LABEL_11:
    if ( RtlInitUnicodeStringEx(&DestinationString, Path) >= 0 )
    {
      v16 = DestinationString.Length;
      if ( RtlInitUnicodeStringEx(&DestinationString, FileName) >= 0 )
      {
        v17 = DestinationString.Length;
        Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v16 + DestinationString.Length + Length + 6LL);
        if ( Heap )
        {
          v19 = v17;
          while ( 1 )
          {
            v20 = *Path;
            v21 = Heap;
            if ( *Path )
            {
              do
              {
                ++Path;
                if ( v20 == 59 )
                  break;
                *v21++ = v20;
                v20 = *Path;
              }
              while ( *Path );
              if ( v21 != Heap && *(v21 - 1) != 92 )
                *v21++ = 92;
            }
            Path = (PCWSTR)(-(__int64)(*Path != 0) & (unsigned __int64)Path);
            memmove(v21, FileName, v19);
            if ( Length )
              memmove((char *)v21 + v19, Extension, Length + 2LL);
            else
              *(WCHAR *)((char *)v21 + v19) = 0;
            if ( sub_18004F794(Heap, 0) )
              break;
            if ( !Path )
              goto LABEL_26;
          }
          if ( RtlGetFullPathName_UEx(Heap, BufferLength, Buffer, FilePart, &v23) >= 0 )
            v12 = v23;
LABEL_26:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
          return v12;
        }
      }
    }
  }
  else
  {
    v12 = 0;
    if ( sub_18004F794(FileName, 1) )
    {
      if ( RtlGetFullPathName_UEx(FileName, BufferLength, Buffer, FilePart, &BytesRequired) >= 0 )
        return BytesRequired;
      return v12;
    }
  }
  return 0;
}
