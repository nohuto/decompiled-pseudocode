/*
 * XREFs of RtlCreateUserProcessEx @ 0x180086EE0
 * Callers:
 *     RtlCreateUserProcess @ 0x1800DBDA0 (RtlCreateUserProcess.c)
 * Callees:
 *     sub_180086FA0 @ 0x180086FA0 (sub_180086FA0.c)
 *     RtlNormalizeProcessParams @ 0x180087260 (RtlNormalizeProcessParams.c)
 */

NTSTATUS __cdecl RtlCreateUserProcessEx(
        PUNICODE_STRING NtImagePathName,
        PRTL_USER_PROCESS_PARAMETERS ProcessParameters,
        BOOLEAN InheritHandles,
        PRTL_USER_PROCESS_EXTENDED_PARAMETERS ProcessExtendedParameters,
        PRTL_USER_PROCESS_INFORMATION ProcessInformation)
{
  PRTL_USER_PROCESS_PARAMETERS v8; // r10
  int v9; // eax
  int v10; // r8d
  ULONG Flags; // edx
  unsigned int v12; // ecx
  __int64 v13; // r8

  if ( !NtImagePathName )
    return -1073741811;
  if ( !ProcessParameters )
    return -1073741811;
  v8 = RtlNormalizeProcessParams(ProcessParameters);
  if ( !v8 )
    return -1073741811;
  v9 = 0;
  if ( InheritHandles )
  {
    v9 = 4;
    v10 = 132;
  }
  else
  {
    v8->CurrentDirectory.Handle = 0LL;
    v10 = 128;
  }
  Flags = v8->Flags;
  if ( (Flags & 0x40000) == 0 )
    v10 = v9;
  v12 = v10 | 0x40;
  if ( (Flags & 0x400000) == 0 )
    v12 = v10;
  v13 = v12 | 0x40000;
  if ( (Flags & 0x800000) == 0 )
    v13 = v12;
  return sub_180086FA0(NtImagePathName, v8, v13, 1LL, ProcessExtendedParameters, ProcessInformation);
}
