/*
 * XREFs of ??0CSpatialProcessor@@QEAA@XZ @ 0x1C012C0B4
 * Callers:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C010C7C4 (--0CTouchProcessor@@QEAA@XZ.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C01339CC (--0CMouseProcessor@@IEAA@XZ.c)
 * Callees:
 *     ??0CBaseProcessor@@QEAA@XZ @ 0x1C0132744 (--0CBaseProcessor@@QEAA@XZ.c)
 */

CSpatialProcessor *__fastcall CSpatialProcessor::CSpatialProcessor(CSpatialProcessor *this)
{
  CBaseProcessor::CBaseProcessor(this);
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &CKeyboardProcessor::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  return this;
}
