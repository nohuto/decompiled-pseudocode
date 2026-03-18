/*
 * XREFs of KseDsHookExFreePoolWithTag @ 0x14020F630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x140210318 (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePoolWithTag(__int64 a1, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140355D28)();
  return KsepDsEventPoolFree(a1, retaddr, a2);
}
