/*
 * XREFs of RtlDeleteGrowableFunctionTable @ 0x180074030
 * Callers:
 *     RtlDeleteFunctionTable @ 0x180073E80 (RtlDeleteFunctionTable.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x1800741C0 (RtlAvlRemoveNode.c)
 *     ZwSetInformationProcess @ 0x1800A5680 (ZwSetInformationProcess.c)
 */

__int64 __fastcall RtlDeleteGrowableFunctionTable(unsigned __int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  _QWORD *v4; // rax
  void *ProcessHeap; // rcx
  int v7; // edi
  int v8; // ecx
  unsigned __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 80) != 3 )
    RtlRaiseStatus(-1073741811);
  v9 = a1;
  v10 = 1;
  v2 = ZwSetInformationProcess(-1LL, 53LL, &v9, 16LL);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  sub_18001DEA8(0);
  if ( qword_18016B370 )
  {
    RtlAcquireSRWLockExclusive(&qword_18015AF70);
    v7 = *(_DWORD *)qword_18016B270;
    if ( !*(_DWORD *)qword_18016B270 )
      RtlProtectHeap(qword_18016B260, 0);
    if ( v7 == -1 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015AF70);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016B270 = v7 + 1;
    RtlReleaseSRWLockExclusive(&qword_18015AF70);
  }
  RtlAcquireSRWLockExclusive(&qword_18015A2B0);
  RtlAvlRemoveNode(&qword_18016B290, a1 + 88);
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v4 != a1 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  RtlReleaseSRWLockExclusive(&qword_18015A2B0);
  if ( qword_18016B370 )
    ProcessHeap = (void *)qword_18016B260;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap((__int64)ProcessHeap, 0, a1);
  if ( qword_18016B370 )
  {
    RtlAcquireSRWLockExclusive(&qword_18015AF70);
    v8 = *(_DWORD *)qword_18016B270;
    if ( !*(_DWORD *)qword_18016B270 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015AF70);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016B270 = v8 - 1;
    if ( v8 == 1 )
      RtlProtectHeap(qword_18016B260, 1);
    RtlReleaseSRWLockExclusive(&qword_18015AF70);
  }
  return sub_18001DEA8(1);
}
