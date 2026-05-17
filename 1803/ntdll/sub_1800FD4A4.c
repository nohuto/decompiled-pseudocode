/*
 * XREFs of sub_1800FD4A4 @ 0x1800FD4A4
 * Callers:
 *     sub_1800FCA5C @ 0x1800FCA5C (sub_1800FCA5C.c)
 *     sub_1800FD510 @ 0x1800FD510 (sub_1800FD510.c)
 *     sub_1800FD70C @ 0x1800FD70C (sub_1800FD70C.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18001ECD0 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceExecuteOnce @ 0x1800297E0 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall sub_1800FD4A4(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rax
  volatile signed __int64 *v5; // rcx
  __int64 result; // rax
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 352LL;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    v3 = 368LL;
  v5 = (volatile signed __int64 *)(v3 + a1);
  if ( a2 )
    result = RtlRunOnceExecuteOnce(
               v5,
               (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))sub_1800FC890,
               0LL,
               &v7);
  else
    result = RtlRunOnceBeginInitialize(v5, 1, &v7);
  if ( (int)result >= 0 )
  {
    *a3 = v7;
    return 0LL;
  }
  return result;
}
