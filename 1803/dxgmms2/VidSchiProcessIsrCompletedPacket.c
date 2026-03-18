/*
 * XREFs of VidSchiProcessIsrCompletedPacket @ 0x1C000C980
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C520 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A8D0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C000CC20 (VidSchiUpdateContextRunningTimeAtISR.c)
 *     VidSchiUpdateCurrentIsrFrameTime @ 0x1C001555C (VidSchiUpdateCurrentIsrFrameTime.c)
 */

__int64 __fastcall VidSchiProcessIsrCompletedPacket(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r14
  unsigned int v5; // ebp
  __int64 v6; // r15
  _BOOL8 v7; // r12
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 result; // rax
  _QWORD *v18; // rax
  _QWORD v19[4]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+8h]
  unsigned int v21; // [rsp+B0h] [rbp+18h]

  v21 = a3;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = (unsigned int)a2;
  v7 = *a4 == 9;
  if ( (_DWORD)a2 == *(_DWORD *)(a1 + 72) )
    return 0LL;
  if ( *(_DWORD *)(a1 + 64) == (_DWORD)a2 )
    return v5;
  while ( 1 )
  {
    v9 = *(unsigned int *)(a1 + 1404);
    v10 = *(_QWORD *)(a1 + 8 * v9 + 1416);
    if ( !v10 )
      break;
    if ( *(_DWORD *)(v10 + 88) == 3 || v7 && *(_DWORD *)(v10 + 104) == (_DWORD)v6 )
      return 1;
    _InterlockedExchange((volatile __int32 *)(a1 + 1404), ((_BYTE)v9 + 1) & 0xF);
    v11 = *(unsigned int *)(a1 + 1548);
    *(_DWORD *)(a1 + 492) = ((unsigned __int8)*(_DWORD *)(a1 + 492) + 1) & 0xF;
    v12 = *(_QWORD *)(a1 + 8 * v11 + 1560);
    v13 = ((_BYTE)v11 + 1) & 0xF;
    v20 = v12;
    _InterlockedExchange((volatile __int32 *)(a1 + 1548), ((_BYTE)v11 + 1) & 0xF);
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(v10 + 104);
    v14 = *(_QWORD *)(v10 + 104);
    if ( (_DWORD)a3 )
    {
      ++*(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 64) = v14;
      *(_QWORD *)(a1 + 72) = v14;
      ++*(_QWORD *)(v4 + 408);
    }
    *(_DWORD *)(v10 + 92) ^= (*(_DWORD *)(v10 + 92) ^ ((_DWORD)a3 << 6)) & 0x40;
    *(_QWORD *)(v10 + 80) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(v10 + 72) = 10;
    if ( *(_QWORD *)(v10 + 56) )
    {
      *(_QWORD *)(*(_QWORD *)(v10 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(*(_QWORD *)(v10 + 56) + 52LL) = 10;
    }
    *(_DWORD *)(v10 + 16) = 1;
    v19[0] = 0LL;
    v19[2] = 0LL;
    v19[3] = 0LL;
    v19[1] = v12;
    VidSchiUpdateContextRunningTimeAtISR(v19, v12, a3, 0xFFFFF78000000320uLL);
    v16 = *(_QWORD *)(a1 + 8 * v13 + 1560);
    if ( v16 && v16 != v20 )
      *(_QWORD *)(v16 + 456) = *(_QWORD *)(v20 + 456);
    if ( (*(_DWORD *)(v10 + 92) & 0x200) != 0 )
    {
      VidSchiUpdateCurrentIsrFrameTime(
        v4,
        *(_QWORD *)(v4 + 8LL * *(unsigned int *)(*(_QWORD *)(v10 + 56) + 160LL) + 3032),
        0LL);
      *(_QWORD *)(*(_QWORD *)(v10 + 56) + 136LL) = *(_QWORD *)(*(_QWORD *)(v4
                                                                         + 8LL
                                                                         * *(unsigned int *)(*(_QWORD *)(v10 + 56)
                                                                                           + 160LL)
                                                                         + 3032)
                                                             + 28008LL);
      *(_DWORD *)(*(_QWORD *)(v10 + 56) + 132LL) = *(_DWORD *)(*(_QWORD *)(v4
                                                                         + 8LL
                                                                         * *(unsigned int *)(*(_QWORD *)(v10 + 56)
                                                                                           + 160LL)
                                                                         + 3032)
                                                             + 28016LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 2828));
    VidSchiProfilePerformanceTick(8LL, v4, a1, v15, 0LL, 0LL, v10, 0LL);
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(v4 + 1952), (PSLIST_ENTRY)(v10 + 32));
    if ( (_DWORD)v14 == (_DWORD)v6 )
      return v5;
    a3 = v21;
  }
  if ( !*(_BYTE *)(v4 + 53) )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, a2, a3);
    v18[3] = 281LL;
    v18[4] = 1LL;
    v18[5] = v6;
    v18[6] = *(unsigned int *)(a1 + 152);
    v18[7] = *(_QWORD *)(v4 + 16);
    WdLogEvent5_WdCriticalError(v18);
    JUMPOUT(0x1C001E143LL);
  }
  *(_DWORD *)(a1 + 2000) = 1;
  result = 0LL;
  *(_BYTE *)(a1 + 1993) = 1;
  return result;
}
