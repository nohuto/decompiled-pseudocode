/*
 * XREFs of ExpWnfDeleteNameInstance @ 0x1404FEC5C
 * Callers:
 *     NtDeleteWnfStateName @ 0x1404FDBB8 (NtDeleteWnfStateName.c)
 *     ExpWnfDeleteProcessContext @ 0x1404FEA5C (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteNameInstanceCallback @ 0x14059AB9C (ExpWnfDeleteNameInstanceCallback.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x140484DE0 (ObDereferenceSecurityDescriptor.c)
 *     ExpWnfDeleteStateData @ 0x1404FDB28 (ExpWnfDeleteStateData.c)
 */

__int64 __fastcall ExpWnfDeleteNameInstance(__int64 a1, struct _EX_RUNDOWN_REF *a2, char a3)
{
  unsigned __int64 *v3; // rsi
  PRTL_BALANCED_NODE v7; // rax
  PRTL_BALANCED_NODE v8; // rbx
  volatile signed __int64 *v9; // rdi
  PRTL_BALANCED_NODE v10; // rax
  PRTL_BALANCED_NODE v11; // rbx
  PRTL_BALANCED_NODE v12; // rax
  PRTL_BALANCED_NODE v13; // rsi
  struct _EX_RUNDOWN_REF *Count; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 *v16; // rdi
  PRTL_BALANCED_NODE v17; // rax
  PRTL_BALANCED_NODE v18; // rsi
  unsigned __int64 v19; // rcx
  struct _EX_RUNDOWN_REF **v20; // rdx
  unsigned __int64 v22; // rsi
  unsigned __int64 *v23; // rsi
  PRTL_BALANCED_NODE v24; // rax
  PRTL_BALANCED_NODE v25; // r13
  PRTL_BALANCED_NODE v26; // rax
  PRTL_BALANCED_NODE v27; // r13
  struct _EX_RUNDOWN_REF v28; // rdx
  struct _EX_RUNDOWN_REF **v29; // rcx

  v3 = (unsigned __int64 *)(a1 + 48);
  v7 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, (__int64)v7, (__int16 *)v3);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  if ( a2[6].Count )
  {
    v9 = (volatile signed __int64 *)&a2[14];
    v10 = KeAbPreAcquire((ULONG_PTR)&a2[14], 0LL, 0);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&a2[14], 0LL) )
      ExfAcquirePushLockExclusiveEx(&a2[14].Count, (__int64)v10, (__int16 *)&a2[14]);
    if ( v11 )
      BYTE2(v11[1].Left) |= 1u;
    if ( a3 )
      RtlAvlRemoveNode((unsigned __int64 *)(a1 + 56), (__int64)&a2[2]);
    a2[6].Count = 0LL;
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
    KeAbPostRelease((ULONG_PTR)&a2[14]);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    v12 = KeAbPreAcquire((ULONG_PTR)&a2[14], 0LL, 0);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(&a2[14].Count, (__int64)v12, (__int16 *)&a2[14]);
    if ( v13 )
      BYTE2(v13[1].Left) |= 1u;
    while ( 1 )
    {
      Count = (struct _EX_RUNDOWN_REF *)a2[15].Count;
      if ( Count == &a2[15] )
        break;
      ExAcquireRundownProtection_0(Count - 7);
      v22 = Count[-3].Count;
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
      KeAbPostRelease((ULONG_PTR)&a2[14]);
      v23 = (unsigned __int64 *)(*(_QWORD *)(v22 + 1720) + 80LL);
      v24 = KeAbPreAcquire((ULONG_PTR)v23, 0LL, 0);
      v25 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
        ExfAcquirePushLockExclusiveEx(v23, (__int64)v24, (__int16 *)v23);
      if ( v25 )
        BYTE2(v25[1].Left) |= 1u;
      v26 = KeAbPreAcquire((ULONG_PTR)&a2[14], 0LL, 0);
      v27 = v26;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
        ExfAcquirePushLockExclusiveEx(&a2[14].Count, (__int64)v26, (__int16 *)&a2[14]);
      if ( v27 )
        BYTE2(v27[1].Left) |= 1u;
      if ( Count[-2].Count )
      {
        v28.Count = Count->Count;
        if ( *(struct _EX_RUNDOWN_REF **)(Count->Count + 8) != Count
          || (v29 = (struct _EX_RUNDOWN_REF **)Count[1].Count, *v29 != Count) )
        {
          __fastfail(3u);
        }
        *v29 = (struct _EX_RUNDOWN_REF *)v28.Count;
        *(_QWORD *)(v28.Count + 8) = v29;
        Count[-2].Count = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v23);
      KeAbPostRelease((ULONG_PTR)v23);
      ExReleaseRundownProtection_0(Count - 7);
    }
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
    KeAbPostRelease((ULONG_PTR)&a2[14]);
    v15 = a2[19].Count;
    if ( v15 )
    {
      v16 = (unsigned __int64 *)(*(_QWORD *)(v15 + 1720) + 56LL);
      v17 = KeAbPreAcquire((ULONG_PTR)v16, 0LL, 0);
      v18 = v17;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
        ExfAcquirePushLockExclusiveEx(v16, (__int64)v17, (__int16 *)v16);
      if ( v18 )
        BYTE2(v18[1].Left) |= 1u;
      v19 = a2[17].Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v19 + 8) != &a2[17]
        || (v20 = (struct _EX_RUNDOWN_REF **)a2[18].Count, *v20 != &a2[17]) )
      {
        __fastfail(3u);
      }
      *v20 = (struct _EX_RUNDOWN_REF *)v19;
      *(_QWORD *)(v19 + 8) = v20;
      a2[19].Count = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v16);
      KeAbPostRelease((ULONG_PTR)v16);
    }
    ExReleaseRundownProtection_0(a2 + 1);
    ExWaitForRundownProtectionRelease(a2 + 1);
    ExpWnfDeleteStateData((__int64)a2);
    ObDereferenceSecurityDescriptor(a2[9].Count, 1u);
    ExFreePoolWithTag(a2, 0x20666E57u);
    return 1LL;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    return 0LL;
  }
}
