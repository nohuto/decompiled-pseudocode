/*
 * XREFs of ??0CSolidColorLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800B5E4C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801A995C (-CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     <none>
 */

CSolidColorLegacyMilBrush *__fastcall CSolidColorLegacyMilBrush::CSolidColorLegacyMilBrush(
        CSolidColorLegacyMilBrush *this,
        struct CComposition *a2)
{
  CSolidColorLegacyMilBrush *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CSolidColorLegacyMilBrush::`vftable';
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *(_QWORD *)((char *)this + 156) = 3LL;
  *((_QWORD *)this + 15) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILObject'};
  *((_QWORD *)this + 18) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 21) = &LocalMILObject<CMILBrushSolid>::`vftable'{for `IMILBrushSolid'};
  result = this;
  *((_DWORD *)this + 8) |= 1u;
  return result;
}
