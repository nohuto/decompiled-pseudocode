/*
 * XREFs of RtlDosSearchPath_U @ 0x18008DA50
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlGetFullPathName_UEx @ 0x18003BAA0 (RtlGetFullPathName_UEx.c)
 *     RtlInitUnicodeStringEx @ 0x180040170 (RtlInitUnicodeStringEx.c)
 *     RtlDetermineDosPathNameType_U @ 0x18004FB50 (RtlDetermineDosPathNameType_U.c)
 *     sub_180058280 @ 0x180058280 (sub_180058280.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
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
  WCHAR v12; // ax
  ULONG v13; // ebx
  WCHAR *v14; // rdi
  unsigned int Length; // r15d
  int v17; // ebp
  unsigned int v18; // edi
  WCHAR *Heap; // rbp
  size_t v20; // r12
  WCHAR v21; // ax
  ULONG BytesRequired; // [rsp+30h] [rbp-48h] BYREF
  ULONG v23; // [rsp+34h] [rbp-44h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF

  v10 = RtlDetermineDosPathNameType_U(FileName);
  v11 = FileName;
  if ( v10 == RtlPathTypeRelative )
  {
    v12 = *FileName;
    v13 = 0;
    while ( v12 )
    {
      if ( v12 == 46 )
        goto LABEL_20;
      v12 = *++v11;
    }
    if ( !Extension )
    {
LABEL_20:
      Length = 0;
      goto LABEL_21;
    }
    if ( RtlInitUnicodeStringEx(&DestinationString, Extension) < 0 )
      return 0;
    Length = DestinationString.Length;
LABEL_21:
    if ( RtlInitUnicodeStringEx(&DestinationString, Path) >= 0 )
    {
      v17 = DestinationString.Length;
      if ( RtlInitUnicodeStringEx(&DestinationString, FileName) >= 0 )
      {
        v18 = DestinationString.Length;
        Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v17 + DestinationString.Length + Length + 6LL);
        if ( Heap )
        {
          v20 = v18;
          while ( 1 )
          {
            v21 = *Path;
            v14 = Heap;
            if ( *Path )
            {
              do
              {
                ++Path;
                if ( v21 == 59 )
                  break;
                *v14++ = v21;
                v21 = *Path;
              }
              while ( *Path );
              if ( v14 != Heap && *(v14 - 1) != 92 )
                *v14++ = 92;
            }
            Path = (PCWSTR)(-(__int64)(*Path != 0) & (unsigned __int64)Path);
            memmove(v14, FileName, v20);
            if ( Length )
              memmove((char *)v14 + v20, Extension, Length + 2LL);
            else
              *(WCHAR *)((char *)v14 + v20) = 0;
            if ( sub_180058280(Heap, 0) )
              break;
            if ( !Path )
              goto LABEL_18;
          }
          if ( RtlGetFullPathName_UEx(Heap, BufferLength, Buffer, FilePart, &v23) >= 0 )
            v13 = v23;
LABEL_18:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
          return v13;
        }
      }
    }
  }
  else
  {
    v13 = 0;
    if ( sub_180058280(FileName, 1) )
    {
      if ( RtlGetFullPathName_UEx(FileName, BufferLength, Buffer, FilePart, &BytesRequired) >= 0 )
        return BytesRequired;
      return v13;
    }
  }
  return 0;
}
