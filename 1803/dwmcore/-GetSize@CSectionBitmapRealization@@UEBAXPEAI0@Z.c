/*
 * XREFs of ?GetSize@CSectionBitmapRealization@@UEBAXPEAI0@Z @ 0x180081350
 * Callers:
 *     ?GetSize@CSectionBitmapRealization@@WPI@EBAXPEAI0@Z @ 0x1800DE780 (-GetSize@CSectionBitmapRealization@@WPI@EBAXPEAI0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSectionBitmapRealization::GetSize(CSectionBitmapRealization *this, unsigned int *a2, unsigned int *a3)
{
  *a2 = *((_DWORD *)this + 66);
  *a3 = *((_DWORD *)this + 67);
}
