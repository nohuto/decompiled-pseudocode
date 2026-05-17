/*
 * XREFs of sub_180080C10 @ 0x180080C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017034 @ 0x180017034 (sub_180017034.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

signed __int64 __fastcall sub_180080C10(_QWORD *a1, __int64 a2)
{
  __int64 **v4; // rsi
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 *v7; // rbx
  signed __int64 result; // rax
  __int64 v9; // r8
  __int128 v10; // [rsp+30h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 32));
  v4 = (__int64 **)(a2 + 40);
  if ( *v4 == (__int64 *)v4 )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = *v4;
    v6 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v4 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v4;
  }
  v7 = *v4;
  result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 32));
  if ( v7 != (__int64 *)v4 )
    result = sub_180017034(a2, a1[16], 1, 0LL);
  if ( v5 )
  {
    v10 = *((_OWORD *)v5 - 2);
    v11 = *((_OWORD *)v5 - 1);
    v9 = v5[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 3145728, *(_QWORD *)v9);
    a1[11] = *(_QWORD *)(a2 + 56);
    a1[12] = a2;
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int128 *))(a2 + 56))(
             a1,
             a2,
             *((_QWORD *)&v10 + 1),
             &v11);
  }
  return result;
}
