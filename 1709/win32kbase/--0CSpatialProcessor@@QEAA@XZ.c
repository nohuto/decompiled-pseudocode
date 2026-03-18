/*
 * XREFs of ??0CSpatialProcessor@@QEAA@XZ @ 0x1C0012EBC
 * Callers:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C000753C (--0CTouchProcessor@@QEAA@XZ.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C001645C (--0CMouseProcessor@@IEAA@XZ.c)
 * Callees:
 *     ??0CBaseProcessor@@QEAA@XZ @ 0x1C00085F4 (--0CBaseProcessor@@QEAA@XZ.c)
 */

CSpatialProcessor *__fastcall CSpatialProcessor::CSpatialProcessor(CSpatialProcessor *this)
{
  CBaseProcessor::CBaseProcessor(this);
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  return this;
}
