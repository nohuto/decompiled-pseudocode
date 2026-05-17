/*
 * XREFs of sub_180062CC4 @ 0x180062CC4
 * Callers:
 *     sub_180062A14 @ 0x180062A14 (sub_180062A14.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180062DA0 (RtlQueryEnvironmentVariable_U.c)
 *     RtlSetEnvironmentVariable @ 0x180062E10 (RtlSetEnvironmentVariable.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 sub_180062CC4()
{
  PCWSTR *v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-258h] BYREF
  char *v4; // [rsp+28h] [rbp-250h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-248h] BYREF
  UNICODE_STRING v6; // [rsp+40h] [rbp-238h] BYREF
  char v7; // [rsp+50h] [rbp-228h] BYREF

  v0 = (PCWSTR *)&unk_180110E60;
  v1 = 3LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(v0 - 2));
    v3 = 34078720;
    v4 = &v7;
    result = RtlQueryEnvironmentVariable_U(0LL, &DestinationString, &v3);
    if ( (int)result >= 0 )
    {
      if ( !*(_BYTE *)v0 )
        RtlSetEnvironmentVariable(0LL, &DestinationString, 0LL);
      RtlInitUnicodeString(&v6, *(v0 - 4));
      result = RtlSetEnvironmentVariable(0LL, &v6, &v3);
    }
    v0 += 5;
    --v1;
  }
  while ( v1 );
  return result;
}
