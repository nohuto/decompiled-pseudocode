/*
 * XREFs of IopBootLogToFile @ 0x1406887C0
 * Callers:
 *     IopBootLog @ 0x14045B6F8 (IopBootLog.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405D6404 (IopCopyBootLogRegistryToFile.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwWriteFile @ 0x14017E040 (ZwWriteFile.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwCreateFile @ 0x14017E9E0 (ZwCreateFile.c)
 */

__int64 __fastcall IopBootLogToFile(PVOID *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  UNICODE_STRING *v4; // rbx
  NTSTATUS v5; // ebx
  ULONG v6; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  __int16 Buffer; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE FileHandle; // [rsp+E0h] [rbp+77h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+E8h] [rbp+7Fh] BYREF

  Buffer = -257;
  if ( !qword_1407AC020 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)&qword_1407AC020[4], 1u);
  v4 = qword_1407AC020;
  if ( !qword_1407AC020[2].Buffer )
    RtlInitUnicodeString(qword_1407AC020 + 2, L"\\SystemRoot\\ntbtlog.txt");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = v4 + 2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwCreateFile(&FileHandle, 0x40000000u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 3u, 0x64u, 0LL, 0);
  if ( v5 >= 0 )
  {
    if ( IoStatusBlock.Information == 2 )
      v5 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 2u, 0LL, 0LL);
    if ( v5 >= 0 )
    {
      v6 = *(unsigned __int16 *)a1;
      ByteOffset.QuadPart = -1LL;
      v5 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a1[1], v6, &ByteOffset, 0LL);
    }
    ZwClose(FileHandle);
  }
  ExReleaseResourceLite((PERESOURCE)&qword_1407AC020[4]);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v5;
}
