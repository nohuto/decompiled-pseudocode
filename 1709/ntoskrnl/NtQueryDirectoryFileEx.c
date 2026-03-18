/*
 * XREFs of NtQueryDirectoryFileEx @ 0x1404CB200
 * Callers:
 *     NtQueryDirectoryFile @ 0x1404CB170 (NtQueryDirectoryFile.c)
 * Callees:
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x1404CB2D0 (BuildQueryDirectoryIrp.c)
 */

__int64 __fastcall NtQueryDirectoryFileEx(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        volatile void *a6,
        SIZE_T a7,
        int a8,
        char a9,
        __int64 a10)
{
  __int64 result; // rax
  SIZE_T Length; // [rsp+30h] [rbp-78h]
  char v12; // [rsp+50h] [rbp-58h]
  char v13; // [rsp+80h] [rbp-28h] BYREF
  char v14[7]; // [rsp+81h] [rbp-27h] BYREF
  __int64 v15; // [rsp+88h] [rbp-20h] BYREF
  PIRP Irp; // [rsp+90h] [rbp-18h] BYREF
  PDEVICE_OBJECT DeviceObject[2]; // [rsp+98h] [rbp-10h] BYREF

  LODWORD(Length) = a7;
  result = BuildQueryDirectoryIrp(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             Length,
             a8,
             a9,
             a10,
             v12,
             (__int64)&v13,
             (__int64)DeviceObject,
             (__int64)&Irp,
             (__int64)&v15,
             v14);
  if ( !(_DWORD)result )
    return IopSynchronousServiceTail(DeviceObject[0], Irp, v15, 1, v14[0], v13, 2u);
  return result;
}
