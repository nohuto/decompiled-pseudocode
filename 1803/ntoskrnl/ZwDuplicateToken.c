/*
 * XREFs of ZwDuplicateToken @ 0x1401A7D00
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x14009F5A0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x140287190 (RtlCheckTokenCapability.c)
 *     RtlImpersonateSelfEx @ 0x140574D34 (RtlImpersonateSelfEx.c)
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
