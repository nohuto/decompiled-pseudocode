/*
 * XREFs of ?Reset@CAnimationResource@@UEAAJXZ @ 0x18009ED40
 * Callers:
 *     <none>
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180020C30 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CAnimationResource::Reset(CAnimationResource *this)
{
  CBaseObject *v2; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_WORD *)this + 40) = 0;
  *((_DWORD *)this + 16) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 40, 0x20u);
  return 0LL;
}
