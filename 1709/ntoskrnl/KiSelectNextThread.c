/*
 * XREFs of KiSelectNextThread @ 0x1400A89A0
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14006EE10 (KiSearchForNewThreadOnProcessor.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14008ED50 (KiGroupSchedulingQuantumEnd.c)
 *     KiQuantumEnd @ 0x140090E30 (KiQuantumEnd.c)
 *     KiSetSystemAffinityThread @ 0x1400A8760 (KiSetSystemAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400AC020 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiExitThreadWait @ 0x14011B140 (KiExitThreadWait.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14011F888 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetHeteroPolicyThread @ 0x140150BC8 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSelectReadyThread @ 0x14006F300 (KiSelectReadyThread.c)
 *     KiSelectLowestRankedThread @ 0x1400A8B20 (KiSelectLowestRankedThread.c)
 *     KiCheckThreadAffinity @ 0x1400A8D9C (KiCheckThreadAffinity.c)
 *     KiIsThreadRankNonZero @ 0x1400AB970 (KiIsThreadRankNonZero.c)
 *     KiAddThreadToReadyQueue @ 0x14020A110 (KiAddThreadToReadyQueue.c)
 */

__int64 __fastcall KiSelectNextThread(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  char v5; // si
  unsigned __int64 *v6; // rdi
  unsigned __int64 *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // rdx
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  bool v15; // zf
  __int64 result; // rax

  v5 = 1;
  while ( 1 )
  {
    v6 = KiSelectReadyThread(1, a1, a3);
    if ( !v6 )
    {
      v6 = (unsigned __int64 *)KiSelectLowestRankedThread(a1);
      if ( !v6 )
        v6 = KiSelectReadyThread(0, a1, v7);
    }
    if ( !v6 )
      break;
    if ( (unsigned int)KiCheckThreadAffinity(v6) )
      goto LABEL_13;
    if ( !a2 )
    {
      KiAddThreadToReadyQueue(a1, 0, (_DWORD)v6, 1, 1);
      break;
    }
    *((_BYTE *)v6 + 388) = 7;
    v6[27] = *a2;
    *a2 = (unsigned __int64)(v6 + 27);
  }
  v8 = *(_QWORD *)(a1 + 25016);
  v6 = *(unsigned __int64 **)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 192);
  v10 = *(unsigned __int8 *)(a1 + 35);
  if ( v8 )
    *(_BYTE *)(v8 + 8) = 1;
  *(_BYTE *)(a1 + 11883) = 1;
  if ( (v10 & 1) != 0 )
  {
    v11 = v10 - 1;
    *(_BYTE *)(a1 + 35) = v11;
    if ( !v11 )
      _interlockedbittestandset64((volatile signed __int32 *)v9, *(unsigned __int8 *)(a1 + 209));
    _interlockedbittestandset64((volatile signed __int32 *)(v9 + 16), *(unsigned __int8 *)(a1 + 209));
    v12 = *(_QWORD *)(a1 + 24920);
    if ( (v12 & *(_QWORD *)(v9 + 16)) == v12 )
      _InterlockedOr64((volatile signed __int64 *)(v9 + 8), v12);
  }
LABEL_13:
  if ( (*((_BYTE *)v6 + 2) & 4) != 0 )
  {
    if ( !(unsigned __int8)KiIsThreadRankNonZero(v6, a1) )
      v5 = *((_BYTE *)v6 + 195);
  }
  else
  {
    v5 = *((_BYTE *)v6 + 195);
  }
  **(_BYTE **)(a1 + 56) = v5;
  v13 = *(_DWORD **)(a1 + 25016);
  if ( v13 )
    *v13 = v5;
  v14 = *(_QWORD *)(a1 + 25016);
  v15 = v6 == *(unsigned __int64 **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = v6;
  if ( v14 )
    *(_BYTE *)(v14 + 8) = v15;
  result = *((unsigned __int8 *)v6 + 388);
  if ( (_BYTE)result == 1 )
  {
    result = (unsigned int)(*((_DWORD *)v6 + 33) - *((_DWORD *)v6 + 109) + MEMORY[0xFFFFF78000000320]);
    *((_DWORD *)v6 + 33) = result;
  }
  *((_BYTE *)v6 + 388) = 3;
  return result;
}
