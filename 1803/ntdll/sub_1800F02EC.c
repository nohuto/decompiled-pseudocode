/*
 * XREFs of sub_1800F02EC @ 0x1800F02EC
 * Callers:
 *     RtlFlushSecureMemoryCache @ 0x1800F01D0 (RtlFlushSecureMemoryCache.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800F02EC(__int64 a1, __int64 a2)
{
  char v3; // r14
  PVOID *v5; // rsi
  _DWORD *v6; // rbx
  PVOID **v7; // rdi
  bool v8; // zf
  PVOID **v9; // rax
  PVOID *v10; // rax
  PVOID v11; // r8
  __int64 v12; // rax
  PVOID BaseAddress; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_BaseAddress; // [rsp+28h] [rbp-8h]

  p_BaseAddress = &BaseAddress;
  v3 = 0;
  BaseAddress = &BaseAddress;
  RtlAcquireSRWLockExclusive(&stru_18015D760);
  v5 = (PVOID *)off_180156A40;
  while ( v5 != &off_180156A40 )
  {
    v6 = v5 + 2;
    ++*((_DWORD *)v5 + 4);
    v7 = (PVOID **)v5;
    RtlReleaseSRWLockExclusive(&stru_18015D760);
    if ( ((unsigned __int8 (__fastcall *)(__int64, __int64))v5[3])(a1, a2) )
      v3 = 1;
    RtlAcquireSRWLockExclusive(&stru_18015D760);
    v8 = (*v6)-- == 1;
    v5 = (PVOID *)*v5;
    if ( v8 )
    {
      if ( v5[1] != v7 || (v9 = (PVOID **)v7[1], *v9 != (PVOID *)v7) )
        __fastfail(3u);
      *v9 = v5;
      v5[1] = v9;
      v10 = p_BaseAddress;
      if ( *p_BaseAddress != &BaseAddress )
        __fastfail(3u);
      v7[1] = p_BaseAddress;
      *v7 = &BaseAddress;
      *v10 = v7;
      p_BaseAddress = (PVOID *)v7;
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015D760);
  while ( 1 )
  {
    v11 = BaseAddress;
    if ( BaseAddress == &BaseAddress )
      break;
    if ( *((PVOID **)BaseAddress + 1) != &BaseAddress
      || (v12 = *(_QWORD *)BaseAddress, *(PVOID *)(*(_QWORD *)BaseAddress + 8LL) != BaseAddress) )
    {
      __fastfail(3u);
    }
    BaseAddress = *(PVOID *)BaseAddress;
    *(_QWORD *)(v12 + 8) = &BaseAddress;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  }
  return v3;
}
