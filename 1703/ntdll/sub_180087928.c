/*
 * XREFs of sub_180087928 @ 0x180087928
 * Callers:
 *     RtlRemoveVectoredExceptionHandler @ 0x180087920 (RtlRemoveVectoredExceptionHandler.c)
 *     RtlRemoveVectoredContinueHandler @ 0x1800DA4E0 (RtlRemoveVectoredContinueHandler.c)
 * Callees:
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_180087928(void **a1, unsigned int a2)
{
  __int64 v4; // rsi
  void **v5; // rdi
  void **i; // rbx
  void **v8; // rcx
  void **v9; // rax
  void **v10; // rax
  PVOID v11; // rcx
  int v13; // edi
  int v14; // edx
  int v15; // ecx

  v4 = 3LL * a2;
  v5 = (void **)&LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[3 * a2 + 1];
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[3 * a2]);
  for ( i = (void **)*v5; ; i = (void **)*i )
  {
    if ( i == v5 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[v4]);
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
  {
    RtlAcquireSRWLockExclusive(&stru_18015AF70);
    v13 = *(_DWORD *)qword_18016B270;
    if ( !*(_DWORD *)qword_18016B270 )
      RtlProtectHeap(qword_18016B260, 0);
    if ( v13 == -1 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016B270 = v13 + 1;
    RtlReleaseSRWLockExclusive(&stru_18015AF70);
  }
  if ( (*((_DWORD *)i + 4))-- == 1 )
  {
    sub_18001DEA8(0);
    v8 = (void **)*i;
    v9 = (void **)i[1];
    if ( *((void ***)*i + 1) != i || *v9 != i )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = v9;
    if ( v9 == v8 )
      _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->CrossProcessFlags, a2 + 2);
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[v4]);
    v10 = i;
  }
  else
  {
    if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
    {
      RtlAcquireSRWLockExclusive(&stru_18015AF70);
      v15 = *(_DWORD *)qword_18016B270;
      if ( !*(_DWORD *)qword_18016B270 )
      {
        RtlReleaseSRWLockExclusive(&stru_18015AF70);
        __fastfail(0xEu);
      }
      *(_DWORD *)qword_18016B270 = v15 - 1;
      if ( v15 == 1 )
        RtlProtectHeap(qword_18016B260, 1u);
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[v4]);
    v10 = 0LL;
  }
  if ( v10 )
  {
    v11 = LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] ? qword_18016B260 : NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap(v11, 0, i);
    sub_18001DEA8(1);
    if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
    {
      RtlAcquireSRWLockExclusive(&stru_18015AF70);
      v14 = *(_DWORD *)qword_18016B270;
      if ( !*(_DWORD *)qword_18016B270 )
      {
        RtlReleaseSRWLockExclusive(&stru_18015AF70);
        __fastfail(0xEu);
      }
      *(_DWORD *)qword_18016B270 = v14 - 1;
      if ( v14 == 1 )
        RtlProtectHeap(qword_18016B260, 1u);
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
    }
  }
  return 1LL;
}
