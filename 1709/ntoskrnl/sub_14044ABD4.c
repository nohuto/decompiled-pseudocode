/*
 * XREFs of sub_14044ABD4 @ 0x14044ABD4
 * Callers:
 *     WbReEncryptEncryptionSegment @ 0x14044A418 (WbReEncryptEncryptionSegment.c)
 * Callees:
 *     sub_14044AC38 @ 0x14044AC38 (sub_14044AC38.c)
 */

__int64 __fastcall sub_14044ABD4(__int64 a1)
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
        v2 = sub_14044AC38(a1, *(_QWORD *)(a1 + 48) + 4 * (3LL * v5 + 61));
        if ( v2 < 0 )
          break;
        --*(_DWORD *)(a1 + 64);
      }
    }
  }
  return (unsigned int)v2;
}
