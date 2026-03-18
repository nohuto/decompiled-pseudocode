/*
 * XREFs of MiZeroPageFileFirstPage @ 0x1405D4E68
 * Callers:
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     MiSynchronousPageWrite @ 0x140150210 (MiSynchronousPageWrite.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall MiZeroPageFileFirstPage(struct _FILE_OBJECT *a1)
{
  NTSTATUS v2; // ebx
  __int64 v4; // [rsp+40h] [rbp-19h] BYREF
  NTSTATUS v5[4]; // [rsp+48h] [rbp-11h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-1h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+70h] [rbp+17h] BYREF
  __int64 v8; // [rsp+A0h] [rbp+47h]

  *(_DWORD *)&MemoryDescriptorList.Size = 1073872952;
  MemoryDescriptorList.Next = 0LL;
  MemoryDescriptorList.StartVa = 0LL;
  MemoryDescriptorList.ByteOffset = 0;
  v4 = 0LL;
  v8 = qword_1403891A0;
  MemoryDescriptorList.ByteCount = 4096;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2 = MiSynchronousPageWrite(a1, (__int64)&MemoryDescriptorList, &v4, (__int64)&Event, 0, 0LL, (__int64)v5);
  if ( v2 >= 0 )
  {
    KeWaitForSingleObject(&Event, WrVirtualMemory, 0, 0, 0LL);
    v2 = v5[0];
  }
  if ( (MemoryDescriptorList.MdlFlags & 1) != 0 )
    MmUnmapLockedPages(MemoryDescriptorList.MappedSystemVa, &MemoryDescriptorList);
  return (unsigned int)v2;
}
