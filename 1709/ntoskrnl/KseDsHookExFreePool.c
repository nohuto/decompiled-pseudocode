/*
 * XREFs of KseDsHookExFreePool @ 0x14020F5F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x140210318 (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140355D68)();
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
