/*
 * XREFs of AslPathToSystemPath @ 0x14072F0D8
 * Callers:
 *     SdbGetAppPatchDirEx @ 0x14072D598 (SdbGetAppPatchDirEx.c)
 * Callees:
 *     AslPathToSystemPath_Ustr @ 0x14072F104 (AslPathToSystemPath_Ustr.c)
 */

__int64 __fastcall AslPathToSystemPath(wchar_t **a1, const wchar_t *a2)
{
  __int64 result; // rax
  wchar_t *Buffer; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  result = AslPathToSystemPath_Ustr(&DestinationString, a2);
  Buffer = 0LL;
  if ( (int)result >= 0 )
    Buffer = DestinationString.Buffer;
  *a1 = Buffer;
  return result;
}
