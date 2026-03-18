/*
 * XREFs of ?HitTest@CPlaneCaptureRenderTarget@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180139C90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPlaneCaptureRenderTarget::HitTest(
        CPlaneCaptureRenderTarget *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  signed int v4; // eax
  unsigned int v5; // ebx

  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct D2D_POINT_2F *, bool *))(**(_QWORD **)(*((_QWORD *)this + 17) + 24LL)
                                                                                      + 272LL))(
         *(_QWORD *)(*((_QWORD *)this + 17) + 24LL),
         0LL,
         a3,
         a4);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x1DDu);
  return v5;
}
