/*
 * XREFs of sub_18008BF68 @ 0x18008BF68
 * Callers:
 *     sub_180089560 @ 0x180089560 (sub_180089560.c)
 * Callees:
 *     ZwGetCachedSigningLevel @ 0x1800A6FD0 (ZwGetCachedSigningLevel.c)
 *     ZwSetCachedSigningLevel @ 0x1800A8270 (ZwSetCachedSigningLevel.c)
 */

__int64 __fastcall sub_18008BF68(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rbx
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  v3 = (_BYTE *)(a2 + 284);
  result = ZwGetCachedSigningLevel(a1, a3, a2 + 284, 0LL, 0LL, 0LL);
  if ( (int)result < 0 )
  {
    result = ZwSetCachedSigningLevel(4LL, 0LL, &v6, 1LL, v6);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result == -1073740760 )
        *v3 = 1;
    }
    else
    {
      return ZwGetCachedSigningLevel(v6, a3, v3, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
