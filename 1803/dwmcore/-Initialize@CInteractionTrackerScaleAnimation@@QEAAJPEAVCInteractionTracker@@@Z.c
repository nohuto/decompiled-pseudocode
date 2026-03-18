/*
 * XREFs of ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x1801BFB3C
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x180194020 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801BE32C (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::Initialize(
        CInteractionTrackerScaleAnimation *this,
        struct CInteractionTracker *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rax
  int v6; // xmm2_4
  int v7; // xmm0_4
  int v8; // xmm4_4
  int v9; // xmm3_4
  int v10; // xmm1_4
  int v11; // eax

  v3 = CScrollAnimation::Initialize((__int64)this, (int *)a2, 2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x28u);
  }
  else
  {
    v5 = *((_QWORD *)this + 37);
    if ( v5 )
      v5 = *(_QWORD *)(v5 + 8);
    v6 = *(_DWORD *)(v5 + 712);
    v4 = 0;
    v7 = *(_DWORD *)(v5 + 708);
    v8 = *(_DWORD *)(v5 + 688);
    v9 = *(_DWORD *)(v5 + 684);
    v10 = *(_DWORD *)(v5 + 680);
    v11 = *((_DWORD *)this + 73);
    *((_DWORD *)this + 116) = v7;
    *((_DWORD *)this + 115) = v6;
    *((_DWORD *)this + 105) = v11;
    *((_DWORD *)this + 130) = v10;
    *((_DWORD *)this + 131) = v9;
    *((_DWORD *)this + 132) = v8;
  }
  return v4;
}
