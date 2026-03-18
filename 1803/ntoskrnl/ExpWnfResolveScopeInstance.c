/*
 * XREFs of ExpWnfResolveScopeInstance @ 0x1404F63DC
 * Callers:
 *     NtCreateWnfStateName @ 0x1404F47EC (NtCreateWnfStateName.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1404F502C (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUpdateWnfStateData @ 0x1404F53D8 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1404F57A0 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1404F5B08 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x140567140 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x14056F7C0 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x14065039C (NtDeleteWnfStateData.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140008790 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsGetHostSilo @ 0x14006CDB0 (PsGetHostSilo.c)
 *     RtlLengthSid @ 0x14009FED0 (RtlLengthSid.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1404F6B44 (ExpWnfGetCurrentScopeInstance.c)
 *     ExpWnfFindScopeInstance @ 0x1404F79CC (ExpWnfFindScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x14056705C (ExpWnfFreeScopeInstance.c)
 *     ExpWnfCreateProcessContext @ 0x140570558 (ExpWnfCreateProcessContext.c)
 *     ExpWnfAllocateScopeInstance @ 0x1405820D0 (ExpWnfAllocateScopeInstance.c)
 *     ExpWnfAllocateScopeMap @ 0x140652150 (ExpWnfAllocateScopeMap.c)
 */

__int64 __fastcall ExpWnfResolveScopeInstance(struct _EX_RUNDOWN_REF **a1, __int64 a2, __int64 a3, int a4, PSID Sid)
{
  __int64 v5; // r13
  char *ServerSiloGlobals; // rax
  volatile signed __int64 *v9; // rdi
  __int64 v10; // r8
  int v11; // eax
  ULONG v12; // edx
  PVOID *v13; // r15
  struct _EX_RUNDOWN_REF *v14; // rsi
  bool v15; // zf
  int CurrentScopeInstance; // ebx
  __int64 HostSilo; // rax
  PVOID PoolWithTag; // rax
  __int64 v20; // r12
  unsigned __int64 *v21; // rdi
  __int64 v22; // rbx
  struct _EX_RUNDOWN_REF *ScopeInstance; // rax
  int v24; // r14d
  __int64 v25; // rax
  __int64 v26; // rbx
  struct _EX_RUNDOWN_REF *v27; // rax
  char *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-40h] BYREF
  PVOID v38; // [rsp+38h] [rbp-38h] BYREF
  __int64 v39; // [rsp+40h] [rbp-30h] BYREF
  PVOID v40; // [rsp+48h] [rbp-28h] BYREF
  _BYTE *v41; // [rsp+50h] [rbp-20h]
  PVOID P; // [rsp+58h] [rbp-18h]
  _BYTE v43[16]; // [rsp+60h] [rbp-10h] BYREF
  int v45; // [rsp+C0h] [rbp+50h]

  v45 = a3;
  v5 = a4;
  P = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode || a4 == 4 )
  {
    HostSilo = PsGetHostSilo();
    ServerSiloGlobals = (char *)PsGetServerSiloGlobals(HostSilo);
  }
  else
  {
    ServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  }
  v9 = (volatile signed __int64 *)(ServerSiloGlobals + 904);
  if ( !*((_QWORD *)ServerSiloGlobals + 113) )
  {
    CurrentScopeInstance = ExpWnfAllocateScopeMap(&v40);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    if ( _InterlockedCompareExchange64(v9, (signed __int64)v40, 0LL) )
      ExFreePoolWithTag(v40, 0x20666E57u);
  }
  v39 = *(_QWORD *)(a2 + 1720);
  v10 = v39;
  if ( !v39 )
  {
    CurrentScopeInstance = ExpWnfCreateProcessContext(a2, &v39);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    v10 = v39;
  }
  if ( Sid || (v11 = 1, a3) )
    v11 = 0;
  HIDWORD(NumberOfBytes) = v11;
  v12 = 8;
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 != 4 )
    {
      v13 = (PVOID *)(v10 + 8 * ((unsigned int)(v5 - 1) + 4LL));
      goto LABEL_12;
    }
    v13 = (PVOID *)(*v9 + 16);
  }
  else
  {
    v13 = (PVOID *)(*v9 + 8);
  }
  HIDWORD(NumberOfBytes) = 1;
