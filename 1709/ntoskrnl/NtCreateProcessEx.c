/*
 * XREFs of NtCreateProcessEx @ 0x140599D60
 * Callers:
 *     NtCreateProcess @ 0x140714234 (NtCreateProcess.c)
 * Callees:
 *     PspCreateProcess @ 0x140599DF0 (PspCreateProcess.c)
 */

NTSTATUS __stdcall NtCreateProcessEx(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ParentProcess,
        ULONG Flags,
        HANDLE SectionHandle,
        HANDLE DebugPort,
        HANDLE ExceptionPort,
        BOOLEAN InJob)
{
  __int64 v10; // rcx

  if ( !ParentProcess )
    return -1073741811;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ProcessHandle < 0x7FFFFFFF0000LL )
      v10 = (__int64)ProcessHandle;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  return PspCreateProcess(ProcessHandle, DesiredAccess, ObjectAttributes);
}
