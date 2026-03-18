/*
 * XREFs of ?ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS@@@Z @ 0x180173D30
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800A188C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??$?4VCSpringAccelerator@@@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCSpringAccelerator@@@12@@Z @ 0x18017255C (--$-4VCSpringAccelerator@@@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPtr@VCSp.c)
 *     ??0CGravityBounceAccelerator@@QEAA@MM@Z @ 0x1801725A4 (--0CGravityBounceAccelerator@@QEAA@MM@Z.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetBounceParameters(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS *a3)
{
  unsigned int v4; // ebx
  CGravityBounceAccelerator *v6; // rax
  CGravityBounceAccelerator *v7; // rdi
  CGravityBounceAccelerator *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v4 = 0;
  v6 = (CGravityBounceAccelerator *)operator new(0x38uLL);
  if ( v6 )
    v7 = CGravityBounceAccelerator::CGravityBounceAccelerator(v6, *((float *)a3 + 2), *((float *)a3 + 3));
  else
    v7 = 0LL;
  v9 = v7;
  if ( v7 )
  {
    (**(void (__fastcall ***)(CGravityBounceAccelerator *))v7)(v7);
    *((_DWORD *)v7 + 12) = CBaseExpression::GetTracingCookie(this);
    Microsoft::WRL::ComPtr<IAccelerator>::operator=<CSpringAccelerator>(
      (__int64 *)this + 48,
      (__int64 (__fastcall ****)(_QWORD))&v9);
    (*(void (__fastcall **)(CGravityBounceAccelerator *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x57u);
  }
  return v4;
}
