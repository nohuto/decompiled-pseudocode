/*
 * XREFs of sub_1800E18A4 @ 0x1800E18A4
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180036E50 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_18003D6A4 @ 0x18003D6A4 (sub_18003D6A4.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlReleaseRelativeName @ 0x180055120 (RtlReleaseRelativeName.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenFile @ 0x1800A5960 (ZwOpenFile.c)
 *     ZwQueryDirectoryFile @ 0x1800A59A0 (ZwQueryDirectoryFile.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_1800E18A4(PCWSTR SourceString, PCWSTR a2, _QWORD *a3)
{
  wchar_t *Buffer; // rdi
  int DirectoryFile; // ebx
  unsigned __int64 Heap; // rdi
  unsigned int v8; // eax
  _WORD *v9; // rax
  _WORD *v10; // rsi
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-39h] BYREF
  UNICODE_STRING v13; // [rsp+78h] [rbp-29h] BYREF
  UNICODE_STRING v14; // [rsp+98h] [rbp-9h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+7h]
  int v16; // [rsp+B8h] [rbp+17h]
  __int64 v17; // [rsp+C0h] [rbp+1Fh]
  UNICODE_STRING *p_DestinationString; // [rsp+C8h] [rbp+27h]
  int v19; // [rsp+D0h] [rbp+2Fh]
  __int128 v20; // [rsp+D8h] [rbp+37h]

  Buffer = 0LL;
  if ( SourceString && a2 && a3 )
  {
    if ( *SourceString == 92 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
    }
    else
    {
      DirectoryFile = sub_18003D6A4(
                        (__int64)SourceString,
                        1,
                        (__int64)SourceString,
                        (__int64)&DestinationString,
                        0LL,
                        (__int64)&v14);
      if ( DirectoryFile < 0 )
        return (unsigned int)DirectoryFile;
      Buffer = DestinationString.Buffer;
      if ( v14.Length )
        DestinationString = v14;
      else
        v15 = 0LL;
    }
    p_DestinationString = &DestinationString;
    v16 = 48;
    v17 = 0LL;
    v19 = 64;
    v20 = 0LL;
    DirectoryFile = ZwOpenFile();
    if ( Buffer )
    {
      RtlReleaseRelativeName((__int64)&v14);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Buffer);
    }
    if ( DirectoryFile >= 0 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 1040LL);
      if ( Heap )
      {
        RtlInitUnicodeString(&v13, a2);
        DirectoryFile = ZwQueryDirectoryFile();
        if ( DirectoryFile >= 0 )
        {
          v8 = *(_DWORD *)(Heap + 60);
          if ( v8 <= 0x104 )
          {
            v9 = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v8 + 4);
            v10 = v9;
            if ( v9 )
            {
              memmove(v9, (const void *)(Heap + 94), *(unsigned int *)(Heap + 60));
              v10[(unsigned __int64)*(unsigned int *)(Heap + 60) >> 1] = 0;
              *a3 = v10;
            }
            else
            {
              DirectoryFile = -1073741801;
            }
          }
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    return (unsigned int)DirectoryFile;
  }
  return 3221225485LL;
}
