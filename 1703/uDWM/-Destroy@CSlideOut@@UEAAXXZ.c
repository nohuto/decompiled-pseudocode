/*
 * XREFs of ?Destroy@CSlideOut@@UEAAXXZ @ 0x180001910
 * Callers:
 *     <none>
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180005D7C (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CSlideOut::Destroy(CSlideOut *this)
{
  CBaseObject *v2; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 16);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
  CStoryboard::_Cleanup(this);
  CStoryboard::Release(this);
}
