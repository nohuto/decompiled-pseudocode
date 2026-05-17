/*
 * XREFs of sub_180077618 @ 0x180077618
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x180077610 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x180090550 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlEncodePointer @ 0x180077840 (RtlEncodePointer.c)
 *     RtlQueryProtectedPolicy @ 0x180077890 (RtlQueryProtectedPolicy.c)
 *     sub_180083738 @ 0x180083738 (sub_180083738.c)
 */

_QWORD *__fastcall sub_180077618(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v6; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  _QWORD *v9; // rbx
  _UNKNOWN **v10; // rdi
  _UNKNOWN ***v11; // rax
  _QWORD *v13; // rax
  int v14; // ecx
  __int64 v15; // [rsp+58h] [rbp+20h]

  v3 = a3;
  if ( (int)sub_180083738() < 0 || (int)RtlQueryProtectedPolicy(&unk_180115C60) >= 0 && v15 )
    return 0LL;
  if ( !qword_18016B370 )
    goto LABEL_18;
  RtlAcquireSRWLockExclusive(&qword_18015AF70);
  v6 = *(_DWORD *)qword_18016B270;
  if ( !*(_DWORD *)qword_18016B270 )
    RtlProtectHeap(qword_18016B260, 0);
  if ( v6 == -1 )
  {
    RtlReleaseSRWLockExclusive(&qword_18015AF70);
    __fastfail(0xEu);
  }
  *(_DWORD *)qword_18016B270 = v6 + 1;
  RtlReleaseSRWLockExclusive(&qword_18015AF70);
  if ( qword_18016B370 )
    ProcessHeap = (void *)qword_18016B260;
  else
LABEL_18:
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 32LL);
  v9 = (_QWORD *)Heap;
  if ( Heap )
  {
    *(_DWORD *)(Heap + 16) = 1;
    *(_QWORD *)(Heap + 24) = RtlEncodePointer(a2);
    v10 = &off_18016B398 + 3 * v3 + 1;
    sub_18001DEA8(0);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)*(&off_18016B398 + 3 * v3));
    if ( *v10 == (_UNKNOWN *)v10 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->CrossProcessFlags, v3 + 2);
    if ( a1 )
    {
      v11 = (_UNKNOWN ***)*v10;
      if ( *((_UNKNOWN ***)*v10 + 1) != v10 )
        __fastfail(3u);
      *v9 = v11;
      v9[1] = v10;
      v11[1] = (_UNKNOWN **)v9;
      *v10 = v9;
    }
    else
    {
      v13 = v10[1];
      if ( (_UNKNOWN **)*v13 != v10 )
        __fastfail(3u);
      *v9 = v10;
      v9[1] = v13;
      *v13 = v9;
      v10[1] = v9;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&off_18016B398 + 3 * v3));
    sub_18001DEA8(1);
  }
  if ( qword_18016B370 )
  {
    RtlAcquireSRWLockExclusive(&qword_18015AF70);
    v14 = *(_DWORD *)qword_18016B270;
    if ( !*(_DWORD *)qword_18016B270 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015AF70);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016B270 = v14 - 1;
    if ( v14 == 1 )
      RtlProtectHeap(qword_18016B260, 1);
    RtlReleaseSRWLockExclusive(&qword_18015AF70);
  }
  return v9;
}
