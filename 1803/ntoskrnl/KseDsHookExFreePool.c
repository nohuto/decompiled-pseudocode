/*
 * XREFs of KseDsHookExFreePool @ 0x14024D9E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x14024E708 (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140399058)();
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
