/*
 * XREFs of RtlpCallVectoredHandlers @ 0x18006CBA8
 * Callers:
 *     RtlDispatchException @ 0x180025D00 (RtlDispatchException.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 *     RtlDecodePointer @ 0x18006CE80 (RtlDecodePointer.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpLogExceptionHandler @ 0x1800F9E9C (RtlpLogExceptionHandler.c)
 */

char __fastcall RtlpCallVectoredHandlers(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // si
  __int64 v4; // r12
  ULONG_PTR *v5; // r13
  unsigned int CrossProcessFlags; // eax
  _QWORD *v7; // rdi
  _RTL_SRWLOCK *v8; // rcx
  ULONG_PTR v9; // r14
  _QWORD *v10; // r15
  _DWORD *v11; // rsi
  __int64 (__fastcall *v12)(_QWORD *); // rbp
  __int64 v13; // rbx
  int v14; // ebp
  int v17; // ebx
  int v18; // ecx
  int v19; // ebx
  int v20; // ecx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  int v23; // ebx
  void *v24; // rbx
  int v25; // eax
  PVOID ProcessHeap; // rcx
  int v27; // edx
  struct _PEB *v28; // [rsp+20h] [rbp-68h]
  _QWORD v29[12]; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v32; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v32 = a3 + 2;
  v4 = 3LL * a3;
  v28 = NtCurrentPeb();
  v5 = &LdrSystemDllInitBlock.ScpCfgDispatchFunction + 3 * a3;
  CrossProcessFlags = v28->CrossProcessFlags;
  if ( _bittest((const int *)&CrossProcessFlags, a3 + 2) )
  {
    v29[0] = a1;
    v7 = 0LL;
    v8 = (_RTL_SRWLOCK *)*(&LdrSystemDllInitBlock.ScpCfgCheckESFunction + 3 * a3);
    v29[1] = a2;
    RtlAcquireSRWLockExclusive(v8);
    v9 = *v5;
    if ( (ULONG_PTR *)*v5 != v5 )
    {
      while ( 1 )
      {
        v10 = (_QWORD *)v9;
        if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v17 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            RtlProtectHeap(LdrpMrdataHeap, 0);
          if ( v17 == -1 )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v17 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        v11 = (_DWORD *)(v9 + 16);
        ++*(_DWORD *)(v9 + 16);
        if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v18 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v18 - 1;
          if ( v18 == 1 )
            RtlProtectHeap(LdrpMrdataHeap, 1u);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + v4));
        v12 = (__int64 (__fastcall *)(_QWORD *))RtlDecodePointer(*(PVOID *)(v9 + 24));
        v13 = 0LL;
        if ( (v28->NtGlobalFlag & 0x800000) != 0 )
          v13 = RtlpLogExceptionHandler(a1, a2, 0LL, v12);
        v14 = v12(v29);
        if ( v13 )
          *(_DWORD *)(v13 + 1396) = v14 != -1;
        RtlAcquireSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + v4));
        v9 = *(_QWORD *)v9;
        if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v19 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            RtlProtectHeap(LdrpMrdataHeap, 0);
          if ( v19 == -1 )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v19 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        if ( (*v11)-- == 1 )
        {
          LdrProtectMrdata(0);
          v21 = (_QWORD *)*v10;
          v22 = (_QWORD *)v10[1];
          if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v22 != v10 )
            __fastfail(3u);
          *v22 = v21;
          v21[1] = v22;
          if ( v22 == v21 )
            _interlockedbittestandreset((volatile signed __int32 *)&v28->80, v32);
          LdrProtectMrdata(1);
          *v10 = v7;
          v7 = v10;
        }
        if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v20 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v20 - 1;
          if ( v20 == 1 )
            RtlProtectHeap(LdrpMrdataHeap, 1u);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        if ( v14 == -1 )
          break;
        if ( (ULONG_PTR *)v9 == v5 )
        {
          v3 = 0;
          goto LABEL_15;
        }
      }
      v3 = 1;
    }
LABEL_15:
    RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + v4));
    if ( v7 )
    {
      if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v23 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          RtlProtectHeap(LdrpMrdataHeap, 0);
        if ( v23 == -1 )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v23 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      do
      {
        v24 = v7;
        v7 = (_QWORD *)*v7;
        LOBYTE(v25) = LdrControlFlowGuardEnforced();
        if ( v25 )
          ProcessHeap = LdrpMrdataHeap;
        else
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(ProcessHeap, 0, v24);
      }
      while ( v7 );
      if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v27 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v27 - 1;
        if ( v27 == 1 )
          RtlProtectHeap(LdrpMrdataHeap, 1u);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
    }
  }
  return v3;
}
