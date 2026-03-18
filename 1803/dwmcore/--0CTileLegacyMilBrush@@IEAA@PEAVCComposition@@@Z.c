/*
 * XREFs of ??0CTileLegacyMilBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800B82B0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z @ 0x18001DAD4 (--0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z.c)
 */

CTileLegacyMilBrush *__fastcall CTileLegacyMilBrush::CTileLegacyMilBrush(
        CTileLegacyMilBrush *this,
        struct CComposition *a2)
{
  _QWORD *v2; // rcx
  CTileLegacyMilBrush *v3; // r9

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CTileLegacyMilBrush::`vftable';
  *(_QWORD *)((char *)this + 92) = 0LL;
  *((_DWORD *)this + 25) = 0;
  *((_BYTE *)this + 104) = 0;
  *((_DWORD *)this + 18) = 1065353216;
  *((_DWORD *)this + 19) = 1065353216;
  *((_DWORD *)this + 20) = 1065353216;
  *(_QWORD *)((char *)this + 84) = 1065353216LL;
  *((_DWORD *)this + 27) = 0;
  CMILBrushBitmap::CMILBrushBitmap((CTileLegacyMilBrush *)((char *)this + 112), a2);
  v2[3] = &LocalMILObject<CMILBrushBitmap>::`vftable'{for `CMILBrush'};
  *v2 = &LocalMILObject<CMILBrushBitmap>::`vftable';
  v2[6] = &LocalMILObject<CMILBrushBitmap>::`vftable'{for `CMILResourceCache'};
  return v3;
}
