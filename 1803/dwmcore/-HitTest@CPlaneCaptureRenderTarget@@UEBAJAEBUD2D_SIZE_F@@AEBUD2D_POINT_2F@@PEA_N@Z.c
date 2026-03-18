/*
 * XREFs of ?HitTest@CPlaneCaptureRenderTarget@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18015C060
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaneCaptureRenderTarget::HitTest(
        CPlaneCaptureRenderTarget *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx

  v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 7) + 120LL) + 24LL);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, const struct D2D_POINT_2F *, bool *))(*(_QWORD *)v4 + 280LL))(
         v4,
         0LL,
         a3,
         a4);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1B7u);
  return v6;
}
