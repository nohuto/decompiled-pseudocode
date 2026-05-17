/*
 * XREFs of RtlIsPartialPlaceholderFileHandle @ 0x1800F82B0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryInformationFile @ 0x1800A02E0 (NtQueryInformationFile.c)
 */

__int64 __fastcall RtlIsPartialPlaceholderFileHandle(__int64 a1, bool *a2)
{
  __int64 result; // rax
  _BYTE v4[3]; // [rsp+60h] [rbp+18h]

  result = NtQueryInformationFile();
  if ( (int)result >= 0 )
  {
    *a2 = (*(_DWORD *)v4 & 0x440000) != 0;
    return 0LL;
  }
  return result;
}
