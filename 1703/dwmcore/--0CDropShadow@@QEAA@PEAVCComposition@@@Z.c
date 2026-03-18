/*
 * XREFs of ??0CDropShadow@@QEAA@PEAVCComposition@@@Z @ 0x180170914
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180171CE8 (-InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     <none>
 */

CDropShadow *__fastcall CDropShadow::CDropShadow(CDropShadow *this, struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)this = &CDropShadow::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CDropShadow::`vftable'{for `IVisualListenerInfoProvider'};
  *((_DWORD *)this + 25) = 1065353216;
  *((_DWORD *)this + 24) = 1091567616;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 23) = 1065353216;
  return this;
}
