/*
 * XREFs of sub_180046DAC @ 0x180046DAC
 * Callers:
 *     sub_180046D4C @ 0x180046D4C (sub_180046D4C.c)
 *     sub_18004A35C @ 0x18004A35C (sub_18004A35C.c)
 *     sub_1800EC2E0 @ 0x1800EC2E0 (sub_1800EC2E0.c)
 *     sub_1800FC140 @ 0x1800FC140 (sub_1800FC140.c)
 *     sub_1800FCF8C @ 0x1800FCF8C (sub_1800FCF8C.c)
 * Callees:
 *     _wcsicmp @ 0x1800976A0 (_wcsicmp.c)
 */

char __fastcall sub_180046DAC(wchar_t *String1, wchar_t *String2)
{
  char v2; // bl
  const wchar_t *v4; // rdi
  __int64 v5; // rax

  v2 = 0;
  v4 = String1;
  if ( String1 && String2 )
  {
    while ( *v4 )
    {
      if ( !wcsicmp(v4, String2) )
        return 1;
      v5 = -1LL;
      do
        ++v5;
      while ( v4[v5] );
      v4 += v5 + 1;
      if ( !v4 )
        return v2;
    }
  }
  return v2;
}
