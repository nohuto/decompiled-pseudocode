/*
 * XREFs of RtlpAddVectoredHandler @ 0x180075888
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x180075880 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x180090350 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005ED9C (LdrEnsureMrdataHeapExists.c)
 *     RtlEncodePointer @ 0x180075AD0 (RtlEncodePointer.c)
 *     RtlQueryProtectedPolicy @ 0x180075B20 (RtlQueryProtectedPolicy.c)
 */

_QWORD *__fastcall RtlpAddVectoredHandler(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rbx
  _UNKNOWN **v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 *v17; // r8
  __int64 v18; // r9
  _UNKNOWN ***v19; // rax
  _QWORD *v21; // rax
  int v22; // ebx
  int v23; // ecx
  __int64 v24; // [rsp+58h] [rbp+20h]

  v3 = a3;
  if ( (int)LdrEnsureMrdataHeapExists() < 0 || (int)RtlQueryProtectedPolicy(&unk_180118B18) >= 0 && v24 )
    return 0LL;
  if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v6, v7, v8);
    v22 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v22 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v22 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 32LL);
  v14 = (_QWORD *)Heap;
  if ( Heap )
  {
    *(_DWORD *)(Heap + 16) = 1;
    *(_QWORD *)(Heap + 24) = RtlEncodePointer(a2);
    v15 = &LdrpVectorHandlerList + 3 * v3 + 1;
    LdrProtectMrdata(0);
    RtlAcquireSRWLockExclusive((unsigned __int64)*(&LdrpVectorHandlerList + 3 * v3), v16, v17, v18);
    if ( *v15 == (_UNKNOWN *)v15 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v3 + 2);
    if ( a1 )
    {
      v19 = (_UNKNOWN ***)*v15;
      if ( *((_UNKNOWN ***)*v15 + 1) != v15 )
        __fastfail(3u);
      *v14 = v19;
      v14[1] = v15;
      v19[1] = (_UNKNOWN **)v14;
      *v15 = v14;
    }
    else
    {
      v21 = v15[1];
      if ( (_UNKNOWN **)*v21 != v15 )
        __fastfail(3u);
      *v14 = v15;
      v14[1] = v21;
      *v21 = v14;
      v15[1] = v14;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + 3 * v3));
    LdrProtectMrdata(1);
  }
  if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
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
  return v14;
}
