/*
 * XREFs of NtCreateProcessEx @ 0x14041FB2C
 * Callers:
 *     NtCreateProcess @ 0x1406DDD7C (NtCreateProcess.c)
 * Callees:
 *     PspCreateProcess @ 0x14045D9C0 (PspCreateProcess.c)
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
  return PspCreateProcess(
           (int)ProcessHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)ParentProcess,
           Flags,
           SectionHandle,
           (__int64)DebugPort,
           (__int64)ExceptionPort);
}
