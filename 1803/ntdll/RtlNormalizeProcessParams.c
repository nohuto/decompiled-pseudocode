/*
 * XREFs of RtlNormalizeProcessParams @ 0x180087260
 * Callers:
 *     RtlCreateUserProcessEx @ 0x180086EE0 (RtlCreateUserProcessEx.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     <none>
 */

PRTL_USER_PROCESS_PARAMETERS __cdecl RtlNormalizeProcessParams(PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
{
  ULONG Flags; // edx
  PWCH Buffer; // rax
  PWCH v4; // rax
  PWCH v5; // rax
  PWCH v6; // rax
  PWCH v7; // rax
  PWCH v8; // rax
  PWCH v9; // rax
  PWCH v10; // rax

  if ( !ProcessParameters )
    return 0LL;
  Flags = ProcessParameters->Flags;
  if ( (Flags & 1) == 0 )
  {
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    if ( Buffer )
      ProcessParameters->CurrentDirectory.DosPath.Buffer = (PWCH)((char *)Buffer + (_QWORD)ProcessParameters);
    v4 = ProcessParameters->DllPath.Buffer;
    if ( v4 )
      ProcessParameters->DllPath.Buffer = (PWCH)((char *)v4 + (_QWORD)ProcessParameters);
    v5 = ProcessParameters->ImagePathName.Buffer;
    if ( v5 )
      ProcessParameters->ImagePathName.Buffer = (PWCH)((char *)v5 + (_QWORD)ProcessParameters);
    v6 = ProcessParameters->CommandLine.Buffer;
    if ( v6 )
      ProcessParameters->CommandLine.Buffer = (PWCH)((char *)v6 + (_QWORD)ProcessParameters);
    v7 = ProcessParameters->WindowTitle.Buffer;
    if ( v7 )
      ProcessParameters->WindowTitle.Buffer = (PWCH)((char *)v7 + (_QWORD)ProcessParameters);
    v8 = ProcessParameters->DesktopInfo.Buffer;
    if ( v8 )
      ProcessParameters->DesktopInfo.Buffer = (PWCH)((char *)v8 + (_QWORD)ProcessParameters);
    v9 = ProcessParameters->ShellInfo.Buffer;
    if ( v9 )
      ProcessParameters->ShellInfo.Buffer = (PWCH)((char *)v9 + (_QWORD)ProcessParameters);
    v10 = ProcessParameters->RuntimeData.Buffer;
    if ( v10 )
      ProcessParameters->RuntimeData.Buffer = (PWCH)((char *)v10 + (_QWORD)ProcessParameters);
    ProcessParameters->Flags = Flags | 1;
  }
  return ProcessParameters;
}
