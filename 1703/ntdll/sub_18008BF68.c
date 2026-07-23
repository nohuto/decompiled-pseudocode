/*
 * XREFs of sub_18008BF68 @ 0x18008BF68
 * Callers:
 *     sub_180089560 @ 0x180089560 (sub_180089560.c)
 * Callees:
 *     ZwGetCachedSigningLevel @ 0x1800A6FD0 (ZwGetCachedSigningLevel.c)
 *     ZwSetCachedSigningLevel @ 0x1800A8270 (ZwSetCachedSigningLevel.c)
 */

int __fastcall sub_18008BF68(void *a1, __int64 a2, ULONG *a3)
{
  BYTE *v3; // rbx
  int result; // eax
  HANDLE SourceFiles; // [rsp+40h] [rbp+8h] BYREF

  SourceFiles = a1;
  v3 = (BYTE *)(a2 + 284);
  result = ZwGetCachedSigningLevel(a1, a3, (PSE_SIGNING_LEVEL)(a2 + 284), 0LL, 0LL, 0LL);
  if ( result < 0 )
  {
    result = ZwSetCachedSigningLevel(4u, 0, &SourceFiles, 1u, SourceFiles);
    if ( result < 0 )
    {
      if ( result == -1073740760 )
        *v3 = 1;
    }
    else
    {
      return ZwGetCachedSigningLevel(SourceFiles, a3, v3, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
