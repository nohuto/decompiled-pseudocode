/*
 * XREFs of sub_1800D00B4 @ 0x1800D00B4
 * Callers:
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18004AEE4 @ 0x18004AEE4 (sub_18004AEE4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800CFFE8 @ 0x1800CFFE8 (sub_1800CFFE8.c)
 */

__int64 __fastcall sub_1800D00B4(__int64 a1, void *a2, void *a3)
{
  unsigned int v4; // edi
  WCHAR *v5; // rbx
  __int64 v6; // rax
  WCHAR *v7; // rsi
  WCHAR v8; // ax
  const WCHAR *v9; // rdx
  const char *v10; // rax
  __int64 v12; // [rsp+30h] [rbp-258h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-248h] BYREF
  WCHAR SourceString[256]; // [rsp+50h] [rbp-238h] BYREF

  SourceString[0] = 0;
  if ( sub_18004AEE4(a2, a3, L"VerifierActivationFilter", 1u, SourceString, 0x200u, v12, 0LL) < 0 )
  {
    return 1;
  }
  else
  {
    if ( (dword_180156A70 & 5) != 0 )
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6954,
        (unsigned int)"LdrpIsVerifierActivationFilterMatched",
        2,
        "VerifierActivationFilter found, contents = \"%ws\"\n",
        SourceString);
    v4 = 0;
    if ( SourceString[0] == 42 || !SourceString[0] )
    {
      v4 = 1;
    }
    else
    {
      v5 = SourceString;
      v6 = -1LL;
      do
        ++v6;
      while ( SourceString[v6] );
      v7 = &SourceString[v6];
      do
      {
        if ( v5 >= v7 )
          break;
        while ( 1 )
        {
          v8 = *v5;
          if ( *v5 != 32 && v8 != 9 )
            break;
          ++v5;
        }
        v9 = v5;
        if ( !v8 )
          break;
        do
        {
          if ( v8 == 32 )
            break;
          if ( v8 == 9 )
            break;
          v8 = *++v5;
        }
        while ( *v5 );
        if ( v9 == v5 )
          break;
        *v5 = 0;
        RtlInitUnicodeString(&DestinationString, v9);
        if ( (unsigned int)sub_1800CFFE8((unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 112LL), &DestinationString.Length) )
          v4 = 1;
        ++v5;
      }
      while ( !v4 );
    }
    if ( (dword_180156A70 & 5) != 0 )
    {
      v10 = (const char *)&dword_180114112;
      if ( !v4 )
        v10 = "not ";
      sub_1800CA554(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        7008,
        (unsigned int)"LdrpIsVerifierActivationFilterMatched",
        2,
        "VerifierActivationFilter match %sfound.\n",
        v10);
    }
  }
  return v4;
}
