/*
 * XREFs of NtQueryDirectoryFileEx @ 0x140596030
 * Callers:
 *     NtQueryDirectoryFile @ 0x14056EC00 (NtQueryDirectoryFile.c)
 * Callees:
 *     BuildQueryDirectoryIrp @ 0x140596100 (BuildQueryDirectoryIrp.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 */

__int64 __fastcall NtQueryDirectoryFileEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  char v7; // [rsp+80h] [rbp-28h]
  char v8; // [rsp+81h] [rbp-27h]
  IRP *Irp; // [rsp+90h] [rbp-18h]
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+98h] [rbp-10h]

  result = BuildQueryDirectoryIrp(a1, a2, a3, a4, a5, a6);
  if ( !(_DWORD)result )
    return IopSynchronousServiceTail(DeviceObject, Irp, v8, v7, 2);
  return result;
}
