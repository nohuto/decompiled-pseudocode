/*
 * XREFs of EtwpReferenceCurrentBuffer @ 0x140086AE0
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x140086960 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     EtwpUnlockBufferList @ 0x140087CE0 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x140087D24 (EtwpLockBufferList.c)
 */

unsigned __int64 __fastcall EtwpReferenceCurrentBuffer(__int64 a1, signed __int64 *a2)
{
  signed __int64 v4; // rbx
  signed __int64 v5; // rax
  int v6; // eax
  unsigned __int64 v7; // rbx
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  char v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0;
  _m_prefetchw(a2);
  v4 = *a2;
  if ( (*a2 & 0xF) != 0 )
  {
    do
    {
      v5 = _InterlockedCompareExchange64(a2, v4 - 1, v4);
      if ( v4 == v5 )
        break;
      v4 = v5;
    }
    while ( (v5 & 0xF) != 0 );
  }
  if ( !v4 )
    return 0LL;
  v6 = v4 & 0xF;
  if ( (v4 & 0xF) != 0 )
  {
    v7 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v6 == 1 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 12), 0xFu);
      _m_prefetchw(a2);
      v9 = *a2;
      while ( (v9 & 0xF) == 0 )
      {
        if ( v7 != (v9 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v10 = v9;
        v9 = _InterlockedCompareExchange64(a2, v9 + 15, v9);
        if ( v10 == v9 )
          return v7;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 12), 0xFFFFFFF1);
    }
  }
  else
  {
    EtwpLockBufferList(a1, &v11);
    v7 = *a2 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
    EtwpUnlockBufferList(a1, &v11);
  }
  return v7;
}
