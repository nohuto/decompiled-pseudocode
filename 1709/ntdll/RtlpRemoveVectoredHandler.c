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

__int64 __fastcall RtlpRemoveVectoredHandler(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // r14d
  __int64 v6; // rsi
  unsigned __int64 *v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  unsigned __int64 i; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  unsigned __int64 v15; // rax
  void *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // r8
  __int64 v19; // r9
  int v21; // edi
  int v22; // edx
  int v23; // ecx

  v4 = a2;
  v6 = 3LL * (unsigned int)a2;
  v7 = (unsigned __int64 *)(&LdrpVectorHandlerList + 3 * (unsigned int)a2 + 1);
  RtlAcquireSRWLockExclusive((unsigned __int64)*(&LdrpVectorHandlerList + 3 * (unsigned int)a2), a2, a3, a4);
  for ( i = *v7; ; i = *(_QWORD *)i )
  {
    if ( (unsigned __int64 *)i == v7 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v6));
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v8, v9, v10);
    v21 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v21 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v21 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( (*(_DWORD *)(i + 16))-- == 1 )
  {
    LdrProtectMrdata(0);
    v13 = *(_QWORD **)i;
    v14 = *(_QWORD **)(i + 8);
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v14 != i )
      __fastfail(3u);
    *v14 = v13;
    v13[1] = v14;
    if ( v14 == v13 )
      _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->80, v4 + 2);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v6));
    v15 = i;
  }
  else
  {
    if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v8, v9, v10);
      v23 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v23 - 1;
      if ( v23 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v6));
    v15 = 0LL;
  }
  if ( v15 )
  {
    v16 = LdrControlFlowGuardEnforced() ? (void *)LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap((__int64)v16, 0, i);
    LdrProtectMrdata(1);
    if ( qword_18016F370 )
    {
      if ( (byte_18016F35C & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v17, v18, v19);
        v22 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v22 - 1;
        if ( v22 == 1 )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
    }
  }
  return 1LL;
}
