/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x18008D690
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent_0 @ 0x180069A44 (FindNodeOrParent_0.c)
 *     RealPredecessor @ 0x180069DD0 (RealPredecessor.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall RtlLookupFirstMatchingElementGenericTableAvl(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v10; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( (unsigned int)FindNodeOrParent_0(a1, a2, &v10) != 1 )
    return 0LL;
  v6 = v10;
  do
  {
    v7 = v6;
    v8 = RealPredecessor(v6);
    v6 = v8;
  }
  while ( v8 && (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD *))(a1 + 72))(a1, a2, v8 + 4) == 2 );
  *a3 = v7;
  return v7 + 4;
}
