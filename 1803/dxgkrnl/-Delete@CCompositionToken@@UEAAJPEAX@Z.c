/*
 * XREFs of ?Delete@CCompositionToken@@UEAAJPEAX@Z @ 0x1C000E0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionToken::Delete(CCompositionToken *this, void *a2)
{
  if ( (**(unsigned __int8 (__fastcall ***)(CCompositionToken *, void *))this)(this, a2) )
    (*(void (__fastcall **)(CCompositionToken *))(*(_QWORD *)this + 8LL))(this);
  return 0LL;
}
