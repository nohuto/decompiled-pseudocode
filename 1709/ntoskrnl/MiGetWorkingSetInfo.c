/*
 * XREFs of MiGetWorkingSetInfo @ 0x14000CC00
 * Callers:
 *     MmQueryVirtualMemory @ 0x140497DA0 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiGetWorkingSetInfoEx @ 0x14000CD84 (MiGetWorkingSetInfoEx.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiGetWorkingSetInfo(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4)
{
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // rdx
  _QWORD *MappedSystemVa; // rsi
  int WorkingSetInfo; // edi

  *a2 = 0LL;
  if ( a3 > 0xFFFFFFFF )
    return 3221225990LL;
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(
                                 NonPagedPoolNx,
                                 8 * ((a3 >> 12) + 7 - ((unsigned __int128)-(__int128)(a3 & 0xFFF) >> 64)),
                                 0x20206D4Du);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * ((((a1 & 0xFFF) + a3 + 4095) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = a1 & 0xFFF;
  PoolWithTag->ByteCount = a3;
  v10 = (unsigned __int8)KeGetCurrentThread()->gap0[10];
  v11 = v10;
  if ( (_BYTE)v10 )
    v11 = 1LL;
  MiProbeAndLockPages(v9, v11, 1LL);
  if ( (v9->MdlFlags & 5) != 0 )
    MappedSystemVa = v9->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( MappedSystemVa )
  {
    WorkingSetInfo = MiGetWorkingSetInfoEx(a4 + 1280, MappedSystemVa, a3, 1LL);
    if ( WorkingSetInfo >= 0 )
      *a2 = *MappedSystemVa;
  }
  else
  {
    WorkingSetInfo = -1073741670;
  }
  MmUnlockPages(v9);
  ExFreePoolWithTag(v9, 0);
  return (unsigned int)WorkingSetInfo;
}
