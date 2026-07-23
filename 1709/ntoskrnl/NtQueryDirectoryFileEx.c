/*
 * XREFs of NtQueryDirectoryFileEx @ 0x1404CB200
 * Callers:
 *     NtQueryDirectoryFile @ 0x1404CB170 (NtQueryDirectoryFile.c)
 * Callees:
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x1404CB2D0 (BuildQueryDirectoryIrp.c)
 */

NTSTATUS __cdecl NtQueryDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG QueryFlags,
        PUNICODE_STRING FileName)
{
  NTSTATUS result; // eax
  SIZE_T v11; // [rsp+30h] [rbp-78h]
  char v12; // [rsp+50h] [rbp-58h]
  char v13; // [rsp+80h] [rbp-28h] BYREF
  char v14[7]; // [rsp+81h] [rbp-27h] BYREF
  __int64 v15; // [rsp+88h] [rbp-20h] BYREF
  PIRP Irp; // [rsp+90h] [rbp-18h] BYREF
  PDEVICE_OBJECT DeviceObject[2]; // [rsp+98h] [rbp-10h] BYREF

  LODWORD(v11) = Length;
  result = BuildQueryDirectoryIrp(
             (int)FileHandle,
             (int)Event,
             (int)ApcRoutine,
             (int)ApcContext,
             (__int64)IoStatusBlock,
             FileInformation,
             v11,
             FileInformationClass,
             QueryFlags,
             (__int64)FileName,
             v12,
             (__int64)&v13,
             (__int64)DeviceObject,
             (__int64)&Irp,
             (__int64)&v15,
             v14);
  if ( !result )
    return IopSynchronousServiceTail(DeviceObject[0], Irp, v15, 1, v14[0], v13, 2u);
  return result;
}
