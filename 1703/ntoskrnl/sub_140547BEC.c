/*
 * XREFs of sub_140547BEC @ 0x140547BEC
 * Callers:
 *     WbReEncryptEncryptionSegment @ 0x1405498C0 (WbReEncryptEncryptionSegment.c)
 * Callees:
 *     sub_140547C50 @ 0x140547C50 (sub_140547C50.c)
 */

__int64 __fastcall sub_140547BEC(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // edi

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    v4 = v3 - 1;
    *(_QWORD *)(a1 + 56) = v4;
    if ( !v4 )
    {
      v5 = *(_DWORD *)(a1 + 64);
      while ( --v5 >= 0 )
      {
        v2 = sub_140547C50(a1, *(_QWORD *)(a1 + 48) + 4 * (3LL * v5 + 61));
        if ( v2 < 0 )
          break;
        --*(_DWORD *)(a1 + 64);
      }
    }
  }
  return (unsigned int)v2;
}
