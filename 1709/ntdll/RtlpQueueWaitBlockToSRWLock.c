/*
 * XREFs of RtlpQueueWaitBlockToSRWLock @ 0x180075E00
 * Callers:
 *     RtlpWakeConditionVariable @ 0x180075CE0 (RtlpWakeConditionVariable.c)
 * Callees:
 *     RtlBackoff @ 0x1800697A0 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x180075EC0 (RtlpOptimizeSRWLockList.c)
 */

bool __fastcall RtlpQueueWaitBlockToSRWLock(__int64 a1, unsigned __int64 *a2)
{
  _BOOL8 v2; // r9
  unsigned __int64 v3; // rax
  bool v4; // bl
  volatile signed __int64 *v5; // r11
  __int64 v6; // r10
  bool v7; // r8
  __int64 v8; // rdx
  signed __int64 v9; // rdx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = *a2;
  v4 = (*(_DWORD *)(a1 + 36) & 1) == 0;
  v11 = 0;
  v5 = (volatile signed __int64 *)a2;
  v6 = a1;
  while ( (v3 & 1) != 0 && (!v4 || (v3 & 2) != 0 || (v3 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    *(_QWORD *)(v6 + 16) = v2;
    v7 = v2;
    if ( (v3 & 2) != 0 )
    {
      *(_DWORD *)(v6 + 32) = -1;
      *(_QWORD *)(v6 + 8) = v2;
      *(_QWORD *)v6 = v3 & 0xFFFFFFFFFFFFFFF0uLL;
      v9 = v6 | v3 & 8 | 7;
      v7 = (v3 & 4) == 0;
    }
    else
    {
      v8 = 11LL;
      *(_QWORD *)(v6 + 8) = v6;
      *(_DWORD *)(v6 + 32) = v3 >> 4;
      if ( (int)(v3 >> 4) <= 1 )
        v8 = 3LL;
      v9 = v6 | v8;
      if ( !(unsigned int)(v3 >> 4) )
        *(_DWORD *)(v6 + 32) = -2;
    }
    if ( v3 == _InterlockedCompareExchange64(v5, v9, v3) )
    {
      if ( v7 )
        RtlpOptimizeSRWLockList(v5);
      LOBYTE(v2) = 1;
      return v2;
    }
    RtlBackoff(&v11);
    _m_prefetchw((const void *)v5);
    v3 = *v5;
  }
  return v2;
}
