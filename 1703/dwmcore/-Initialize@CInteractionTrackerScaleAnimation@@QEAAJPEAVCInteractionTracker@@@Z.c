/*
 * XREFs of ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x1801836C4
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18016C830 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180181B78 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x2Du);
  }
  else
  {
    v5 = *((_QWORD *)this + 29);
    if ( v5 )
      v5 = *(_QWORD *)(v5 + 8);
    v6 = *(_DWORD *)(v5 + 628);
    v4 = 0;
    v7 = *(_DWORD *)(v5 + 624);
    v8 = *(_DWORD *)(v5 + 604);
    v9 = *(_DWORD *)(v5 + 600);
    v10 = *(_DWORD *)(v5 + 596);
    v11 = *((_DWORD *)this + 57);
    *((_DWORD *)this + 98) = v7;
    *((_DWORD *)this + 97) = v6;
    *((_DWORD *)this + 87) = v11;
    *((_DWORD *)this + 123) = v10;
    *((_DWORD *)this + 124) = v9;
    *((_DWORD *)this + 125) = v8;
  }
  return v4;
}
