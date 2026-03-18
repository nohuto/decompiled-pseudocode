/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x1400D3AB4
 * Callers:
 *     EtwpSwitchBuffer @ 0x1400D40D0 (EtwpSwitchBuffer.c)
 *     EtwpAllocateTraceBufferPool @ 0x1405898CC (EtwpAllocateTraceBufferPool.c)
 *     EtwpAdjustFreeBuffers @ 0x14058F250 (EtwpAdjustFreeBuffers.c)
 * Callees:
 *     EtwpInitializeBufferHeader @ 0x1400D3BF4 (EtwpInitializeBufferHeader.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400D4438 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpUnlockBufferList @ 0x1400D44D8 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400D4514 (EtwpLockBufferList.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateFreeBuffers(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebp
  int v6; // r12d
  unsigned __int32 v7; // edi
  _QWORD *PoolWithTag; // r14
  unsigned __int32 v9; // eax
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  char v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  if ( (*(_DWORD *)(a1 + 832) & 0x1000) != 0 )
    v2 = (v2 + 4095) & 0xFFFFF000;
  v6 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v7 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 248));
      if ( v7 > *(_DWORD *)(a1 + 252) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 248));
        goto LABEL_9;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a1 + 316), v2, 0x42777445u);
      if ( !PoolWithTag )
        break;
      while ( 1 )
      {
        v9 = *(_DWORD *)(a1 + 260);
        if ( v9 >= v7 )
          break;
        _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 260), v7, v9);
      }
      EtwpInitializeBufferHeader(a1, PoolWithTag);
      EtwpLockBufferList(a1, &v13);
      v10 = *(_QWORD **)(a1 + 104);
      v11 = PoolWithTag + 7;
      if ( *v10 != a1 + 96 )
        __fastfail(3u);
      PoolWithTag[8] = v10;
      *v11 = a1 + 96;
      *v10 = v11;
      *(_QWORD *)(a1 + 104) = v11;
      EtwpUnlockBufferList(a1, &v13);
      EtwpEnqueueAvailableBuffer(a1, PoolWithTag, 0LL);
      ++v3;
      if ( ++v6 >= a2 )
        goto LABEL_9;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 248));
  }
  else
  {
LABEL_9:
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(a1 + 1112) + 4LL * (*(_DWORD *)(a1 + 316) & 1) + 4092),
      *(_DWORD *)(a1 + 4) * v3);
  }
  return v3;
}
