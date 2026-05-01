/*
 * XREFs of ?Release@CEnumerableObjectCollection@@UEAAKXZ @ 0x180023AF0
 * Callers:
 *     ?Release@CEnumerableObjectCollection@@WBA@EAAKXZ @ 0x180023380 (-Release@CEnumerableObjectCollection@@WBA@EAAKXZ.c)
 *     ?Release@CEnumerableObjectCollection@@W7EAAKXZ @ 0x180023760 (-Release@CEnumerableObjectCollection@@W7EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEnumerableObjectCollection::Release(CEnumerableObjectCollection *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v1 && this )
    (*(void (__fastcall **)(CEnumerableObjectCollection *, __int64))(*(_QWORD *)this + 72LL))(this, 1LL);
  return v1;
}
