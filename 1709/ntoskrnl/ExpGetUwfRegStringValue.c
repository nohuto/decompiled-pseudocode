/*
 * XREFs of ExpGetUwfRegStringValue @ 0x1402837A8
 * Callers:
 *     ExpGetSystemWriteConstraintInformation @ 0x1407544A4 (ExpGetSystemWriteConstraintInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 */

__int64 __fastcall ExpGetUwfRegStringValue(void *a1, __int64 a2, UNICODE_STRING *a3)
{
  NTSTATUS ValueKey; // ebx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+40h] [rbp-78h] BYREF
  int v8; // [rsp+44h] [rbp-74h]
  unsigned int v9; // [rsp+48h] [rbp-70h]
  WCHAR SourceString[42]; // [rsp+4Ch] [rbp-6Ch] BYREF

  ResultLength[0] = 0;
  ValueKey = ZwQueryValueKey(
               a1,
               (PUNICODE_STRING)&stru_14078D3F8,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x60u,
               ResultLength);
  if ( ValueKey >= 0 )
  {
    if ( v8 == 1 )
    {
      if ( v9 <= a3->MaximumLength )
        RtlInitUnicodeString(a3, SourceString);
      else
        return (unsigned int)-2147483643;
    }
    else
    {
      return (unsigned int)-1073741788;
    }
  }
  return (unsigned int)ValueKey;
}
