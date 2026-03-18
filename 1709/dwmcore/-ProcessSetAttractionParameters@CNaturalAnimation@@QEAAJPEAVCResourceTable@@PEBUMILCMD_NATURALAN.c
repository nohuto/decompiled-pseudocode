/*
 * XREFs of ?ProcessSetAttractionParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMATION_SETATTRACTIONPARAMETERS@@@Z @ 0x180173B8C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$?4VCAttractionAccelerator@@@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCAttractionAccelerator@@@Z @ 0x180172514 (--$-4VCAttractionAccelerator@@@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCAttracti.c)
 */

__int64 __fastcall CNaturalAnimation::ProcessSetAttractionParameters(
        CNaturalAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_NATURALANIMATION_SETATTRACTIONPARAMETERS *a3)
{
  unsigned int v4; // edi
  _QWORD *v6; // rax
  int v7; // xmm0_4

  v4 = 0;
  v6 = operator new(0x20uLL);
  if ( v6 )
  {
    v7 = *((_DWORD *)a3 + 2);
    v6[1] = &CMILRefCountBase::`vftable';
    *((_DWORD *)v6 + 4) = 0;
    *v6 = &CAttractionAccelerator::`vftable'{for `IAccelerator'};
    v6[1] = &CAttractionAccelerator::`vftable'{for `CMILRefCountBase'};
    *((_DWORD *)v6 + 7) = v7;
    *((_DWORD *)v6 + 6) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  Microsoft::WRL::ComPtr<IAccelerator>::operator=<CAttractionAccelerator>(
    (__int64 *)this + 48,
    (__int64 (__fastcall ***)(_QWORD))v6);
  if ( !*((_QWORD *)this + 48) )
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x48u);
  }
  return v4;
}
