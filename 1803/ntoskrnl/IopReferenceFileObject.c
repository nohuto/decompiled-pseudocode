/*
 * XREFs of IopReferenceFileObject @ 0x1400697A4
 * Callers:
 *     NtLockFile @ 0x1404E39A0 (NtLockFile.c)
 *     NtCancelIoFile @ 0x14055C330 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x14055C4AC (NtCancelIoFileEx.c)
 *     NtFlushBuffersFileEx @ 0x140560E8C (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x140564750 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140572550 (NtNotifyChangeDirectoryFileEx.c)
 *     NtWriteFileGather @ 0x140580364 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1405810E8 (NtReadFileScatter.c)
 *     NtSetVolumeInformationFile @ 0x1405E59A0 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14071AB3C (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x14071B5BC (IopValidateJunctionTarget.c)
 *     NtSetEaFile @ 0x14071DE80 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14071E4E0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopFileObjectRevoked @ 0x1400EB844 (IopFileObjectRevoked.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
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
