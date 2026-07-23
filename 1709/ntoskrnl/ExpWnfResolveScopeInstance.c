/*
 * XREFs of ExpWnfResolveScopeInstance @ 0x140502B1C
 * Callers:
 *     NtDeleteWnfStateName @ 0x1404FDBB8 (NtDeleteWnfStateName.c)
 *     NtUpdateWnfStateData @ 0x1404FEFC8 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1404FF814 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1404FFEEC (NtQueryWnfStateData.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140500538 (ExpWnfCompleteThreadSubscriptions.c)
 *     NtCreateWnfStateName @ 0x140504994 (NtCreateWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x140582464 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x1405EBE04 (NtDeleteWnfStateData.c)
 * Callees:
 *     PsGetHostSilo @ 0x140004290 (PsGetHostSilo.c)
 *     RtlLengthSid @ 0x140019280 (RtlLengthSid.c)
 *     ExfAcquirePushLockSharedEx @ 0x14005D4E0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1405032EC (ExpWnfGetCurrentScopeInstance.c)
 *     ExpWnfFindScopeInstance @ 0x140503550 (ExpWnfFindScopeInstance.c)
 *     ExpWnfCreateProcessContext @ 0x14058202C (ExpWnfCreateProcessContext.c)
 *     ExpWnfAllocateScopeInstance @ 0x140599640 (ExpWnfAllocateScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x14059AAFC (ExpWnfFreeScopeInstance.c)
 *     ExpWnfAllocateScopeMap @ 0x1405EDB2C (ExpWnfAllocateScopeMap.c)
 */

__int64 __fastcall ExpWnfResolveScopeInstance(struct _EX_RUNDOWN_REF **a1, __int64 a2, __int64 a3, int a4, PSID Sid)
{
  __int64 v5; // r13
  char *ServerSiloGlobals; // rax
  volatile signed __int64 *v9; // rdi
  __int64 v10; // r8
  ULONG v11; // edx
  volatile signed __int64 *v12; // r15
  struct _EX_RUNDOWN_REF *v13; // rsi
  bool v14; // zf
  int CurrentScopeInstance; // ebx
  __int64 HostSilo; // rax
  PVOID PoolWithTag; // rax
  __int64 v19; // r12
  signed __int64 *v20; // rdi
  PRTL_BALANCED_NODE v21; // rbx
  struct _EX_RUNDOWN_REF *ScopeInstance; // rax
  int v23; // r14d
  PRTL_BALANCED_NODE v24; // rax
  PRTL_BALANCED_NODE v25; // rbx
  struct _EX_RUNDOWN_REF *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  _QWORD *v29; // rbx
  int v30; // [rsp+30h] [rbp-40h] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v32; // [rsp+40h] [rbp-30h] BYREF
  PVOID v33; // [rsp+48h] [rbp-28h] BYREF
  _BYTE *v34; // [rsp+50h] [rbp-20h]
  PVOID P; // [rsp+58h] [rbp-18h]
  _BYTE v36[16]; // [rsp+60h] [rbp-10h] BYREF
  int v38; // [rsp+C0h] [rbp+50h]

  v38 = a3;
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
    CurrentScopeInstance = ExpWnfAllocateScopeMap(&v33);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    if ( _InterlockedCompareExchange64(v9, (signed __int64)v33, 0LL) )
      ExFreePoolWithTag(v33, 0x20666E57u);
  }
  v32 = *(_QWORD *)(a2 + 1720);
  v10 = v32;
  if ( !v32 )
  {
    CurrentScopeInstance = ExpWnfCreateProcessContext(a2, &v32);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    v10 = v32;
  }
  if ( Sid || (v30 = 1, a3) )
    v30 = 0;
  v11 = 8;
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 != 4 )
    {
      v12 = (volatile signed __int64 *)(v10 + 8 * ((unsigned int)(v5 - 1) + 4LL));
      goto LABEL_11;
    }
    v12 = (volatile signed __int64 *)(*v9 + 16);
  }
  else
  {
    v12 = (volatile signed __int64 *)(*v9 + 8);
  }
  v30 = 1;
