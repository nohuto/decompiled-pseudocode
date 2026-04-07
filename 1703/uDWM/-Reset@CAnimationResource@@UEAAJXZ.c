/*
 * XREFs of ?Reset@CAnimationResource@@UEAAJXZ @ 0x18000E360
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002C6F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
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
  DynArrayImpl<0>::ShrinkToSize((char *)this + 40, 32LL);
  return 0LL;
}
