/*
 * XREFs of PspCreateSecureThread @ 0x1407187FC
 * Callers:
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 * Callees:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     MmProbeAndLockPages @ 0x1400BDA30 (MmProbeAndLockPages.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MmSizeOfMdl @ 0x140115AC0 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeSecureThread @ 0x140202AA8 (KeSecureThread.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspCreateSecureThread(__int64 Base, __int64 a2)
{
  SIZE_T v4; // rax
  struct _MDL *PoolWithTag; // rbx
  int v6; // edi
  $709EDFC2F9E0D4565D6AA3C4377BC643 v8; // [rsp+30h] [rbp-48h] BYREF

  KiStackAttachProcess(*(_KPROCESS **)(Base + 544), 0, (__int64)&v8);
  v4 = MmSizeOfMdl((PVOID)Base, 0x818uLL);
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x65537350u);
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * ((((unsigned __int64)(Base & 0xFFF) + 6167) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = Base & 0xFFF;
  PoolWithTag->ByteCount = 2072;
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
