/*
 * XREFs of CcForEachPartition @ 0x14011BF90
 * Callers:
 *     CcGetDirtyPages @ 0x14011BF50 (CcGetDirtyPages.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x14015D140 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcCoalescingCallBack @ 0x1401E0180 (CcCoalescingCallBack.c)
 *     CcNotifyWriteBehind @ 0x1401E051C (CcNotifyWriteBehind.c)
 *     CcIsThereDirtyData @ 0x1401E1000 (CcIsThereDirtyData.c)
 *     MiFlushAllFilesystemPages @ 0x140218D3C (MiFlushAllFilesystemPages.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     CcDereferencePartition @ 0x1400670D4 (CcDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsGetNextPartitionUnsafe @ 0x14011C07C (PsGetNextPartitionUnsafe.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

LONG_PTR __fastcall CcForEachPartition(__int64 (__fastcall *a1)(__int64, __int64), __int64 a2, char a3)
{
  char v6; // si
  LONG_PTR result; // rax
  _QWORD *v8; // rbp
  __int64 v9; // rdi
  KIRQL v10; // al
  __int64 v11; // rcx
  KIRQL v12; // bl
  char v13; // bl
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  __int64 v16; // [rsp+68h] [rbp+20h]

  v6 = 0;
  result = PsGetNextPartitionUnsafe(0LL);
  v8 = (_QWORD *)result;
  if ( result )
  {
    v9 = v16;
    while ( 1 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      v11 = v8[1];
      v12 = v10;
      if ( v11 )
      {
        v9 = v8[1];
        if ( *(_BYTE *)(v11 + 901) )
        {
          if ( a3 )
          {
            _m_prefetchw((const void *)(v11 + 904));
            v14 = *(_QWORD *)(v11 + 904);
            while ( (unsigned __int64)(v14 + 1) > 1 )
            {
              v15 = v14;
              v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 904), v14 + 1, v14);
              if ( v15 == v14 )
                goto LABEL_6;
            }
            if ( v14 )
              __fastfail(0xEu);
            v6 = 0;
          }
        }
        else
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 904)) <= 1 )
            __fastfail(0xEu);
LABEL_6:
          v6 = 1;
        }
      }
      KxReleaseSpinLock(&CcGlobalPartitionLock);
      __writecr8(v12);
      if ( v6 )
      {
        v13 = a1(v9, a2);
        CcDereferencePartition(v9);
        v6 = 0;
        if ( !v13 )
          return ObfDereferenceObjectWithTag(v8, 0x6E457350u);
      }
      result = PsGetNextPartitionUnsafe(v8);
      v8 = (_QWORD *)result;
      if ( !result )
        return result;
    }
  }
  return result;
}
