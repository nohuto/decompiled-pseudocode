/*
 * XREFs of RtlSetProtectedPolicy @ 0x1800823C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18002BD20 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x1800387F8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18004C5A0 (RtlProtectHeap.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005ED9C (LdrEnsureMrdataHeapExists.c)
 *     bsearch @ 0x1800935E0 (bsearch.c)
 *     qsort @ 0x180094A40 (qsort.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall RtlSetProtectedPolicy(_OWORD *Key, __int64 a2, _QWORD *a3)
{
  char v6; // di
  unsigned __int64 v7; // rdx
  int v8; // ebx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  void *v14; // rax
  char *v15; // rbx
  unsigned int v16; // ebx
  void *ProcessHeap; // rcx
  char *Heap; // rdi
  void *v19; // rsi
  __int64 v20; // rcx
  int v22; // ebx
  int v23; // ecx
  void *v24; // rcx

  v6 = 0;
  v8 = LdrEnsureMrdataHeapExists();
  if ( v8 < 0 )
    return (unsigned int)v8;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpProtectedPoliciesSRWLock, v7, v9, v10);
  if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
    v22 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v22 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v22 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  v14 = RtlpProtectedPolicies;
  if ( RtlpProtectedPolicies )
  {
    v15 = (char *)bsearch(
                    Key,
                    RtlpProtectedPolicies,
                    (unsigned int)RtlpProtectedPoliciesActiveCount,
                    0x18uLL,
                    (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v14 = RtlpProtectedPolicies;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
    goto LABEL_18;
  if ( v14 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
  {
    LdrProtectMrdata(0);
    Heap = (char *)RtlpProtectedPolicies;
LABEL_17:
    v15 = &Heap[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
    LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
    *(_QWORD *)v15 = 0LL;
    *((_QWORD *)v15 + 1) = 0LL;
    *((_QWORD *)v15 + 2) = 0LL;
    *(_OWORD *)v15 = *Key;
    LdrProtectMrdata(1);
    v14 = RtlpProtectedPolicies;
    v6 = 1;
LABEL_18:
    v20 = *((_QWORD *)v15 + 2);
    *((_QWORD *)v15 + 2) = a2;
    if ( a3 )
      *a3 = v20;
    if ( v6 )
      qsort(
        v14,
        (unsigned int)RtlpProtectedPoliciesActiveCount,
        0x18uLL,
        (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    v8 = 0;
    goto LABEL_23;
  }
  v16 = 16;
  if ( RtlpProtectedPoliciesTotalCount )
    v16 = 2 * RtlpProtectedPoliciesTotalCount;
  if ( v16 >= RtlpProtectedPoliciesTotalCount && v16 < 0xAAAAAAA )
  {
    if ( LdrControlFlowGuardEnforced() )
    {
      if ( 24 * (unsigned __int64)v16 >= 0xFF000 )
        goto LABEL_45;
      ProcessHeap = (void *)LdrpMrdataHeap;
    }
    else
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    Heap = (char *)RtlAllocateHeap((__int64)ProcessHeap, 0, 24LL * v16);
    if ( Heap )
    {
      LdrProtectMrdata(0);
      v19 = RtlpProtectedPolicies;
      if ( RtlpProtectedPolicies )
      {
        memmove(Heap, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
        if ( LdrControlFlowGuardEnforced() )
          v24 = (void *)LdrpMrdataHeap;
        else
          v24 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)v24, 0, (unsigned __int64)v19);
      }
      RtlpProtectedPolicies = Heap;
      RtlpProtectedPoliciesTotalCount = v16;
      goto LABEL_17;
    }
  }
LABEL_45:
  v8 = -1073741801;
LABEL_23:
  if ( qword_18016F370 && (byte_18016F35C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
    v23 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v23 - 1;
    if ( v23 == 1 )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
  return (unsigned int)v8;
}
