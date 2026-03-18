/*
 * XREFs of SmPrepareForFatalPageError @ 0x140276010
 * Callers:
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14026D360 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x140074D40 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14014B6D0 (KeRegisterBugCheckReasonCallback.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SmPrepareForFatalPageError(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        PVOID BaseAddress)
{
  struct _MDL *v9; // rdi
  char *v10; // r14
  int v11; // r13d
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *PoolWithTag; // r15
  unsigned int v13; // ebx
  __int64 v14; // r12
  struct _MDL *v15; // rax
  _DWORD *v16; // r12
  __int64 v17; // rcx

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  PoolWithTag = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)ExAllocatePoolWithTag(
                                                              NonPagedPoolNx,
                                                              a2 + 104LL,
                                                              0x50626D73u);
  if ( !PoolWithTag )
    goto LABEL_2;
  v14 = a1 & 0xFFF;
  v15 = (struct _MDL *)ExAllocatePoolWithTag(
                         NonPagedPoolNx,
                         8 * ((v14 + (unsigned __int64)a2 + 4095) >> 12) + 48,
                         0x50426D73u);
  v9 = v15;
  if ( !v15 )
    goto LABEL_2;
  v15->Next = 0LL;
  v15->Size = 8 * (((v14 + (unsigned __int64)a2 + 4095) >> 12) + 6);
  v15->MdlFlags = 0;
  v15->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v15->ByteOffset = a1 & 0xFFF;
  v15->ByteCount = a2;
  MiProbeAndLockPages(v15, 0, 0);
  v11 = 1;
  v10 = (char *)((v9->MdlFlags & 5) != 0
               ? v9->MappedSystemVa
               : MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000020u));
  if ( !v10 )
    goto LABEL_2;
  v16 = (_DWORD *)(((unsigned __int64)&PoolWithTag[1].Entry.Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL);
  PoolWithTag->State = 0;
  memset(v16, 0, 0x40uLL);
  *v16 = 65539;
  v16[1] = a3;
  v16[2] = a4;
  v16[3] = a2;
  v16[4] = a5;
  v17 = (unsigned int)(a7 - a1);
  v16[5] = v17;
  *((_QWORD *)v16 + 3) = a6;
  *((_QWORD *)v16 + 4) = MmGetPhysicalAddress(&v10[v17]).QuadPart / 4096;
  *((_QWORD *)v16 + 5) = (((a7 & 0xFFF) + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) == 0x1000
                       ? -1LL
                       : MmGetPhysicalAddress(&v10[a3 - 1 + v16[5]]).QuadPart / 4096;
  *((_QWORD *)v16 + 6) = MmGetPhysicalAddress(BaseAddress).QuadPart / 4096;
  memmove(v16 + 14, v10, a2);
  if ( KeRegisterBugCheckReasonCallback(
         PoolWithTag,
         (PKBUGCHECK_REASON_CALLBACK_ROUTINE)SmFatalPageErrorDumpCallback,
         KbCallbackSecondaryDumpData,
         (PUCHAR)"nt!store memory compression") )
  {
    PoolWithTag = 0LL;
    v13 = 0;
  }
  else
  {
LABEL_2:
    v13 = -1073741670;
  }
  if ( v10 )
    MmUnmapLockedPages(v10, v9);
  if ( v11 )
    MmUnlockPages(v9);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v13;
}
