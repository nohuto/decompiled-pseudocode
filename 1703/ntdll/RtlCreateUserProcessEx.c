/*
 * XREFs of RtlCreateUserProcessEx @ 0x18008D480
 * Callers:
 *     RtlCreateUserProcess @ 0x1800E2110 (RtlCreateUserProcess.c)
 * Callees:
 *     sub_18008D520 @ 0x18008D520 (sub_18008D520.c)
 *     RtlNormalizeProcessParams @ 0x18008D7E0 (RtlNormalizeProcessParams.c)
 */

NTSTATUS __cdecl RtlCreateUserProcessEx(
        PUNICODE_STRING NtImagePathName,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters,
        BOOLEAN InheritHandles,
        PRTL_USER_PROCESS_EXTENDED_PARAMETERS ProcessExtendedParameters,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  PRTL_USER_PROCESS_PARAMETERS v8; // rax
  ULONG Flags; // r9d
  unsigned int v10; // edx
  __int64 v11; // r8

  if ( !NtImagePathName )
    return -1073741811;
  if ( !ProcessParameters )
    return -1073741811;
  v8 = RtlNormalizeProcessParams(ProcessParameters);
  if ( !v8 )
    return -1073741811;
  if ( !InheritHandles )
    v8->CurrentDirectory.Handle = 0LL;
  Flags = v8->Flags;
  v10 = (InheritHandles != 0 ? 4 : 0) | 0x80;
  if ( (Flags & 0x40000) == 0 )
    v10 = InheritHandles != 0 ? 4 : 0;
  v11 = v10 | 0x40;
  if ( (Flags & 0x400000) == 0 )
    v11 = v10;
  return sub_18008D520(NtImagePathName, v8, v11, 1LL, ProcessExtendedParameters, ProcessInformation);
}
