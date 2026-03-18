/*
 * XREFs of VidSchiProcessIsrPreemptedPacket @ 0x1C000CF34
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C020 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A200 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextRunningTimeAtISR @ 0x1C000C710 (VidSchiUpdateContextRunningTimeAtISR.c)
 *     memset @ 0x1C0018400 (memset.c)
 */

void __fastcall VidSchiProcessIsrPreemptedPacket(__int64 a1, int a2, int a3, __int64 a4)
{
  union _SLIST_HEADER *v5; // rbp
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  bool v15; // zf
  unsigned int v16; // r12d
  __int64 v17; // r9
  __int64 v18; // rdx
  _QWORD v19[11]; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp+10h]

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
      v20 = ((_BYTE)v11 + 1) & 0xF;
      _InterlockedExchange((volatile __int32 *)(a1 + 1548), v20);
      v13 = *(_QWORD *)(v10 + 104);
      if ( *(_DWORD *)(v10 + 88) == 3 )
      {
        *(_QWORD *)(a1 + 112) = v13;
        v16 = 8;
        *(_QWORD *)(v10 + 80) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(v10 + 72) = 10;
        *(_DWORD *)(v10 + 16) = 1;
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 2808));
      }
      else
      {
        *(_QWORD *)(a1 + 56) = v13;
        v14 = *(_QWORD *)(v10 + 104);
        ++*(_DWORD *)(a1 + 2812);
        *(_QWORD *)(a1 + 80) = v14;
        v15 = *(_QWORD *)(v10 + 56) == 0LL;
        *(_QWORD *)(v10 + 80) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(v10 + 72) = 11;
        *(_DWORD *)(v10 + 16) = 2;
        if ( !v15 )
        {
          *(_QWORD *)(*(_QWORD *)(v10 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
          *(_DWORD *)(*(_QWORD *)(v10 + 56) + 52LL) = 11;
        }
        v16 = 10;
      }
      if ( a3 )
      {
        ++*(_QWORD *)(a1 + 40);
        ++v5[24].Region;
      }
      *(_DWORD *)(v10 + 92) = v8 | *(_DWORD *)(v10 + 92) & 0xFFFFFFBF;
      memset(v19, 0, 0x20uLL);
      v19[1] = v12;
      VidSchiUpdateContextRunningTimeAtISR(v19);
      v18 = *(_QWORD *)(a1 + 8LL * v20 + 1560);
      if ( v18 )
      {
        if ( v18 != v12 )
          *(_QWORD *)(v18 + 448) = *(_QWORD *)(v12 + 448);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 2796));
      VidSchiProfilePerformanceTick(v16, (__int64)v5, a1, v17, 0LL, 0LL, v10, a4);
      ExpInterlockedPushEntrySList(v5 + 121, (PSLIST_ENTRY)(v10 + 32));
    }
    while ( *(_DWORD *)(a1 + 112) != a2 );
  }
}
