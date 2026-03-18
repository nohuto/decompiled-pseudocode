/*
 * XREFs of EtwpCheckCurrentUserProcessAccess @ 0x1407B28DC
 * Callers:
 *     EtwpNotifyGuid @ 0x14058B468 (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x14058C6E4 (EtwpIsRegEntryAllowed.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1407B00D8 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     ObpGetObjectSecurity @ 0x1404C1DAC (ObpGetObjectSecurity.c)
 *     ObReleaseObjectSecurity @ 0x1404C3DA0 (ObReleaseObjectSecurity.c)
 *     EtwpAccessCheck @ 0x14058F44C (EtwpAccessCheck.c)
 */

__int64 __fastcall EtwpCheckCurrentUserProcessAccess(__int64 a1)
{
  unsigned int v1; // ebx
  BOOLEAN MemoryAllocated; // [rsp+38h] [rbp+10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp+18h] BYREF

  SecurityDescriptor = 0LL;
  ObpGetObjectSecurity(a1, &SecurityDescriptor, &MemoryAllocated, 0);
  v1 = EtwpAccessCheck(SecurityDescriptor, 0x1FFFFFu, 0LL);
  ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
  return v1;
}
