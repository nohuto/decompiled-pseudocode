/*
 * XREFs of IopReferenceFileObject @ 0x14004F3DC
 * Callers:
 *     NtCancelIoFile @ 0x140433004 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x140433178 (NtCancelIoFileEx.c)
 *     NtQueryEaFile @ 0x14043F120 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x1404401B4 (NtFlushBuffersFileEx.c)
 *     NtNotifyChangeDirectoryFile @ 0x140445BB0 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x14044F2A0 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404507E0 (NtReadFileScatter.c)
 *     NtLockFile @ 0x14048B220 (NtLockFile.c)
 *     NtSetVolumeInformationFile @ 0x140574C30 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14068A1D8 (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x14068AC90 (IopValidateJunctionTarget.c)
 *     NtSetEaFile @ 0x14068D200 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14068D860 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopFileObjectRevoked @ 0x14004B8D4 (IopFileObjectRevoked.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopReferenceFileObject(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        PVOID *a4,
        POBJECT_HANDLE_INFORMATION a5)
{
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  PVOID v10; // [rsp+58h] [rbp+20h] BYREF

  v6 = ObReferenceObjectByHandle(a1, a2, (POBJECT_TYPE)IoFileObjectType, a3, &v10, a5);
  v7 = (__int64)v10;
  v8 = v6;
  *a4 = v10;
  if ( v6 >= 0 && IopFileObjectRevoked(v7) )
  {
    ObfDereferenceObjectWithTag(*a4, 0x746C6644u);
    return (unsigned int)-1073739504;
  }
  return v8;
}
