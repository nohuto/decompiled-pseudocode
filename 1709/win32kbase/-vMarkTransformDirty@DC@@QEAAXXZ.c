/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C00ED900
 * Callers:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C00548A0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ReleaseCacheDC @ 0x1C0057AF0 (ReleaseCacheDC.c)
 *     GreGetDeviceCaps @ 0x1C005CBF0 (GreGetDeviceCaps.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vMarkTransformDirty(DC *this)
{
  __int64 v1; // rax

  *((_DWORD *)this + 134) &= ~4u;
  v1 = *((_QWORD *)this + 10);
  if ( (*((_DWORD *)this + 134) & 1) != 0 )
    *(_DWORD *)(v1 + 352) |= 0x16090u;
  else
    *(_DWORD *)(v1 + 352) |= 0x6090u;
}
