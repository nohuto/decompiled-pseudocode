/*
 * XREFs of KseDsHookExFreePoolWithTag @ 0x14024DA20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x14024E708 (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePoolWithTag(__int64 a1, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140399018)();
  return KsepDsEventPoolFree(a1, retaddr, a2);
}
