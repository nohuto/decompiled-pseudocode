/*
 * XREFs of ?GetSize@CD2DBitmap@@UEBAXPEAI0@Z @ 0x180077600
 * Callers:
 *     ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x1800455E0 (-GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z.c)
 *     ?GetSize@CD2DBitmap@@W7EBAXPEAI0@Z @ 0x1800DD980 (-GetSize@CD2DBitmap@@W7EBAXPEAI0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DBitmap::GetSize(CD2DBitmap *this, unsigned int *a2, unsigned int *a3)
{
  *a2 = *((_DWORD *)this + 16);
  *a3 = *((_DWORD *)this + 17);
}
