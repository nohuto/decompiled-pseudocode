/*
 * XREFs of MiCreateSectionForDriver @ 0x14045044C
 * Callers:
 *     MiObtainSectionForDriver @ 0x1404F7528 (MiObtainSectionForDriver.c)
 * Callees:
 *     MmCreateSystemSection @ 0x140034178 (MmCreateSystemSection.c)
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ZwOpenFile @ 0x14017E5A0 (ZwOpenFile.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     MiLogFailedDriverLoad @ 0x1406B5708 (MiLogFailedDriverLoad.c)
 *     KdPullRemoteFile @ 0x14078D0F8 (KdPullRemoteFile.c)
 */

NTSTATUS __fastcall MiCreateSectionForDriver(UNICODE_STRING *a1, int a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  __int64 v7; // rdx
  int v8; // edi
  int SessionId; // eax
  int v10; // edi
  ULONG ShareAccess; // [rsp+20h] [rbp-39h]
  __int64 v12; // [rsp+38h] [rbp-21h]
  int v13; // [rsp+40h] [rbp-19h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v17; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v18; // [rsp+D8h] [rbp+7Fh] BYREF

  *a3 = 0LL;
  v17 = 0LL;
  byte_14036C08C = 1;
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (int)KdPullRemoteFile() >= 0 )
    DbgPrintEx(0x66u, 2u, "MmLoadSystemImage: Pulled %wZ from kd\n", a1);
  ObjectAttributes.RootDirectory = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = a1;
  result = ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    v8 = (((a2 & 1) << 21) + 0x100000) | 0x400000;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( a2 >= 0 )
      v8 = ((a2 & 1) << 21) + 0x100000;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    if ( (a2 & 1) != 0 )
      SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
    else
      SessionId = -1;
    v10 = MmCreateSystemSection(
            &v18,
            v7,
            (int)&ObjectAttributes,
            (int)&v17,
            ShareAccess,
            v8,
            (__int64)FileHandle,
            v12,
            v13,
            SessionId);
    ObCloseHandle(FileHandle, 0);
    if ( v10 < 0 )
    {
      MiLogFailedDriverLoad(a1, 0LL, 0LL, (unsigned int)v10);
      return v10;
    }
    else
    {
      *a3 = v18;
      return 0;
    }
  }
  return result;
}
