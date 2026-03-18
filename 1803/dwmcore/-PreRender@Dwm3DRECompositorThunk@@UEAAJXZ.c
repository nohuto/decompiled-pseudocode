/*
 * XREFs of ?PreRender@Dwm3DRECompositorThunk@@UEAAJXZ @ 0x18013BCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureImpl@Dwm3DRECompositorThunk@@AEAAXXZ @ 0x1800424C0 (-EnsureImpl@Dwm3DRECompositorThunk@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Dwm3DRECompositorThunk::PreRender(Dwm3DRECompositorThunk *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax

  v2 = 0;
  Dwm3DRECompositorThunk::EnsureImpl(this);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x44u);
  }
  return v2;
}