LABEL_11:
  v13 = (struct _EX_RUNDOWN_REF *)*v12;
  *(_QWORD *)&NumberOfBytes[1] = *v12;
  if ( v30 && v13 )
    goto LABEL_13;
  if ( Sid )
  {
    if ( (_DWORD)v5 )
    {
      switch ( (_DWORD)v5 )
      {
        case 1:
          v11 = 4;
          goto LABEL_47;
        case 2:
          v11 = RtlLengthSid(Sid);
          goto LABEL_47;
        case 3:
LABEL_47:
          NumberOfBytes[0] = v11;
          v30 = 0;
          goto LABEL_31;
      }
    }
    v11 = 0;
    goto LABEL_47;
  }
  NumberOfBytes[0] = 8;
  v34 = v36;
  CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(
                           a2,
                           v38,
                           v5,
                           (unsigned int)v36,
                           (__int64)NumberOfBytes,
                           (__int64)&v30);
  if ( CurrentScopeInstance == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20666E57u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v34 = PoolWithTag;
    CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(
                             a2,
                             v38,
                             v5,
                             (_DWORD)PoolWithTag,
                             (__int64)NumberOfBytes,
                             (__int64)&v30);
  }
  if ( CurrentScopeInstance < 0 )
    goto LABEL_16;
  if ( NumberOfBytes[0] )
    Sid = v34;
LABEL_31:
  if ( v30 && v13 )
  {
LABEL_13:
    v14 = ExAcquireRundownProtection_0(v13 + 1) == 0;
    goto LABEL_14;
  }
  v19 = *v9 + 8 * (2 * v5 + v5 + 4);
  v20 = (signed __int64 *)(*v9 + 8 * (v5 + 2 * v5 + 3));
  v21 = KeAbPreAcquire((ULONG_PTR)v20, 0LL, 0);
  if ( _InterlockedCompareExchange64(v20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v20, (__int64)v21, (ULONG_PTR)v20);
  if ( v21 )
    BYTE2(v21[1].Left) |= 1u;
  ScopeInstance = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v19, Sid, NumberOfBytes[0]);
  v13 = ScopeInstance;
  if ( ScopeInstance )
  {
    v23 = ExAcquireRundownProtection_0(ScopeInstance + 1);
    if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v20);
    KeAbPostRelease((ULONG_PTR)v20);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v20);
    KeAbPostRelease((ULONG_PTR)v20);
    CurrentScopeInstance = ExpWnfAllocateScopeInstance(&NumberOfBytes[1], (unsigned int)v5, Sid, NumberOfBytes[0]);
    if ( CurrentScopeInstance < 0 )
      goto LABEL_16;
    v24 = KeAbPreAcquire((ULONG_PTR)v20, 0LL, 0);
    v25 = v24;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v20, (__int64)v24, (__int16 *)v20);
    if ( v25 )
      BYTE2(v25[1].Left) |= 1u;
    v26 = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v19, Sid, NumberOfBytes[0]);
    v13 = v26;
    if ( !v26 )
    {
      v27 = *(_QWORD *)&NumberOfBytes[1];
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)&NumberOfBytes[1] + 8LL));
      v28 = *(_QWORD *)v19;
      v29 = (_QWORD *)(v27 + 32);
      if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19 )
        __fastfail(3u);
      *v29 = v28;
      v29[1] = v19;
      *(_QWORD *)(v28 + 8) = v29;
      *(_QWORD *)v19 = v29;
      if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v20);
      KeAbPostRelease((ULONG_PTR)v20);
      if ( v30 )
        _InterlockedCompareExchange64(v12, *(signed __int64 *)&NumberOfBytes[1], 0LL);
      v13 = *(struct _EX_RUNDOWN_REF **)&NumberOfBytes[1];
      goto LABEL_15;
    }
    v23 = ExAcquireRundownProtection_0(v26 + 1);
    if ( (_InterlockedExchangeAdd64(v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v20);
    KeAbPostRelease((ULONG_PTR)v20);
    ExpWnfFreeScopeInstance(*(PVOID *)&NumberOfBytes[1]);
  }
  v14 = v23 == 0;
LABEL_14:
  if ( !v14 )
  {
LABEL_15:
    CurrentScopeInstance = 0;
    *a1 = v13;
    goto LABEL_16;
  }
  CurrentScopeInstance = -1073741772;
LABEL_16:
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)CurrentScopeInstance;
}
