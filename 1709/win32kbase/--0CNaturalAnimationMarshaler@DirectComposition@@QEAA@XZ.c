/*
 * XREFs of ??0CNaturalAnimationMarshaler@DirectComposition@@QEAA@XZ @ 0x1C013F8CC
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0030918 (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CNaturalAnimationMarshaler *__fastcall DirectComposition::CNaturalAnimationMarshaler::CNaturalAnimationMarshaler(
        DirectComposition::CNaturalAnimationMarshaler *this)
{
  *(_QWORD *)((char *)this + 20) = 1LL;
  *(_QWORD *)this = &DirectComposition::CNaturalAnimationMarshaler::`vftable';
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((LARGE_INTEGER *)this + 23) = KeQueryPerformanceCounter(0LL);
  return this;
}
