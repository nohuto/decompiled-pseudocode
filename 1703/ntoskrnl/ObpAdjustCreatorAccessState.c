/*
 * XREFs of ObpAdjustCreatorAccessState @ 0x1404F2E14
 * Callers:
 *     ObpGrantAccess @ 0x1404F37F4 (ObpGrantAccess.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 * Callees:
 *     SeComputeCreatorDeniedRights @ 0x1400EDF40 (SeComputeCreatorDeniedRights.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     SeAppendPrivileges @ 0x1404370B0 (SeAppendPrivileges.c)
 *     RtlMapGenericMask @ 0x140472660 (RtlMapGenericMask.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404F48A0 (ObDereferenceSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptor @ 0x1404F4BD0 (ObpReferenceSecurityDescriptor.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14050FBC8 (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x140527F60 (SePrivilegeCheck.c)
 */

__int64 __fastcall ObpAdjustCreatorAccessState(PACCESS_STATE AccessState, KPROCESSOR_MODE a2, __int64 a3, __int64 a4)
{
  ACCESS_MASK *p_RemainingDesiredAccess; // rbx
  ACCESS_MASK RemainingDesiredAccess; // eax
  __int64 v10; // rbx
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+20h] [rbp-48h] BYREF

  p_RemainingDesiredAccess = &AccessState->RemainingDesiredAccess;
  RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  if ( (RemainingDesiredAccess & 0x2000000) != 0 )
    *p_RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
  if ( (*p_RemainingDesiredAccess & 0xF0000000) != 0 )
    RtlMapGenericMask(&AccessState->RemainingDesiredAccess, (PGENERIC_MAPPING)(a3 + 76));
  if ( (*p_RemainingDesiredAccess & 0x1000000) != 0 )
  {
    RequiredPrivileges.Privilege[0].Attributes = 0;
    RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    if ( !SePrivilegeCheck(&RequiredPrivileges, &AccessState->SubjectSecurityContext, a2) )
    {
      SePrivilegedServiceAuditAlarm(0LL, &AccessState->SubjectSecurityContext, &RequiredPrivileges, 0LL);
      return 3221225569LL;
    }
    *p_RemainingDesiredAccess &= ~0x1000000u;
    AccessState->PreviouslyGrantedAccess |= 0x1000000u;
    SeAppendPrivileges(AccessState, &RequiredPrivileges);
  }
  AccessState->PreviouslyGrantedAccess |= *p_RemainingDesiredAccess;
  *p_RemainingDesiredAccess = 0;
  AccessState->PreviouslyGrantedAccess &= *(_DWORD *)(a3 + 92) | 0x1000000;
  v10 = ObpReferenceSecurityDescriptor(a4 - 48);
  AccessState->PreviouslyGrantedAccess &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                                           &AccessState->SubjectSecurityContext,
                                                           (__int64)AccessState,
                                                           AccessState->PreviouslyGrantedAccess,
                                                           v10);
  if ( v10 )
    ObDereferenceSecurityDescriptor(v10);
  return 0LL;
}
