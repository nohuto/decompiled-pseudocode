/*
 * XREFs of MiGetFileHashPage @ 0x140231FD0
 * Callers:
 *     MiMapPageFileHash @ 0x1402320E8 (MiMapPageFileHash.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiGetFileHashPage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 Page; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  void *v10; // r8
  unsigned __int64 v11; // rdx
  unsigned __int8 v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 256);
  if ( !(unsigned int)MiChargeCommit(v4, 1uLL, 1LL, a4) )
    return -1LL;
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v4, 1uLL) )
  {
    MiReturnCommit(v4, 1uLL);
    return -1LL;
  }
  Page = MiGetPage(v4, a2, 0x80u);
  v8 = Page;
  if ( Page == -1 )
  {
    if ( (ULONG_PTR *)v4 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 6016), 1uLL);
    MiReturnCommit(v4, 1uLL);
  }
  else
  {
    v9 = MiMapPageInHyperSpaceWorker(Page, &v12, 0x80000000);
    v10 = (void *)v9;
    v11 = 1024LL;
    if ( (v9 & 4) != 0 )
    {
      *(_DWORD *)v9 = 0;
      v10 = (void *)(v9 + 4);
      v11 = 1023LL;
    }
    memset(v10, 0, 8 * (v11 >> 1));
    if ( (v11 & 1) != 0 )
      *((_DWORD *)v10 + v11 - 1) = 0;
    LOBYTE(v11) = v12;
    MiUnmapPageInHyperSpaceWorker(v9, v11, 0x80000000LL);
    _InterlockedAdd64(&qword_140389828, 1uLL);
  }
  return v8;
}
