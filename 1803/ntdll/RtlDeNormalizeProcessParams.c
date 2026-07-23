/*
 * XREFs of RtlDeNormalizeProcessParams @ 0x1800D1AD0
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x18004B3F0 (RtlCreateProcessParametersEx.c)
 * Callees:
 *     <none>
 */

PRTL_USER_PROCESS_PARAMETERS __cdecl RtlDeNormalizeProcessParams(PRTL_USER_PROCESS_PARAMETERS ProcessParameters)
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
  if ( (Flags & 1) != 0 )
  {
    Buffer = ProcessParameters->CurrentDirectory.DosPath.Buffer;
    if ( Buffer )
      ProcessParameters->CurrentDirectory.DosPath.Buffer = (PWCH)((char *)Buffer - (char *)ProcessParameters);
    v4 = ProcessParameters->DllPath.Buffer;
    if ( v4 )
      ProcessParameters->DllPath.Buffer = (PWCH)((char *)v4 - (char *)ProcessParameters);
    v5 = ProcessParameters->ImagePathName.Buffer;
    if ( v5 )
      ProcessParameters->ImagePathName.Buffer = (PWCH)((char *)v5 - (char *)ProcessParameters);
    v6 = ProcessParameters->CommandLine.Buffer;
    if ( v6 )
      ProcessParameters->CommandLine.Buffer = (PWCH)((char *)v6 - (char *)ProcessParameters);
    v7 = ProcessParameters->WindowTitle.Buffer;
    if ( v7 )
      ProcessParameters->WindowTitle.Buffer = (PWCH)((char *)v7 - (char *)ProcessParameters);
    v8 = ProcessParameters->DesktopInfo.Buffer;
    if ( v8 )
      ProcessParameters->DesktopInfo.Buffer = (PWCH)((char *)v8 - (char *)ProcessParameters);
    v9 = ProcessParameters->ShellInfo.Buffer;
    if ( v9 )
      ProcessParameters->ShellInfo.Buffer = (PWCH)((char *)v9 - (char *)ProcessParameters);
    v10 = ProcessParameters->RuntimeData.Buffer;
    if ( v10 )
      ProcessParameters->RuntimeData.Buffer = (PWCH)((char *)v10 - (char *)ProcessParameters);
    ProcessParameters->Flags = Flags & 0xFFFFFFFE;
  }
  return ProcessParameters;
}
