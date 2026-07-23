/*
 * XREFs of TppDirectExecuteCallback @ 0x180083870
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     TpPostTask @ 0x180046308 (TpPostTask.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TppDirectExecuteCallback(__int64 a1, _RTL_SRWLOCK *a2)
{
  _RTL_SRWLOCK *v4; // rsi
  unsigned __int64 *Value; // rdi
  unsigned __int64 v6; // rax
  _RTL_SRWLOCK *v7; // rbx
  unsigned __int64 v8; // r8
  __int128 v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF

  RtlAcquireSRWLockExclusive(a2 + 4);
  v4 = a2 + 5;
  if ( (_RTL_SRWLOCK *)v4->Value == v4 )
  {
    Value = 0LL;
  }
  else
  {
    Value = (unsigned __int64 *)v4->Value;
    if ( *(_RTL_SRWLOCK **)(v4->Value + 8) != v4 || (v6 = *Value, *(unsigned __int64 **)(*Value + 8) != Value) )
      __fastfail(3u);
    v4->Value = v6;
    *(_QWORD *)(v6 + 8) = v4;
  }
  v7 = (_RTL_SRWLOCK *)v4->Value;
  RtlReleaseSRWLockExclusive(a2 + 4);
  if ( v7 != v4 )
    TpPostTask((__int64)a2, *(char **)(a1 + 128), 1, 0LL);
  if ( Value )
  {
    v9 = *((_OWORD *)Value - 2);
    v10 = *((_OWORD *)Value - 1);
    v8 = Value[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(PVOID *)v8);
    *(_RTL_SRWLOCK *)(a1 + 88) = a2[7];
    *(_QWORD *)(a1 + 96) = a2;
    ((void (__fastcall *)(__int64, _RTL_SRWLOCK *, _QWORD, __int128 *))a2[7].Value)(a1, a2, *((_QWORD *)&v9 + 1), &v10);
  }
}
