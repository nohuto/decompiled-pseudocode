/*
 * XREFs of VfFaultsIsSystemSufficientlyBooted @ 0x140775E80
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1407640D0 (VeAllocatePoolWithTagPriority.c)
 *     VfFaultsInjectResourceFailure @ 0x140775D48 (VfFaultsInjectResourceFailure.c)
 *     VerifierMmMapLockedPages @ 0x140782160 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140782250 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     <none>
 */

__int64 VfFaultsIsSystemSufficientlyBooted()
{
  __int64 result; // rax

  if ( ViSystemSufficientlyBooted )
    return 1LL;
  result = 1LL;
  if ( (MEMORY[0xFFFFF78000000014] - KeBootTime.QuadPart) / 0x2710uLL <= ViRequiredTimeSinceBootInMsecs )
  {
    ++dword_140790264;
    return (unsigned int)ViSystemSufficientlyBooted;
  }
  else
  {
    ViSystemSufficientlyBooted = 1;
  }
  return result;
}
