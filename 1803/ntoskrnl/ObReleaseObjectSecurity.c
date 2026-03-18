/*
 * XREFs of ObReleaseObjectSecurity @ 0x1404C3DA0
 * Callers:
 *     MiAllowImageMap @ 0x1404B5C48 (MiAllowImageMap.c)
 *     ObpCheckObjectReference @ 0x1404C05AC (ObpCheckObjectReference.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404C20C0 (SepAppendAceToTokenObjectAcl.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D4B8C (ObpInsertOrLocateNamedObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405349D0 (PspAllocateAndQueryNotificationChannel.c)
 *     ObCheckObjectAccess @ 0x14053E470 (ObCheckObjectAccess.c)
 *     ObCheckCreateObjectAccess @ 0x140561B00 (ObCheckCreateObjectAccess.c)
 *     PopBootStatAccessCheck @ 0x1406501D4 (PopBootStatAccessCheck.c)
 *     ObpCheckTraverseAccess @ 0x140759244 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x14077B600 (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1407B28DC (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404C7150 (ObDereferenceSecurityDescriptor.c)
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
