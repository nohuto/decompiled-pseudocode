/*
 * XREFs of CmpCleanUpKCBCacheTable @ 0x14054E3C0
 * Callers:
 *     CmpEnumerateAllOpenSubKeys @ 0x14054E230 (CmpEnumerateAllOpenSubKeys.c)
 *     CmpCleanUpHigherLayerKcbCachesPostCallback @ 0x1406FAA80 (CmpCleanUpHigherLayerKcbCachesPostCallback.c)
 *     CmpRefreshHive @ 0x14070306C (CmpRefreshHive.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     CmpFreeKeyControlBlock @ 0x1404A82B0 (CmpFreeKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404A9A60 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x14054E498 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpRemoveFromDelayedClose @ 0x1405E2F64 (CmpRemoveFromDelayedClose.c)
 */

__int64 __fastcall CmpCleanUpKCBCacheTable(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 i; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  ULONG_PTR v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdx
  _BYTE v12[48]; // [rsp+20h] [rbp-58h] BYREF

  v1 = *(_DWORD *)(a1 + 1648);
  v2 = *(_QWORD *)(a1 + 1640);
  CmpAttachToRegistryProcess((__int64)v12);
  LOBYTE(v3) = 1;
  CmpRunDownDelayDerefKCBEngine(0LL, v3);
LABEL_2:
  LOBYTE(v4) = 0;
  for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
  {
    v6 = v2 + 24 * i;
    v7 = *(_QWORD *)(v6 + 16);
    if ( v7 )
    {
      do
      {
        v8 = v7 - 8;
        if ( *(_DWORD *)(v7 - 8) )
        {
          v9 = (__int64 *)(v8 + 16);
        }
        else
        {
          CmpRemoveFromDelayedClose(v7 - 8, v4);
          LOBYTE(v10) = 1;
          CmpCleanUpKcbCacheWithLock(v8, v10);
          if ( (*(_DWORD *)(v8 + 4) & 0x80000) != 0 )
            CmpFreeKeyControlBlock(v8);
          LOBYTE(v4) = 1;
          v9 = (__int64 *)(v6 + 16);
        }
        v7 = *v9;
      }
      while ( v7 );
      if ( (_BYTE)v4 )
        goto LABEL_2;
    }
  }
  return KiUnstackDetachProcess((__int64)v12, 0LL);
}
