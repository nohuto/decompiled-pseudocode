/*
 * XREFs of ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x18002C724
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180030350 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180030B20 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?RegisterLive@AnimationManager@Animations@Components@@QEAAJPEAVAnimation@23@@Z @ 0x18002A8B8 (-RegisterLive@AnimationManager@Animations@Components@@QEAAJPEAVAnimation@23@@Z.c)
 *     ?PrepareSequenceForIteration@Animation@Animations@Components@@AEAAXI@Z @ 0x18002C0AC (-PrepareSequenceForIteration@Animation@Animations@Components@@AEAAXI@Z.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x18002C7E4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x18002F6A0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 *     ?Play@Sequence@Animations@Components@@QEAAXXZ @ 0x180090E84 (-Play@Sequence@Animations@Components@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiPlay(Components::Animations::Animation *this)
{
  char v1; // al
  __int64 v3; // rcx
  int v4; // edi
  __int64 v5; // rcx
  void (__fastcall *v6)(__int64, __int64); // rax

  v1 = *((_BYTE *)this + 72);
  if ( (v1 & 4) == 0 )
  {
    *((_DWORD *)this + 7) = 0;
    Components::Animations::Animation::PrepareSequenceForIteration(this, 0);
    Components::Animations::Sequence::Play(*(Components::Animations::Sequence **)(v3 + 8));
    v4 = Components::Animations::AnimationManager::RegisterLive(
           Components::Animations::AnimationManager::s_PORT_pSingleton,
           this);
    if ( v4 >= 0 )
    {
      v5 = *((_QWORD *)this + 8);
      *((_BYTE *)this + 72) = *((_BYTE *)this + 72) & 0xE8 | 7;
      *((_DWORD *)this + 9) = *((_DWORD *)this + 8);
      v6 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 64LL);
      if ( (char *)v6 == (char *)CKeyframeAnimation::OnAnimationEvent )
        CKeyframeAnimation::OnAnimationEvent(v5, 4LL);
      else
        v6(v5, 4LL);
      *((_BYTE *)this + 72) |= 0x40u;
      return 0;
    }
LABEL_13:
    Components::Animations::Animation::ApiReset(this, 0);
    return (unsigned int)v4;
  }
  if ( (v1 & 2) == 0 && (v1 & 0x10) == 0 )
  {
    v4 = Components::Animations::AnimationManager::RegisterLive(
           Components::Animations::AnimationManager::s_PORT_pSingleton,
           this);
    if ( v4 < 0 )
      goto LABEL_13;
    *((_BYTE *)this + 72) |= 3u;
    Components::Animations::Sequence::Play(*((Components::Animations::Sequence **)this + 1));
  }
  return 0;
}
