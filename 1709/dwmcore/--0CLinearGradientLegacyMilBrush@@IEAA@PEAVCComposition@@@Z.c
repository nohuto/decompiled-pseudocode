/*
 * XREFs of ??0CLinearGradientLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x180145E54
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CMILBrushGradient@@IEAA@PEAVCMILFactory@@@Z @ 0x1801CED4C (--0CMILBrushGradient@@IEAA@PEAVCMILFactory@@@Z.c)
 */

CLinearGradientLegacyMilBrush *__fastcall CLinearGradientLegacyMilBrush::CLinearGradientLegacyMilBrush(
        CLinearGradientLegacyMilBrush *this,
        struct CComposition *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r11

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CLinearGradientLegacyMilBrush::`vftable';
  CMILBrushGradient::CMILBrushGradient((CLinearGradientLegacyMilBrush *)((char *)this + 176), a2);
  v2[3] = &LocalMILObject<CMILBrushLinearGradient>::`vftable'{for `CMILBrush'};
  *v2 = &LocalMILObject<CMILBrushLinearGradient>::`vftable'{for `CMILObject'};
  v2[6] = &LocalMILObject<CMILBrushLinearGradient>::`vftable'{for `CMILResourceCache'};
  v2[14] = &LocalMILObject<CMILBrushLinearGradient>::`vftable'{for `IMILBrushGradient'};
  v2[28] = &LocalMILObject<CMILBrushLinearGradient>::`vftable';
  *(_DWORD *)(v3 + 416) = v4;
  *(_QWORD *)(v3 + 424) = v4;
  *(_DWORD *)(v3 + 440) = v4;
  *(_QWORD *)(v3 + 444) = 3LL;
  *(_QWORD *)(v3 + 408) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILObject'};
  *(_QWORD *)(v3 + 432) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILBrush'};
  *(_QWORD *)(v3 + 456) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `IMILBrushSolid'};
  return (CLinearGradientLegacyMilBrush *)v3;
}
