/*
 * XREFs of ??$ReleaseInterface@VCCachedVisualImage@@@@YAXAEAPEAVCCachedVisualImage@@@Z @ 0x1800C96E0
 * Callers:
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1800B5D48 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x1801A3F10 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CCachedVisualImage>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILCOMBase::InternalRelease((CMILCOMBase *)(v2 + 16));
    *a1 = 0LL;
  }
  return result;
}
