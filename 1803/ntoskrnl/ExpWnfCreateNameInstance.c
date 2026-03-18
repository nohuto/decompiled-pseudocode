/*
 * XREFs of ExpWnfCreateNameInstance @ 0x1404F5F84
 * Callers:
 *     NtCreateWnfStateName @ 0x1404F47EC (NtCreateWnfStateName.c)
 *     NtUpdateWnfStateData @ 0x1404F53D8 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1404F57A0 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1404F5B08 (NtQueryWnfStateData.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x1404C6E50 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404C7150 (ObDereferenceSecurityDescriptor.c)
 *     ExpWnfFindStateName @ 0x1404F63A0 (ExpWnfFindStateName.c)
 *     ExpWnfPopulateStateData @ 0x140583F68 (ExpWnfPopulateStateData.c)
 *     ExpWnfGetPermanentDataStoreHandle @ 0x140584134 (ExpWnfGetPermanentDataStoreHandle.c)
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
  __int64 *v12; // r15
  volatile signed __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r14
  struct _EX_RUNDOWN_REF *StateName; // rax
  struct _EX_RUNDOWN_REF *v17; // r14
  _QWORD *v18; // rdx
  bool v19; // r8
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  struct _SINGLE_LIST_ENTRY *Next; // r15
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // r14
  struct _SINGLE_LIST_ENTRY **p_Next; // r8
  struct _EX_RUNDOWN_REF *v29; // rdx
  unsigned int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  void *Ptr; // rcx

  v5 = 184;
  if ( !*(_QWORD *)(a3 + 8) )
    v5 = 168;
  v9 = (a2 >> 4) & 3;
  if ( PsInitialSystemProcess == a4 || (_DWORD)v9 != 3 )
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
  v12 = (__int64 *)&v11[9];
  if ( (int)ObLogSecurityDescriptor(*(char **)(a3 + 16), &v11[9].Count, 1u) < 0 )
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
      v31 = -1073741670;
    }
    else
    {
      v31 = ExpWnfPopulateStateData(v11);
      if ( !v31 )
        goto LABEL_10;
    }
    ObDereferenceSecurityDescriptor(*v12, 1u);
    ExFreePoolWithTag(v11, 0x20666E57u);
    return v31;
  }
LABEL_10:
  v13 = (volatile signed __int64 *)(a1 + 48);
  v14 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  v15 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v14, a1 + 48);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  StateName = (struct _EX_RUNDOWN_REF *)ExpWnfFindStateName(a1, a2);
  v17 = StateName;
  if ( StateName )
  {
    ExAcquireRundownProtection(StateName + 1);
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48), v32, v33, v34);
    KeAbPostRelease(a1 + 48);
    ObDereferenceSecurityDescriptor(*v12, 1u);
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
    goto LABEL_20;
  while ( v11[5].Count >= v18[3] )
  {
    v20 = (_QWORD *)v18[1];
    if ( !v20 )
    {
      v19 = 1;
      goto LABEL_20;
    }
LABEL_18:
    v18 = v20;
  }
  v20 = (_QWORD *)*v18;
  if ( *v18 )
    goto LABEL_18;
  v19 = 0;
LABEL_20:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 56), (unsigned __int64)v18, v19, &v11[2].Count);
  if ( (_DWORD)v9 == 3 )
  {
    v11[19].Count = (unsigned __int64)a4;
    Next = a4[2].SwapListEntry.Next;
    v25 = KeAbPreAcquire((ULONG_PTR)&Next[7], 0LL, 0);
    v27 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Next[7], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[7], v25, (ULONG_PTR)&Next[7]);
    if ( v27 )
      *(_BYTE *)(v27 + 26) |= 1u;
    p_Next = &Next[9].Next->Next;
    v29 = v11 + 17;
    if ( *p_Next != &Next[8] )
      __fastfail(3u);
    v29->Count = (unsigned __int64)&Next[8];
    v11[18].Count = (unsigned __int64)p_Next;
    *p_Next = (struct _SINGLE_LIST_ENTRY *)v29;
    Next[9].Next = (struct _SINGLE_LIST_ENTRY *)v29;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Next[7], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Next[7], (__int64)v29, (__int64)p_Next, v26);
    KeAbPostRelease((ULONG_PTR)&Next[7]);
  }
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48), v21, v22, v23);
  KeAbPostRelease(a1 + 48);
  *a5 = v11;
  return 0LL;
}
