/*
 * XREFs of ?EndFrame@Dwm3DRECompositorThunk@@UEAAXXZ @ 0x18013BCB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Dwm3DRECompositorThunk::EndFrame(Dwm3DRECompositorThunk *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1);
}
