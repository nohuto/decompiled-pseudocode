/*
 * XREFs of KseDsHookExFreePool @ 0x140208AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_14033DA48)();
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
