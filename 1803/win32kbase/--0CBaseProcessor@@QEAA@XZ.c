/*
 * XREFs of ??0CBaseProcessor@@QEAA@XZ @ 0x1C0132744
 * Callers:
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C012AEE0 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ??0CSpatialProcessor@@QEAA@XZ @ 0x1C012C0B4 (--0CSpatialProcessor@@QEAA@XZ.c)
 * Callees:
 *     ApiSetEditionGetExecutionEvironment @ 0x1C006E7E0 (ApiSetEditionGetExecutionEvironment.c)
 */

CBaseProcessor *__fastcall CBaseProcessor::CBaseProcessor(CBaseProcessor *this)
{
  int ExecutionEvironment; // eax

  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  ExecutionEvironment = ApiSetEditionGetExecutionEvironment();
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 4) = ExecutionEvironment;
  return this;
}
