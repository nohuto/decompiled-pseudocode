/*
 * XREFs of sub_14045B538 @ 0x14045B538
 * Callers:
 *     sub_14045B504 @ 0x14045B504 (sub_14045B504.c)
 *     WbHeapExecuteReturn @ 0x14053BFD0 (WbHeapExecuteReturn.c)
 *     WbGetWarbirdThread @ 0x14053C220 (WbGetWarbirdThread.c)
 *     WbHeapExecuteCall @ 0x14053C4C0 (WbHeapExecuteCall.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     WbPopStackEntries @ 0x14045B590 (WbPopStackEntries.c)
 */

__int64 __fastcall sub_14045B538(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  void *v4; // rcx

  if ( a2 )
  {
    v3 = WbPopStackEntries(a1, a2, 0xFFFFFFFFLL);
    if ( v3 >= 0 )
    {
      v4 = (void *)a2[3];
      if ( v4 )
        ExFreePoolWithTag(v4, 0x42524157u);
      ExFreePoolWithTag(a2, 0x42524157u);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v3;
}
