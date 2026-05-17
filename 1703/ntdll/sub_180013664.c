/*
 * XREFs of sub_180013664 @ 0x180013664
 * Callers:
 *     sub_180012AB0 @ 0x180012AB0 (sub_180012AB0.c)
 *     sub_1800DF6E0 @ 0x1800DF6E0 (sub_1800DF6E0.c)
 * Callees:
 *     sub_1800129DC @ 0x1800129DC (sub_1800129DC.c)
 *     sub_180013820 @ 0x180013820 (sub_180013820.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwGetCompleteWnfStateSubscription @ 0x1800A6FF0 (ZwGetCompleteWnfStateSubscription.c)
 */

__int64 __fastcall sub_180013664(__int64 a1, int a2)
{
  unsigned int v4; // esi
  int v5; // r15d
  _QWORD *v6; // r8
  __int64 v7; // rbx
  int v8; // eax
  __int64 *v9; // r14
  __int64 *v10; // rax
  __int64 v12; // rcx
  __int64 *v13; // rdx
  int v14; // ecx
  unsigned __int64 v15; // r8
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+38h] [rbp-40h]

  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockShared(qword_18015C008 + 8);
  v6 = *(_QWORD **)(qword_18015C008 + 16);
  if ( v6 == (_QWORD *)(qword_18015C008 + 16) )
    goto LABEL_5;
  v16 = *(_QWORD *)(a1 + 8);
  while ( 1 )
  {
    v7 = (__int64)(v6 - 4);
    v17 = *(v6 - 2);
    if ( v17 == *(_QWORD *)(a1 + 8) && *(_QWORD *)(v7 + 8) == *(_QWORD *)a1 )
      break;
    v6 = (_QWORD *)*v6;
    if ( v6 == (_QWORD *)(qword_18015C008 + 16) )
      goto LABEL_5;
  }
  RtlAcquireSRWLockExclusive(v7 + 56);
  v8 = *(_DWORD *)(v7 + 128);
  if ( v8 != 2 )
  {
    if ( v8 != 1 )
      goto LABEL_9;
    v12 = v7 + 56;
    if ( !a2 )
    {
      *(_QWORD *)(v7 + 120) = a1;
      RtlReleaseSRWLockExclusive(v12);
      v4 = 259;
      goto LABEL_5;
    }
LABEL_27:
    RtlReleaseSRWLockExclusive(v12);
    v4 = 128;
LABEL_5:
    RtlReleaseSRWLockShared(qword_18015C008 + 8);
    goto LABEL_23;
  }
  if ( a2 )
  {
    v12 = v7 + 56;
    goto LABEL_27;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
  *(_QWORD *)(v7 + 120) = 0LL;
  *(_DWORD *)(v7 + 128) = 0;
LABEL_9:
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 108));
  *(_DWORD *)(v7 + 128) = 1;
  RtlReleaseSRWLockExclusive(v7 + 56);
  RtlReleaseSRWLockShared(qword_18015C008 + 8);
  v9 = (__int64 *)(v7 + 64);
  while ( 1 )
  {
    v4 = 0;
    if ( (unsigned int)sub_180013820(a1, v7, 0LL) == -1073741267 )
      v4 = -1073741267;
    if ( (unsigned int)sub_180013820(a1, v7, 1LL) == -1073741267 )
      v4 = -1073741267;
    RtlAcquireSRWLockExclusive(v7 + 56);
    v10 = (__int64 *)*v9;
    ++v5;
    while ( v10 != v9 )
    {
      *((_DWORD *)v10 + 38) = 0;
      v10 = (__int64 *)*v10;
    }
    if ( !*(_QWORD *)(v7 + 120) )
      break;
    a1 = *(_QWORD *)(v7 + 120);
    *(_QWORD *)(v7 + 120) = 0LL;
    RtlReleaseSRWLockExclusive(v7 + 56);
  }
  if ( v4 )
  {
    v13 = (__int64 *)*v9;
    v14 = 1;
    *(_QWORD *)(v7 + 120) = a1;
    v15 = 0LL;
    for ( *(_DWORD *)(v7 + 128) = 2; v13 != v9; v13 = (__int64 *)*v13 )
    {
      if ( (*((_BYTE *)v13 + 52) & 4) != 0 && *((_DWORD *)v13 + 28) )
      {
        if ( !v15 || v15 > v13[15] )
          v15 = v13[15];
        if ( *((_DWORD *)v13 + 32) < *(_DWORD *)(qword_18015C008 + 72) )
          v14 = 0;
      }
    }
    *(_QWORD *)(v7 + 136) = v15;
    *(_DWORD *)(v7 + 144) = v14;
  }
  else
  {
    *(_DWORD *)(v7 + 128) = 0;
    if ( !*(_DWORD *)(v7 + 24) || *(_DWORD *)(a1 + 16) - *(_DWORD *)(v7 + 24) > 0 )
      *(_DWORD *)(v7 + 24) = *(_DWORD *)(a1 + 16);
  }
  RtlReleaseSRWLockExclusive(v7 + 56);
  sub_1800129DC(v7);
LABEL_23:
  if ( v5 > 1 )
  {
    ZwGetCompleteWnfStateSubscription(a1 + 8, a1, *(unsigned int *)(a1 + 24), v4, 0LL, 0, v16, v17);
    if ( !v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
    return 128;
  }
  return v4;
}
