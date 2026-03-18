/*
 * XREFs of ??0CBaseProcessor@@QEAA@XZ @ 0x1C006F49C
 * Callers:
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C0047534 (--0CMouseProcessor@@IEAA@XZ.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C006E1C4 (--0CTouchProcessor@@QEAA@XZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C006E660 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
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
