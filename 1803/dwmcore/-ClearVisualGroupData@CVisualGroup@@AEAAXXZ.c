/*
 * XREFs of ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x1801A94C4
 * Callers:
 *     ??1CVisualGroup@@EEAA@XZ @ 0x1801A943C (--1CVisualGroup@@EEAA@XZ.c)
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801A975C (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x180034B54 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CVisualGroup::ClearVisualGroupData(CVisualGroup *this)
{
  __int64 i; // rdi
  __int64 j; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
    CWeakReferenceBase::Release(*(CWeakReferenceBase **)(*((_QWORD *)this + 7) + 8 * i));
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 28); j = (unsigned int)(j + 1) )
    CWeakReferenceBase::Release(*(CWeakReferenceBase **)(*((_QWORD *)this + 11) + 8 * j));
  *((_DWORD *)this + 20) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 56, 8u);
  *((_DWORD *)this + 28) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 88, 8u);
}
