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

__int64 __fastcall sub_180080E08(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
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
  unsigned __int64 v15; // rdi
  void *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // r8
  __int64 v19; // r9
  int v21; // edi
  int v22; // edx
  int v23; // ecx

  v4 = a2;
  v6 = 3LL * (unsigned int)a2;
  v7 = (unsigned __int64 *)(&off_18016F3B8 + 3 * (unsigned int)a2 + 1);
  RtlAcquireSRWLockExclusive((unsigned __int64)*(&off_18016F3B8 + 3 * (unsigned int)a2), a2, a3, a4);
  for ( i = *v7; ; i = *(_QWORD *)i )
  {
    if ( (unsigned __int64 *)i == v7 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&off_18016F3B8 + v6));
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v8, v9, v10);
    v21 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
      RtlProtectHeap((_DWORD *)qword_18016F270, 0);
    if ( v21 == -1 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v21 + 1;
    RtlReleaseSRWLockExclusive(&qword_18015BF98);
  }
  if ( (*(_DWORD *)(i + 16))-- == 1 )
  {
    sub_1800259B4(0);
    v13 = *(_QWORD **)i;
    v14 = *(_QWORD **)(i + 8);
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v14 != i )
      __fastfail(3u);
    *v14 = v13;
    v13[1] = v14;
    if ( v14 == v13 )
      _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->CrossProcessFlags, v4 + 2);
    v15 = i;
  }
  else
  {
    if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v8, v9, v10);
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
    v15 = 0LL;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&off_18016F3B8 + v6));
  if ( v15 )
  {
    v16 = LdrControlFlowGuardEnforced() ? (void *)qword_18016F270 : NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap((__int64)v16, 0, i);
    sub_1800259B4(1);
    if ( qword_18016F380 )
    {
      if ( (byte_18016F36C & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v17, v18, v19);
        v22 = *(_DWORD *)qword_18016F280;
        if ( !*(_DWORD *)qword_18016F280 )
        {
          RtlReleaseSRWLockExclusive(&qword_18015BF98);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016F280 = v22 - 1;
        if ( v22 == 1 )
          RtlProtectHeap((_DWORD *)qword_18016F270, 1);
        RtlReleaseSRWLockExclusive(&qword_18015BF98);
      }
    }
  }
  return 1LL;
}
