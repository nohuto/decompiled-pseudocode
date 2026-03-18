/*
 * XREFs of ZwDuplicateToken @ 0x14017E780
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400671B0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14023BE40 (RtlCheckTokenCapability.c)
 *     RtlImpersonateSelfEx @ 0x14044BCE4 (RtlImpersonateSelfEx.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExistingTokenHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
