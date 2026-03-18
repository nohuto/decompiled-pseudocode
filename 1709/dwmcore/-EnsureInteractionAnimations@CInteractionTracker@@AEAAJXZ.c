/*
 * XREFs of ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18016B5C0
 * Callers:
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z @ 0x18016ED74 (-TransitionToInContact@CInteractionTracker@@AEAAXPEAVCManipulation@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18016EE90 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??2CInteractionTrackerPositionAnimation@@SAPEAX_K@Z @ 0x18016A9E8 (--2CInteractionTrackerPositionAnimation@@SAPEAX_K@Z.c)
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180188680 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180189B6C (--0CInteractionTrackerPositionAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x180189F38 (-Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x18018A48C (-Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z.c)
 *     ??0CMotion@@QEAA@XZ @ 0x18018CB04 (--0CMotion@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x1801C2820 (--4-$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionT.c)
 */

__int64 __fastcall CInteractionTracker::EnsureInteractionAnimations(struct CComposition **this)
{
  CScrollAnimation *v2; // rax
  struct CComposition *v3; // rsi
  CInteractionTrackerScaleAnimation *v4; // rcx
  DWORD v5; // r9d
  unsigned int v6; // ebx
  int v7; // eax
  _QWORD *v8; // rbx
  CInteractionTrackerPositionAnimation *v9; // rax
  _QWORD *v10; // rbx
  CInteractionTrackerPositionAnimation *v11; // rax
  unsigned int v13; // [rsp+20h] [rbp-18h]
  const void *retaddr; // [rsp+38h] [rbp+0h]
  struct CComposition *v15; // [rsp+40h] [rbp+8h] BYREF

  if ( !this[48] )
  {
    v2 = (CScrollAnimation *)WPF::ProcessHeapImpl::AllocClear(0x240uLL);
    v3 = v2;
    if ( !v2 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    CScrollAnimation::CScrollAnimation(v2, this[2]);
    *(_QWORD *)v3 = &CInteractionTrackerScaleAnimation::`vftable';
    CMotion::CMotion((struct CComposition *)((char *)v3 + 392));
    *((_QWORD *)v3 + 49) = &CScaleMotion::`vftable';
    if ( this[48] != v3 )
    {
      (*(void (__fastcall **)(struct CComposition *))(*(_QWORD *)v3 + 8LL))(v3);
      v15 = this[48];
      this[48] = v3;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    }
    v4 = this[48];
    if ( !v4 )
    {
      v13 = 2996;
LABEL_8:
      v5 = -2147024882;
      v6 = -2147024882;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, v13);
      return v6;
    }
    v7 = CInteractionTrackerScaleAnimation::Initialize(v4, (struct CInteractionTracker *)this);
    v6 = v7;
    if ( v7 < 0 )
    {
      v13 = 2998;
LABEL_13:
      v5 = v7;
      goto LABEL_9;
    }
  }
  v8 = this + 49;
  if ( !this[49] )
  {
    v9 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new();
    if ( v9 )
      v9 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v9, this[2]);
    Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=(this + 49, v9);
    if ( !*v8 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xBBCu);
      return v6;
    }
    v7 = CInteractionTrackerPositionAnimation::Initialize(*v8, this, 0LL);
    v6 = v7;
    if ( v7 < 0 )
    {
      v13 = 3006;
      goto LABEL_13;
    }
  }
  v10 = this + 50;
  if ( !this[50] )
  {
    v11 = (CInteractionTrackerPositionAnimation *)CInteractionTrackerPositionAnimation::operator new();
    if ( v11 )
      v11 = CInteractionTrackerPositionAnimation::CInteractionTrackerPositionAnimation(v11, this[2]);
    Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=(this + 50, v11);
    if ( !*v10 )
    {
      v13 = 3012;
      goto LABEL_8;
    }
    v7 = CInteractionTrackerPositionAnimation::Initialize(*v10, this, 1LL);
    v6 = v7;
    if ( v7 < 0 )
    {
      v13 = 3014;
      goto LABEL_13;
    }
  }
  return 0;
}
