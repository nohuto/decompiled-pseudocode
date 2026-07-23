/*
 * XREFs of RtlCreateUserProcessEx @ 0x18008AFF0
 * Callers:
 *     RtlCreateUserProcess @ 0x1800E0E60 (RtlCreateUserProcess.c)
 * Callees:
 *     RtlpCreateUserProcess @ 0x18008B0A8 (RtlpCreateUserProcess.c)
 *     RtlNormalizeProcessParams @ 0x18008B360 (RtlNormalizeProcessParams.c)
 */

NTSTATUS __cdecl RtlCreateUserProcessEx(
        PUNICODE_STRING NtImagePathName,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters,
        BOOLEAN InheritHandles,
        PRTL_USER_PROCESS_EXTENDED_PARAMETERS ProcessExtendedParameters,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  PRTL_USER_PROCESS_PARAMETERS v8; // rax
  unsigned int Flags; // r9d
  int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // r8

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
  v12 = v11 | 0x40000;
  if ( (Flags & 0x800000) == 0 )
    v12 = v11;
  return RtlpCreateUserProcess(NtImagePathName, v8, v12, 1LL, ProcessExtendedParameters, ProcessInformation);
}
