/*
 * XREFs of ?InternalSetOpacity@CAtlasedImage@@IEAAXK@Z @ 0x18000EB48
 * Callers:
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x18000EB7C (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002BEB4 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 */

void __fastcall CAtlasedImage::InternalSetOpacity(CAtlasedImage *this, int a2)
{
  if ( a2 != *((_DWORD *)this + 17) )
  {
    CAtlasedImage::SetDirtyFlags(this, 2u, 0x2000u);
    *((_DWORD *)this + 17) = a2;
  }
}
