/*
 * XREFs of sub_180054A20 @ 0x180054A20
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180026138 @ 0x180026138 (sub_180026138.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

signed __int64 __fastcall sub_180054A20(_QWORD *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  signed __int64 result; // rax
  __int64 v11; // r8
  __int128 v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF

  RtlAcquireSRWLockExclusive(a2 + 32, a2, a3, a4);
  v6 = (_QWORD *)(a2 + 40);
  v7 = *(_QWORD **)(a2 + 40);
  if ( v7 == (_QWORD *)(a2 + 40) )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = *(_QWORD *)(a2 + 40);
    if ( (_QWORD *)v7[1] != v6 || (v9 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v6 = v9;
    *(_QWORD *)(v9 + 8) = v6;
    v7 = (_QWORD *)*v6;
  }
  result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 32));
  if ( v7 != v6 )
    result = sub_180026138(a2, a1[16], 1, 0LL);
  if ( v8 )
  {
    v12 = *(_OWORD *)(v8 - 32);
    v13 = *(_OWORD *)(v8 - 16);
    v11 = *(_QWORD *)(v8 + 16);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 3145728, *(_QWORD *)v11);
    a1[11] = *(_QWORD *)(a2 + 56);
    a1[12] = a2;
    return (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, _QWORD, __int128 *))(a2 + 56))(
             a1,
             a2,
             *((_QWORD *)&v12 + 1),
             &v13);
  }
  return result;
}
