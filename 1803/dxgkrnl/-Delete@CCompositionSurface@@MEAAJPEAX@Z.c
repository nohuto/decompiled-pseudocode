/*
 * XREFs of ?Delete@CCompositionSurface@@MEAAJPEAX@Z @ 0x1C0011ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C0011D0C (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::Delete(CCompositionSurface *this, void *a2)
{
  __int64 v3; // rcx

  CCompositionSurface::ReleaseAllBuffers(this);
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return 0LL;
}
