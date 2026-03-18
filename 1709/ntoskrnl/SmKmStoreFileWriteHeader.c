/*
 * XREFs of SmKmStoreFileWriteHeader @ 0x14073BCF4
 * Callers:
 *     SmKmStoreFileCreate @ 0x14073AEF4 (SmKmStoreFileCreate.c)
 * Callees:
 *     SmAlloc @ 0x1400064E8 (SmAlloc.c)
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IoSetThreadHardErrorMode @ 0x1400AE650 (IoSetThreadHardErrorMode.c)
 *     MmBuildMdlForNonPagedPool @ 0x1400B5DB0 (MmBuildMdlForNonPagedPool.c)
 *     RtlComputeCrc32 @ 0x140113980 (RtlComputeCrc32.c)
 *     IoSynchronousPageWrite @ 0x140114D90 (IoSynchronousPageWrite.c)
 *     MmMdlPageContentsState @ 0x14011E040 (MmMdlPageContentsState.c)
 *     MmCreateMdl @ 0x140122030 (MmCreateMdl.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x14017D9C0 (ZwWriteFile.c)
 *     ZwQueryInformationFile @ 0x14017DAE0 (ZwQueryInformationFile.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmKmStoreFileWriteHeader(__int64 a1, int a2)
{
  struct _MDL *v4; // rdi
  BOOLEAN v5; // r15
  struct _PRIVILEGE_SET *v6; // rax
  struct _PRIVILEGE_SET *Buffer; // rsi
  NTSTATUS Status; // ebx
  struct _MDL *Mdl; // rax
  void *v10; // rcx
  NTSTATUS v11; // eax
  struct _KEVENT *p_Event; // rcx
  LARGE_INTEGER StartingOffset; // [rsp+50h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-11h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-1h] BYREF
  _BYTE FileInformation[24]; // [rsp+80h] [rbp+17h] BYREF

  v4 = 0LL;
  v5 = IoSetThreadHardErrorMode(0);
  v6 = (struct _PRIVILEGE_SET *)SmAlloc(0x10000uLL, 0x68466D73u);
  Buffer = v6;
  if ( !v6 )
  {
    Status = -1073741670;
    goto LABEL_19;
  }
  if ( !a2 )
  {
    Mdl = MmCreateMdl(0LL, v6, 0x10000uLL);
    v4 = Mdl;
    if ( !Mdl )
    {
      Status = -1073741670;
      goto LABEL_17;
    }
    MmBuildMdlForNonPagedPool(Mdl);
    MmMdlPageContentsState((__int64)v4, 1u);
  }
  memset(Buffer, 0, 0x10000uLL);
  Buffer->PrivilegeCount = 1164135783;
  Buffer->Control = 3;
  Buffer[2].PrivilegeCount = 1;
  Buffer->Privilege[0].Luid.LowPart = RtlComputeCrc32(0, (PUCHAR)Buffer, 0x30u);
  StartingOffset.QuadPart = 0LL;
  v10 = *(void **)a1;
  if ( a2 )
  {
    v11 = ZwWriteFile(v10, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x10000u, &StartingOffset, 0LL);
    p_Event = (struct _KEVENT *)(*(_QWORD *)(a1 + 8) + 152LL);
  }
  else
  {
    Status = ZwQueryInformationFile(v10, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
    if ( Status == 259 )
    {
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 8) + 152LL), Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
      goto LABEL_17;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = IoSynchronousPageWrite(*(PFILE_OBJECT *)(a1 + 8), v4, &StartingOffset, &Event, &IoStatusBlock);
    p_Event = &Event;
  }
  Status = v11;
  if ( v11 == 259 )
  {
    KeWaitForSingleObject(p_Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
    Status = IoStatusBlock.Information != 0x10000 ? 0xC000016A : 0;
LABEL_17:
  MiDeleteSubsection(Buffer);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_19:
  IoSetThreadHardErrorMode(v5);
  return (unsigned int)Status;
}
