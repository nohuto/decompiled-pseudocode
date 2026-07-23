/*
 * XREFs of sub_18004BC58 @ 0x18004BC58
 * Callers:
 *     sub_18004B9A4 @ 0x18004B9A4 (sub_18004B9A4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004BD30 (RtlQueryEnvironmentVariable_U.c)
 *     RtlSetEnvironmentVariable @ 0x18004BDA0 (RtlSetEnvironmentVariable.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

NTSTATUS sub_18004BC58()
{
  PCWSTR *v0; // rbx
  __int64 v1; // rdi
  NTSTATUS result; // eax
  _UNICODE_STRING Value; // [rsp+20h] [rbp-258h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-248h] BYREF
  _UNICODE_STRING Name; // [rsp+40h] [rbp-238h] BYREF
  char v6; // [rsp+50h] [rbp-228h] BYREF

  v0 = (PCWSTR *)&unk_180110CE0;
  v1 = 3LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(v0 - 2));
    *(_DWORD *)&Value.Length = 34078720;
    Value.Buffer = (PWCH)&v6;
    result = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, &Value);
    if ( result >= 0 )
    {
      if ( !*(_BYTE *)v0 )
        RtlSetEnvironmentVariable(0LL, &DestinationString, 0LL);
      RtlInitUnicodeString(&Name, *(v0 - 4));
      result = RtlSetEnvironmentVariable(0LL, &Name, &Value);
    }
    v0 += 5;
    --v1;
  }
  while ( v1 );
  return result;
}
