/*
 * XREFs of SepModifyTokenPolicyCounter @ 0x1406F0E4C
 * Callers:
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     SepTokenDeleteMethod @ 0x14051E5E0 (SepTokenDeleteMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepModifyTokenPolicyCounter(__int64 a1, char a2)
{
  volatile signed __int32 *v2; // r10
  bool v3; // cf
  int v4; // r11d
  unsigned __int16 *v5; // rdx
  int v6; // r8d
  __int64 v7; // rsi
  char v8; // bl
  unsigned __int16 v9; // r9
  __int64 result; // rax

  v2 = SepTokenPolicyCounterByCategory;
  v3 = a2 != 0;
  v4 = 0;
  v5 = AdtpPerCategoryCount;
  v6 = v3 ? 2 : 0;
  v7 = 9LL;
  do
  {
    v8 = 0;
    v9 = 0;
    if ( *v5 )
    {
      do
      {
        if ( ((*(_BYTE *)(((unsigned __int64)(v4 + (unsigned int)v9) >> 1) + a1) >> (4 * ((v4 + v9) & 1))) & 0xF) != 0 )
        {
          _InterlockedExchangeAdd(&SepTokenPolicyCounter[v4 + v9], v6 - 1);
          v8 = 1;
        }
        ++v9;
      }
      while ( v9 < *v5 );
      if ( v8 )
        _InterlockedExchangeAdd(v2, v6 - 1);
    }
    result = *v5;
    ++v2;
    v4 += result;
    ++v5;
    --v7;
  }
  while ( v7 );
  return result;
}
