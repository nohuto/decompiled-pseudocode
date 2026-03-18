/*
 * XREFs of ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x180172D9C
 * Callers:
 *     ?GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180173320 (-GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMATION_SETSPRINGPARAMETERS@@@Z @ 0x180173E8C (-ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMAT.c)
 *     ?SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z @ 0x180174248 (-SetScalarProperty@CNaturalAnimation@@AEAAJIM@Z.c)
 *     ?SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z @ 0x1801743A8 (-SetTimespanProperty@CNaturalAnimation@@AEAAJIAEBUTimeSpan@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$?4VCAttractionAccelerator@@@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCAttractionAccelerator@@@Z @ 0x180172514 (--$-4VCAttractionAccelerator@@@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCAttracti.c)
 *     ??0CSpringAccelerator@@QEAA@MM@Z @ 0x18017262C (--0CSpringAccelerator@@QEAA@MM@Z.c)
 */

void __fastcall CNaturalAnimation::EnsureAccelerator(__int64 a1)
{
  __int64 *v1; // rdi
  CSpringAccelerator *v2; // rbx
  CSpringAccelerator *v3; // rax

  v1 = (__int64 *)(a1 + 384);
  v2 = 0LL;
  if ( !*(_QWORD *)(a1 + 384) )
  {
    *(_DWORD *)(a1 + 392) = 3;
    v3 = (CSpringAccelerator *)operator new(0x30uLL);
    if ( v3 )
      v2 = CSpringAccelerator::CSpringAccelerator(v3, 20.0, 0.69999999);
    Microsoft::WRL::ComPtr<IAccelerator>::operator=<CAttractionAccelerator>(v1, (__int64 (__fastcall ***)(_QWORD))v2);
  }
}
