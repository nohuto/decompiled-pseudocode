/*
 * XREFs of sub_14048A6C0 @ 0x14048A6C0
 * Callers:
 *     WbDecryptEncryptionSegment @ 0x14048A06C (WbDecryptEncryptionSegment.c)
 * Callees:
 *     WbDecryptWarbirdEncryptionSegmentBlock @ 0x14048A758 (WbDecryptWarbirdEncryptionSegmentBlock.c)
 */

__int64 __fastcall sub_14048A6C0(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  unsigned int v7; // eax
  int v8; // esi

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 != -1 )
  {
    v4 = v3 + 1;
    *(_QWORD *)(a1 + 56) = v4;
    if ( v4 == 1 )
    {
      v5 = *(_QWORD *)(a1 + 48);
      v6 = *(_DWORD *)(a1 + 64);
      if ( v6 < *(_DWORD *)(v5 + 240) )
      {
        v7 = *(_DWORD *)(a1 + 68);
        do
        {
          v8 = v6 >= v7;
          v2 = WbDecryptWarbirdEncryptionSegmentBlock(a1, v6 >= v7, v5 + 4 * (v6 + 2LL * v6 + 61));
          if ( v2 < 0 )
            break;
          *(_DWORD *)(a1 + 68) += v8;
          ++v6;
          ++*(_DWORD *)(a1 + 64);
          v5 = *(_QWORD *)(a1 + 48);
          v7 = *(_DWORD *)(a1 + 68);
        }
        while ( v6 < *(_DWORD *)(v5 + 240) );
      }
    }
  }
  return (unsigned int)v2;
}
