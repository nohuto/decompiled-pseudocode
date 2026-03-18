/*
 * XREFs of ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x180194020
 * Callers:
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x180196ED0 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x180196F30 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??2CInteractionTrackerPositionAnimation@@SAPEAX_K@Z @ 0x1801933D8 (--2CInteractionTrackerPositionAnimation@@SAPEAX_K@Z.c)
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801BDAD4 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1801BF124 (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801BF55C (-Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x1801BFB3C (-Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z.c)
 *     ??0CMotion@@QEAA@XZ @ 0x1801C4780 (--0CMotion@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x180208BB0 (--4-$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionT.c)
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
  const void *retaddr; // [rsp+38h] [rbp+0h]
  struct CComposition *v15; // [rsp+40h] [rbp+8h] BYREF

  if ( !this[60] )
  {
    v2 = (CScrollAnimation *)WPF::ProcessHeapImpl::AllocClear(0x250uLL);
    v3 = v2;
    if ( !v2 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    CScrollAnimation::CScrollAnimation(v2, this[2]);
    *(_QWORD *)v3 = &CInteractionTrackerScaleAnimation::`vftable';
    CMotion::CMotion((struct CComposition *)((char *)v3 + 408));
    *((_QWORD *)v3 + 51) = &CScaleMotion::`vftable';
    v4 = this[60];
    if ( v4 != v3 )
    {
      (*(void (__fastcall **)(struct CComposition *))(*(_QWORD *)v3 + 8LL))(v3);
      v15 = this[60];
      this[60] = v3;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
      v4 = this[60];
    }
    if ( !v4 )
    {
      v13 = 2625;
LABEL_8:
      v5 = -2147024882;
      v6 = -2147024882;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v13);
      return v6;
    }
    v7 = CInteractionTrackerScaleAnimation::Initialize(v4, (struct CInteractionTracker *)this);
    v6 = v7;
    if ( v7 < 0 )
    {
      v13 = 2627;
LABEL_13:
      v5 = v7;
      goto LABEL_9;
    }
  }
  v8 = this + 61;
  if ( !this[61] )
  {
    v9 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new();
    if ( v9 )
      v9 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v9, this[2]);
    Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=(this + 61, v9);
    if ( !*v8 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA49u);
      return v6;
    }
    v7 = CInteractionTrackerPositionAnimation::Initialize(*v8, this, 0LL);
    v6 = v7;
    if ( v7 < 0 )
    {
      v13 = 2635;
      goto LABEL_13;
    }
  }
  v10 = this + 62;
  if ( !this[62] )
  {
    v11 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new();
    if ( v11 )
      v11 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v11, this[2]);
    Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=(this + 62, v11);
    if ( !*v10 )
    {
      v13 = 2641;
      goto LABEL_8;
    }
    v7 = CInteractionTrackerPositionAnimation::Initialize(*v10, this, 1LL);
    v6 = v7;
    if ( v7 < 0 )
    {
      v13 = 2643;
      goto LABEL_13;
    }
  }
  return 0;
}
