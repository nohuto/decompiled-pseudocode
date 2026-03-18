/*
 * XREFs of ?Close@CCompositionSurface@@MEAAJPEAU_WIN32_CLOSEMETHOD_PARAMETERS@@@Z @ 0x1C0038CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::Close(CCompositionSurface *this, struct _WIN32_CLOSEMETHOD_PARAMETERS *a2)
{
  if ( *((_DWORD *)a2 + 5) == 1 )
    (*(void (__fastcall **)(CCompositionSurface *))(*(_QWORD *)this + 8LL))(this);
  return 0LL;
}
