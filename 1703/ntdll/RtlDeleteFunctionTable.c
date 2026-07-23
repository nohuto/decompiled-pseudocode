/*
 * XREFs of RtlDeleteFunctionTable @ 0x180073E80
 * Callers:
 *     <none>
 * Callees:
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180074030 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAvlRemoveNode @ 0x1800741C0 (RtlAvlRemoveNode.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  __int64 *v2; // rsi
  BOOLEAN v3; // di
  __int64 *i; // rbx
  __int64 v5; // rcx
  __int64 **v6; // rax
  PVOID v7; // rcx
  int v9; // edi
  int v10; // edx

  v2 = 0LL;
  v3 = 0;
  sub_18001DEA8(0);
  RtlAcquireSRWLockExclusive(&stru_18015A2B0);
  for ( i = (__int64 *)qword_18016B298; i != &qword_18016B298; i = (__int64 *)*i )
  {
    v2 = i;
    if ( (PRUNTIME_FUNCTION)i[2] == FunctionTable )
    {
      if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
      {
        RtlAcquireSRWLockExclusive(&stru_18015AF70);
        v9 = *(_DWORD *)qword_18016B270;
        if ( !*(_DWORD *)qword_18016B270 )
          RtlProtectHeap(qword_18016B260, 0);
        if ( v9 == -1 )
        {
          RtlReleaseSRWLockExclusive(&stru_18015AF70);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016B270 = v9 + 1;
        RtlReleaseSRWLockExclusive(&stru_18015AF70);
      }
      if ( *((_DWORD *)i + 20) != 3 )
      {
        RtlAvlRemoveNode(&qword_18016B290, i + 11);
        v5 = *i;
        v6 = (__int64 **)i[1];
        if ( *(__int64 **)(*i + 8) != i || *v6 != i )
          __fastfail(3u);
        *v6 = (__int64 *)v5;
        *(_QWORD *)(v5 + 8) = v6;
      }
      v3 = 1;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015A2B0);
  sub_18001DEA8(1);
  if ( v3 )
  {
    if ( *((_DWORD *)v2 + 20) == 3 )
    {
      RtlDeleteGrowableFunctionTable(v2);
    }
    else
    {
      v7 = LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] ? qword_18016B260 : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap(v7, 0, v2);
    }
    if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
    {
      RtlAcquireSRWLockExclusive(&stru_18015AF70);
      v10 = *(_DWORD *)qword_18016B270;
      if ( !*(_DWORD *)qword_18016B270 )
      {
        RtlReleaseSRWLockExclusive(&stru_18015AF70);
        __fastfail(0xEu);
      }
      *(_DWORD *)qword_18016B270 = v10 - 1;
      if ( v10 == 1 )
        RtlProtectHeap(qword_18016B260, 1u);
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
    }
  }
  return v3;
}
