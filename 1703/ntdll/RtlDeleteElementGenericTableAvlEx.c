/*
 * XREFs of RtlDeleteElementGenericTableAvlEx @ 0x180069430
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x1800691B0 (RtlDeleteElementGenericTableAvl.c)
 * Callees:
 *     sub_180069484 @ 0x180069484 (sub_180069484.c)
 *     sub_180069720 @ 0x180069720 (sub_180069720.c)
 */

__int64 __fastcall RtlDeleteElementGenericTableAvlEx(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  if ( a2 == *(_QWORD *)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = sub_180069720(a2);
  ++*(_DWORD *)(a1 + 64);
  sub_180069484(a1);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 88);
  --*(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return v4(a1, a2);
}
