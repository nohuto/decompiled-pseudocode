/*
 * XREFs of ?Close@CCompositionSurface@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C0011F00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::Close(
        CCompositionSurface *this,
        struct _EPROCESS *a2,
        void *a3,
        __int64 a4,
        unsigned __int64 a5)
{
  if ( a5 == 1 )
    (*(void (__fastcall **)(CCompositionSurface *, struct _EPROCESS *, void *))(*(_QWORD *)this + 8LL))(this, a2, a3);
  return 0LL;
}
