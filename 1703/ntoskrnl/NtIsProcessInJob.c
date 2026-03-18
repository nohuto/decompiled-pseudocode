/*
 * XREFs of NtIsProcessInJob @ 0x14054CBA8
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     PspIsProcessInJob @ 0x14054CC94 (PspIsProcessInJob.c)
 */

NTSTATUS __stdcall NtIsProcessInJob(HANDLE ProcessHandle, HANDLE JobHandle)
{
  __int64 v2; // r8
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rbx
  char PreviousMode; // si
  NTSTATUS result; // eax
  _QWORD *p_Lock; // rbx
  NTSTATUS v10; // eax
  PVOID v11; // rdx
  NTSTATUS IsProcessInJob; // esi
  void *v13; // rdx
  PVOID v14; // [rsp+60h] [rbp+8h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    p_Lock = &CurrentThread->ApcState.Process->Header.Lock;
    v14 = p_Lock;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)ProcessHandle,
               4096,
               (__int64)PsProcessType,
               PreviousMode,
               1649046352,
               &v14,
               0LL,
               0LL);
    if ( result < 0 )
      return result;
    p_Lock = v14;
  }
  if ( !JobHandle )
  {
    v11 = (PVOID)p_Lock[118];
    p_Lock = v14;
LABEL_6:
    IsProcessInJob = PspIsProcessInJob(p_Lock, v11, v2, v3);
    if ( JobHandle )
      ObfDereferenceObject(v13);
    goto LABEL_8;
  }
  v10 = ObReferenceObjectByHandle(JobHandle, 4u, (POBJECT_TYPE)PsJobType, PreviousMode, &Object, 0LL);
  v11 = Object;
  IsProcessInJob = v10;
  if ( v10 >= 0 )
    goto LABEL_6;
LABEL_8:
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(p_Lock, 0x624A7350u);
  return IsProcessInJob;
}
