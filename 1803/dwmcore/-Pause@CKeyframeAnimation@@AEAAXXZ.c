/*
 * XREFs of ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x18001BAD8
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003D670 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18003E4C0 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::Pause(CKeyframeAnimation *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 508);
  if ( v1 < 0 && (v1 & 0x40) != 0 )
  {
    *((_BYTE *)this + 508) = v1 & 0xBF;
    *(_BYTE *)(*((_QWORD *)this + 41) + 140LL) &= ~2u;
  }
}
