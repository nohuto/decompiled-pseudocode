/*
 * XREFs of ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180189F38
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18016B5C0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180188EE8 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerPositionAnimation::Initialize(__int64 a1, int *a2, int a3)
{
  signed int v4; // eax
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x24u);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 280);
    if ( v6 )
      v6 = *(_QWORD *)(v6 + 8);
    v7 = *(_DWORD *)(v6 + 648);
    v5 = 0;
    v8 = *(_DWORD *)(v6 + 644);
    v9 = *(_DWORD *)(v6 + 632);
    v10 = *(_DWORD *)(v6 + 628);
    v11 = *(_DWORD *)(v6 + 624);
    v12 = *(_DWORD *)(a1 + 276);
    *(_DWORD *)(a1 + 448) = v8;
    *(_DWORD *)(a1 + 444) = v7;
    *(_DWORD *)(a1 + 404) = v12;
    *(_DWORD *)(a1 + 504) = v11;
    *(_DWORD *)(a1 + 508) = v10;
    *(_DWORD *)(a1 + 512) = v9;
  }
  return v5;
}
