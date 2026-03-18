/*
 * XREFs of ObReleaseObjectSecurity @ 0x1404F4870
 * Callers:
 *     MiAllowImageMap @ 0x1404415B0 (MiAllowImageMap.c)
 *     ObCheckCreateObjectAccess @ 0x1404F3120 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x1404F3890 (ObCheckObjectAccess.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404F3FB0 (ObpInsertOrLocateNamedObject.c)
 *     ObpCheckObjectReference @ 0x1404F44E8 (ObpCheckObjectReference.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 *     ObpCheckTraverseAccess @ 0x1406C1408 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x1406E13A8 (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140713190 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x1404F48A0 (ObDereferenceSecurityDescriptor.c)
 */

void __stdcall ObReleaseObjectSecurity(PSECURITY_DESCRIPTOR SecurityDescriptor, BOOLEAN MemoryAllocated)
{
  if ( SecurityDescriptor )
  {
    if ( MemoryAllocated )
      ExFreePoolWithTag(SecurityDescriptor, 0);
    else
      ObDereferenceSecurityDescriptor(SecurityDescriptor);
  }
}
