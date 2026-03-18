/*
 * XREFs of sub_140539B14 @ 0x140539B14
 * Callers:
 *     WbFreeWarbirdProcess @ 0x1405399A8 (WbFreeWarbirdProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140539B14(__int64 a1)
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
