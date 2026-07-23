/*
 * XREFs of RtlpCallSecureMemoryCallbacks @ 0x1800F3E7C
 * Callers:
 *     RtlFlushSecureMemoryCache @ 0x1800F3D60 (RtlFlushSecureMemoryCache.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall RtlpCallSecureMemoryCallbacks(__int64 a1, __int64 a2)
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
  RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
  v5 = (PVOID *)RtlpSecMemListHead;
  while ( v5 != &RtlpSecMemListHead )
  {
    v6 = v5 + 2;
    ++*((_DWORD *)v5 + 4);
    v7 = (PVOID **)v5;
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
    if ( ((unsigned __int8 (__fastcall *)(__int64, __int64))v5[3])(a1, a2) )
      v3 = 1;
    RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
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
  RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
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
