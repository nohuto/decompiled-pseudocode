/*
 * XREFs of EtwpCheckCurrentUserProcessAccess @ 0x140751B88
 * Callers:
 *     EtwpNotifyGuid @ 0x1404EDE90 (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x1404EFD60 (EtwpIsRegEntryAllowed.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14074F27C (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     ObReleaseObjectSecurity @ 0x140484B60 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x140484F30 (ObpGetObjectSecurity.c)
 *     EtwpAccessCheck @ 0x140490118 (EtwpAccessCheck.c)
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
