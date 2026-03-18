/*
 * XREFs of ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x18016A6C4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x180155F20 (-RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z.c)
 *     ?Reset@ManipulationData@@QEAAXXZ @ 0x18016D200 (-Reset@ManipulationData@@QEAAXXZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x18016F178 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 */

CInteractionTracker *__fastcall CInteractionTracker::CInteractionTracker(
        CInteractionTracker *this,
        struct CComposition *a2)
{
  int v3; // xmm0_4
  __int64 v4; // rcx

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CInteractionTracker::`vftable';
  *((_DWORD *)this + 28) = 1065353216;
  *((_DWORD *)this + 29) = 1065353216;
  *((_DWORD *)this + 30) = 1065353216;
  ManipulationData::Reset((CInteractionTracker *)((char *)this + 164));
  `vector constructor iterator'(
    (CInteractionTracker *)((char *)this + 340),
    12LL,
    3LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))CChainingHelper::RequestedConfigForAxis::RequestedConfigForAxis);
  *((_BYTE *)this + 376) &= 0xFCu;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  `vector constructor iterator'(
    (CInteractionTracker *)((char *)this + 424),
    8LL,
    2LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::ComPtr<ID3D11DepthStencilState>);
  `vector constructor iterator'(
    (CInteractionTracker *)((char *)this + 440),
    8LL,
    4LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))Microsoft::WRL::ComPtr<ID3D11DepthStencilState>::ComPtr<ID3D11DepthStencilState>);
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 134) = 0;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_DWORD *)this + 146) = 0;
  v3 = *((_DWORD *)this + 28);
  v4 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 151) = v3;
  *((_DWORD *)this + 152) = v3;
  *((_DWORD *)this + 156) = 1117126656;
  *((_DWORD *)this + 157) = 1130430464;
  *((_DWORD *)this + 158) = 1104674816;
  *((_DWORD *)this + 159) = 1123680256;
  *((_DWORD *)this + 160) = 1102053376;
  *((_DWORD *)this + 161) = 1106247680;
  *((_DWORD *)this + 162) = 1165623296;
  *((_DWORD *)this + 163) = 1028443341;
  *((_DWORD *)this + 164) = 1084227584;
  CExpressionManager::RegisterInteractionTrackerNotification(*(CExpressionManager **)(v4 + 216), this);
  *((_DWORD *)this + 25) = 1028443341;
  *((_DWORD *)this + 26) = 1028443341;
  *((_DWORD *)this + 37) = 1014350479;
  CInteractionTracker::UpdatePositionRoundingSuggestion(this);
  return this;
}
