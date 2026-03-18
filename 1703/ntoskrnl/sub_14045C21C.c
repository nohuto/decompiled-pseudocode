/*
 * XREFs of sub_14045C21C @ 0x14045C21C
 * Callers:
 *     WbFreeWarbirdProcess @ 0x140549778 (WbFreeWarbirdProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14045C21C(__int64 a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 16);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x42524157u);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
