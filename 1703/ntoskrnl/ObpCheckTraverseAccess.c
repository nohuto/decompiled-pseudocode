/*
 * XREFs of ObpCheckTraverseAccess @ 0x1406C1408
 * Callers:
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     SeFastTraverseCheck @ 0x140246784 (SeFastTraverseCheck.c)
 *     SeAppendPrivileges @ 0x1404370B0 (SeAppendPrivileges.c)
 *     ObReleaseObjectSecurity @ 0x1404F4870 (ObReleaseObjectSecurity.c)
 *     ObpGetObjectSecurity @ 0x1404F49F0 (ObpGetObjectSecurity.c)
 *     SeLockSubjectContext @ 0x1405086C0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140531170 (SeUnlockSubjectContext.c)
 */

char __fastcall ObpCheckTraverseAccess(
        __int64 a1,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        BOOLEAN a4,
        KPROCESSOR_MODE a5,
        PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // bl
  __int64 v8; // rdi
  NTSTATUS ObjectSecurity; // eax
  BOOLEAN v11; // al
  struct _PRIVILEGE_SET *v12; // rdi
  char v13; // bl
  PPRIVILEGE_SET Privileges; // [rsp+50h] [rbp-28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+98h] [rbp+20h] BYREF

  MemoryAllocated = a4;
  AccessMode = a5;
  GrantedAccess = 0;
  Privileges = 0LL;
  v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &MemoryAllocated, a5);
  if ( ObjectSecurity >= 0 )
  {
    if ( SeFastTraverseCheck((__int64)SecurityDescriptor, (__int64)a3, 2) )
    {
      v13 = 1;
    }
    else
    {
      SeLockSubjectContext(&a3->SubjectSecurityContext);
      v11 = SeAccessCheck(
              SecurityDescriptor,
              &a3->SubjectSecurityContext,
              1u,
              2u,
              0,
              &Privileges,
              (PGENERIC_MAPPING)(v8 + 76),
              AccessMode,
              &GrantedAccess,
              AccessStatus);
      v12 = Privileges;
      v13 = v11;
      if ( Privileges )
      {
        SeAppendPrivileges(a3, Privileges);
        MiDeleteSubsection(v12);
      }
      SeUnlockSubjectContext(&a3->SubjectSecurityContext);
    }
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
    return v13;
  }
  else
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
}
