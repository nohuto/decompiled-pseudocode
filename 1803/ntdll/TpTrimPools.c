/*
 * XREFs of TpTrimPools @ 0x18007F020
 * Callers:
 *     LdrShutdownThread @ 0x180038A30 (LdrShutdownThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlSleepConditionVariableSRW @ 0x180025E20 (RtlSleepConditionVariableSRW.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwWaitForMultipleObjects @ 0x18009B610 (ZwWaitForMultipleObjects.c)
 *     ZwSetInformationWorkerFactory @ 0x18009DD90 (ZwSetInformationWorkerFactory.c)
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
  volatile signed __int64 *v13; // r15
  char v14; // r13
  int v15; // r9d
  unsigned __int64 v16; // r8
  int v17; // eax
  _QWORD **v18; // rsi
  unsigned __int64 Heap; // r12
  unsigned __int64 v20; // r15
  __int64 v21; // rdi
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rcx
  unsigned int v27; // r10d
  unsigned __int64 *v28; // rbx
  _QWORD *v30; // rdi
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rdi
  __int64 v34; // rcx
  _QWORD *v35; // rax
  int v36; // [rsp+70h] [rbp+8h] BYREF
  __int64 v37; // [rsp+78h] [rbp+10h] BYREF
  volatile signed __int64 *v38; // [rsp+80h] [rbp+18h]

  v37 = -1000000LL;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D398, a2, a3, a4);
  v7 = (_UNKNOWN **)off_1801566A0;
  while ( v7 != &off_1801566A0 )
  {
    v8 = v7 - 48;
    v7 = (_UNKNOWN **)*v7;
    v9 = (volatile signed __int64 *)(v8 + 46);
    RtlAcquireSRWLockShared((volatile signed __int64 *)v8 + 46, v4, v5, v6);
    if ( *((_BYTE *)v8 + 377) )
      goto LABEL_31;
    v13 = (volatile signed __int64 *)(v8 + 9);
    v38 = (volatile signed __int64 *)(v8 + 9);
    RtlAcquireSRWLockExclusive((unsigned __int64)(v8 + 9), v10, v11, v12);
    v36 = 0;
    v14 = 1;
    if ( (int)ZwSetInformationWorkerFactory(v8[7], 12LL, &v36) >= 0 && v36 )
    {
      v15 = 0;
      v16 = *((_DWORD *)v8 + 109) ^ (*((_DWORD *)v8 + 109) ^ (2 * v36)) & 0xFFEu;
      *((_DWORD *)v8 + 109) = v16;
      if ( (((unsigned int)v16 >> 11) & 0xFFE) < (v16 & 0xFFE) )
      {
        do
        {
          if ( v15 == 258 )
            break;
          v17 = RtlSleepConditionVariableSRW(
                  (signed __int64 *)v8 + 55,
                  (volatile signed __int64 *)v8 + 9,
                  (__int64)&v37,
                  0);
          v16 = *((unsigned int *)v8 + 109);
          v15 = v17;
        }
        while ( (((unsigned int)v16 >> 11) & 0xFFE) < (*((_DWORD *)v8 + 109) & 0xFFEu) );
      }
      if ( (v16 & 0x7FF000) == 0 )
      {
        *((_DWORD *)v8 + 109) = v16 & 0xFFFFF001;
        goto LABEL_30;
      }
      v18 = (_QWORD **)(v8 + 56);
      Heap = RtlAllocateHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               (dword_18015D050 + 786432) | 8u,
               8 * ((v16 >> 12) & 0x7FF));
      if ( !Heap )
      {
        while ( 1 )
        {
          v30 = *v18;
          if ( *v18 == v18 )
            break;
          v31 = *v30;
          if ( *(_QWORD **)(*v30 + 8LL) != v30 || (v32 = (_QWORD *)v30[1], (_QWORD *)*v32 != v30) )
            __fastfail(3u);
          *v32 = v31;
          *(_QWORD *)(v31 + 8) = v32;
          ZwClose(v30[2]);
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, (unsigned __int64)v30);
        }
        *((_DWORD *)v8 + 109) &= 0xFF800001;
        goto LABEL_30;
      }
      v20 = RtlAllocateHeap(
              (__int64)NtCurrentPeb()->ProcessHeap,
              (dword_18015D050 + 786432) | 8u,
              8LL * ((*((_DWORD *)v8 + 109) >> 12) & 0x7FF));
      if ( v20 )
      {
        v21 = 0LL;
        while ( 1 )
        {
          v22 = *v18;
          if ( *v18 == v18 )
            break;
          *(_QWORD *)(Heap + 8 * v21) = v22[2];
          *(_QWORD *)(v20 + 8 * v21) = v22;
          v23 = *v22;
          if ( *(_QWORD **)(*v22 + 8LL) != v22 || (v24 = (_QWORD *)v22[1], (_QWORD *)*v24 != v22) )
            __fastfail(3u);
          *v24 = v23;
          v21 = (unsigned int)(v21 + 1);
          *(_QWORD *)(v23 + 8) = v24;
        }
        *((_DWORD *)v8 + 109) &= 0xFF800001;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)v8 + 9);
        RtlReleaseSRWLockShared((volatile signed __int64 *)v8 + 46);
        v14 = 0;
        v25 = 0;
        do
        {
          v26 = v25 << 6;
          if ( (unsigned int)v26 >= (unsigned int)v21 )
            break;
          v27 = (int)v26 + 64 <= (unsigned int)v21 ? 64 : v21 & 0x3F;
          if ( (unsigned int)ZwWaitForMultipleObjects(v27, Heap + 8 * v26, 0LL, 0LL, &v37) == 258 )
            break;
          ++v25;
        }
        while ( v25 <= (unsigned int)v21 >> 6 );
        if ( (_DWORD)v21 )
        {
          v28 = (unsigned __int64 *)v20;
          do
          {
            ZwClose(*(unsigned __int64 *)((char *)v28 + Heap - v20));
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, *v28++);
            --v21;
          }
          while ( v21 );
        }
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, v20);
      }
      else
      {
        while ( 1 )
        {
          v33 = *v18;
          if ( *v18 == v18 )
            break;
          v34 = *v33;
          if ( *(_QWORD **)(*v33 + 8LL) != v33 || (v35 = (_QWORD *)v33[1], (_QWORD *)*v35 != v33) )
            __fastfail(3u);
          *v35 = v34;
          *(_QWORD *)(v34 + 8) = v35;
          ZwClose(v33[2]);
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, (unsigned __int64)v33);
        }
        *((_DWORD *)v8 + 109) &= 0xFF800001;
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 786432, Heap);
      if ( v14 )
      {
        v13 = v38;
        goto LABEL_30;
      }
    }
    else
    {
LABEL_30:
      RtlReleaseSRWLockExclusive(v13);
LABEL_31:
      RtlReleaseSRWLockShared(v9);
    }
  }
  return RtlReleaseSRWLockExclusive(&qword_18015D398);
}
