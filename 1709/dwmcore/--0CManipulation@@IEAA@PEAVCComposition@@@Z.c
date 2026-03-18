/*
 * XREFs of ??0CManipulation@@IEAA@PEAVCComposition@@@Z @ 0x1801701F0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?Reset@ManipulationData@@QEAAXXZ @ 0x18016D200 (-Reset@ManipulationData@@QEAAXXZ.c)
 */

CManipulation *__fastcall CManipulation::CManipulation(CManipulation *this, struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CManipulation::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CManipulation::`vftable'{for `IManipulationResource'};
  ManipulationData::Reset((CManipulation *)((char *)this + 72));
  ManipulationData::Reset((CManipulation *)((char *)this + 244));
  `vector constructor iterator'(
    (CManipulation *)((char *)this + 428),
    1LL,
    3LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))CManipulation::ScrollingConfiguration::ScrollingConfiguration);
  `vector constructor iterator'(
    (CManipulation *)((char *)this + 432),
    8LL,
    5LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::ComPtr<ID3D11DepthStencilState>);
  *((_QWORD *)this + 59) = 0LL;
  memset_0((char *)this + 480, 0, 0x28uLL);
  memset_0((char *)this + 520, 0, 0x28uLL);
  *((_QWORD *)this + 70) = 0LL;
  return this;
}
