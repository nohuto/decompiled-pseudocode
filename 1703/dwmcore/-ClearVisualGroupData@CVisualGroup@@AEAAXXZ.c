/*
 * XREFs of ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x180163200
 * Callers:
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x18012F380 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 *     ??1CVisualGroup@@EEAA@XZ @ 0x180163184 (--1CVisualGroup@@EEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x1800C1D3C (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 */

void __fastcall CVisualGroup::ClearVisualGroupData(CVisualGroup *this)
{
  __int64 i; // rdi
  __int64 j; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
    CWeakReferenceBase::Release(*(struct _RTL_GENERIC_TABLE ***)(*((_QWORD *)this + 7) + 8 * i));
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 28); j = (unsigned int)(j + 1) )
    CWeakReferenceBase::Release(*(struct _RTL_GENERIC_TABLE ***)(*((_QWORD *)this + 11) + 8 * j));
  *((_DWORD *)this + 20) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 56, 8u);
  *((_DWORD *)this + 28) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 88, 8u);
}
