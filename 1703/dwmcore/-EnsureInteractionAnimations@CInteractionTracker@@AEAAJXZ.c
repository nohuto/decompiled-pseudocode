/*
 * XREFs of ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18016C830
 * Callers:
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016EB34 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EC44 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??2CInteractionTrackerPositionAnimation@@SAPEAX_K@Z @ 0x18016BECC (--2CInteractionTrackerPositionAnimation@@SAPEAX_K@Z.c)
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801812D0 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180182AD0 (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801830EC (-Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x1801836C4 (-Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z.c)
 *     ??0CMotion@@QEAA@XZ @ 0x180184A7C (--0CMotion@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x1801A7608 (--4-$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionT.c)
 */

__int64 __fastcall CInteractionTracker::EnsureInteractionAnimations(struct CComposition **this)
{
  CScrollAnimation *v2; // rax
  struct CComposition *v3; // rsi
  CInteractionTrackerScaleAnimation *v4; // rcx
  int v5; // r9d
  unsigned int v6; // ebx
  int v7; // eax
  _QWORD *v8; // rbx
  CInteractionTrackerPositionAnimation *v9; // rax
  _QWORD *v10; // rbx
  CInteractionTrackerPositionAnimation *v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]
  struct CComposition *v15; // [rsp+40h] [rbp+8h] BYREF

  if ( !this[46] )
  {
    v2 = (CScrollAnimation *)WPF::ProcessHeapImpl::AllocClear(0x238uLL);
    v3 = v2;
    if ( !v2 )
    {
      ModuleFailFastForHRESULT(-2147024882, retaddr);
      __debugbreak();
    }
    CScrollAnimation::CScrollAnimation(v2, this[2]);
    *(_QWORD *)v3 = &CInteractionTrackerScaleAnimation::`vftable';
    CMotion::CMotion((struct CComposition *)((char *)v3 + 336));
    *((_QWORD *)v3 + 42) = &CScaleMotion::`vftable';
    if ( this[46] != v3 )
    {
      (*(void (__fastcall **)(struct CComposition *))(*(_QWORD *)v3 + 8LL))(v3);
      v15 = this[46];
      this[46] = v3;
      Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v15);
    }
    v4 = this[46];
    if ( !v4 )
    {
      v13 = 2879;
LABEL_8:
      v5 = -2147024882;
      v6 = -2147024882;
LABEL_9:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, v13);
      return v6;
    }
    v7 = CInteractionTrackerScaleAnimation::Initialize(v4, (struct CInteractionTracker *)this);
    v6 = v7;
    if ( v7 < 0 )
    {
      v13 = 2881;
LABEL_13:
      v5 = v7;
      goto LABEL_9;
    }
  }
  v8 = this + 47;
  if ( !this[47] )
  {
    v9 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new();
    if ( v9 )
      v9 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v9, this[2]);
    Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=(this + 47, v9);
    if ( !*v8 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xB47u);
      return v6;
    }
    v7 = CInteractionTrackerPositionAnimation::Initialize(*v8, this, 0LL);
    v6 = v7;
    if ( v7 < 0 )
    {
      v13 = 2889;
      goto LABEL_13;
    }
  }
  v10 = this + 48;
  if ( !this[48] )
  {
    v11 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new();
    if ( v11 )
      v11 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v11, this[2]);
    Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=(this + 48, v11);
    if ( !*v10 )
    {
      v13 = 2895;
      goto LABEL_8;
    }
    v7 = CInteractionTrackerPositionAnimation::Initialize(*v10, this, 1LL);
    v6 = v7;
    if ( v7 < 0 )
    {
      v13 = 2897;
      goto LABEL_13;
    }
  }
  return 0;
}
