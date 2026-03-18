/*
 * XREFs of ?ToMilliseconds@TimeDelta@@QEBAHXZ @ 0x1800BA1F8
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A4D50 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180172BF0 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?ToMicroseconds@TimeDelta@@QEBA_JXZ @ 0x1800BA1D8 (-ToMicroseconds@TimeDelta@@QEBA_JXZ.c)
 */

__int64 __fastcall TimeDelta::ToMilliseconds(TimeDelta *this)
{
  __int64 v1; // rax

  if ( *(_QWORD *)this == 0x7FFFFFFFFFFFFFFFLL )
    return 0x7FFFFFFFLL;
  v1 = TimeDelta::ToMicroseconds(this);
  return (__int64)(v1 + 500 + ((v1 >> 63) & 0xFFFFFFFFFFFFFC18uLL)) / 1000;
}
