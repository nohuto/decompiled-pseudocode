/*
 * XREFs of RtlpHeapTrkTrackRemoveHeap @ 0x1800F7C24
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x1800F7530 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800F7058 (RtlpHeapTrkDereferenceStack.c)
 */

PVOID *__fastcall RtlpHeapTrkTrackRemoveHeap(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  _QWORD *v4; // rcx
  __int64 v5; // r9
  bool v6; // zf
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // rbx
  PVOID *result; // rax
  _QWORD *v13; // rax
  PVOID *v14; // rcx
  PVOID **v15; // rcx
  PVOID BaseAddress[3]; // [rsp+20h] [rbp-18h] BYREF

  BaseAddress[1] = BaseAddress;
  v2 = 0;
  BaseAddress[0] = BaseAddress;
  do
  {
    v3 = v2 & 0xF;
    RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180160870 + 8 * v3));
    v4 = *(_QWORD **)(qword_1801607C8 + 16LL * v2);
    v5 = qword_1801607C8 + 16LL * v2;
    while ( v4 != (_QWORD *)v5 )
    {
      v6 = v4[2] == a1;
      v7 = v4;
      v4 = (_QWORD *)*v4;
      if ( v6 )
      {
        v8 = *v7;
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        v10 = BaseAddress[0];
        if ( *((PVOID **)BaseAddress[0] + 1) != BaseAddress )
          __fastfail(3u);
        *v7 = BaseAddress[0];
        v7[1] = BaseAddress;
        v10[1] = v7;
        BaseAddress[0] = v7;
      }
    }
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180160870 + 8 * v3));
    ++v2;
  }
  while ( v2 < 0x1EEF );
  while ( 1 )
  {
    v11 = BaseAddress[0];
    result = BaseAddress;
    if ( BaseAddress[0] == BaseAddress )
      break;
    v13 = *(_QWORD **)BaseAddress[0];
    if ( *(PVOID *)(*(_QWORD *)BaseAddress[0] + 8LL) != BaseAddress[0]
      || (v14 = (PVOID *)*((_QWORD *)BaseAddress[0] + 1), *v14 != BaseAddress[0]) )
    {
      __fastfail(3u);
    }
    *v14 = v13;
    v13[1] = v14;
    v15 = (PVOID **)v11[4];
    if ( v15 )
    {
      RtlpHeapTrkDereferenceStack(v15);
      v11[4] = 0LL;
    }
    RtlFreeHeap(HeapHandle, 0, v11);
  }
  return result;
}
