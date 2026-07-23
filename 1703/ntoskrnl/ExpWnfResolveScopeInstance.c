/*
 * XREFs of ExpWnfResolveScopeInstance @ 0x1404EFA9C
 * Callers:
 *     NtDeleteWnfStateName @ 0x140438840 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x1404476C4 (NtQueryWnfStateNameInformation.c)
 *     NtCreateWnfStateName @ 0x1404C2738 (NtCreateWnfStateName.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1404EDF78 (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUpdateWnfStateData @ 0x1404EE944 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1404EEDDC (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1404EF144 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateData @ 0x1405D16C8 (NtDeleteWnfStateData.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     RtlLengthSid @ 0x140088130 (RtlLengthSid.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400FE070 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpWnfFreeScopeInstance @ 0x140438760 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfCreateProcessContext @ 0x140447564 (ExpWnfCreateProcessContext.c)
 *     ExpWnfAllocateScopeInstance @ 0x14045A8C0 (ExpWnfAllocateScopeInstance.c)
 *     ExpWnfFindScopeInstance @ 0x1404EE260 (ExpWnfFindScopeInstance.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1404F07DC (ExpWnfGetCurrentScopeInstance.c)
 *     ExpWnfAllocateScopeMap @ 0x1405D2A94 (ExpWnfAllocateScopeMap.c)
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
  PVOID PoolWithTag; // rax
  _QWORD **v18; // r12
  signed __int64 *v19; // rdi
  PRTL_BALANCED_NODE v20; // rbx
  struct _EX_RUNDOWN_REF *ScopeInstance; // rax
  int v22; // r14d
  __int64 HostSilo; // rax
  PRTL_BALANCED_NODE v24; // rax
  PRTL_BALANCED_NODE v25; // rbx
  struct _EX_RUNDOWN_REF *v26; // rax
  __int64 v27; // rbx
  _QWORD *v28; // rax
  _QWORD *v29; // rbx
  int v30; // [rsp+30h] [rbp-40h] BYREF
  unsigned int NumberOfBytes[3]; // [rsp+34h] [rbp-3Ch] BYREF
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
      goto LABEL_12;
    }
    v12 = (volatile signed __int64 *)(*v9 + 16);
  }
  else
  {
    v12 = (volatile signed __int64 *)(*v9 + 8);
  }
  v30 = 1;
LABEL_12:
  v13 = (struct _EX_RUNDOWN_REF *)*v12;
  *(_QWORD *)&NumberOfBytes[1] = *v12;
  if ( v30 && v13 )
    goto LABEL_14;
  if ( Sid )
  {
    if ( (_DWORD)v5 )
    {
      switch ( (_DWORD)v5 )
      {
        case 1:
          v11 = 4;
          goto LABEL_45;
        case 2:
          v11 = RtlLengthSid(Sid);
          goto LABEL_45;
        case 3:
LABEL_45:
          NumberOfBytes[0] = v11;
          v30 = 0;
          goto LABEL_29;
      }
    }
    v11 = 0;
    goto LABEL_45;
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
    goto LABEL_17;
  if ( NumberOfBytes[0] )
    Sid = v34;
LABEL_29:
  if ( v30 && v13 )
  {
LABEL_14:
    v14 = ExAcquireRundownProtection(v13 + 1) == 0;
    goto LABEL_15;
  }
  v18 = (_QWORD **)(*v9 + 8 * (2 * v5 + v5 + 4));
  v19 = (signed __int64 *)(*v9 + 8 * (v5 + 2 * v5 + 3));
  v20 = KeAbPreAcquire((ULONG_PTR)v19, 0LL, 0);
  if ( _InterlockedCompareExchange64(v19, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v19, v20, (ULONG_PTR)v19);
  if ( v20 )
    BYTE2(v20[1].Left) |= 1u;
  ScopeInstance = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v18, Sid, NumberOfBytes[0]);
  v13 = ScopeInstance;
  if ( ScopeInstance )
  {
    v22 = ExAcquireRundownProtection(ScopeInstance + 1);
    if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v19);
    KeAbPostRelease((ULONG_PTR)v19);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v19);
    KeAbPostRelease((ULONG_PTR)v19);
    CurrentScopeInstance = ExpWnfAllocateScopeInstance(&NumberOfBytes[1], v5, Sid, NumberOfBytes[0]);
    if ( CurrentScopeInstance < 0 )
      goto LABEL_17;
    v24 = KeAbPreAcquire((ULONG_PTR)v19, 0LL, 0);
    v25 = v24;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v19, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v19, v24, (ULONG_PTR)v19);
    if ( v25 )
      BYTE2(v25[1].Left) |= 1u;
    v26 = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v18, Sid, NumberOfBytes[0]);
    v13 = v26;
    if ( !v26 )
    {
      v27 = *(_QWORD *)&NumberOfBytes[1];
      ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)&NumberOfBytes[1] + 8LL));
      v28 = *v18;
      v29 = (_QWORD *)(v27 + 32);
      if ( (_QWORD **)(*v18)[1] != v18 )
        __fastfail(3u);
      *v29 = v28;
      v29[1] = v18;
      v28[1] = v29;
      *v18 = v29;
      if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v19);
      KeAbPostRelease((ULONG_PTR)v19);
      if ( v30 )
        _InterlockedCompareExchange64(v12, *(signed __int64 *)&NumberOfBytes[1], 0LL);
      v13 = *(struct _EX_RUNDOWN_REF **)&NumberOfBytes[1];
      goto LABEL_16;
    }
    v22 = ExAcquireRundownProtection(v26 + 1);
    if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v19);
    KeAbPostRelease((ULONG_PTR)v19);
    ExpWnfFreeScopeInstance(*(struct _EX_RUNDOWN_REF **)&NumberOfBytes[1], 0);
  }
  v14 = v22 == 0;
LABEL_15:
  if ( !v14 )
  {
LABEL_16:
    CurrentScopeInstance = 0;
    *a1 = v13;
    goto LABEL_17;
  }
  CurrentScopeInstance = -1073741772;
LABEL_17:
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)CurrentScopeInstance;
}
