/*
 * XREFs of sub_1405479B8 @ 0x1405479B8
 * Callers:
 *     WbDecryptEncryptionSegment @ 0x140549E54 (WbDecryptEncryptionSegment.c)
 * Callees:
 *     sub_140547A4C @ 0x140547A4C (sub_140547A4C.c)
 */

__int64 __fastcall sub_1405479B8(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 v4; // rax
  unsigned int i; // edi
  int v6; // esi

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 0;
  if ( v1 != -1 )
  {
    v4 = v1 + 1;
    *(_QWORD *)(a1 + 56) = v4;
    if ( v4 == 1 )
    {
      for ( i = *(_DWORD *)(a1 + 64); i < *(_DWORD *)(*(_QWORD *)(a1 + 48) + 240LL); *(_DWORD *)(a1 + 68) += v6 )
      {
        v6 = i >= *(_DWORD *)(a1 + 68);
        v2 = sub_140547A4C(a1, i >= *(_DWORD *)(a1 + 68), *(_QWORD *)(a1 + 48) + 4 * (3LL * i + 61));
        if ( v2 < 0 )
          break;
        ++*(_DWORD *)(a1 + 64);
        ++i;
      }
    }
  }
  return (unsigned int)v2;
}
