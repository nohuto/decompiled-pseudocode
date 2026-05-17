/*
 * XREFs of TpTrimPools @ 0x180083540
 * Callers:
 *     LdrShutdownThread @ 0x18002E930 (LdrShutdownThread.c)
 * Callees:
 *     RtlSleepConditionVariableSRW @ 0x1800380E0 (RtlSleepConditionVariableSRW.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtWaitForMultipleObjects @ 0x1800A0C10 (NtWaitForMultipleObjects.c)
 *     NtSetInformationWorkerFactory @ 0x1800A3350 (NtSetInformationWorkerFactory.c)
 */

signed __int64 __fastcall TpTrimPools(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _UNKNOWN **v7; // r14
  _UNKNOWN **v8; // rbx
  volatile signed __int64 *v9; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  volatile signed __int64 *v13; // rsi
  char v14; // r13
  int v15; // r8d
  unsigned __int64 v16; // r8
  unsigned __int64 Heap; // r12
  unsigned __int64 v18; // r15
  __int64 v19; // rdi
  _QWORD **v20; // r8
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned int v24; // ebx
  __int64 v25; // rcx
  unsigned int v26; // r10d
  unsigned __int64 *v27; // rbx
  unsigned __int64 *v29; // rsi
  unsigned __int64 v30; // rdi
  __int64 v31; // rcx
  _QWORD *v32; // rax
  unsigned __int64 *v33; // rsi
  unsigned __int64 v34; // rdi
  __int64 v35; // rcx
  _QWORD *v36; // rax
  int v37; // [rsp+70h] [rbp+8h] BYREF
  __int64 v38; // [rsp+78h] [rbp+10h] BYREF
  volatile signed __int64 *v39; // [rsp+80h] [rbp+18h]

  v38 = -1000000LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpListLock, a2, a3, a4);
  v7 = (_UNKNOWN **)TppPoolpList;
  while ( v7 != &TppPoolpList )
  {
    v8 = v7 - 48;
    v7 = (_UNKNOWN **)*v7;
    v9 = (volatile signed __int64 *)(v8 + 46);
    RtlAcquireSRWLockShared((volatile signed __int64 *)v8 + 46, v4, v5, v6);
    if ( *((_BYTE *)v8 + 377) )
      goto LABEL_31;
    v13 = (volatile signed __int64 *)(v8 + 9);
    v39 = (volatile signed __int64 *)(v8 + 9);
    RtlAcquireSRWLockExclusive((unsigned __int64)(v8 + 9), v10, v11, v12);
    v37 = 0;
    v14 = 1;
    if ( (int)NtSetInformationWorkerFactory(v8[7], 12LL, &v37) >= 0 && v37 )
    {
      v15 = 0;
      for ( *((_DWORD *)v8 + 109) ^= (*((_DWORD *)v8 + 109) ^ (2 * v37)) & 0xFFE;
            ((*((_DWORD *)v8 + 109) >> 11) & 0xFFEu) < (*((_DWORD *)v8 + 109) & 0xFFEu);
            v15 = RtlSleepConditionVariableSRW((signed __int64 *)v8 + 55, (__int64)(v8 + 9), (__int64)&v38, 0) )
      {
        if ( v15 == 258 )
          break;
      }
      v16 = *((unsigned int *)v8 + 109);
      if ( (v16 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v8 + 109) = v16 & 0xFFFFF001;
        goto LABEL_30;
      }
      Heap = RtlAllocateHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               (TppHeapTag + 786432) | 8u,
               8 * ((v16 >> 12) & 0x7FF));
      if ( !Heap )
      {
        v29 = (unsigned __int64 *)(v8 + 56);
        while ( 1 )
        {
          v30 = *v29;
          if ( (unsigned __int64 *)*v29 == v29 )
            break;
          v31 = *(_QWORD *)v30;
          if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 || (v32 = *(_QWORD **)(v30 + 8), *v32 != v30) )
            __fastfail(3u);
          *v32 = v31;
          *(_QWORD *)(v31 + 8) = v32;
          NtClose(*(HANDLE *)(v30 + 16));
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v30);
        }
        *((_DWORD *)v8 + 109) &= 0xFF800001;
LABEL_28:
        v13 = v39;
        goto LABEL_30;
      }
      v18 = RtlAllocateHeap(
              (__int64)NtCurrentPeb()->ProcessHeap,
              (TppHeapTag + 786432) | 8u,
              8LL * ((*((_DWORD *)v8 + 109) >> 12) & 0x7FF));
      if ( v18 )
      {
        v19 = 0LL;
        v20 = (_QWORD **)(v8 + 56);
        while ( 1 )
        {
          v21 = *v20;
          if ( *v20 == v20 )
            break;
          *(_QWORD *)(Heap + 8 * v19) = v21[2];
          *(_QWORD *)(v18 + 8 * v19) = v21;
          v22 = *v21;
          if ( *(_QWORD **)(*v21 + 8LL) != v21 || (v23 = (_QWORD *)v21[1], (_QWORD *)*v23 != v21) )
            __fastfail(3u);
          *v23 = v22;
          v19 = (unsigned int)(v19 + 1);
          *(_QWORD *)(v22 + 8) = v23;
        }
        *((_DWORD *)v8 + 109) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)v8 + 9);
        RtlReleaseSRWLockShared((volatile signed __int64 *)v8 + 46);
        v14 = 0;
        v24 = 0;
        do
        {
          v25 = v24 << 6;
          if ( (unsigned int)v25 >= (unsigned int)v19 )
            break;
          v26 = (int)v25 + 64 <= (unsigned int)v19 ? 64 : v19 & 0x3F;
          if ( (unsigned int)NtWaitForMultipleObjects(v26, Heap + 8 * v25, 0LL, 0LL, &v38) == 258 )
            break;
          ++v24;
        }
        while ( v24 <= (unsigned int)v19 >> 6 );
        if ( (_DWORD)v19 )
        {
          v27 = (unsigned __int64 *)v18;
          do
          {
            NtClose(*(HANDLE *)((char *)v27 + Heap - v18));
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *v27++);
            --v19;
          }
          while ( v19 );
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v18);
      }
      else
      {
        v33 = (unsigned __int64 *)(v8 + 56);
        while ( 1 )
        {
          v34 = *v33;
          if ( (unsigned __int64 *)*v33 == v33 )
            break;
          v35 = *(_QWORD *)v34;
          if ( *(_QWORD *)(*(_QWORD *)v34 + 8LL) != v34 || (v36 = *(_QWORD **)(v34 + 8), *v36 != v34) )
            __fastfail(3u);
          *v36 = v35;
          *(_QWORD *)(v35 + 8) = v36;
          NtClose(*(HANDLE *)(v34 + 16));
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, v34);
        }
        *((_DWORD *)v8 + 109) &= 0xFF800001;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
      if ( v14 )
        goto LABEL_28;
    }
    else
    {
LABEL_30:
      RtlReleaseSRWLockExclusive(v13);
LABEL_31:
      RtlReleaseSRWLockShared(v9);
    }
  }
  return RtlReleaseSRWLockExclusive(&TppPoolpListLock);
}
