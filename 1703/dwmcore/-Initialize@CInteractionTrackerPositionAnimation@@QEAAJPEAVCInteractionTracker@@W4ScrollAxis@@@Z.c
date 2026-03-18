/*
 * XREFs of ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801830EC
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18016C830 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180181B78 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x29u);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 232);
    if ( v6 )
      v6 = *(_QWORD *)(v6 + 8);
    v7 = *(_DWORD *)(v6 + 620);
    v5 = 0;
    v8 = *(_DWORD *)(v6 + 616);
    v9 = *(_DWORD *)(v6 + 604);
    v10 = *(_DWORD *)(v6 + 600);
    v11 = *(_DWORD *)(v6 + 596);
    v12 = *(_DWORD *)(a1 + 228);
    *(_DWORD *)(a1 + 392) = v8;
    *(_DWORD *)(a1 + 388) = v7;
    *(_DWORD *)(a1 + 348) = v12;
    *(_DWORD *)(a1 + 492) = v11;
    *(_DWORD *)(a1 + 496) = v10;
    *(_DWORD *)(a1 + 500) = v9;
  }
  return v5;
}
