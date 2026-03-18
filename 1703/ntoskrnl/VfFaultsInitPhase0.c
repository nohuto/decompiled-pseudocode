/*
 * XREFs of VfFaultsInitPhase0 @ 0x140775B94
 * Callers:
 *     VfInitVerifierComponents @ 0x1407657A0 (VfInitVerifierComponents.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     ViFaultsAddAllApps @ 0x140776080 (ViFaultsAddAllApps.c)
 *     ViFaultsAddAllTags @ 0x140776134 (ViFaultsAddAllTags.c)
 */

__int64 VfFaultsInitPhase0()
{
  __int64 v0; // rax
  KIRQL v1; // al
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rbx
  __int64 result; // rax

  ViFaultInjectionLock = 0LL;
  v0 = (unsigned int)ViFaultTracesLength;
  ViRequiredTimeSinceBootInMsecs = 60000LL * (unsigned int)VfFaultInjectionBootMinutes;
  if ( (unsigned int)ViFaultTracesLength > 0x101000 )
  {
    v0 = 1052672LL;
    ViFaultTracesLength = 1052672;
  }
  ViFaultTraces = (__int64)ExAllocatePoolWithTagPriority(NonPagedPoolNx, 72 * v0, 0x74746C46u, HighPoolPriority);
  v1 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  ViHaveFaultTags = 0;
  v2 = v1;
  qword_140348028 = (__int64)&ViFaultTagsList;
  ViFaultTagsList = &ViFaultTagsList;
  KxReleaseSpinLock(&ViFaultInjectionLock);
  __writecr8(v2);
  if ( (unsigned int)(VerifierFaultTagsBufferSize - 2) <= 0xFE )
    ViFaultsAddAllTags(&VerifierFaultTagsBuffer, ((unsigned __int64)(unsigned int)VerifierFaultTagsBufferSize - 2) >> 1);
  v3 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  qword_140348048 = (__int64)&ViFaultApplicationsList;
  ViFaultApplicationsList = &ViFaultApplicationsList;
  KxReleaseSpinLock(&ViFaultInjectionLock);
  __writecr8(v3);
  result = (unsigned int)(VerifierFaultApplicationsBufferSize - 2);
  if ( (unsigned int)result <= 0xFE )
    result = ViFaultsAddAllApps(
               &VerifierFaultApplicationsBuffer,
               ((unsigned __int64)(unsigned int)VerifierFaultApplicationsBufferSize - 2) >> 1);
  ViFaultsInitialized = 1;
  return result;
}
