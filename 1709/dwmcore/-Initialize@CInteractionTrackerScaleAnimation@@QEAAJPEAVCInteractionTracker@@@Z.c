/*
 * XREFs of ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x18018A48C
 * Callers:
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18016B5C0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180188EE8 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTrackerScaleAnimation::Initialize(
        CInteractionTrackerScaleAnimation *this,
        struct CInteractionTracker *a2)
{
  signed int v3; // eax
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x28u);
  }
  else
  {
    v5 = *((_QWORD *)this + 35);
    if ( v5 )
      v5 = *(_QWORD *)(v5 + 8);
    v6 = *(_DWORD *)(v5 + 656);
    v4 = 0;
    v7 = *(_DWORD *)(v5 + 652);
    v8 = *(_DWORD *)(v5 + 632);
    v9 = *(_DWORD *)(v5 + 628);
    v10 = *(_DWORD *)(v5 + 624);
    v11 = *((_DWORD *)this + 69);
    *((_DWORD *)this + 112) = v7;
    *((_DWORD *)this + 111) = v6;
    *((_DWORD *)this + 101) = v11;
    *((_DWORD *)this + 126) = v10;
    *((_DWORD *)this + 127) = v9;
    *((_DWORD *)this + 128) = v8;
  }
  return v4;
}
