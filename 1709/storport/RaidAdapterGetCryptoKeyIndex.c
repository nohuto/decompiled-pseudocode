/*
 * XREFs of RaidAdapterGetCryptoKeyIndex @ 0x1C002D2F8
 * Callers:
 *     RaidAdapterAcquireCryptoKeyResources @ 0x1C002C590 (RaidAdapterAcquireCryptoKeyResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterGetCryptoKeyIndex(__int64 a1, const void *a2, char a3)
{
  unsigned int i; // ebx
  unsigned __int64 v7; // rcx
  int v8; // eax

  for ( i = 0; i < *(_DWORD *)(a1 + 5704); ++i )
  {
    v7 = *(_QWORD *)(a1 + 5712) + ((unsigned __int64)i << 6);
    v8 = *(_DWORD *)(v7 + 44);
    if ( (v8 == 2 || a3 && v8 == 1) && RtlCompareMemory((const void *)(v7 + 4), a2, 0x20uLL) == 32 )
      break;
  }
  return i;
}
