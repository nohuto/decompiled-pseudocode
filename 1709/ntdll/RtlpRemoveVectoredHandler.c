/*
 * XREFs of RtlpRemoveVectoredHandler @ 0x180086748
 * Callers:
 *     RtlRemoveVectoredExceptionHandler @ 0x180086740 (RtlRemoveVectoredExceptionHandler.c)
 *     RtlRemoveVectoredContinueHandler @ 0x1800D9A30 (RtlRemoveVectoredContinueHandler.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 */

__int64 __fastcall RtlpRemoveVectoredHandler(void **a1, unsigned int a2)
{
  __int64 v4; // rsi
  void **v5; // rdi
  void **i; // rbx
  void **v8; // rcx
  void **v9; // rax
  void **v10; // rax
  int v11; // eax
  PVOID v12; // rcx
  int v14; // edi
  int v15; // edx
  int v16; // ecx

  v4 = 3LL * a2;
  v5 = (void **)(&LdrSystemDllInitBlock.ScpCfgDispatchFunction + 3 * a2);
  RtlAcquireSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + 3 * a2));
  for ( i = (void **)*v5; ; i = (void **)*i )
  {
    if ( i == v5 )
    {
      RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + v4));
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v14 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v14 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v14 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( (*((_DWORD *)i + 4))-- == 1 )
  {
    LdrProtectMrdata(0);
    v8 = (void **)*i;
    v9 = (void **)i[1];
    if ( *((void ***)*i + 1) != i || *v9 != i )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = v9;
    if ( v9 == v8 )
      _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->80, a2 + 2);
    RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + v4));
    v10 = i;
  }
  else
  {
    if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v16 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v16 - 1;
      if ( v16 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + v4));
    v10 = 0LL;
  }
  if ( v10 )
  {
    LOBYTE(v11) = LdrControlFlowGuardEnforced();
    v12 = v11 ? LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap(v12, 0, i);
    LdrProtectMrdata(1);
    if ( LdrSystemDllInitBlock.CfgBitMap )
    {
      if ( (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v15 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v15 - 1;
        if ( v15 == 1 )
          RtlProtectHeap(LdrpMrdataHeap, 1u);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
    }
  }
  return 1LL;
}
