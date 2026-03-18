/*
 * XREFs of MiGetFileHashPage @ 0x140155748
 * Callers:
 *     MiMapPageFileHash @ 0x14013C818 (MiMapPageFileHash.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiChargeResident @ 0x140131D0C (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MiGetFileHashPage(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // r9
  __int64 Page; // rax
  __int64 v6; // r9
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  void *v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int8 v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 256);
  if ( !(unsigned int)MiChargeCommit(v2, 1uLL, 1u) )
    return -1LL;
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v2, 1uLL, 128LL, v4) )
  {
    MiReturnCommit(v2, 1uLL);
    return -1LL;
  }
  Page = MiGetPage(v2, a2, 0x200u);
  v7 = Page;
  if ( Page == -1 )
  {
    if ( (ULONG_PTR *)v2 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 7104), 1uLL);
    MiReturnCommit(v2, 1uLL);
  }
  else
  {
    v8 = MiMapPageInHyperSpaceWorker(Page, &v12, 0x80000000, v6);
    v9 = (void *)v8;
    v10 = 1024LL;
    if ( (v8 & 4) != 0 )
    {
      *(_DWORD *)v8 = 0;
      v9 = (void *)(v8 + 4);
      v10 = 1023LL;
    }
    memset(v9, 0, 8 * (v10 >> 1));
    if ( (v10 & 1) != 0 )
      *((_DWORD *)v9 + v10 - 1) = 0;
    MiUnmapPageInHyperSpaceWorker(v8, v12, 0x80000000);
    _InterlockedAdd64(&qword_1403CCDE8, 1uLL);
  }
  return v7;
}
