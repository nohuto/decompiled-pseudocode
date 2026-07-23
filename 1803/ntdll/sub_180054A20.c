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

void __fastcall sub_180054A20(__int64 a1, _RTL_SRWLOCK *a2)
{
  _RTL_SRWLOCK *v4; // rdi
  _RTL_SRWLOCK *Ptr; // rbp
  _OWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int128 v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF

  RtlAcquireSRWLockExclusive(a2 + 4);
  v4 = a2 + 5;
  Ptr = (_RTL_SRWLOCK *)a2[5].Ptr;
  if ( Ptr == &a2[5] )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = a2[5].Ptr;
    if ( Ptr[1].Ptr != v4 || (v7 = Ptr->Ptr, *((_RTL_SRWLOCK **)Ptr->Ptr + 1) != Ptr) )
      __fastfail(3u);
    v4->Ptr = v7;
    v7[1] = v4;
    Ptr = (_RTL_SRWLOCK *)v4->Ptr;
  }
  RtlReleaseSRWLockExclusive(a2 + 4);
  if ( Ptr != v4 )
    sub_180026138((__int64)a2, *(char **)(a1 + 128), 1, 0LL);
  if ( v6 )
  {
    v9 = *(v6 - 2);
    v10 = *(v6 - 1);
    v8 = *((_QWORD *)v6 + 2);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015D050 + 3145728, *(PVOID *)v8);
    *(_RTL_SRWLOCK *)(a1 + 88) = a2[7];
    *(_QWORD *)(a1 + 96) = a2;
    ((void (__fastcall *)(__int64, _RTL_SRWLOCK *, _QWORD, __int128 *))a2[7].Ptr)(a1, a2, *((_QWORD *)&v9 + 1), &v10);
  }
}
