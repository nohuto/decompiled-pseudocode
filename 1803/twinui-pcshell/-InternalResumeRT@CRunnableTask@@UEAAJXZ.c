/*
 * XREFs of ?InternalResumeRT@CRunnableTask@@UEAAJXZ @ 0x180096920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRunnableTask::InternalResumeRT(CRunnableTask *this)
{
  *((_DWORD *)this + 11) = 4;
  return 0LL;
}
