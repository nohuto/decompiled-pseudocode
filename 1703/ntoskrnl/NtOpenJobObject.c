/*
 * XREFs of NtOpenJobObject @ 0x1406E0F04
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1404CD2A0 (ObOpenObjectByName.c)
 *     EtwTraceJob @ 0x14070AA40 (EtwTraceJob.c)
 */

NTSTATUS __stdcall NtOpenJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  char PreviousMode; // r8
  __int64 v7; // rdx
  NTSTATUS v8; // ebx
  void *v10; // [rsp+78h] [rbp+20h] BYREF

  v3 = (int)ObjectAttributes;
  v10 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)JobHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)JobHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  v8 = ObOpenObjectByName(v3, (int)PsJobType, PreviousMode, 0, DesiredAccess, 0LL, (__int64)&v10);
  if ( v8 >= 0 )
    *JobHandle = v10;
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(0LL, 0LL, (unsigned int)v8, 1826LL);
  return v8;
}
