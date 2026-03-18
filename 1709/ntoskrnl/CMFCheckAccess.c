/*
 * XREFs of CMFCheckAccess @ 0x1405D5B14
 * Callers:
 *     NtMapCMFModule @ 0x1404F2994 (NtMapCMFModule.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     SeAccessCheck @ 0x14007E440 (SeAccessCheck.c)
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SeLockSubjectContext @ 0x1404A6DD0 (SeLockSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1404B2450 (SeUnlockSubjectContext.c)
 *     RtlMapGenericMask @ 0x1404C0550 (RtlMapGenericMask.c)
 *     SePrivilegeCheck @ 0x1404C45D0 (SePrivilegeCheck.c)
 *     SeCreateAccessState @ 0x1404C6430 (SeCreateAccessState.c)
 *     SeAppendPrivileges @ 0x14056D5D0 (SeAppendPrivileges.c)
 *     CMFCreateSecurityDescriptor @ 0x140760F4C (CMFCreateSecurityDescriptor.c)
 */

__int64 __fastcall CMFCheckAccess(__int64 a1, ACCESS_MASK a2, KPROCESSOR_MODE a3)
{
  GENERIC_MAPPING *GenericMapping; // rdi
  ACCESS_MASK v5; // esi
  unsigned int v6; // ebx
  BOOLEAN v7; // r14
  ACCESS_MASK v8; // edi
  BOOLEAN v10; // al
  struct _PRIVILEGE_SET *v11; // rbx
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-B0h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-ACh] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  ACCESS_MASK AccessMask; // [rsp+60h] [rbp-A0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+68h] [rbp-98h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+70h] [rbp-90h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v19[28]; // [rsp+130h] [rbp+30h] BYREF

  AccessMask = a2;
  if ( a1 )
  {
    GenericMapping = (GENERIC_MAPPING *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)]
                                       + 76);
    RtlMapGenericMask(&AccessMask, GenericMapping);
    if ( !CMFSecurityDescriptor )
    {
      P = 0LL;
      v6 = CMFCreateSecurityDescriptor(&P, GenericMapping);
      if ( (v6 & 0xC0000000) == 0xC0000000 )
        return v6;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CMFSecurityDescriptor, (signed __int64)P, 0LL) )
        ExFreePoolWithTag(P, 0);
    }
    v5 = AccessMask;
    v6 = SeCreateAccessState(&AccessState, v19, AccessMask, GenericMapping);
    if ( (v6 & 0xC0000000) != 0xC0000000 )
    {
      SeLockSubjectContext(&AccessState.SubjectSecurityContext);
      RequiredPrivileges.Control = 0;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      P = (PVOID)18;
      RequiredPrivileges.Privilege[0].Luid = (LUID)18LL;
      RequiredPrivileges.PrivilegeCount = 1;
      v6 = 0;
      v7 = SePrivilegeCheck(&RequiredPrivileges, &AccessState.SubjectSecurityContext, a3);
      GrantedAccess = 0;
      AccessStatus = 0;
      if ( v7 )
      {
        v8 = v5;
      }
      else
      {
        Privileges = 0LL;
        v10 = SeAccessCheck(
                CMFSecurityDescriptor,
                &AccessState.SubjectSecurityContext,
                1u,
                v5,
                0,
                &Privileges,
                GenericMapping,
                a3,
                &GrantedAccess,
                &AccessStatus);
        v11 = Privileges;
        v7 = v10;
        if ( Privileges )
        {
          SeAppendPrivileges(&AccessState, Privileges);
          MiDeleteSubsection(v11);
        }
        v6 = AccessStatus;
        v8 = GrantedAccess;
      }
      SeUnlockSubjectContext(&AccessState.SubjectSecurityContext);
      if ( (v6 & 0xC0000000) != 0xC0000000 )
      {
        if ( !v7 || (~v8 & v5) != 0 )
          v6 = -1073741790;
        else
          v6 = 0;
      }
      SepDeleteAccessState((__int64)&AccessState);
      SeReleaseSubjectContext(&AccessState.SubjectSecurityContext);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
