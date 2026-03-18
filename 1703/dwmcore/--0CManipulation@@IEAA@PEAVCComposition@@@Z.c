/*
 * XREFs of ??0CManipulation@@IEAA@PEAVCComposition@@@Z @ 0x180167A20
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Reset@ManipulationData@@QEAAXXZ @ 0x180167F14 (-Reset@ManipulationData@@QEAAXXZ.c)
 */

CManipulation *__fastcall CManipulation::CManipulation(CManipulation *this, struct CComposition *a2)
{
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CManipulation::`vftable'{for `IManipulationResource'};
  *((_QWORD *)this + 1) = &CManipulation::`vftable'{for `CResource'};
  ManipulationData::Reset((CManipulation *)((char *)this + 64));
  ManipulationData::Reset((CManipulation *)((char *)this + 236));
  `vector constructor iterator'(
    (CManipulation *)((char *)this + 420),
    1LL,
    3LL,
    (void (__fastcall *)(CInputSinkStruct::InputQueueInfo *))CManipulation::ScrollingConfiguration::ScrollingConfiguration);
  `vector constructor iterator'(
    (CManipulation *)((char *)this + 424),
    8LL,
    5LL,
    (void (__fastcall *)(CInputSinkStruct::InputQueueInfo *))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::ComPtr<ID3D11DepthStencilState>);
  return this;
}
