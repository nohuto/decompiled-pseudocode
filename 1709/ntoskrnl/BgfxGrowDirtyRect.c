/*
 * XREFs of BgfxGrowDirtyRect @ 0x14013C09C
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x14013BD50 (GxpWriteFrameBufferPixels.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 */

void __fastcall BgfxGrowDirtyRect(unsigned int *a1, int *a2, unsigned int a3)
{
  int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // edx

  KxAcquireSpinLock(*((PKSPIN_LOCK *)&xmmword_14035A310 + 1));
  v6 = *a2;
  if ( *(_DWORD *)xmmword_14035A310 <= (unsigned int)*a2 )
    v6 = *(_DWORD *)xmmword_14035A310;
  v7 = *a1;
  *(_DWORD *)xmmword_14035A310 = v6;
  v8 = v7 / a3 + *a2;
  if ( *(_DWORD *)(xmmword_14035A310 + 4) >= v8 )
    v8 = *(_DWORD *)(xmmword_14035A310 + 4);
  *(_DWORD *)(xmmword_14035A310 + 4) = v8;
  v9 = a2[1];
  if ( *(_DWORD *)(xmmword_14035A310 + 8) <= v9 )
    v9 = *(_DWORD *)(xmmword_14035A310 + 8);
  *(_DWORD *)(xmmword_14035A310 + 8) = v9;
  v10 = a2[1] + a1[1];
  if ( *(_DWORD *)(xmmword_14035A310 + 12) >= v10 )
    v10 = *(_DWORD *)(xmmword_14035A310 + 12);
  *(_DWORD *)(xmmword_14035A310 + 12) = v10;
  ++*(_DWORD *)qword_14035A300;
  KxReleaseSpinLock(*((PKSPIN_LOCK *)&xmmword_14035A310 + 1));
}
