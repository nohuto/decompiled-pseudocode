/*
 * XREFs of MakeSystemRelativePath @ 0x1C02B81D8
 * Callers:
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C0269C38 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     ?EngCreateFile@@YAPEAXPEBG@Z @ 0x1C027F340 (-EngCreateFile@@YAPEAXPEBG@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 */

__int64 __fastcall MakeSystemRelativePath(PCWSTR Source, PUNICODE_STRING Destination)
{
  __int64 v2; // rbx
  const WCHAR *v4; // rdi
  __int64 result; // rax
  const wchar_t *i; // rbx

  v2 = -1LL;
  v4 = Source;
  do
    ++v2;
  while ( Source[v2] );
  Destination->Length = 0;
  Destination->MaximumLength = 2 * v2 + 44;
  result = (__int64)PALLOCMEM2((unsigned int)(2 * v2 + 44), 1818838599LL, 0);
  Destination->Buffer = (PWSTR)result;
  if ( result )
  {
    for ( i = &v4[(unsigned int)v2 - 10]; i >= v4; --i )
    {
      if ( !_wcsnicmp(i, L"\\system32\\", 0xAuLL) )
      {
        v4 = i + 10;
        break;
      }
    }
    RtlAppendUnicodeToString(Destination, L"\\SystemRoot\\System32\\");
    RtlAppendUnicodeToString(Destination, v4);
    return 1LL;
  }
  return result;
}
