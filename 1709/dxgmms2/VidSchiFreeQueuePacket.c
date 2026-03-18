/*
 * XREFs of VidSchiFreeQueuePacket @ 0x1C0010C4C
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007290 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000D18C (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCreateContextInternal @ 0x1C00106B4 (VidSchiCreateContextInternal.c)
 *     VidSchEnqueueCpuEvent @ 0x1C0072F20 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00071A0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified @ 0x1C0010D54 (VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C0010DCC (VidSchiInterlockedRemoveEntryList.c)
 */

__int64 __fastcall VidSchiFreeQueuePacket(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  KSPIN_LOCK *v7; // rsi
  _DWORD *v8; // r9
  __int64 v9; // rdx
  __int64 result; // rax
  _QWORD *v11; // rax

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( !*(_DWORD *)(a2 + 48) && (*(_QWORD *)(a2 + 624) || *(_QWORD *)(a2 + 280)) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2, a3);
    v11[3] = 281LL;
    v11[4] = 2560LL;
    v11[5] = a2;
    v11[6] = *(_QWORD *)(a2 + 624);
    v11[7] = *(_QWORD *)(a2 + 280);
    WdLogEvent5_WdCriticalError(v11);
    JUMPOUT(0x1C001E92FLL);
  }
  v6 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v6 + 24) = a2;
  *(_QWORD *)(v6 + 32) = a1;
  WdLogEvent5_WdEvent(v6);
  *(_QWORD *)(a2 + 56) = MEMORY[0xFFFFF78000000320];
  v7 = (KSPIN_LOCK *)(v5 + 1896);
  *(_DWORD *)(a2 + 52) = 0;
  VidSchiInterlockedRemoveEntryList(v7, a2 + 8, a1 + 760);
  if ( (*(_DWORD *)(a2 + 64) & 0x40) != 0 )
  {
    v8 = (_DWORD *)(a1 + 736);
    v9 = a1 + 720;
  }
  else
  {
    v8 = (_DWORD *)(a1 + 712);
    v9 = a1 + 696;
  }
  VidSchiInterlockedInsertTailList(v7, v9, (_QWORD *)(a2 + 8), v8);
  result = *(unsigned int *)(a2 + 64);
  if ( (result & 0x40) == 0 )
  {
    while ( 1 )
    {
      result = VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified(v7, a1 + 696, a1 + 712);
      if ( !result )
        break;
      ExFreePoolWithTag((PVOID)(result - 8), 0);
    }
  }
  return result;
}
