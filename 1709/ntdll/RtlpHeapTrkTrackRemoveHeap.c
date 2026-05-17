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

_QWORD *__fastcall RtlpHeapTrkTrackRemoveHeap(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // r9
  bool v9; // zf
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // r8
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  _QWORD *result; // rax
  __int64 v16; // rax
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-18h] BYREF

  v19[1] = v19;
  v5 = 0;
  v19[0] = v19;
  do
  {
    v6 = v5 & 0xF;
    RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_180160870 + 8 * v6), a2, a3, a4);
    v7 = *(_QWORD **)(qword_1801607C8 + 16LL * v5);
    v8 = qword_1801607C8 + 16LL * v5;
    while ( v7 != (_QWORD *)v8 )
    {
      v9 = v7[2] == a1;
      v10 = v7;
      v7 = (_QWORD *)*v7;
      if ( v9 )
      {
        v11 = *v10;
        if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v12 = (_QWORD *)v10[1], (_QWORD *)*v12 != v10) )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        v13 = v19[0];
        if ( *(_QWORD **)(v19[0] + 8LL) != v19 )
          __fastfail(3u);
        *v10 = v19[0];
        v10[1] = v19;
        *(_QWORD *)(v13 + 8) = v10;
        v19[0] = v10;
      }
    }
    RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180160870 + 8 * v6));
    ++v5;
  }
  while ( v5 < 0x1EEF );
  while ( 1 )
  {
    v14 = v19[0];
    result = v19;
    if ( (_QWORD *)v19[0] == v19 )
      break;
    v16 = *(_QWORD *)v19[0];
    if ( *(_QWORD *)(*(_QWORD *)v19[0] + 8LL) != v19[0] || (v17 = *(_QWORD **)(v19[0] + 8LL), *v17 != v19[0]) )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    v18 = *(_QWORD *)(v14 + 32);
    if ( v18 )
    {
      RtlpHeapTrkDereferenceStack(v18, a2, a3, a4);
      *(_QWORD *)(v14 + 32) = 0LL;
    }
    RtlFreeHeap(qword_180160890, 0, v14);
  }
  return result;
}
