/*
 * XREFs of RtlpHpFreeVA @ 0x140294BD4
 * Callers:
 *     RtlpHpHeapAllocate @ 0x140294D44 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapDestroy @ 0x140295244 (RtlpHpHeapDestroy.c)
 *     RtlpHpSegPageRangeDecommit @ 0x140298A98 (RtlpHpSegPageRangeDecommit.c)
 *     RtlpHpSegSegmentFree @ 0x1402990F4 (RtlpHpSegSegmentFree.c)
 *     RtlpHpLargeAlloc @ 0x14029E2A0 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x14029E758 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpLargeFree @ 0x14029E80C (RtlpHpLargeFree.c)
 * Callees:
 *     RtlpHpVaMgrCtxFree @ 0x1402969E4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpEnvFreeVA @ 0x140297764 (RtlpHpEnvFreeVA.c)
 *     RtlpHpEnvGetHeapManager @ 0x1402BD820 (RtlpHpEnvGetHeapManager.c)
 */

__int64 __fastcall RtlpHpFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, __int64 a3, __int128 *a4)
{
  __int128 v4; // xmm0
  unsigned int v5; // ebx
  int v6; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 HeapManager; // rax
  __int64 v14; // r10
  __int64 v15; // r11
  __int128 v17; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a4;
  v5 = 0;
  v6 = a3 & 0x1000000;
  LODWORD(a3) = a3 & 0xFEFFFFFF;
  v17 = *a4;
  if ( (_DWORD)a3 != 0x8000 || v6 )
  {
    if ( BYTE1(v17) < 2u )
      return (unsigned int)RtlpHpEnvFreeVA(a1, a2);
  }
  else
  {
    v9 = *a1;
    v10 = v9 + *a2;
    v11 = (v9 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v12 = v10 - v11;
    *a1 = v11;
    *a2 = v12;
    if ( v12 )
    {
      v17 = v4;
      HeapManager = RtlpHpEnvGetHeapManager(&v17, v12, a3, a4);
      RtlpHpVaMgrCtxFree(HeapManager + 80, v15, v14);
    }
  }
  return v5;
}
