/*
 * XREFs of RtlpWow64ThunkEnvironment32To64 @ 0x180052F34
 * Callers:
 *     RtlpInitEnvironmentBlock @ 0x18006B51C (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlQueryEnvironmentVariable_U @ 0x18004C800 (RtlQueryEnvironmentVariable_U.c)
 *     RtlSetEnvironmentVariable @ 0x18004D250 (RtlSetEnvironmentVariable.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

__int64 RtlpWow64ThunkEnvironment32To64()
{
  PCWSTR *v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-258h] BYREF
  char *v4; // [rsp+28h] [rbp-250h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-248h] BYREF
  UNICODE_STRING v6; // [rsp+40h] [rbp-238h] BYREF
  char v7; // [rsp+50h] [rbp-228h] BYREF

  v0 = (PCWSTR *)&unk_180113C10;
  v1 = 3LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(v0 - 2));
    v3 = 34078720;
    v4 = &v7;
    result = RtlQueryEnvironmentVariable_U(0LL, (wchar_t **)&DestinationString, (__int64)&v3);
    if ( (int)result >= 0 )
    {
      if ( !*(_BYTE *)v0 )
        RtlSetEnvironmentVariable(0LL, &DestinationString.Length, 0LL);
      RtlInitUnicodeString(&v6, *(v0 - 4));
      result = RtlSetEnvironmentVariable(0LL, &v6.Length, (unsigned __int16 *)&v3);
    }
    v0 += 5;
    --v1;
  }
  while ( v1 );
  return result;
}
