/*
 * XREFs of ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x1800A3B0C
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A3FA0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A4D50 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::Pause(CKeyframeAnimation *this)
{
  char v1; // al

  v1 = *((_BYTE *)this + 456);
  if ( (v1 & 0x40) != 0 && (v1 & 0x20) != 0 )
  {
    *((_BYTE *)this + 456) = v1 & 0xDF;
    *(_BYTE *)(*((_QWORD *)this + 39) + 132LL) &= ~2u;
  }
}
