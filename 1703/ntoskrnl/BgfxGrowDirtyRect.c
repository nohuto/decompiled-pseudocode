/*
 * XREFs of BgfxGrowDirtyRect @ 0x14015F0AC
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x140140AAC (GxpWriteFrameBufferPixels.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 */

void __fastcall BgfxGrowDirtyRect(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  _DWORD *v6; // r10
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // edx

  KxAcquireSpinLock(*((PKSPIN_LOCK *)&xmmword_140341B90 + 1));
  v6 = a2;
  if ( *(_DWORD *)xmmword_140341B90 <= *a2 )
    v6 = (_DWORD *)xmmword_140341B90;
  *(_DWORD *)xmmword_140341B90 = *v6;
  v7 = *a1 / a3 + *a2;
  if ( *(_DWORD *)(xmmword_140341B90 + 4) >= v7 )
    v7 = *(_DWORD *)(xmmword_140341B90 + 4);
  *(_DWORD *)(xmmword_140341B90 + 4) = v7;
  v8 = a2[1];
  if ( *(_DWORD *)(xmmword_140341B90 + 8) <= v8 )
    v8 = *(_DWORD *)(xmmword_140341B90 + 8);
  *(_DWORD *)(xmmword_140341B90 + 8) = v8;
  v9 = a2[1] + a1[1];
  if ( *(_DWORD *)(xmmword_140341B90 + 12) >= v9 )
    v9 = *(_DWORD *)(xmmword_140341B90 + 12);
  *(_DWORD *)(xmmword_140341B90 + 12) = v9;
  ++*(_DWORD *)qword_140341B80;
  KxReleaseSpinLock(*((PKSPIN_LOCK *)&xmmword_140341B90 + 1));
}
