/*
 * XREFs of ObReleaseObjectSecurity @ 0x140484B60
 * Callers:
 *     ObpCheckObjectReference @ 0x140484944 (ObpCheckObjectReference.c)
 *     ObpInsertOrLocateNamedObject @ 0x140486408 (ObpInsertOrLocateNamedObject.c)
 *     ObCheckCreateObjectAccess @ 0x140486D00 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x140487DB0 (ObCheckObjectAccess.c)
 *     MiAllowImageMap @ 0x1404D21DC (MiAllowImageMap.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14050E064 (PspAllocateAndQueryNotificationChannel.c)
 *     PopBootStatAccessCheck @ 0x1405ACC58 (PopBootStatAccessCheck.c)
 *     ObpCheckTraverseAccess @ 0x1406EFDB4 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x14071768C (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140751B88 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x140484DE0 (ObDereferenceSecurityDescriptor.c)
 */

void __stdcall ObReleaseObjectSecurity(PSECURITY_DESCRIPTOR SecurityDescriptor, BOOLEAN MemoryAllocated)
{
  if ( SecurityDescriptor )
  {
    if ( MemoryAllocated )
      ExFreePoolWithTag(SecurityDescriptor, 0);
    else
      ObDereferenceSecurityDescriptor(SecurityDescriptor, 1LL);
  }
}
