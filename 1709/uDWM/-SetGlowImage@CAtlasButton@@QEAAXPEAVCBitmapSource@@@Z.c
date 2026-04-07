/*
 * XREFs of ?SetGlowImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@@Z @ 0x180024B00
 * Callers:
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x180015C6C (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020324 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAtlasButton::SetGlowImage(CAtlasButton *this, struct CBitmapSource *a2)
{
  CBaseObject *v4; // rcx

  v4 = (CBaseObject *)*((_QWORD *)this + 17);
  if ( v4 != a2 )
  {
    if ( v4 )
      CBaseObject::Release(v4);
    *((_QWORD *)this + 17) = a2;
    if ( a2 )
      _InterlockedAdd((volatile signed __int32 *)a2 + 2, 1u);
    CAtlasedImage::SetDirtyFlags(this, 1, 0x2000u);
  }
}
