/*
 * XREFs of MiZeroPageFileFirstPage @ 0x1405BA518
 * Callers:
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     MiSynchronousPageWrite @ 0x1401599EC (MiSynchronousPageWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall MiZeroPageFileFirstPage(struct _FILE_OBJECT *a1)
{
  NTSTATUS Status; // ebx
  __int64 v4; // [rsp+40h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK v5; // [rsp+48h] [rbp-11h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-1h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+70h] [rbp+17h] BYREF
  __int64 v8; // [rsp+A0h] [rbp+47h]

  *(_DWORD *)&MemoryDescriptorList.Size = 1073872952;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.StartVa = 0LL;
  MemoryDescriptorList.ByteOffset = 0;
  v4 = 0LL;
  v8 = qword_14036CEE0;
  MemoryDescriptorList.ByteCount = 4096;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  Status = MiSynchronousPageWrite(a1, &MemoryDescriptorList, &v4, &Event, 0, 0LL, &v5);
  if ( Status >= 0 )
  {
    KeWaitForSingleObject(&Event, WrVirtualMemory, 0, 0, 0LL);
    Status = v5.Status;
  }
  if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
  return (unsigned int)Status;
}
