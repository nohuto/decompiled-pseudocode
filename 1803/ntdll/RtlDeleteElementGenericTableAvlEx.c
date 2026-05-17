/*
 * XREFs of RtlDeleteElementGenericTableAvlEx @ 0x1800671F0
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x180066F80 (RtlDeleteElementGenericTableAvl.c)
 * Callees:
 *     sub_180067244 @ 0x180067244 (sub_180067244.c)
 *     sub_1800674E0 @ 0x1800674E0 (sub_1800674E0.c)
 */

__int64 __fastcall RtlDeleteElementGenericTableAvlEx(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  if ( a2 == *(_QWORD *)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = sub_1800674E0(a2);
  ++*(_DWORD *)(a1 + 64);
  sub_180067244(a1);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 88);
  --*(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return v4(a1, a2);
}
