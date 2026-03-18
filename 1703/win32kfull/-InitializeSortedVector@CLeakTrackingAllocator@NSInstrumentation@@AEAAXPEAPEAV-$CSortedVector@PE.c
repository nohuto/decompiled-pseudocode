/*
 * XREFs of ?InitializeSortedVector@CLeakTrackingAllocator@NSInstrumentation@@AEAAXPEAPEAV?$CSortedVector@PEAXPEAX@2@@Z @ 0x1C02B8A8C
 * Callers:
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02B86BC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 * Callees:
 *     ?Destroy@?$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C02B87FC (-Destroy@-$CSortedVector@PEAXPEAX@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::InitializeSortedVector(
        __int64 a1,
        volatile signed __int64 *a2)
{
  _QWORD *PoolWithTag; // rbx
  PVOID v4; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x38uLL, 0x63497355u);
  if ( PoolWithTag )
  {
    v4 = ExAllocatePoolWithTag(PagedPoolSession, 0x2000uLL, 0x63497355u);
    if ( v4 )
    {
      PoolWithTag[5] = 0LL;
      PoolWithTag[6] = v4;
      PoolWithTag[4] = 512LL;
      *((_DWORD *)PoolWithTag + 6) = 0;
      *((_DWORD *)PoolWithTag + 7) = 0;
      *PoolWithTag = 0LL;
      *((_DWORD *)PoolWithTag + 4) = 0;
      if ( _InterlockedCompareExchange64(a2, (signed __int64)PoolWithTag, 0LL) )
        NSInstrumentation::CSortedVector<void *,void *>::Destroy((PVOID *)PoolWithTag);
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
}
