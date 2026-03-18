/*
 * XREFs of MiObtainNonPagedPoolCharges @ 0x1400F74DC
 * Callers:
 *     MiFindNonPagedPoolPages @ 0x140089100 (MiFindNonPagedPoolPages.c)
 *     MiExpandNonPagedPool @ 0x1400F5408 (MiExpandNonPagedPool.c)
 *     MmAllocateIndependentPages @ 0x1405B7830 (MmAllocateIndependentPages.c)
 * Callees:
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 */

__int64 __fastcall MiObtainNonPagedPoolCharges(unsigned __int64 a1, int a2, __int64 a3, __int64 a4)
{
  if ( !qword_14038B9E8 )
    return 1LL;
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, a1, 1LL, a4) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, a1) )
    {
      if ( a2 )
        _InterlockedExchangeAdd64(&qword_1403893D0, a1);
      else
        _InterlockedExchangeAdd64(&qword_1403893C8, a1);
      return 1LL;
    }
    ++dword_140388078;
    MiReturnCommit((__int64)&MiSystemPartition, a1);
  }
  else
  {
    ++dword_14038807C;
  }
  return 0LL;
}
