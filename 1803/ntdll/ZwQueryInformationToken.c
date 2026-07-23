/*
 * XREFs of ZwQueryInformationToken @ 0x18009AEE0
 * Callers:
 *     RtlDefaultNpAcl @ 0x180002EB0 (RtlDefaultNpAcl.c)
 *     sub_180007740 @ 0x180007740 (sub_180007740.c)
 *     sub_18002E238 @ 0x18002E238 (sub_18002E238.c)
 *     sub_18002E46C @ 0x18002E46C (sub_18002E46C.c)
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     RtlCheckTokenCapability @ 0x180030720 (RtlCheckTokenCapability.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180037F50 (RtlFormatCurrentUserKeyPath.c)
 *     sub_180042B30 @ 0x180042B30 (sub_180042B30.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x1800438B0 (RtlGetAppContainerNamedObjectPath.c)
 *     sub_180044394 @ 0x180044394 (sub_180044394.c)
 *     RtlCheckSandboxedToken @ 0x18006B8E0 (RtlCheckSandboxedToken.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 *     RtlRemovePrivileges @ 0x180086DE0 (RtlRemovePrivileges.c)
 *     RtlNewInstanceSecurityObject @ 0x1800D1FE0 (RtlNewInstanceSecurityObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D2110 (RtlNewSecurityGrantedAccess.c)
 *     sub_1800D49E4 @ 0x1800D49E4 (sub_1800D49E4.c)
 *     sub_1800D8340 @ 0x1800D8340 (sub_1800D8340.c)
 *     sub_1800E1BF4 @ 0x1800E1BF4 (sub_1800E1BF4.c)
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
