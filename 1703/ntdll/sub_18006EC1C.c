/*
 * XREFs of sub_18006EC1C @ 0x18006EC1C
 * Callers:
 *     sub_180034E60 @ 0x180034E60 (sub_180034E60.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     ZwQueryInformationProcess @ 0x1800A5620 (ZwQueryInformationProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800F8A60 @ 0x1800F8A60 (sub_1800F8A60.c)
 */

char __fastcall sub_18006EC1C(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _PEB *v3; // r13
  char v4; // bp
  __int64 v5; // r12
  ULONG CrossProcessFlags; // eax
  ULONG_PTR *v7; // rbx
  _QWORD *v8; // rdi
  _RTL_SRWLOCK *v9; // rcx
  ULONG_PTR v10; // rsi
  _QWORD *v11; // r15
  _DWORD *v12; // rbp
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // r14
  __int64 (__fastcall *v16)(_QWORD *); // rbx
  int v17; // r13d
  int v20; // ebx
  int v21; // ecx
  int v22; // ebx
  int v23; // ecx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  int v26; // ebx
  void *v27; // r8
  PVOID ProcessHeap; // rcx
  int v29; // edx
  unsigned int v30; // [rsp+30h] [rbp-68h]
  struct _PEB *v31; // [rsp+38h] [rbp-60h]
  _QWORD v32[11]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int ProcessInformation; // [rsp+B8h] [rbp+20h] BYREF

  v3 = NtCurrentPeb();
  v4 = 0;
  v31 = v3;
  v30 = a3 + 2;
  v5 = 3LL * a3;
  CrossProcessFlags = v3->CrossProcessFlags;
  v7 = &LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[3 * a3 + 1];
  if ( _bittest((const int *)&CrossProcessFlags, a3 + 2) )
  {
    v32[0] = a1;
    v8 = 0LL;
    v9 = (_RTL_SRWLOCK *)LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[3 * a3];
    v32[1] = a2;
    RtlAcquireSRWLockExclusive(v9);
    v10 = *v7;
    if ( (ULONG_PTR *)*v7 != v7 )
    {
      while ( 1 )
      {
        v11 = (_QWORD *)v10;
        if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
        {
          RtlAcquireSRWLockExclusive(&stru_18015AF70);
          v20 = *(_DWORD *)qword_18016B270;
          if ( !*(_DWORD *)qword_18016B270 )
            RtlProtectHeap(qword_18016B260, 0);
          if ( v20 == -1 )
          {
            RtlReleaseSRWLockExclusive(&stru_18015AF70);
            __fastfail(0xEu);
          }
          *(_DWORD *)qword_18016B270 = v20 + 1;
          RtlReleaseSRWLockExclusive(&stru_18015AF70);
        }
        v12 = (_DWORD *)(v10 + 16);
        ++*(_DWORD *)(v10 + 16);
        if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
        {
          RtlAcquireSRWLockExclusive(&stru_18015AF70);
          v21 = *(_DWORD *)qword_18016B270;
          if ( !*(_DWORD *)qword_18016B270 )
          {
            RtlReleaseSRWLockExclusive(&stru_18015AF70);
            __fastfail(0xEu);
          }
          *(_DWORD *)qword_18016B270 = v21 - 1;
          if ( v21 == 1 )
            RtlProtectHeap(qword_18016B260, 1u);
          RtlReleaseSRWLockExclusive(&stru_18015AF70);
        }
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[v5]);
        v13 = *(_QWORD *)(v10 + 24);
        v14 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
        if ( v14 < 0 )
          RtlRaiseStatus(v14);
        v15 = 0LL;
        v16 = (__int64 (__fastcall *)(_QWORD *))(ProcessInformation ^ __ROR8__(v13, 64 - (ProcessInformation & 0x3F)));
        if ( (v3->NtGlobalFlag & 0x800000) != 0 )
          v15 = sub_1800F8A60(a1, a2, 0LL, v16);
        v17 = v16(v32);
        if ( v15 )
          *(_DWORD *)(v15 + 1396) = v17 != -1;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[v5]);
        v10 = *(_QWORD *)v10;
        if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
        {
          RtlAcquireSRWLockExclusive(&stru_18015AF70);
          v22 = *(_DWORD *)qword_18016B270;
          if ( !*(_DWORD *)qword_18016B270 )
            RtlProtectHeap(qword_18016B260, 0);
          if ( v22 == -1 )
          {
            RtlReleaseSRWLockExclusive(&stru_18015AF70);
            __fastfail(0xEu);
          }
          *(_DWORD *)qword_18016B270 = v22 + 1;
          RtlReleaseSRWLockExclusive(&stru_18015AF70);
        }
        if ( (*v12)-- == 1 )
        {
          sub_18001DEA8(0);
          v24 = (_QWORD *)*v11;
          v25 = (_QWORD *)v11[1];
          if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v25 != v11 )
            __fastfail(3u);
          *v25 = v24;
          v24[1] = v25;
          if ( v25 == v24 )
            _interlockedbittestandreset((volatile signed __int32 *)&v31->CrossProcessFlags, v30);
          sub_18001DEA8(1);
          *v11 = v8;
          v8 = v11;
        }
        if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
        {
          RtlAcquireSRWLockExclusive(&stru_18015AF70);
          v23 = *(_DWORD *)qword_18016B270;
          if ( !*(_DWORD *)qword_18016B270 )
          {
            RtlReleaseSRWLockExclusive(&stru_18015AF70);
            __fastfail(0xEu);
          }
          *(_DWORD *)qword_18016B270 = v23 - 1;
          if ( v23 == 1 )
            RtlProtectHeap(qword_18016B260, 1u);
          RtlReleaseSRWLockExclusive(&stru_18015AF70);
        }
        if ( v17 == -1 )
          break;
        if ( (ULONG_PTR *)v10 == &LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[v5 + 1] )
        {
          v4 = 0;
          goto LABEL_16;
        }
        v3 = v31;
      }
      v4 = 1;
    }
LABEL_16:
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)LdrSystemDllInitBlock.MitigationAuditOptionsMap.Map[v5]);
    if ( v8 )
    {
      if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
      {
        RtlAcquireSRWLockExclusive(&stru_18015AF70);
        v26 = *(_DWORD *)qword_18016B270;
        if ( !*(_DWORD *)qword_18016B270 )
          RtlProtectHeap(qword_18016B260, 0);
        if ( v26 == -1 )
        {
          RtlReleaseSRWLockExclusive(&stru_18015AF70);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016B270 = v26 + 1;
        RtlReleaseSRWLockExclusive(&stru_18015AF70);
      }
      do
      {
        v27 = v8;
        v8 = (_QWORD *)*v8;
        if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
          ProcessHeap = qword_18016B260;
        else
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(ProcessHeap, 0, v27);
      }
      while ( v8 );
      if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
      {
        RtlAcquireSRWLockExclusive(&stru_18015AF70);
        v29 = *(_DWORD *)qword_18016B270;
        if ( !*(_DWORD *)qword_18016B270 )
        {
          RtlReleaseSRWLockExclusive(&stru_18015AF70);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016B270 = v29 - 1;
        if ( v29 == 1 )
          RtlProtectHeap(qword_18016B260, 1u);
        RtlReleaseSRWLockExclusive(&stru_18015AF70);
      }
    }
  }
  return v4;
}
