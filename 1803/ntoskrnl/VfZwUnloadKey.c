/*
 * XREFs of VfZwUnloadKey @ 0x140837440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ViZwCheckObjectAttributes @ 0x1408376DC (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x14083780C (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwUnloadKey(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
    ViZwCheckObjectAttributes(a1, retaddr);
  return ((__int64 (__fastcall *)(__int64))pXdvZwUnloadKey)(a1);
}
