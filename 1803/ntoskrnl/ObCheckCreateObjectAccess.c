/*
 * XREFs of ObCheckCreateObjectAccess @ 0x140561B00
 * Callers:
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     ObpGetObjectSecurity @ 0x1404C1DAC (ObpGetObjectSecurity.c)
 *     ObReleaseObjectSecurity @ 0x1404C3DA0 (ObReleaseObjectSecurity.c)
 *     SeAppendPrivileges @ 0x14053E890 (SeAppendPrivileges.c)
 *     SeLockSubjectContext @ 0x1405A4DC0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405A5520 (SeUnlockSubjectContext.c)
 */

char __fastcall ObCheckCreateObjectAccess(
        __int64 a1,
        ACCESS_MASK a2,
        struct _ACCESS_STATE *a3,
        __int64 a4,
        __int64 a5,
        KPROCESSOR_MODE a6,
        PNTSTATUS AccessStatus)
{
  KPROCESSOR_MODE AccessMode; // di
  __int64 v10; // r14
  NTSTATUS ObjectSecurity; // eax
  BOOLEAN v12; // al
  struct _PRIVILEGE_SET *v13; // rsi
  char v14; // di
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-30h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp-28h] BYREF
  BOOLEAN MemoryAllocated; // [rsp+90h] [rbp+8h] BYREF

  AccessMode = a6;
  GrantedAccess = 0;
  Privileges = 0LL;
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, &MemoryAllocated, a6);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  else
  {
    SeLockSubjectContext(&a3->SubjectSecurityContext);
    if ( SecurityDescriptor )
    {
      v12 = SeAccessCheck(
              SecurityDescriptor,
              &a3->SubjectSecurityContext,
              1u,
              a2,
              0,
              &Privileges,
              (PGENERIC_MAPPING)(v10 + 76),
              AccessMode,
              &GrantedAccess,
              AccessStatus);
      v13 = Privileges;
      v14 = v12;
      if ( Privileges )
      {
        SeAppendPrivileges(a3, Privileges);
        CmSiFreeMemory(v13);
      }
    }
    else
    {
      v14 = 1;
    }
    SeUnlockSubjectContext(&a3->SubjectSecurityContext);
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
    return v14;
  }
}
