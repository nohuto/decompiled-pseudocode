/*
 * XREFs of sub_18004A0A0 @ 0x18004A0A0
 * Callers:
 *     sub_180049F90 @ 0x180049F90 (sub_180049F90.c)
 *     sub_1800D8F60 @ 0x1800D8F60 (sub_1800D8F60.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18004A230 @ 0x18004A230 (sub_18004A230.c)
 *     sub_18004A750 @ 0x18004A750 (sub_18004A750.c)
 *     ZwGetCompleteWnfStateSubscription @ 0x18009C7F0 (ZwGetCompleteWnfStateSubscription.c)
 */

__int64 __fastcall sub_18004A0A0(unsigned __int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v5; // r14d
  unsigned int v6; // esi
  int v7; // r15d
  __int64 v8; // r9
  unsigned __int64 *v9; // r8
  unsigned __int64 *i; // rcx
  unsigned __int64 *v11; // rbx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  int v14; // eax
  __int64 *v15; // r14
  unsigned __int64 v16; // rdx
  unsigned __int64 *v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rax
  volatile signed __int64 *v21; // rcx
  __int64 *v22; // rdx
  int v23; // ecx
  unsigned __int64 v24; // r8

  v5 = (int)a2;
  v6 = 0;
  v7 = 0;
  RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_18015D058 + 8), a2, a3, a4);
  v9 = (unsigned __int64 *)(qword_18015D058 + 16);
  for ( i = *(unsigned __int64 **)(qword_18015D058 + 16); ; i = (unsigned __int64 *)*i )
  {
    if ( i == v9 )
      goto LABEL_25;
    v11 = i - 4;
    v12 = *(i - 2);
    if ( (_DWORD)v12 == *(_DWORD *)(a1 + 8) )
    {
      v13 = HIDWORD(v12);
      if ( (_DWORD)v13 == HIDWORD(*(_QWORD *)(a1 + 8)) && v11[1] == *(_QWORD *)a1 )
        break;
    }
  }
  RtlAcquireSRWLockExclusive((unsigned __int64)(v11 + 7), v13, v9, v8);
  v14 = *((_DWORD *)v11 + 32);
  if ( v14 != 2 )
  {
    if ( v14 != 1 )
      goto LABEL_9;
    v21 = (volatile signed __int64 *)(v11 + 7);
    if ( !v5 )
    {
      v11[15] = a1;
      RtlReleaseSRWLockExclusive(v21);
      v6 = 259;
      goto LABEL_25;
    }
LABEL_28:
    RtlReleaseSRWLockExclusive(v21);
    v6 = 128;
LABEL_25:
    RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_18015D058 + 8));
    goto LABEL_23;
  }
  if ( v5 )
  {
    v21 = (volatile signed __int64 *)(v11 + 7);
    goto LABEL_28;
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11[15]);
  v11[15] = 0LL;
  *((_DWORD *)v11 + 32) = 0;
LABEL_9:
  _InterlockedIncrement((volatile signed __int32 *)v11 + 27);
  *((_DWORD *)v11 + 32) = 1;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)v11 + 7);
  RtlReleaseSRWLockShared((volatile signed __int64 *)(qword_18015D058 + 8));
  v15 = (__int64 *)(v11 + 8);
  while ( 1 )
  {
    v6 = 0;
    if ( (unsigned int)sub_18004A230(a1, v11, 0LL) == -1073741267 )
      v6 = -1073741267;
    if ( (unsigned int)sub_18004A230(a1, v11, 1LL) == -1073741267 )
      v6 = -1073741267;
    RtlAcquireSRWLockExclusive((unsigned __int64)(v11 + 7), v16, v17, v18);
    v19 = (__int64 *)*v15;
    ++v7;
    while ( v19 != v15 )
    {
      *((_DWORD *)v19 + 38) = 0;
      v19 = (__int64 *)*v19;
    }
    if ( !v11[15] )
      break;
    a1 = v11[15];
    v11[15] = 0LL;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)v11 + 7);
  }
  if ( v6 )
  {
    v22 = (__int64 *)*v15;
    v23 = 1;
    v11[15] = a1;
    v24 = 0LL;
    for ( *((_DWORD *)v11 + 32) = 2; v22 != v15; v22 = (__int64 *)*v22 )
    {
      if ( (*((_BYTE *)v22 + 52) & 4) != 0 && *((_DWORD *)v22 + 28) )
      {
        if ( !v24 || v24 > v22[15] )
          v24 = v22[15];
        if ( *((_DWORD *)v22 + 32) < *(_DWORD *)(qword_18015D058 + 72) )
          v23 = 0;
      }
    }
    v11[17] = v24;
    *((_DWORD *)v11 + 36) = v23;
  }
  else
  {
    *((_DWORD *)v11 + 32) = 0;
    if ( !*((_DWORD *)v11 + 6) || *(_DWORD *)(a1 + 16) - *((_DWORD *)v11 + 6) > 0 )
      *((_DWORD *)v11 + 6) = *(_DWORD *)(a1 + 16);
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)v11 + 7);
  sub_18004A750(v11);
LABEL_23:
  if ( v7 > 1 )
  {
    ZwGetCompleteWnfStateSubscription(a1 + 8, a1, *(unsigned int *)(a1 + 24), v6, 0LL, 0);
    if ( !v6 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
    return 128;
  }
  return v6;
}
