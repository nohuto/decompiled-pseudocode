/*
 * XREFs of sub_180071028 @ 0x180071028
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x180071020 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x1800D3BE0 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     RtlEncodePointer @ 0x180071270 (RtlEncodePointer.c)
 *     RtlQueryProtectedPolicy @ 0x1800712C0 (RtlQueryProtectedPolicy.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 */

_QWORD *__fastcall sub_180071028(int a1, __int64 a2, unsigned int a3)
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
  if ( (int)sub_18007CFD4() < 0 || (int)RtlQueryProtectedPolicy(&unk_180115A60) >= 0 && v24 )
    return 0LL;
  if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v6, v7, v8);
    v22 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
      RtlProtectHeap((_DWORD *)qword_18016F270, 0);
    if ( v22 == -1 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v22 + 1;
    RtlReleaseSRWLockExclusive(&qword_18015BF98);
  }
  if ( LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)qword_18016F270;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 32LL);
  v14 = (_QWORD *)Heap;
  if ( Heap )
  {
    *(_DWORD *)(Heap + 16) = 1;
    *(_QWORD *)(Heap + 24) = RtlEncodePointer(a2);
    v15 = &off_18016F3B8 + 3 * v3 + 1;
    sub_1800259B4(0);
    RtlAcquireSRWLockExclusive((unsigned __int64)*(&off_18016F3B8 + 3 * v3), v16, v17, v18);
    if ( *v15 == (_UNKNOWN *)v15 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->CrossProcessFlags, v3 + 2);
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
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&off_18016F3B8 + 3 * v3));
    sub_1800259B4(1);
  }
  if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v11, v12, v13);
    v23 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v23 - 1;
    if ( v23 == 1 )
      RtlProtectHeap((_DWORD *)qword_18016F270, 1);
    RtlReleaseSRWLockExclusive(&qword_18015BF98);
  }
  return v14;
}
