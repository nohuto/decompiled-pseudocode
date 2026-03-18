/*
 * XREFs of ??0CProjectedShadowCaster@@QEAA@PEAVCComposition@@@Z @ 0x18019F8FC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?CreateFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801B44B0 (-CreateFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

CProjectedShadowCaster *__fastcall CProjectedShadowCaster::CProjectedShadowCaster(
        CProjectedShadowCaster *this,
        struct CComposition *a2)
{
  CProjectedShadowCaster *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CProjectedShadowCaster::`vftable';
  result = this;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 1065353216;
  *((_DWORD *)this + 23) = 1091567616;
  *((_WORD *)this + 48) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  return result;
}
