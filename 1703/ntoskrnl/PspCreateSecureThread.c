/*
 * XREFs of PspCreateSecureThread @ 0x1406E23CC
 * Callers:
 *     PspInsertThread @ 0x1405408E4 (PspInsertThread.c)
 * Callees:
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MmProbeAndLockPages @ 0x1400B3C30 (MmProbeAndLockPages.c)
 *     MmSizeOfMdl @ 0x1401228F0 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeSecureThread @ 0x1401FCC98 (KeSecureThread.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspCreateSecureThread(__int64 Base, __int64 a2)
{
  SIZE_T v4; // rax
  struct _MDL *PoolWithTag; // rbx
  int v6; // edi
  $5BC46E0569261879018906DEC3127961 v8; // [rsp+30h] [rbp-48h] BYREF

  KiStackAttachProcess(*(_KPROCESS **)(Base + 544), 0, (__int64)&v8);
  v4 = MmSizeOfMdl((PVOID)Base, 0x810uLL);
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x65537350u);
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * ((((unsigned __int64)(Base & 0xFFF) + 6159) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = Base & 0xFFF;
  PoolWithTag->ByteCount = 2064;
  MmProbeAndLockPages(PoolWithTag, 0, IoModifyAccess);
  v6 = KeSecureThread(Base, (int)PoolWithTag, *(_QWORD *)(Base + 1600), *(_QWORD *)(Base + 1680), a2);
  if ( v6 < 0 )
  {
    MmUnlockPages(PoolWithTag);
    ExFreePoolWithTag(PoolWithTag, 0x65537350u);
  }
  KiUnstackDetachProcess(&v8, 0LL);
  return (unsigned int)v6;
}