LABEL_12:
  v14 = (struct _EX_RUNDOWN_REF *)*v13;
  v38 = *v13;
  if ( HIDWORD(NumberOfBytes) && v14 )
    goto LABEL_14;
  if ( Sid )
  {
    if ( (_DWORD)v5 )
    {
      switch ( (_DWORD)v5 )
      {
        case 1:
          v12 = 4;
          goto LABEL_47;
        case 2:
          v12 = RtlLengthSid(Sid);
          goto LABEL_47;
        case 3:
LABEL_47:
          NumberOfBytes = v12;
          goto LABEL_31;
      }
    }
    v12 = 0;
    goto LABEL_47;
  }
  LODWORD(NumberOfBytes) = 8;
  v41 = v43;
  CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(
                           a2,
                           v45,
                           v5,
                           (unsigned int)v43,
                           (__int64)&NumberOfBytes,
                           (__int64)&NumberOfBytes + 4);
  if ( CurrentScopeInstance == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20666E57u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v41 = PoolWithTag;
    CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(
                             a2,
                             v45,
                             v5,
                             (_DWORD)PoolWithTag,
                             (__int64)&NumberOfBytes,
                             (__int64)&NumberOfBytes + 4);
  }
  if ( CurrentScopeInstance < 0 )
    goto LABEL_17;
  if ( (_DWORD)NumberOfBytes )
    Sid = v41;
LABEL_31:
  if ( HIDWORD(NumberOfBytes) && v14 )
  {
LABEL_14:
    v15 = ExAcquireRundownProtection(v14 + 1) == 0;
    goto LABEL_15;
  }
  v20 = *v9 + 8 * (2 * v5 + v5 + 4);
  v21 = (unsigned __int64 *)(*v9 + 8 * (v5 + 2 * v5 + 3));
  v22 = KeAbPreAcquire((ULONG_PTR)v21, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v21, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v21, v22, (ULONG_PTR)v21);
  if ( v22 )
    *(_BYTE *)(v22 + 26) |= 1u;
  ScopeInstance = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v20, Sid, (unsigned int)NumberOfBytes);
  v14 = ScopeInstance;
  if ( ScopeInstance )
  {
    v24 = ExAcquireRundownProtection(ScopeInstance + 1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v21, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v21);
    KeAbPostRelease((ULONG_PTR)v21);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v21, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v21);
    KeAbPostRelease((ULONG_PTR)v21);
    CurrentScopeInstance = ExpWnfAllocateScopeInstance(&v38, (unsigned int)v5, Sid, (unsigned int)NumberOfBytes);
    if ( CurrentScopeInstance < 0 )
      goto LABEL_17;
    v25 = KeAbPreAcquire((ULONG_PTR)v21, 0LL, 0);
    v26 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0LL) )
      ExfAcquirePushLockExclusiveEx(v21, v25, (ULONG_PTR)v21);
    if ( v26 )
      *(_BYTE *)(v26 + 26) |= 1u;
    v27 = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v20, Sid, (unsigned int)NumberOfBytes);
    v14 = v27;
    if ( !v27 )
    {
      v28 = (char *)v38;
      ExAcquireRundownProtection((PEX_RUNDOWN_REF)v38 + 1);
      v32 = *(_QWORD *)v20;
      v33 = v28 + 32;
      if ( *(_QWORD *)(*(_QWORD *)v20 + 8LL) != v20 )
        __fastfail(3u);
      *v33 = v32;
      v33[1] = v20;
      *(_QWORD *)(v32 + 8) = v33;
      *(_QWORD *)v20 = v33;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v21, v29, v30, v31);
      KeAbPostRelease((ULONG_PTR)v21);
      if ( HIDWORD(NumberOfBytes) )
        _InterlockedCompareExchange64((volatile signed __int64 *)v13, (signed __int64)v38, 0LL);
      v14 = (struct _EX_RUNDOWN_REF *)v38;
      goto LABEL_16;
    }
    v24 = ExAcquireRundownProtection(v27 + 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v21, v34, v35, v36);
    KeAbPostRelease((ULONG_PTR)v21);
    ExpWnfFreeScopeInstance(v38);
  }
  v15 = v24 == 0;
LABEL_15:
  if ( !v15 )
  {
LABEL_16:
    CurrentScopeInstance = 0;
    *a1 = v14;
    goto LABEL_17;
  }
  CurrentScopeInstance = -1073741772;
LABEL_17:
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)CurrentScopeInstance;
}
