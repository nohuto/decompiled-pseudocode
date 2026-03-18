/*
 * XREFs of ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x180196F30
 * Callers:
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x180193778 (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x1801938AC (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x180193CAC (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801CAADC (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x180193928 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x180194020 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1801947E4 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x180194A20 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801967C4 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x180196CC8 (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x1801CA304 (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 */

void __fastcall CInteractionTracker::TransitionToInertia(CInteractionTracker *this)
{
  unsigned int v1; // edi
  int v3; // ecx
  char v4; // si
  char v5; // bp
  int v6; // ecx
  int v7; // ecx
  CInteractionTracker *v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rax
  CInteractionTracker *v11; // rcx
  CInteractionTracker *v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  v3 = *((_DWORD *)this + 38);
  v4 = 0;
  v5 = 0;
  if ( !v3 )
    goto LABEL_5;
  v6 = v3 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      if ( CInteractionTracker::AreInteractionAnimationsAlive(this)
        && (CInteractionTracker::IsOutOfBounds(v11) || CInteractionTracker::HasImpulse(v12)) )
      {
        v4 = 1;
      }
      v5 = v4;
LABEL_8:
      if ( !v4 )
        return;
      goto LABEL_9;
    }
    if ( v7 != 1 )
      return;
LABEL_5:
    if ( !CInteractionTracker::IsOutOfBounds(this) && !CInteractionTracker::HasImpulse(v8) )
      return;
    v4 = 1;
    goto LABEL_8;
  }
LABEL_9:
  CInteractionTracker::StopCustomAnimations(this);
  CInteractionTracker::EnsureInteractionAnimations((struct CComposition **)this);
  if ( v5 )
  {
    v13 = *((_QWORD *)this + 61);
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v13);
    v14 = *((_QWORD *)this + 62);
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v14);
    v15 = *((_QWORD *)this + 60);
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v15);
    v9 = &v13;
    do
    {
      v10 = *v9;
      ++v1;
      ++v9;
      *(_BYTE *)(v10 + 312) |= 4u;
    }
    while ( v1 < 3 );
    `vector destructor iterator'(
      (char *)&v13,
      8LL,
      3LL,
      (void (__fastcall *)(KeyframeSequence::Keyframe *__hidden))Microsoft::WRL::ComPtr<CScrollAnimation>::~ComPtr<CScrollAnimation>);
  }
  InteractionSourceManager::OnInteractionTrackerTransitionToInertia((CInteractionTracker *)((char *)this + 352));
  CInteractionTracker::SetState((__int64)this, 2u);
}
