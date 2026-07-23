/*
 * XREFs of sub_180080E08 @ 0x180080E08
 * Callers:
 *     RtlRemoveVectoredExceptionHandler @ 0x180080E00 (RtlRemoveVectoredExceptionHandler.c)
 *     RtlRemoveVectoredContinueHandler @ 0x1800D3C00 (RtlRemoveVectoredContinueHandler.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 */

__int64 __fastcall sub_180080E08(void **a1, unsigned int a2)
{
  __int64 v4; // rsi
  void **v5; // rdi
  void **i; // rbx
  void **v8; // rcx
  void **v9; // rax
  void **v10; // rdi
  int v11; // eax
  PVOID v12; // rcx
  int v14; // edi
  int v15; // edx
  int v16; // ecx

  v4 = 3LL * a2;
  v5 = (void **)(&LdrSystemDllInitBlock.ScpCfgCheckFunction + 3 * a2);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[3 * a2 + 2]);
  for ( i = (void **)*v5; ; i = (void **)*i )
  {
    if ( i == v5 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[v4 + 2]);
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015BF98);
    v14 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
      RtlProtectHeap(qword_18016F270, 0);
    if ( v14 == -1 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v14 + 1;
    RtlReleaseSRWLockExclusive(&stru_18015BF98);
  }
  if ( (*((_DWORD *)i + 4))-- == 1 )
  {
    sub_1800259B4(0);
    v8 = (void **)*i;
    v9 = (void **)i[1];
    if ( *((void ***)*i + 1) != i || *v9 != i )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = v9;
    if ( v9 == v8 )
      _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->CrossProcessFlags, a2 + 2);
    v10 = i;
  }
  else
  {
    if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] && (LdrSystemDllInitBlock.Flags & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive(&stru_18015BF98);
      v16 = *(_DWORD *)qword_18016F280;
      if ( !*(_DWORD *)qword_18016F280 )
      {
        RtlReleaseSRWLockExclusive(&stru_18015BF98);
        __fastfail(0xEu);
      }
      *(_DWORD *)qword_18016F280 = v16 - 1;
      if ( v16 == 1 )
        RtlProtectHeap(qword_18016F270, 1u);
      RtlReleaseSRWLockExclusive(&stru_18015BF98);
    }
    v10 = 0LL;
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[v4 + 2]);
  if ( v10 )
  {
    LOBYTE(v11) = LdrControlFlowGuardEnforced();
    v12 = v11 ? qword_18016F270 : NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap(v12, 0, i);
    sub_1800259B4(1);
    if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
    {
      if ( (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive(&stru_18015BF98);
        v15 = *(_DWORD *)qword_18016F280;
        if ( !*(_DWORD *)qword_18016F280 )
        {
          RtlReleaseSRWLockExclusive(&stru_18015BF98);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016F280 = v15 - 1;
        if ( v15 == 1 )
          RtlProtectHeap(qword_18016F270, 1u);
        RtlReleaseSRWLockExclusive(&stru_18015BF98);
      }
    }
  }
  return 1LL;
}
