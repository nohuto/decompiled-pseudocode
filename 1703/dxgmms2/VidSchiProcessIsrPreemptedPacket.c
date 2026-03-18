/*
 * XREFs of VidSchiProcessIsrPreemptedPacket @ 0x1C000D838
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000AD40 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C000B430 (VidSchiUpdateContextRunningTimeAtISR.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 */

void __fastcall VidSchiProcessIsrPreemptedPacket(__int64 a1, int a2, int a3, __int64 a4)
{
  union _SLIST_HEADER *v5; // rbp
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  unsigned int v14; // r13d
  __int64 v15; // r9
  __int64 v16; // rdx
  bool v17; // zf
  _QWORD v18[11]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v19; // [rsp+A8h] [rbp+10h]

  v5 = *(union _SLIST_HEADER **)(a1 + 24);
  if ( *(_DWORD *)(a1 + 112) != a2 )
  {
    v8 = (a3 & 1) << 6;
    do
    {
      v9 = *(unsigned int *)(a1 + 1404);
      v10 = *(_QWORD *)(a1 + 8 * v9 + 1416);
      _InterlockedExchange((volatile __int32 *)(a1 + 1404), ((_BYTE)v9 + 1) & 0xF);
      v11 = *(unsigned int *)(a1 + 1548);
      *(_DWORD *)(a1 + 492) = ((unsigned __int8)*(_DWORD *)(a1 + 492) + 1) & 0xF;
      v12 = *(_QWORD *)(a1 + 8 * v11 + 1560);
      v19 = ((_BYTE)v11 + 1) & 0xF;
      _InterlockedExchange((volatile __int32 *)(a1 + 1548), v19);
      v13 = *(_QWORD *)(v10 + 104);
      if ( *(_DWORD *)(v10 + 88) == 3 )
      {
        *(_QWORD *)(a1 + 112) = v13;
        v14 = 8;
        *(_QWORD *)(v10 + 80) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(v10 + 72) = 10;
        *(_DWORD *)(v10 + 16) = 1;
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 2784));
      }
      else
      {
        *(_QWORD *)(a1 + 56) = v13;
        *(_QWORD *)(a1 + 80) = *(_QWORD *)(v10 + 104);
        *(_QWORD *)(v12 + 440) = *(_QWORD *)(v10 + 104);
        ++*(_DWORD *)(a1 + 2788);
        v17 = *(_QWORD *)(v10 + 56) == 0LL;
        *(_QWORD *)(v10 + 80) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(v10 + 72) = 11;
        *(_DWORD *)(v10 + 16) = 2;
        if ( !v17 )
        {
          *(_QWORD *)(*(_QWORD *)(v10 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
          *(_DWORD *)(*(_QWORD *)(v10 + 56) + 52LL) = 11;
        }
        v14 = 10;
      }
      if ( a3 )
      {
        ++*(_QWORD *)(a1 + 40);
        ++v5[24].Alignment;
      }
      *(_DWORD *)(v10 + 92) = v8 | *(_DWORD *)(v10 + 92) & 0xFFFFFFBF;
      memset(v18, 0, 0x20uLL);
      v18[1] = v12;
      VidSchiUpdateContextRunningTimeAtISR(v18);
      v16 = *(_QWORD *)(a1 + 8LL * v19 + 1560);
      if ( v16 )
      {
        if ( v16 != v12 )
          *(_QWORD *)(v16 + 472) = *(_QWORD *)(v12 + 472);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2772));
      VidSchiProfilePerformanceTick(v14, (__int64)v5, a1, v15, 0LL, 0LL, v10, a4);
      ExpInterlockedPushEntrySList(v5 + 120, (PSLIST_ENTRY)(v10 + 32));
    }
    while ( *(_DWORD *)(a1 + 112) != a2 );
  }
}
