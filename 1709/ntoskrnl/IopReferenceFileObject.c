/*
 * XREFs of IopReferenceFileObject @ 0x140024E54
 * Callers:
 *     NtSetEaFile @ 0x14044F5E0 (NtSetEaFile.c)
 *     NtLockFile @ 0x1404924A0 (NtLockFile.c)
 *     NtReadFileScatter @ 0x1405616E4 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140561D0C (NtWriteFileGather.c)
 *     NtCancelIoFile @ 0x140568010 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x14056818C (NtCancelIoFileEx.c)
 *     NtQueryEaFile @ 0x140572CD0 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x140575154 (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140582FC0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetVolumeInformationFile @ 0x1405E06C0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406B5E40 (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x1406B68DC (IopValidateJunctionTarget.c)
 *     NtQueryQuotaInformationFile @ 0x1406B9540 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     IopFileObjectRevoked @ 0x14008AB40 (IopFileObjectRevoked.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopReferenceFileObject(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        PVOID *a4,
        POBJECT_HANDLE_INFORMATION a5)
{
  NTSTATUS v6; // ebx
  PVOID v8; // [rsp+58h] [rbp+20h] BYREF

  v6 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)IoFileObjectType, a3, &v8, a5);
  *a4 = v8;
  if ( v6 >= 0 && (unsigned __int8)IopFileObjectRevoked() )
  {
    ObfDereferenceObjectWithTag(*a4, 0x746C6644u);
    return (unsigned int)-1073739504;
  }
  return (unsigned int)v6;
}
