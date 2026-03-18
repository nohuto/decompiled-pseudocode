/*
 * XREFs of VidSchiProcessIsrCompletedPacket @ 0x1C000B190
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000AD40 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C000B430 (VidSchiUpdateContextRunningTimeAtISR.c)
 *     VidSchiUpdateCurrentIsrFrameTime @ 0x1C00131AC (VidSchiUpdateCurrentIsrFrameTime.c)
 */

__int64 __fastcall VidSchiProcessIsrCompletedPacket(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebp
  __int64 v5; // r14
  _BOOL8 v7; // r13
  union _SLIST_HEADER *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rcx
  _QWORD *v18; // rax
  _QWORD v19[4]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+8h]
  unsigned int v21; // [rsp+B0h] [rbp+18h]

  v21 = a3;
  v4 = 0;
  v5 = (unsigned int)a2;
  v7 = *a4 == 9;
  v8 = *(union _SLIST_HEADER **)(a1 + 24);
  if ( (_DWORD)a2 == *(_DWORD *)(a1 + 72) )
    return 0LL;
  if ( *(_DWORD *)(a1 + 64) != (_DWORD)a2 )
  {
    while ( 1 )
    {
      v9 = *(unsigned int *)(a1 + 1404);
      v10 = *(_QWORD *)(a1 + 8 * v9 + 1416);
      if ( !v10 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, a2, a3);
        v18[3] = 281LL;
        v18[4] = 1LL;
        v18[5] = v5;
        v18[6] = *(unsigned int *)(a1 + 152);
        v18[7] = v8[1].Alignment;
        WdLogEvent5_WdCriticalError(v18);
        JUMPOUT(0x1C001B435LL);
      }
      if ( *(_DWORD *)(v10 + 88) == 3 || v7 && *(_DWORD *)(v10 + 104) == (_DWORD)v5 )
        break;
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
        ++v8[24].Alignment;
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
        *(_QWORD *)(v16 + 472) = *(_QWORD *)(v20 + 472);
      if ( (*(_DWORD *)(v10 + 92) & 0x200) != 0 )
      {
        VidSchiUpdateCurrentIsrFrameTime(
          v8,
          *(&v8[187].Alignment + *(unsigned int *)(*(_QWORD *)(v10 + 56) + 152LL)),
          0LL);
        *(_QWORD *)(*(_QWORD *)(v10 + 56) + 128LL) = *(_QWORD *)(*(&v8[187].Alignment
                                                                 + *(unsigned int *)(*(_QWORD *)(v10 + 56) + 152LL))
                                                               + 18776);
        *(_DWORD *)(*(_QWORD *)(v10 + 56) + 124LL) = *(_DWORD *)(*(&v8[187].Alignment
                                                                 + *(unsigned int *)(*(_QWORD *)(v10 + 56) + 152LL))
                                                               + 18784);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2772));
      VidSchiProfilePerformanceTick(8LL, (__int64)v8, a1, v15, 0LL, 0LL, v10, 0LL);
      ExpInterlockedPushEntrySList(v8 + 120, (PSLIST_ENTRY)(v10 + 32));
      if ( (_DWORD)v14 == (_DWORD)v5 )
        return v4;
      a3 = v21;
    }
    return 1;
  }
  return v4;
}
