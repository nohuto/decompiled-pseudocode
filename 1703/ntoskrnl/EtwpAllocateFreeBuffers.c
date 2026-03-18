/*
 * XREFs of EtwpAllocateFreeBuffers @ 0x140122058
 * Callers:
 *     EtwpSwitchBuffer @ 0x1400878C8 (EtwpSwitchBuffer.c)
 *     EtwpAdjustFreeBuffers @ 0x1404F1DEC (EtwpAdjustFreeBuffers.c)
 *     EtwpAllocateTraceBufferPool @ 0x14054F858 (EtwpAllocateTraceBufferPool.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x140087C44 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpUnlockBufferList @ 0x140087CE0 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x140087D24 (EtwpLockBufferList.c)
 *     EtwpInitializeBufferHeader @ 0x140122198 (EtwpInitializeBufferHeader.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
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
  unsigned __int8 v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  if ( (*(_DWORD *)(a1 + 816) & 0x1000) != 0 )
    v2 = (v2 + 4095) & 0xFFFFF000;
  v6 = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v7 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 232));
      if ( v7 > *(_DWORD *)(a1 + 236) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 232));
        goto LABEL_9;
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a1 + 300), v2, 0x42777445u);
      if ( !PoolWithTag )
        break;
      while ( 1 )
      {
        v9 = *(_DWORD *)(a1 + 244);
        if ( v9 >= v7 )
          break;
        _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 244), v7, v9);
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
      EtwpEnqueueAvailableBuffer(a1, (unsigned int *)PoolWithTag, 0);
      ++v3;
      if ( ++v6 >= a2 )
        goto LABEL_9;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 232));
  }
  else
  {
LABEL_9:
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(a1 + 944) + 4LL * (*(_DWORD *)(a1 + 300) & 1) + 5084),
      *(_DWORD *)(a1 + 4) * v3);
  }
  return v3;
}
