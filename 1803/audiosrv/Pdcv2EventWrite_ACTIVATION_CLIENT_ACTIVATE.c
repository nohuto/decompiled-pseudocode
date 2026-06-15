/*
 * XREFs of Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE @ 0x18010CB68
 * Callers:
 *     Pdcv2ActivationClientActivate @ 0x180029C80 (Pdcv2ActivationClientActivate.c)
 * Callees:
 *     McTemplateU0qqzr1qzr3qqqqpqqzr11 @ 0x180005E50 (McTemplateU0qqzr1qzr3qqqqpqqzr11.c)
 */

const WCHAR *__fastcall Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE(__int64 a1, _DWORD *a2, char a3)
{
  int v3; // r11d
  const WCHAR *result; // rax
  int v6; // ebp
  int v7; // r8d
  int v8; // esi
  const WCHAR *v9; // rbx
  const WCHAR *v10; // rdi
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rdx
  int v14; // [rsp+60h] [rbp-38h]

  LOBYTE(v3) = -1;
  result = &word_180133238;
  LOBYTE(v6) = -1;
  v7 = -1;
  LOBYTE(v8) = -1;
  v9 = &word_180133238;
  v10 = &word_180133238;
  if ( a2 )
  {
    v7 = a2[6];
    result = (const WCHAR *)(a2 + 23);
    v6 = a2[55];
    v3 = a2[56];
  }
  if ( a1 )
  {
    v8 = *(_DWORD *)(a1 + 52);
    v10 = (const WCHAR *)(a1 + 72);
    v9 = (const WCHAR *)(a1 + 328);
  }
  if ( (Microsoft_Windows_PDCEnableBits & 0x200000) != 0 )
  {
    v11 = -1LL;
    v12 = -1LL;
    do
      ++v12;
    while ( result[v12] );
    v13 = -1LL;
    do
      ++v13;
    while ( v9[v13] );
    do
      ++v11;
    while ( v10[v11] );
    return (const WCHAR *)McTemplateU0qqzr1qzr3qqqqpqqzr11(
                            a1,
                            v13,
                            v7,
                            v11,
                            (__int64)v10,
                            v13,
                            (__int64)v9,
                            v3,
                            v6,
                            v8,
                            a3,
                            a1,
                            v14,
                            v12,
                            (__int64)result);
  }
  return result;
}
