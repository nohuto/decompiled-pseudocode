/*
 * XREFs of CiSchedulerPoke @ 0x1C0002B94
 * Callers:
 *     CiProcessSuspend @ 0x1C00025D8 (CiProcessSuspend.c)
 *     CiThreadCreate @ 0x1C000A9F4 (CiThreadCreate.c)
 *     CiSchedulerTerminate @ 0x1C000B36C (CiSchedulerTerminate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiSchedulerPoke(unsigned int a1)
{
  __int64 result; // rax

  if ( !a1 )
    return KeAlertThread(CiSchedulerThread, 0LL);
  _m_prefetchw(&CiSchedulerWakeupReason);
  result = (unsigned int)_InterlockedOr(&CiSchedulerWakeupReason, a1);
  if ( (result & 0x8000) != 0 )
    return KeAlertThread(CiSchedulerThread, 0LL);
  return result;
}
