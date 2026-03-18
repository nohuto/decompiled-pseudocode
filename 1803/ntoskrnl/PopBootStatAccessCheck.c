/*
 * XREFs of PopBootStatAccessCheck @ 0x1406501D4
 * Callers:
 *     PopBootStatSet @ 0x14060EF54 (PopBootStatSet.c)
 *     PopBootStatGet @ 0x14064D048 (PopBootStatGet.c)
 *     PopBootStatCheckIntegrity @ 0x14076BDB0 (PopBootStatCheckIntegrity.c)
 *     PopBootStatRestoreDefaults @ 0x14076C05C (PopBootStatRestoreDefaults.c)
 * Callees:
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObpGetObjectSecurity @ 0x1404C1DAC (ObpGetObjectSecurity.c)
 *     ObReleaseObjectSecurity @ 0x1404C3DA0 (ObReleaseObjectSecurity.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall PopBootStatAccessCheck(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3)
{
  NTSTATUS v5; // edi
  PSECURITY_DESCRIPTOR v6; // r14
  BOOLEAN v7; // bl
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-11h]
  NTSTATUS AccessStatus; // [rsp+58h] [rbp+7h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+5Ch] [rbp+Bh] BYREF
  PVOID Object; // [rsp+60h] [rbp+Fh] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp+17h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp+1Fh] BYREF
  BOOLEAN MemoryAllocated; // [rsp+D0h] [rbp+7Fh] BYREF

  MemoryAllocated = 0;
  SecurityDescriptor = 0LL;
  v5 = ObReferenceObjectByHandle(a1, 0, 0LL, 0, &Object, 0LL);
  if ( v5 >= 0 )
  {
    AccessStatus = ObpGetObjectSecurity((__int64)Object, &SecurityDescriptor, &MemoryAllocated, 0);
    v5 = AccessStatus;
    if ( AccessStatus >= 0 )
    {
      SeCaptureSubjectContext(&SubjectContext);
      AccessMode = a2;
      v6 = SecurityDescriptor;
      v7 = SeAccessCheck(
             SecurityDescriptor,
             &SubjectContext,
             0,
             a3,
             0,
             0LL,
             (PGENERIC_MAPPING)&IopFileMapping,
             AccessMode,
             &GrantedAccess,
             &AccessStatus);
      SeReleaseSubjectContext(&SubjectContext);
      v5 = AccessStatus;
      if ( v7 )
        v5 = 0;
      if ( v6 )
        ObReleaseObjectSecurity(v6, MemoryAllocated);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  return (unsigned int)v5;
}
