/*
 * XREFs of KseDsHookExAllocatePool @ 0x14024D920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolAllocate @ 0x14024E60C (KsepDsEventPoolAllocate.c)
 */

__int64 __fastcall KseDsHookExAllocatePool(int a1, int a2)
{
  __int64 v4; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = ((__int64 (*)(void))qword_140399038)();
  KsepDsEventPoolAllocate(v4, (_DWORD)retaddr, a1, a2, 78);
  return v4;
}
