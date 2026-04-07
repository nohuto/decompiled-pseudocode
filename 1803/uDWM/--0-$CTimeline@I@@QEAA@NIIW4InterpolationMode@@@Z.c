/*
 * XREFs of ??0?$CTimeline@I@@QEAA@NIIW4InterpolationMode@@@Z @ 0x1800869C8
 * Callers:
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003A024 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x180013AB0 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 */

_QWORD *__fastcall CTimeline<unsigned int>::CTimeline<unsigned int>(__int64 a1, double a2, __int64 a3, int a4)
{
  _QWORD *v4; // r8
  _QWORD *result; // rax

  CTimelineBase::CTimelineBase(a1, a2, 0.0, (double)a4, 0);
  result = v4;
  *v4 = &CTimeline<unsigned int>::`vftable';
  return result;
}
