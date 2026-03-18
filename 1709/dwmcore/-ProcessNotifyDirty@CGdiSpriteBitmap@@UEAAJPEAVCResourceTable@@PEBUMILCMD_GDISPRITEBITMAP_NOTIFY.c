/*
 * XREFs of ?ProcessNotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_NOTIFYDIRTY@@@Z @ 0x180166A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessNotifyDirty(
        CGdiSpriteBitmap *this,
        struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP_NOTIFYDIRTY *a3)
{
  return CGdiSpriteBitmap::NotifyDirty(this, *((_QWORD *)a3 + 1));
}
