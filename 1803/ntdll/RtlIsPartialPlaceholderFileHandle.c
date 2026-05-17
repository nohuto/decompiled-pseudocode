/*
 * XREFs of RtlIsPartialPlaceholderFileHandle @ 0x1800F4750
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationFile @ 0x18009ACE0 (ZwQueryInformationFile.c)
 */

__int64 __fastcall RtlIsPartialPlaceholderFileHandle(__int64 a1, bool *a2)
{
  __int64 result; // rax
  _BYTE v4[3]; // [rsp+60h] [rbp+18h]

  result = ZwQueryInformationFile();
  if ( (int)result >= 0 )
  {
    *a2 = (*(_DWORD *)v4 & 0x440000) != 0;
  }
  else
  {
    if ( (_DWORD)result != -1073741811 )
      return result;
    *a2 = 0;
  }
  return 0LL;
}
