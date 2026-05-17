/*
 * XREFs of RtlpWnfProcessCurrentDescriptor @ 0x18000BEA4
 * Callers:
 *     RtlpWnfNotificationThread @ 0x18000B950 (RtlpWnfNotificationThread.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800DE060 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     RtlpDecRefWnfNameSubscription @ 0x18000B87C (RtlpDecRefWnfNameSubscription.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000C060 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A1DD0 (NtGetCompleteWnfStateSubscription.c)
 */

__int64 __fastcall RtlpWnfProcessCurrentDescriptor(__int64 a1, int a2)
{
  unsigned int v4; // esi
  int v5; // r15d
  unsigned __int64 v6; // rdx
  _QWORD *v7; // r8
  unsigned __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 *v14; // r14
  __int64 *v15; // rax
  __int64 v17; // rcx
  __int64 *v18; // rdx
  int v19; // ecx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+38h] [rbp-40h]

  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockShared(qword_1801600A8 + 8);
  v7 = *(_QWORD **)(qword_1801600A8 + 16);
  if ( v7 == (_QWORD *)(qword_1801600A8 + 16) )
    goto LABEL_5;
  v8 = *(_QWORD *)(a1 + 8);
  v21 = v8;
  while ( 1 )
  {
    v9 = (__int64)(v7 - 4);
    v10 = *(v7 - 2);
    v22 = v10;
    if ( (_DWORD)v10 == (_DWORD)v8 )
    {
      v6 = HIDWORD(v8);
      if ( HIDWORD(v10) == HIDWORD(v8) && *(_QWORD *)(v9 + 8) == *(_QWORD *)a1 )
        break;
    }
    v7 = (_QWORD *)*v7;
    if ( v7 == (_QWORD *)(qword_1801600A8 + 16) )
      goto LABEL_5;
  }
  RtlAcquireSRWLockExclusive(v9 + 56);
  v11 = *(_DWORD *)(v9 + 128);
  if ( v11 != 2 )
  {
    if ( v11 != 1 )
      goto LABEL_10;
    v17 = v9 + 56;
    if ( !a2 )
    {
      *(_QWORD *)(v9 + 120) = a1;
      RtlReleaseSRWLockExclusive(v17);
      v4 = 259;
      goto LABEL_5;
    }
LABEL_28:
    RtlReleaseSRWLockExclusive(v17);
    v4 = 128;
LABEL_5:
    RtlReleaseSRWLockShared(qword_1801600A8 + 8, v6, v7);
    goto LABEL_24;
  }
  if ( a2 )
  {
    v17 = v9 + 56;
    goto LABEL_28;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *(_QWORD *)(v9 + 120));
  *(_QWORD *)(v9 + 120) = 0LL;
  *(_DWORD *)(v9 + 128) = 0;
LABEL_10:
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 108));
  *(_DWORD *)(v9 + 128) = 1;
  RtlReleaseSRWLockExclusive(v9 + 56);
  RtlReleaseSRWLockShared(qword_1801600A8 + 8, v12, v13);
  v14 = (__int64 *)(v9 + 64);
  while ( 1 )
  {
    v4 = 0;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v9, 0LL) == -1073741267 )
      v4 = -1073741267;
    if ( (unsigned int)RtlpWnfWalkUserSubscriptionList(a1, v9, 1LL) == -1073741267 )
      v4 = -1073741267;
    RtlAcquireSRWLockExclusive(v9 + 56);
    v15 = (__int64 *)*v14;
    ++v5;
    while ( v15 != v14 )
    {
      *((_DWORD *)v15 + 38) = 0;
      v15 = (__int64 *)*v15;
    }
    if ( !*(_QWORD *)(v9 + 120) )
      break;
    a1 = *(_QWORD *)(v9 + 120);
    *(_QWORD *)(v9 + 120) = 0LL;
    RtlReleaseSRWLockExclusive(v9 + 56);
  }
  if ( v4 )
  {
    v18 = (__int64 *)*v14;
    v19 = 1;
    *(_QWORD *)(v9 + 120) = a1;
    v20 = 0LL;
    for ( *(_DWORD *)(v9 + 128) = 2; v18 != v14; v18 = (__int64 *)*v18 )
    {
      if ( (*((_BYTE *)v18 + 52) & 4) != 0 && *((_DWORD *)v18 + 28) )
      {
        if ( !v20 || v20 > v18[15] )
          v20 = v18[15];
        if ( *((_DWORD *)v18 + 32) < *(_DWORD *)(qword_1801600A8 + 72) )
          v19 = 0;
      }
    }
    *(_QWORD *)(v9 + 136) = v20;
    *(_DWORD *)(v9 + 144) = v19;
  }
  else
  {
    *(_DWORD *)(v9 + 128) = 0;
    if ( !*(_DWORD *)(v9 + 24) || *(_DWORD *)(a1 + 16) - *(_DWORD *)(v9 + 24) > 0 )
      *(_DWORD *)(v9 + 24) = *(_DWORD *)(a1 + 16);
  }
  RtlReleaseSRWLockExclusive(v9 + 56);
  RtlpDecRefWnfNameSubscription(v9);
LABEL_24:
  if ( v5 > 1 )
  {
    NtGetCompleteWnfStateSubscription(a1 + 8, a1, *(unsigned int *)(a1 + 24), v4, 0LL, 0, v21, v22);
    if ( !v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
    return 128;
  }
  return v4;
}
