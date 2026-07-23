/*
 * XREFs of ZwQueryInformationToken @ 0x1800A5720
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x1800410E0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCheckTokenCapability @ 0x180046650 (RtlCheckTokenCapability.c)
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     sub_18004B6C4 @ 0x18004B6C4 (sub_18004B6C4.c)
 *     sub_18004B8F8 @ 0x18004B8F8 (sub_18004B8F8.c)
 *     sub_18004FBBC @ 0x18004FBBC (sub_18004FBBC.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x180057AA0 (RtlGetAppContainerNamedObjectPath.c)
 *     sub_180057C00 @ 0x180057C00 (sub_180057C00.c)
 *     sub_18005E3C8 @ 0x18005E3C8 (sub_18005E3C8.c)
 *     RtlCheckSandboxedToken @ 0x1800756E0 (RtlCheckSandboxedToken.c)
 *     sub_180081410 @ 0x180081410 (sub_180081410.c)
 *     RtlDefaultNpAcl @ 0x18008C000 (RtlDefaultNpAcl.c)
 *     RtlRemovePrivileges @ 0x18008D8A0 (RtlRemovePrivileges.c)
 *     RtlNewInstanceSecurityObject @ 0x1800D9050 (RtlNewInstanceSecurityObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D9180 (RtlNewSecurityGrantedAccess.c)
 *     sub_1800DB244 @ 0x1800DB244 (sub_1800DB244.c)
 *     sub_1800DEAD4 @ 0x1800DEAD4 (sub_1800DEAD4.c)
 *     sub_1800E6ED4 @ 0x1800E6ED4 (sub_1800E6ED4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationToken(
        HANDLE TokenHandle,
        ULONG TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 33;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
