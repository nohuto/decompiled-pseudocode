/*
 * XREFs of PfpPrefetchSharedDeref @ 0x1404643F8
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1404636DC (PfpPrefetchRequestPerform.c)
 *     PfSnCleanupPrefetchHeader @ 0x14053E398 (PfSnCleanupPrefetchHeader.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1406C3EC0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpQueryFileExtentsRequest @ 0x1406C3FD8 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall PfpPrefetchSharedDeref(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 v3; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 15, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  v3 = v1 - 1;
  if ( v2 )
  {
    if ( v3 )
      __fastfail(0xEu);
    ExFreePoolWithTag((PVOID)a1, 0);
  }
}
