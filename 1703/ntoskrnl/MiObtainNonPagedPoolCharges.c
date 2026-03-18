/*
 * XREFs of MiObtainNonPagedPoolCharges @ 0x14010ECE0
 * Callers:
 *     MiFindNonPagedPoolPages @ 0x14010E930 (MiFindNonPagedPoolPages.c)
 *     MiExpandNonPagedPool @ 0x140126E74 (MiExpandNonPagedPool.c)
 *     MmAllocateIndependentPages @ 0x1405723D0 (MmAllocateIndependentPages.c)
 * Callees:
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 */

__int64 __fastcall MiObtainNonPagedPoolCharges(unsigned __int64 a1, int a2)
{
  if ( !qword_140381A68 )
    return 1LL;
  if ( (unsigned int)MiChargeCommit((unsigned __int64)&MiSystemPartition, a1, 1uLL) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, a1, 0LL) )
    {
      if ( a2 )
        _InterlockedExchangeAdd64(&qword_14036D110, a1);
      else
        _InterlockedExchangeAdd64(&qword_14036D108, a1);
      return 1LL;
    }
    ++dword_14036BD78;
    MiReturnCommit((__int64)&MiSystemPartition, a1);
  }
  else
  {
    ++dword_14036BD7C;
  }
  return 0LL;
}
