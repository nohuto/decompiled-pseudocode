/*
 * XREFs of LdrpSetModuleSigningLevel @ 0x180089C58
 * Callers:
 *     LdrpValidateIntegrityContinuity @ 0x180088068 (LdrpValidateIntegrityContinuity.c)
 * Callees:
 *     NtGetCachedSigningLevel @ 0x1800A1DB0 (NtGetCachedSigningLevel.c)
 *     ZwSetCachedSigningLevel @ 0x1800A3090 (ZwSetCachedSigningLevel.c)
 */

int __fastcall LdrpSetModuleSigningLevel(void *a1, __int64 a2, ULONG *a3, __int64 a4, _BYTE *a5)
{
  BYTE *v5; // rsi
  _BYTE *v6; // rbx
  int result; // eax
  HANDLE SourceFiles; // [rsp+40h] [rbp+8h] BYREF

  SourceFiles = a1;
  v5 = (BYTE *)(a2 + 284);
  v6 = a5;
  *a5 = 0;
  result = NtGetCachedSigningLevel(a1, a3, (PSE_SIGNING_LEVEL)(a2 + 284), 0LL, 0LL, 0LL);
  if ( result < 0 )
  {
    result = ZwSetCachedSigningLevel(4u, 0xCu, &SourceFiles, 1u, SourceFiles);
    if ( result < 0 )
      *v6 = 1;
    else
      return NtGetCachedSigningLevel(SourceFiles, a3, v5, 0LL, 0LL, 0LL);
  }
  return result;
}
