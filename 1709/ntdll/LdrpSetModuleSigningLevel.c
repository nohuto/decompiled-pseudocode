/*
 * XREFs of LdrpSetModuleSigningLevel @ 0x180089C58
 * Callers:
 *     LdrpValidateIntegrityContinuity @ 0x180088068 (LdrpValidateIntegrityContinuity.c)
 * Callees:
 *     NtGetCachedSigningLevel @ 0x1800A1DB0 (NtGetCachedSigningLevel.c)
 *     ZwSetCachedSigningLevel @ 0x1800A3090 (ZwSetCachedSigningLevel.c)
 */

__int64 __fastcall LdrpSetModuleSigningLevel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v5; // rsi
  _BYTE *v6; // rbx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = a1;
  v5 = a2 + 284;
  v6 = a5;
  *a5 = 0;
  result = NtGetCachedSigningLevel(a1, a3, a2 + 284, 0LL, 0LL, 0LL);
  if ( (int)result < 0 )
  {
    LOBYTE(v9) = 12;
    result = ZwSetCachedSigningLevel(4LL, v9, &v10);
    if ( (int)result < 0 )
      *v6 = 1;
    else
      return NtGetCachedSigningLevel(v10, a3, v5, 0LL, 0LL, 0LL);
  }
  return result;
}
