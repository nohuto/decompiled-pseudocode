/*
 * XREFs of ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x18019BFBC
 * Callers:
 *     ?GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18019C590 (-GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS@@@Z @ 0x18019CF54 (-ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMAT.c)
 *     ?ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMATION_SETSPRINGPARAMETERS@@@Z @ 0x18019D094 (-ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMAT.c)
 *     ?SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z @ 0x18019D498 (-SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z.c)
 *     ?SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z @ 0x18019D6AC (-SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18003B008 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ??$?4VCGravityBounceAccelerator@@@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCGravityBounceAccelerator@@@Z @ 0x18019B72C (--$-4VCGravityBounceAccelerator@@@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCGravi.c)
 *     ??0CGravityBounceAccelerator@@QEAA@MM@Z @ 0x18019B774 (--0CGravityBounceAccelerator@@QEAA@MM@Z.c)
 *     ??0CSpringAccelerator@@QEAA@MM@Z @ 0x18019B808 (--0CSpringAccelerator@@QEAA@MM@Z.c)
 */

void __fastcall CNaturalAnimation::EnsureAccelerator(__int64 a1, int a2)
{
  __int64 *v2; // rdi
  CSpringAccelerator *v3; // rbx
  int v5; // edx
  CSpringAccelerator *v6; // rax
  CGravityBounceAccelerator *v7; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)(a1 + 400);
  v3 = 0LL;
  if ( !*(_QWORD *)(a1 + 400) )
  {
    *(_DWORD *)(a1 + 408) = a2;
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      v6 = (CSpringAccelerator *)operator new(0x30uLL);
      if ( v6 )
        v3 = CSpringAccelerator::CSpringAccelerator(v6, 20.0, 0.69999999);
      Microsoft::WRL::ComPtr<IAccelerator>::operator=<CGravityBounceAccelerator>(
        v2,
        (__int64 (__fastcall ***)(_QWORD))v3);
    }
    else
    {
      v7 = (CGravityBounceAccelerator *)operator new(0x40uLL);
      if ( v7 )
        v3 = CGravityBounceAccelerator::CGravityBounceAccelerator(v7, 10.0, 0.5);
      Microsoft::WRL::ComPtr<IAccelerator>::operator=<CGravityBounceAccelerator>(
        v2,
        (__int64 (__fastcall ***)(_QWORD))v3);
      *(_DWORD *)(*v2 + 56) = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
    }
  }
}
