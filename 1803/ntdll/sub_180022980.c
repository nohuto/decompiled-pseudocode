/*
 * XREFs of sub_180022980 @ 0x180022980
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x180022780 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     sub_18008781C @ 0x18008781C (sub_18008781C.c)
 *     _wcsnicmp @ 0x18008CC10 (_wcsnicmp.c)
 */

__int64 __fastcall sub_180022980(wchar_t *String1, size_t MaxCount, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v9; // edi
  int i; // ebx
  __int64 v11; // rax
  __int64 v12; // rbp

  v9 = -1073741568;
  for ( i = 4; i; --i )
  {
    v11 = (unsigned int)(i - 1);
    v12 = 3 * v11;
    if ( MaxCount > *((_QWORD *)&unk_1801100D0 + 3 * v11) )
      break;
    if ( MaxCount == *((_QWORD *)&unk_1801100D0 + 3 * v11)
      && !wcsnicmp(String1, *((const wchar_t **)&unk_1801100D0 + 3 * v11 + 1), MaxCount) )
    {
      return (unsigned int)sub_18008781C(*((unsigned int *)&unk_1801100D0 + 2 * v12 + 4), a3, a4, a5);
    }
  }
  return v9;
}
