/*
 * XREFs of sub_1800D781C @ 0x1800D781C
 * Callers:
 *     sub_1800912E0 @ 0x1800912E0 (sub_1800912E0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18007C1E0 @ 0x18007C1E0 (sub_18007C1E0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800D7750 @ 0x1800D7750 (sub_1800D7750.c)
 */

__int64 __fastcall sub_1800D781C(__int64 a1, void *a2, void *a3)
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
  if ( sub_18007C1E0(a2, a3, L"VerifierActivationFilter", 1u, SourceString, 0x200u, v12, 0LL) < 0 )
  {
    return 1;
  }
  else
  {
    if ( (dword_180155A10 & 5) != 0 )
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6951,
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
        while ( *v5 == 32 || *v5 == 9 )
          ++v5;
        v8 = *v5;
        v9 = v5;
        if ( !*v5 )
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
        if ( (unsigned int)sub_1800D7750((unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 112LL), &DestinationString.Length) )
          v4 = 1;
        ++v5;
      }
      while ( !v4 );
    }
    if ( (dword_180155A10 & 5) != 0 )
    {
      v10 = (const char *)&dword_1801150C2;
      if ( !v4 )
        v10 = "not ";
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        7005,
        (unsigned int)"LdrpIsVerifierActivationFilterMatched",
        2,
        "VerifierActivationFilter match %sfound.\n",
        v10);
    }
  }
  return v4;
}
