/*
 * XREFs of RaidAdapterGetCryptoKeyIndex @ 0x1C002C394
 * Callers:
 *     RaidAdapterAcquireCryptoKeyResources @ 0x1C002B8A0 (RaidAdapterAcquireCryptoKeyResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetCryptoKeyIndex(__int64 a1, const void *a2)
{
  __int64 i; // rbx
  __int64 v5; // rcx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 5704); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(a1 + 5712) + 48 * i;
    if ( *(_BYTE *)(v5 + 44) && RtlCompareMemory((const void *)(v5 + 4), a2, 0x20uLL) == 32 )
      break;
  }
  return (unsigned int)i;
}
