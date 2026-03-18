/*
 * XREFs of ?IsLastTopMostWindow@@YAHPEBUtagWND@@@Z @ 0x1C0121908
 * Callers:
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C00572C0 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsLastTopMostWindow(const struct tagWND *a1)
{
  unsigned int v1; // edx
  __int64 v3; // rax

  v1 = 0;
  if ( (*((_BYTE *)a1 + 64) & 8) != 0 )
  {
    v3 = *((_QWORD *)a1 + 11);
    if ( v3 )
      return (*(_BYTE *)(v3 + 64) & 8) == 0;
  }
  return v1;
}
