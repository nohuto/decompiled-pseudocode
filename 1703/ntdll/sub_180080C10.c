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

void __fastcall sub_180080C10(__int64 a1, _RTL_SRWLOCK *a2)
{
  _RTL_SRWLOCK *v4; // rsi
  _QWORD *Ptr; // rdi
  _QWORD **v6; // rax
  _RTL_SRWLOCK *v7; // rbx
  __int64 v8; // r8
  __int128 v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF

  RtlAcquireSRWLockExclusive(a2 + 4);
  v4 = a2 + 5;
  if ( v4->Ptr == v4 )
  {
    Ptr = 0LL;
  }
  else
  {
    Ptr = v4->Ptr;
    v6 = *(_QWORD ***)v4->Ptr;
    if ( *((_RTL_SRWLOCK **)v4->Ptr + 1) != v4 || v6[1] != Ptr )
      __fastfail(3u);
    v4->Ptr = v6;
    v6[1] = &v4->Ptr;
  }
  v7 = (_RTL_SRWLOCK *)v4->Ptr;
  RtlReleaseSRWLockExclusive(a2 + 4);
  if ( v7 != v4 )
    sub_180017034((__int64)a2, *(char **)(a1 + 128), 1, 0LL);
  if ( Ptr )
  {
    v9 = *((_OWORD *)Ptr - 2);
    v10 = *((_OWORD *)Ptr - 1);
    v8 = Ptr[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 3145728, *(PVOID *)v8);
    *(_RTL_SRWLOCK *)(a1 + 88) = a2[7];
    *(_QWORD *)(a1 + 96) = a2;
    ((void (__fastcall *)(__int64, _RTL_SRWLOCK *, _QWORD, __int128 *))a2[7].Ptr)(a1, a2, *((_QWORD *)&v9 + 1), &v10);
  }
}
