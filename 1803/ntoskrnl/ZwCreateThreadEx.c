/*
 * XREFs of ZwCreateThreadEx @ 0x1401A8C20
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x14052ECBC (RtlpCreateUserThreadEx.c)
 *     DbgkUserReportWorkRoutine @ 0x140710940 (DbgkUserReportWorkRoutine.c)
 *     MiForceCrashForInvalidAccess @ 0x1407499E8 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateThreadEx(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PUSER_THREAD_START_ROUTINE StartRoutine,
        PVOID Argument,
        ULONG CreateFlags,
        SIZE_T ZeroBits,
        SIZE_T StackSize,
        SIZE_T MaximumStackSize,
        PPS_ATTRIBUTE_LIST AttributeList)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
