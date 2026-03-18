/*
 * XREFs of ?ToSeconds@TimeDelta@Animations@Components@@QEBAMXZ @ 0x1801B77A8
 * Callers:
 *     ?CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801815B4 (-CalculateInertiaValue@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 * Callees:
 *     ?ToMicroseconds@TimeDelta@Animations@Components@@QEBA_JXZ @ 0x1800C3E88 (-ToMicroseconds@TimeDelta@Animations@Components@@QEBA_JXZ.c)
 */

float __fastcall Components::Animations::TimeDelta::ToSeconds(Components::Animations::TimeDelta *this)
{
  if ( *(_QWORD *)this == 0x7FFFFFFFFFFFFFFFLL )
    return FLOAT_3_4028235e38;
  else
    return (float)(int)Components::Animations::TimeDelta::ToMicroseconds(this) / 1000000.0;
}
