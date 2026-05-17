/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x18008FE20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006938C @ 0x18006938C (sub_18006938C.c)
 *     sub_180069720 @ 0x180069720 (sub_180069720.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall RtlLookupFirstMatchingElementGenericTableAvl(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v10; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( (unsigned int)sub_18006938C(a1, a2, &v10) != 1 )
    return 0LL;
  v6 = v10;
  do
  {
    v7 = v6;
    v8 = sub_180069720(v6);
    v6 = v8;
  }
  while ( v8 && (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD *))(a1 + 72))(a1, a2, v8 + 4) == 2 );
  *a3 = v7;
  return v7 + 4;
}
