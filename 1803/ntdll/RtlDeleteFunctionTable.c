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
  unsigned __int64 v2; // rsi
  BOOLEAN v3; // di
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  __int64 *i; // rbx
  __int64 v11; // rcx
  __int64 **v12; // rax
  void *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 *v15; // r8
  __int64 v16; // r9
  int v18; // edi
  int v19; // edx

  v2 = 0LL;
  v3 = 0;
  sub_1800259B4(0);
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015B2B0, v4, v5, v6);
  for ( i = (__int64 *)qword_18016F2A8; i != &qword_18016F2A8; i = (__int64 *)*i )
  {
    v2 = (unsigned __int64)i;
    if ( (PRUNTIME_FUNCTION)i[2] == FunctionTable )
    {
      if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v7, v8, v9);
        v18 = *(_DWORD *)qword_18016F280;
        if ( !*(_DWORD *)qword_18016F280 )
          RtlProtectHeap((_DWORD *)qword_18016F270, 0);
        if ( v18 == -1 )
        {
          RtlReleaseSRWLockExclusive(&qword_18015BF98);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016F280 = v18 + 1;
        RtlReleaseSRWLockExclusive(&qword_18015BF98);
      }
      if ( *((_DWORD *)i + 20) != 3 )
      {
        RtlAvlRemoveNode(&qword_18016F2A0, i + 11);
        v11 = *i;
        if ( *(__int64 **)(*i + 8) != i || (v12 = (__int64 **)i[1], *v12 != i) )
          __fastfail(3u);
        *v12 = (__int64 *)v11;
        *(_QWORD *)(v11 + 8) = v12;
      }
      v3 = 1;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(&qword_18015B2B0);
  sub_1800259B4(1);
  if ( v3 )
  {
    if ( *(_DWORD *)(v2 + 80) == 3 )
    {
      RtlDeleteGrowableFunctionTable(v2);
    }
    else
    {
      v13 = LdrControlFlowGuardEnforced() ? (void *)qword_18016F270 : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap((__int64)v13, 0, v2);
    }
    if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v14, v15, v16);
      v19 = *(_DWORD *)qword_18016F280;
      if ( !*(_DWORD *)qword_18016F280 )
      {
        RtlReleaseSRWLockExclusive(&qword_18015BF98);
        __fastfail(0xEu);
      }
      *(_DWORD *)qword_18016F280 = v19 - 1;
      if ( v19 == 1 )
        RtlProtectHeap((_DWORD *)qword_18016F270, 1);
      RtlReleaseSRWLockExclusive(&qword_18015BF98);
    }
  }
  return v3;
}
