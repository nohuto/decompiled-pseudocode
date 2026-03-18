/*
 * XREFs of ExpWnfDeleteNameInstance @ 0x140567528
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x140511368 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteNameInstanceCallback @ 0x140567104 (ExpWnfDeleteNameInstanceCallback.c)
 *     NtDeleteWnfStateName @ 0x140567140 (NtDeleteWnfStateName.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404C7150 (ObDereferenceSecurityDescriptor.c)
 *     ExpWnfDeleteStateData @ 0x140567868 (ExpWnfDeleteStateData.c)
 */

__int64 __fastcall ExpWnfDeleteNameInstance(__int64 a1, struct _EX_RUNDOWN_REF *a2, char a3)
{
  unsigned __int64 *v3; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  volatile signed __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  struct _EX_RUNDOWN_REF *Count; // rsi
  unsigned __int64 v27; // rax
  unsigned __int64 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  unsigned __int64 v33; // rcx
  struct _EX_RUNDOWN_REF **v34; // rdx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned __int64 v39; // r14
  unsigned __int64 *v40; // r14
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r13
  struct _EX_RUNDOWN_REF v48; // rcx
  struct _EX_RUNDOWN_REF **v49; // rax

  v3 = (unsigned __int64 *)(a1 + 48);
  v7 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  v11 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (ULONG_PTR)v3);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( a2[6].Count )
  {
    v12 = (volatile signed __int64 *)&a2[14];
    v13 = KeAbPreAcquire((ULONG_PTR)&a2[14], 0LL, 0);
    v17 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&a2[14], 0LL) )
      ExfAcquirePushLockExclusiveEx(&a2[14].Count, v13, (ULONG_PTR)&a2[14]);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    if ( a3 )
      RtlAvlRemoveNode((unsigned __int64 *)(a1 + 56), (__int64)&a2[2]);
    a2[6].Count = 0LL;
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a2[14], v14, v15, v16);
    KeAbPostRelease((ULONG_PTR)&a2[14]);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3, v18, v19, v20);
    KeAbPostRelease((ULONG_PTR)v3);
    v21 = KeAbPreAcquire((ULONG_PTR)&a2[14], 0LL, 0);
    v25 = v21;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
      ExfAcquirePushLockExclusiveEx(&a2[14].Count, v21, (ULONG_PTR)&a2[14]);
    if ( v25 )
      *(_BYTE *)(v25 + 26) |= 1u;
    while ( 1 )
    {
      Count = (struct _EX_RUNDOWN_REF *)a2[15].Count;
      if ( Count == &a2[15] )
        break;
      ExAcquireRundownProtection(Count - 7);
      v39 = Count[-3].Count;
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&a2[14], v36, v37, v38);
      KeAbPostRelease((ULONG_PTR)&a2[14]);
      v40 = (unsigned __int64 *)(*(_QWORD *)(v39 + 1720) + 80LL);
      v41 = KeAbPreAcquire((ULONG_PTR)v40, 0LL, 0);
      v42 = v41;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v40, 0LL) )
        ExfAcquirePushLockExclusiveEx(v40, v41, (ULONG_PTR)v40);
      if ( v42 )
        *(_BYTE *)(v42 + 26) |= 1u;
      v43 = KeAbPreAcquire((ULONG_PTR)&a2[14], 0LL, 0);
      v47 = v43;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
        ExfAcquirePushLockExclusiveEx(&a2[14].Count, v43, (ULONG_PTR)&a2[14]);
      if ( v47 )
        *(_BYTE *)(v47 + 26) |= 1u;
      if ( Count[-2].Count )
      {
        v48.Count = Count->Count;
        if ( *(struct _EX_RUNDOWN_REF **)(Count->Count + 8) != Count
          || (v49 = (struct _EX_RUNDOWN_REF **)Count[1].Count, *v49 != Count) )
        {
          __fastfail(3u);
        }
        *v49 = (struct _EX_RUNDOWN_REF *)v48.Count;
        *(_QWORD *)(v48.Count + 8) = v49;
        Count[-2].Count = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v40, v44, v45, v46);
      KeAbPostRelease((ULONG_PTR)v40);
      ExReleaseRundownProtection(Count - 7);
    }
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a2[14], v22, v23, v24);
    KeAbPostRelease((ULONG_PTR)&a2[14]);
    v27 = a2[19].Count;
    if ( v27 )
    {
      v28 = (unsigned __int64 *)(*(_QWORD *)(v27 + 1720) + 56LL);
      v29 = KeAbPreAcquire((ULONG_PTR)v28, 0LL, 0);
      v32 = v29;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v28, 0LL) )
        ExfAcquirePushLockExclusiveEx(v28, v29, (ULONG_PTR)v28);
      if ( v32 )
        *(_BYTE *)(v32 + 26) |= 1u;
      v33 = a2[17].Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v33 + 8) != &a2[17]
        || (v34 = (struct _EX_RUNDOWN_REF **)a2[18].Count, *v34 != &a2[17]) )
      {
        __fastfail(3u);
      }
      *v34 = (struct _EX_RUNDOWN_REF *)v33;
      *(_QWORD *)(v33 + 8) = v34;
      a2[19].Count = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v28, (__int64)v34, v30, v31);
      KeAbPostRelease((ULONG_PTR)v28);
    }
    ExReleaseRundownProtection(a2 + 1);
    ExWaitForRundownProtectionRelease(a2 + 1);
    ExpWnfDeleteStateData(a2);
    ObDereferenceSecurityDescriptor(a2[9].Count, 1u);
    ExFreePoolWithTag(a2, 0x20666E57u);
    return 1LL;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3, v8, v9, v10);
    KeAbPostRelease((ULONG_PTR)v3);
    return 0LL;
  }
}
