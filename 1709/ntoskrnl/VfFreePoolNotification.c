/*
 * XREFs of VfFreePoolNotification @ 0x1407B7624
 * Callers:
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x1402848FC (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VerifierExFreePoolWithTag @ 0x1407A64E0 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     VfRemLockDeleteMemoryRange @ 0x1407B4868 (VfRemLockDeleteMemoryRange.c)
 *     ViPoolLogStackTrace @ 0x1407B78E8 (ViPoolLogStackTrace.c)
 *     VfDeadlockDeleteMemoryRange @ 0x1407BB198 (VfDeadlockDeleteMemoryRange.c)
 */

__int64 __fastcall VfFreePoolNotification(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (MmVerifierData & 8) == 0 && VfVerifyMode == 2;
  if ( a2 )
  {
    if ( !(_DWORD)result && VfPoolTraces )
      ViPoolLogStackTrace(a1, a2);
    VfDeadlockDeleteMemoryRange(a1, a2);
    return VfRemLockDeleteMemoryRange(a1, a2);
  }
  else if ( (_DWORD)result )
  {
    if ( VfPoolTraces )
      return ViPoolLogStackTrace(a1, 16LL);
  }
  return result;
}
