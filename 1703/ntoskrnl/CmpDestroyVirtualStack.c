/*
 * XREFs of CmpDestroyVirtualStack @ 0x140667144
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1406679E8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall CmpDestroyVirtualStack(__int64 a1, unsigned int a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  _QWORD *v5; // rbx
  __int64 v8; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a2 )
  {
    result = &retaddr;
    v5 = (_QWORD *)(a1 + 16);
    v8 = 0LL;
    do
    {
      if ( *v5 )
      {
        result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64, __int64))(a3 + 16))(a3, 48 * v8 + a1 + 24);
        *v5 = 0LL;
      }
      v8 = (unsigned int)(v8 + 1);
      v5 += 6;
    }
    while ( (unsigned int)v8 < a2 );
  }
  return result;
}
