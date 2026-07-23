/*
 * XREFs of RtlQueryValidationRunlevel @ 0x14028E570
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 */

ULONG __cdecl RtlQueryValidationRunlevel(PUNICODE_STRING ComponentName)
{
  int v1; // ebx
  int v3; // edi
  HANDLE KeyHandle; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+44h] [rbp-24h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000258];
  if ( ComponentName
    && MEMORY[0xFFFFF78000000258] != -1
    && ZwOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(
           KeyHandle,
           ComponentName,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v8 == 4
      && v9 == 4 )
    {
      v1 = v10;
    }
    NtClose(KeyHandle);
  }
  return v1 | v3;
}
