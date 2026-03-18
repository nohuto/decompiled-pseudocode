/*
 * XREFs of ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801BF55C
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x180194020 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801BE32C (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::Initialize(__int64 a1, int *a2, int a3)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rax
  int v7; // xmm2_4
  int v8; // xmm0_4
  int v9; // xmm4_4
  int v10; // xmm3_4
  int v11; // xmm1_4
  int v12; // eax

  v4 = CScrollAnimation::Initialize(a1, a2, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x24u);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 296);
    if ( v6 )
      v6 = *(_QWORD *)(v6 + 8);
    v7 = *(_DWORD *)(v6 + 704);
    v5 = 0;
    v8 = *(_DWORD *)(v6 + 700);
    v9 = *(_DWORD *)(v6 + 688);
    v10 = *(_DWORD *)(v6 + 684);
    v11 = *(_DWORD *)(v6 + 680);
    v12 = *(_DWORD *)(a1 + 292);
    *(_DWORD *)(a1 + 464) = v8;
    *(_DWORD *)(a1 + 460) = v7;
    *(_DWORD *)(a1 + 420) = v12;
    *(_DWORD *)(a1 + 520) = v11;
    *(_DWORD *)(a1 + 524) = v10;
    *(_DWORD *)(a1 + 528) = v9;
  }
  return v5;
}
