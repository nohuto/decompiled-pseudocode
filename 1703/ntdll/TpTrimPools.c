/*
 * XREFs of TpTrimPools @ 0x180070D30
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlSleepConditionVariableSRW @ 0x180071060 (RtlSleepConditionVariableSRW.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwWaitForMultipleObjects @ 0x1800A5E50 (ZwWaitForMultipleObjects.c)
 *     ZwSetInformationWorkerFactory @ 0x1800A8530 (ZwSetInformationWorkerFactory.c)
 */

signed __int64 TpTrimPools()
{
  _UNKNOWN **v0; // r14
  _UNKNOWN **v1; // rbx
  volatile signed __int64 *v2; // rbp
  volatile signed __int64 *v3; // rsi
  char v4; // r13
  int v5; // r8d
  unsigned __int64 v6; // r8
  unsigned __int64 Heap; // r12
  unsigned __int64 v8; // r15
  __int64 v9; // rdi
  _QWORD **v10; // r8
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  unsigned int v16; // r10d
  unsigned __int64 *v17; // rbx
  _QWORD **v19; // rsi
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD **v23; // rsi
  _QWORD *v24; // rdi
  __int64 v25; // rcx
  _QWORD *v26; // rax
  int v27; // [rsp+70h] [rbp+8h] BYREF
  __int64 v28; // [rsp+78h] [rbp+10h] BYREF
  volatile signed __int64 *v29; // [rsp+80h] [rbp+18h]

  v28 = -1000000LL;
  RtlAcquireSRWLockExclusive(&qword_18015C360);
  v0 = (_UNKNOWN **)off_180155650;
  while ( v0 != &off_180155650 )
  {
    v1 = v0 - 48;
    v0 = (_UNKNOWN **)*v0;
    v2 = (volatile signed __int64 *)(v1 + 46);
    RtlAcquireSRWLockShared((volatile signed __int64 *)v1 + 46);
    if ( *((_BYTE *)v1 + 377) )
      goto LABEL_31;
    v3 = (volatile signed __int64 *)(v1 + 9);
    v29 = (volatile signed __int64 *)(v1 + 9);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)v1 + 9);
    v27 = 0;
    v4 = 1;
    if ( (int)ZwSetInformationWorkerFactory(v1[7], 12LL, &v27) >= 0 && v27 )
    {
      v5 = 0;
      for ( *((_DWORD *)v1 + 109) ^= (*((_DWORD *)v1 + 109) ^ (2 * v27)) & 0xFFE;
            ((*((_DWORD *)v1 + 109) >> 11) & 0xFFEu) < (*((_DWORD *)v1 + 109) & 0xFFEu);
            v5 = RtlSleepConditionVariableSRW(v1 + 55, v1 + 9, &v28, 0LL) )
      {
        if ( v5 == 258 )
          break;
      }
      v6 = *((unsigned int *)v1 + 109);
      if ( (v6 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v1 + 109) = v6 & 0xFFFFF001;
        goto LABEL_30;
      }
      Heap = RtlAllocateHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               (dword_18015C000 + 786432) | 8u,
               8 * ((v6 >> 12) & 0x7FF));
      if ( !Heap )
      {
        v19 = (_QWORD **)(v1 + 56);
        while ( 1 )
        {
          v20 = *v19;
          if ( *v19 == v19 )
            break;
          v21 = *v20;
          v22 = (_QWORD *)v20[1];
          if ( *(_QWORD **)(*v20 + 8LL) != v20 || (_QWORD *)*v22 != v20 )
            __fastfail(3u);
          *v22 = v21;
          *(_QWORD *)(v21 + 8) = v22;
          ZwClose(v20[2]);
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, (unsigned __int64)v20);
        }
        *((_DWORD *)v1 + 109) &= 0xFF800001;
LABEL_28:
        v3 = v29;
        goto LABEL_30;
      }
      v8 = RtlAllocateHeap(
             (__int64)NtCurrentPeb()->ProcessHeap,
             (dword_18015C000 + 786432) | 8u,
             8LL * ((*((_DWORD *)v1 + 109) >> 12) & 0x7FF));
      if ( v8 )
      {
        v9 = 0LL;
        v10 = (_QWORD **)(v1 + 56);
        while ( 1 )
        {
          v11 = *v10;
          if ( *v10 == v10 )
            break;
          *(_QWORD *)(Heap + 8 * v9) = v11[2];
          *(_QWORD *)(v8 + 8 * v9) = v11;
          v12 = *v11;
          v13 = (_QWORD *)v11[1];
          if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v13 != v11 )
            __fastfail(3u);
          *v13 = v12;
          v9 = (unsigned int)(v9 + 1);
          *(_QWORD *)(v12 + 8) = v13;
        }
        *((_DWORD *)v1 + 109) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)v1 + 9);
        RtlReleaseSRWLockShared((volatile signed __int64 *)v1 + 46);
        v4 = 0;
        v14 = 0;
        do
        {
          v15 = v14 << 6;
          if ( (unsigned int)v15 >= (unsigned int)v9 )
            break;
          v16 = (int)v15 + 64 <= (unsigned int)v9 ? 64 : v9 & 0x3F;
          if ( (unsigned int)ZwWaitForMultipleObjects(v16, Heap + 8 * v15, 0LL, 0LL, &v28) == 258 )
            break;
          ++v14;
        }
        while ( v14 <= (unsigned int)v9 >> 6 );
        if ( (_DWORD)v9 )
        {
          v17 = (unsigned __int64 *)v8;
          do
          {
            ZwClose(*(unsigned __int64 *)((char *)v17 + Heap - v8));
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, *v17++);
            --v9;
          }
          while ( v9 );
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, v8);
      }
      else
      {
        v23 = (_QWORD **)(v1 + 56);
        while ( 1 )
        {
          v24 = *v23;
          if ( *v23 == v23 )
            break;
          v25 = *v24;
          v26 = (_QWORD *)v24[1];
          if ( *(_QWORD **)(*v24 + 8LL) != v24 || (_QWORD *)*v26 != v24 )
            __fastfail(3u);
          *v26 = v25;
          *(_QWORD *)(v25 + 8) = v26;
          ZwClose(v24[2]);
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, (unsigned __int64)v24);
        }
        *((_DWORD *)v1 + 109) &= 0xFF800001;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015C000 + 786432, Heap);
      if ( v4 )
        goto LABEL_28;
    }
    else
    {
LABEL_30:
      RtlReleaseSRWLockExclusive(v3);
LABEL_31:
      RtlReleaseSRWLockShared(v2);
    }
  }
  return RtlReleaseSRWLockExclusive(&qword_18015C360);
}
