/*
 * XREFs of RtlDeleteFunctionTable @ 0x18006A2B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006A480 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAvlRemoveNode @ 0x18006A620 (RtlAvlRemoveNode.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  __int64 *v2; // rsi
  BOOLEAN v3; // di
  __int64 *i; // rbx
  __int64 v5; // rcx
  __int64 **v6; // rax
  int v7; // eax
  PVOID v8; // rcx
  int v10; // edi
  int v11; // edx

  v2 = 0LL;
  v3 = 0;
  sub_1800259B4(0);
  RtlAcquireSRWLockExclusive(&stru_18015B2B0);
  for ( i = (__int64 *)qword_18016F2A8; i != &qword_18016F2A8; i = (__int64 *)*i )
  {
    v2 = i;
    if ( (PRUNTIME_FUNCTION)i[2] == FunctionTable )
    {
      if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive(&stru_18015BF98);
        v10 = *(_DWORD *)qword_18016F280;
        if ( !*(_DWORD *)qword_18016F280 )
          RtlProtectHeap(qword_18016F270, 0);
        if ( v10 == -1 )
        {
          RtlReleaseSRWLockExclusive(&stru_18015BF98);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016F280 = v10 + 1;
        RtlReleaseSRWLockExclusive(&stru_18015BF98);
      }
      if ( *((_DWORD *)i + 20) != 3 )
      {
        RtlAvlRemoveNode(&qword_18016F2A0, i + 11);
        v5 = *i;
        if ( *(__int64 **)(*i + 8) != i || (v6 = (__int64 **)i[1], *v6 != i) )
          __fastfail(3u);
        *v6 = (__int64 *)v5;
        *(_QWORD *)(v5 + 8) = v6;
      }
      v3 = 1;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015B2B0);
  sub_1800259B4(1);
  if ( v3 )
  {
    if ( *((_DWORD *)v2 + 20) == 3 )
    {
      RtlDeleteGrowableFunctionTable(v2);
    }
    else
    {
      LOBYTE(v7) = LdrControlFlowGuardEnforced();
      v8 = v7 ? qword_18016F270 : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap(v8, 0, v2);
    }
    if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive(&stru_18015BF98);
      v11 = *(_DWORD *)qword_18016F280;
      if ( !*(_DWORD *)qword_18016F280 )
      {
        RtlReleaseSRWLockExclusive(&stru_18015BF98);
        __fastfail(0xEu);
      }
      *(_DWORD *)qword_18016F280 = v11 - 1;
      if ( v11 == 1 )
        RtlProtectHeap(qword_18016F270, 1u);
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
    }
  }
  return v3;
}
