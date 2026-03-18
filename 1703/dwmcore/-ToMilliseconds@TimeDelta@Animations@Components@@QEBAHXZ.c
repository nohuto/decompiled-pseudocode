/*
 * XREFs of ?ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ @ 0x1800C3EA8
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180030B20 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?ToMicroseconds@TimeDelta@Animations@Components@@QEBA_JXZ @ 0x1800C3E88 (-ToMicroseconds@TimeDelta@Animations@Components@@QEBA_JXZ.c)
 */

__int64 __fastcall Components::Animations::TimeDelta::ToMilliseconds(Components::Animations::TimeDelta *this)
{
  __int64 v1; // rax

  if ( *(_QWORD *)this == 0x7FFFFFFFFFFFFFFFLL )
    return 0x7FFFFFFFLL;
  v1 = Components::Animations::TimeDelta::ToMicroseconds(this);
  return (__int64)(v1 + 500 + ((v1 >> 63) & 0xFFFFFFFFFFFFFC18uLL)) / 1000;
}
