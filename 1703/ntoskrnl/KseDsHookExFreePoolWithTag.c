/*
 * XREFs of KseDsHookExFreePoolWithTag @ 0x140208AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KseDsHookExFreePoolWithTag(__int64 a1, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_14033DA08)();
  return KsepDsEventPoolFree(a1, retaddr, a2);
}
