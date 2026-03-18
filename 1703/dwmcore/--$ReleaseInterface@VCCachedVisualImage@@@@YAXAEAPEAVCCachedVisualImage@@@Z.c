/*
 * XREFs of ??$ReleaseInterface@VCCachedVisualImage@@@@YAXAEAPEAVCCachedVisualImage@@@Z @ 0x180020434
 * Callers:
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1800202E4 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x18012DBC0 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

unsigned int __fastcall ReleaseInterface<CCachedVisualImage>(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILCOMBase::InternalRelease((CMILCOMBase *)(v2 + 16));
    *a1 = 0LL;
  }
  return result;
}
