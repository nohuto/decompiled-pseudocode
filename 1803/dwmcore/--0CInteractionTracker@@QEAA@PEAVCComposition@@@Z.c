/*
 * XREFs of ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x180192FF0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x18017EF20 (-RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z.c)
 *     ??0InteractionSourceManager@@QEAA@XZ @ 0x18019317C (--0InteractionSourceManager@@QEAA@XZ.c)
 *     ??0ManipulationData@@QEAA@XZ @ 0x180193214 (--0ManipulationData@@QEAA@XZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x180197178 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ?Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x1801C9E80 (-Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 */

CInteractionTracker *__fastcall CInteractionTracker::CInteractionTracker(
        CInteractionTracker *this,
        struct CComposition *a2)
{
  int v3; // xmm0_4
  __int64 v4; // rcx

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CInteractionTracker::`vftable';
  *((_DWORD *)this + 28) = 1065353216;
  *((_DWORD *)this + 29) = 1065353216;
  *((_DWORD *)this + 30) = 1065353216;
  ManipulationData::ManipulationData((CInteractionTracker *)((char *)this + 164));
  InteractionSourceManager::InteractionSourceManager((CInteractionTracker *)((char *)this + 352));
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  `vector constructor iterator'(
    (CInteractionTracker *)((char *)this + 520),
    8LL,
    2LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (CInteractionTracker *)((char *)this + 536),
    8LL,
    4LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_DWORD *)this + 158) = 0;
  *((_DWORD *)this + 159) = 0;
  *((_DWORD *)this + 160) = 0;
  v3 = *((_DWORD *)this + 28);
  v4 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 165) = v3;
  *((_DWORD *)this + 166) = v3;
  *((_DWORD *)this + 170) = 1117126656;
  *((_DWORD *)this + 171) = 1130430464;
  *((_DWORD *)this + 172) = 1104674816;
  *((_DWORD *)this + 173) = 1123680256;
  *((_DWORD *)this + 174) = 1102053376;
  *((_DWORD *)this + 175) = 1106247680;
  *((_DWORD *)this + 176) = 1165623296;
  *((_DWORD *)this + 177) = 1028443341;
  *((_DWORD *)this + 178) = 1084227584;
  CExpressionManager::RegisterInteractionTrackerNotification(*(CExpressionManager **)(v4 + 240), this);
  *((_DWORD *)this + 25) = 1028443341;
  *((_DWORD *)this + 26) = 1028443341;
  *((_DWORD *)this + 37) = 1014350479;
  CInteractionTracker::UpdatePositionRoundingSuggestion(this);
  InteractionSourceManager::Initialize(
    (CInteractionTracker *)((char *)this + 352),
    *((struct CComposition **)this + 2),
    this);
  return this;
}
