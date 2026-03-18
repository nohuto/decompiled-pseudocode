/*
 * XREFs of ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x18016BBC4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x18015FE1C (-RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z.c)
 *     ?Reset@ManipulationData@@QEAAXXZ @ 0x180167F14 (-Reset@ManipulationData@@QEAAXXZ.c)
 */

CInteractionTracker *__fastcall CInteractionTracker::CInteractionTracker(
        CInteractionTracker *this,
        struct CComposition *a2)
{
  int v3; // xmm0_4
  __int64 v4; // rcx
  CInteractionTracker *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CInteractionTracker::`vftable';
  *((_DWORD *)this + 28) = 1065353216;
  *((_DWORD *)this + 29) = 1065353216;
  *((_DWORD *)this + 30) = 1065353216;
  ManipulationData::Reset((CInteractionTracker *)((char *)this + 152));
  `vector constructor iterator'(
    (CInteractionTracker *)((char *)this + 328),
    12LL,
    3LL,
    (void (__fastcall *)(CInputSinkStruct::InputQueueInfo *))CChainingHelper::RequestedConfigForAxis::RequestedConfigForAxis);
  *((_BYTE *)this + 364) &= 0xFCu;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  `vector constructor iterator'(
    (CInteractionTracker *)((char *)this + 408),
    8LL,
    2LL,
    (void (__fastcall *)(CInputSinkStruct::InputQueueInfo *))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::ComPtr<ID3D11DepthStencilState>);
  `vector constructor iterator'(
    (CInteractionTracker *)((char *)this + 424),
    8LL,
    3LL,
    (void (__fastcall *)(CInputSinkStruct::InputQueueInfo *))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::ComPtr<ID3D11DepthStencilState>);
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_DWORD *)this + 126) = 0;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_DWORD *)this + 138) = 0;
  v3 = *((_DWORD *)this + 28);
  v4 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 143) = v3;
  *((_DWORD *)this + 144) = v3;
  *((_DWORD *)this + 149) = 1117126656;
  *((_DWORD *)this + 150) = 1130430464;
  *((_DWORD *)this + 151) = 1104674816;
  *((_DWORD *)this + 152) = 1123680256;
  *((_DWORD *)this + 153) = 1102053376;
  *((_DWORD *)this + 154) = 1106247680;
  *((_DWORD *)this + 155) = 1165623296;
  *((_DWORD *)this + 156) = 1028443341;
  *((_DWORD *)this + 157) = 1084227584;
  CExpressionManager::RegisterInteractionTrackerNotification(*(CExpressionManager **)(v4 + 240), this);
  result = this;
  *((_DWORD *)this + 25) = 1028443341;
  *((_DWORD *)this + 26) = 1028443341;
  *((_DWORD *)this + 34) = 1014350479;
  return result;
}
