/*
 * XREFs of ExpWnfCreateNameInstance @ 0x1404EF640
 * Callers:
 *     NtCreateWnfStateName @ 0x1404C2738 (NtCreateWnfStateName.c)
 *     NtUpdateWnfStateData @ 0x1404EE944 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1404EEDDC (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1404EF144 (NtQueryWnfStateData.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpWnfFindStateName @ 0x1404EFA60 (ExpWnfFindStateName.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404F48A0 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x14050E5E0 (ObLogSecurityDescriptor.c)
 *     ExpWnfPopulateStateData @ 0x14057499C (ExpWnfPopulateStateData.c)
 *     ExpWnfGetPermanentDataStoreHandle @ 0x1405751F0 (ExpWnfGetPermanentDataStoreHandle.c)
 */

__int64 __fastcall ExpWnfCreateNameInstance(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        struct _KPROCESS *a4,
        struct _EX_RUNDOWN_REF **a5)
{
  unsigned int v5; // eax
  __int64 v9; // r12
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v11; // rdi
  struct _EX_RUNDOWN_REF *v12; // r15
  volatile signed __int64 *v13; // rsi
  PRTL_BALANCED_NODE v14; // rax
  PRTL_BALANCED_NODE v15; // r14
  struct _EX_RUNDOWN_REF *StateName; // rax
  struct _EX_RUNDOWN_REF *v17; // r14
  _QWORD *v18; // rdx
  bool v19; // r8
  _QWORD *v20; // rax
  struct _SINGLE_LIST_ENTRY *Next; // r15
  PRTL_BALANCED_NODE v22; // rax
  PRTL_BALANCED_NODE v23; // r14
  struct _SINGLE_LIST_ENTRY **p_Next; // r8
  struct _EX_RUNDOWN_REF *v25; // rdx
  unsigned int v27; // esi
  void *Ptr; // rcx

  v5 = 184;
  if ( !*(_QWORD *)(a3 + 8) )
    v5 = 168;
  v9 = (a2 >> 4) & 3;
  if ( (_DWORD)v9 != 3 || PsInitialSystemProcess == a4 )
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, v5, 0x20666E57u);
  else
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v5, 0x20666E57u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xA8uLL);
  LODWORD(v11->Count) = 11012355;
  v11[6].Count = a1;
  v11[1].Count = 0LL;
  v11[5].Count = a2;
  LODWORD(v11[7].Count) = *(_DWORD *)a3;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v11[8].Count = (unsigned __int64)&v11[21];
    *(_OWORD *)&v11[21].Count = *(_OWORD *)*(_QWORD *)(a3 + 8);
  }
  v12 = v11 + 9;
  if ( (int)ObLogSecurityDescriptor(*(void **)(a3 + 16)) < 0 )
  {
    ExFreePoolWithTag(v11, 0x20666E57u);
    return 3221225626LL;
  }
  v11[16].Count = (unsigned __int64)&v11[15];
  v11[15].Count = (unsigned __int64)&v11[15];
  v11[14].Count = 0LL;
  v11[10].Count = 0LL;
  if ( (a2 & 0x400) != 0 )
  {
    if ( (int)ExpWnfGetPermanentDataStoreHandle(a1, (unsigned int)v9, 1LL, &v11[13]) < 0 )
    {
      v27 = -1073741670;
    }
    else
    {
      v27 = ExpWnfPopulateStateData(v11);
      if ( !v27 )
        goto LABEL_11;
    }
    ObDereferenceSecurityDescriptor(v12->Count);
    ExFreePoolWithTag(v11, 0x20666E57u);
    return v27;
  }
LABEL_11:
  v13 = (volatile signed __int64 *)(a1 + 48);
  v14 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  v15 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v14, a1 + 48);
  if ( v15 )
    BYTE2(v15[1].Left) |= 1u;
  StateName = (struct _EX_RUNDOWN_REF *)ExpWnfFindStateName(a1, a2);
  v17 = StateName;
  if ( StateName )
  {
    ExAcquireRundownProtection(StateName + 1);
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
    KeAbPostRelease(a1 + 48);
    ObDereferenceSecurityDescriptor(v12->Count);
    Ptr = v11[11].Ptr;
    if ( Ptr )
      ExFreePoolWithTag(Ptr, 0x20666E57u);
    ExFreePoolWithTag(v11, 0x20666E57u);
    *a5 = v17;
    return 0LL;
  }
  ExAcquireRundownProtection(v11 + 1);
  v18 = *(_QWORD **)(a1 + 56);
  v19 = 0;
  if ( !v18 )
    goto LABEL_23;
  while ( v11[5].Count < v18[3] )
  {
    v20 = (_QWORD *)*v18;
    if ( !*v18 )
    {
      v19 = 0;
      goto LABEL_23;
    }
LABEL_19:
    v18 = v20;
  }
  v20 = (_QWORD *)v18[1];
  if ( v20 )
    goto LABEL_19;
  v19 = 1;
LABEL_23:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 56), (unsigned __int64)v18, v19, (unsigned __int64)&v11[2]);
  if ( (_DWORD)v9 == 3 )
  {
    v11[19].Count = (unsigned __int64)a4;
    Next = a4[2].SwapListEntry.Next;
    v22 = KeAbPreAcquire((ULONG_PTR)&Next[7], 0LL, 0);
    v23 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Next[7], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[7], v22, (ULONG_PTR)&Next[7]);
    if ( v23 )
      BYTE2(v23[1].Left) |= 1u;
    p_Next = &Next[9].Next->Next;
    v25 = v11 + 17;
    if ( *p_Next != &Next[8] )
      __fastfail(3u);
    v25->Count = (unsigned __int64)&Next[8];
    v11[18].Count = (unsigned __int64)p_Next;
    *p_Next = (struct _SINGLE_LIST_ENTRY *)v25;
    Next[9].Next = (struct _SINGLE_LIST_ENTRY *)v25;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Next[7], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Next[7]);
    KeAbPostRelease((ULONG_PTR)&Next[7]);
  }
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  *a5 = v11;
  return 0LL;
}
