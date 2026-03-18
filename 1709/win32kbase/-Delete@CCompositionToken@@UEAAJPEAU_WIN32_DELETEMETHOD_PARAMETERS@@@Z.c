/*
 * XREFs of ?Delete@CCompositionToken@@UEAAJPEAU_WIN32_DELETEMETHOD_PARAMETERS@@@Z @ 0x1C0025630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionToken::Delete(CCompositionToken *this, struct _WIN32_DELETEMETHOD_PARAMETERS *a2)
{
  if ( (**(unsigned __int8 (__fastcall ***)(CCompositionToken *, struct _WIN32_DELETEMETHOD_PARAMETERS *))this)(
         this,
         a2) )
  {
    (*(void (__fastcall **)(CCompositionToken *))(*(_QWORD *)this + 8LL))(this);
  }
  return 0LL;
}
