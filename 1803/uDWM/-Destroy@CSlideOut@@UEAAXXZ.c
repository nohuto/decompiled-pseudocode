/*
 * XREFs of ?Destroy@CSlideOut@@UEAAXXZ @ 0x18009B5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180009DEC (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
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
