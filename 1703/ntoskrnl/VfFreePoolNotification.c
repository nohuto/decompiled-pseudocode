/*
 * XREFs of VfFreePoolNotification @ 0x140775864
 * Callers:
 *     ExFreeLargePool @ 0x1400DCA30 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x14025B100 (ExpFreePoolChecks.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VerifierExFreePoolWithTag @ 0x1407647C0 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     VfRemLockDeleteMemoryRange @ 0x140772AA8 (VfRemLockDeleteMemoryRange.c)
 *     ViPoolLogStackTrace @ 0x140775AE8 (ViPoolLogStackTrace.c)
 *     VfDeadlockDeleteMemoryRange @ 0x14077927C (VfDeadlockDeleteMemoryRange.c)
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
