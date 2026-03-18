/*
 * XREFs of ?ApiPause@Animation@Animations@Components@@QEAAJXZ @ 0x18002C99C
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180030350 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180030B20 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?Add@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnimation@23@@Z @ 0x18002AA3C (-Add@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnima.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiPause(Components::Animations::Animation *this)
{
  char v1; // al
  Components::Animations::AnimationManager *v3; // rbx
  Components::Animations::Animation *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 72);
  if ( (v1 & 4) != 0 && (v1 & 2) != 0 )
  {
    v3 = Components::Animations::AnimationManager::s_PORT_pSingleton;
    v5 = this;
    *((_BYTE *)this + 72) = v1 & 0xFD;
    *(_BYTE *)(*((_QWORD *)this + 1) + 264LL) &= ~2u;
    Components::Animations::ArrayListF<Components::Animations::Animation *>::Add((__int64)v3 + 80, &v5);
    *((_BYTE *)v3 + 176) |= 4u;
    *((_BYTE *)this + 72) &= ~1u;
  }
  return 0LL;
}
