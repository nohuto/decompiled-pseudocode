/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C00E8220
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0021740 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     GreGetDeviceCaps @ 0x1C002A9C0 (GreGetDeviceCaps.c)
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
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
