/*
 * XREFs of IoDiskIoAttributionAllocate @ 0x140445A40
 * Callers:
 *     PspIoRateEntryActivate @ 0x140445410 (PspIoRateEntryActivate.c)
 *     PspSetJobIoAttribution @ 0x1404457CC (PspSetJobIoAttribution.c)
 * Callees:
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IoDiskIoAttributionReference @ 0x1401F9314 (IoDiskIoAttributionReference.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

struct _EX_RUNDOWN_REF *__fastcall IoDiskIoAttributionAllocate(unsigned __int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *result; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  signed __int64 v6; // rax

  result = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xB8uLL, 0x41446F49u);
  v5 = result;
  if ( result )
  {
    memset(result, 0, 0xB8uLL);
    v5[5].Count = 0LL;
    v5[2].Count = -1LL;
    v5[4].Count = 1LL;
    do
    {
      v6 = _InterlockedExchangeAdd64(&IopDiskIoAttributionKey, 1uLL);
      v5[3].Count = v6 + 1;
    }
    while ( v6 == -1 );
    ExInitializePushLock(&v5[21].Count);
    if ( a1 )
      v5[20].Count = a1;
    else
      ExWaitForRundownProtectionRelease(v5 + 21);
    if ( a2 )
    {
      IoDiskIoAttributionReference(a2);
      v5[22].Count = a2;
    }
    return v5;
  }
  return result;
}
