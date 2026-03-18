/*
 * XREFs of ??0CBaseProcessor@@QEAA@XZ @ 0x1C00085F4
 * Callers:
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C000A7B0 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C0012EBC (--0CSpatialProcessor@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

CBaseProcessor *__fastcall CBaseProcessor::CBaseProcessor(CBaseProcessor *this)
{
  int ExecutionEvironment; // eax

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  ExecutionEvironment = EditionGetExecutionEvironment();
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 4) = ExecutionEvironment;
  return this;
}
