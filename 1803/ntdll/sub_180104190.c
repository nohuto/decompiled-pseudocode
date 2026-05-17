/*
 * XREFs of sub_180104190 @ 0x180104190
 * Callers:
 *     sub_180001368 @ 0x180001368 (sub_180001368.c)
 *     sub_1800642B0 @ 0x1800642B0 (sub_1800642B0.c)
 *     sub_180103534 @ 0x180103534 (sub_180103534.c)
 *     sub_180103BA4 @ 0x180103BA4 (sub_180103BA4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_180104190(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
  result = a3 + *(unsigned int *)(a1 + 16);
  if ( a2 < result )
    return a2;
  return result;
}
