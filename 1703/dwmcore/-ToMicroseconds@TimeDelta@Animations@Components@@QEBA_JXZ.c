/*
 * XREFs of ?ToMicroseconds@TimeDelta@Animations@Components@@QEBA_JXZ @ 0x1800C3E88
 * Callers:
 *     ?ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ @ 0x1800C3EA8 (-ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ.c)
 *     ?ToSeconds@TimeDelta@Animations@Components@@QEBAMXZ @ 0x1801B77A8 (-ToSeconds@TimeDelta@Animations@Components@@QEBAMXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Components::Animations::TimeDelta::ToMicroseconds(Components::Animations::TimeDelta *this)
{
  __int64 result; // rax

  result = 0x7FFFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)this != 0x7FFFFFFFFFFFFFFFLL )
    return 1000000LL * *(_QWORD *)this / Components::Animations::Time::s_luFreq.QuadPart;
  return result;
}
