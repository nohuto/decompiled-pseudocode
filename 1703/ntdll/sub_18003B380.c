/*
 * XREFs of sub_18003B380 @ 0x18003B380
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x18003B180 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     sub_18008E2C4 @ 0x18008E2C4 (sub_18008E2C4.c)
 *     _wcsnicmp @ 0x1800977C0 (_wcsnicmp.c)
 */

__int64 __fastcall sub_18003B380(wchar_t *String1, size_t MaxCount, __int64 a3, __int64 a4, __int64 a5)
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
    if ( MaxCount > *((_QWORD *)&unk_180110310 + 3 * v11) )
      break;
    if ( MaxCount == *((_QWORD *)&unk_180110310 + 3 * v11)
      && !wcsnicmp(String1, *((const wchar_t **)&unk_180110310 + 3 * v11 + 1), MaxCount) )
    {
      return (unsigned int)sub_18008E2C4(*((unsigned int *)&unk_180110310 + 2 * v12 + 4), a3, a4, a5);
    }
  }
  return v9;
}
