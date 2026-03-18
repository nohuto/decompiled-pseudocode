/*
 * XREFs of ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C004E2E8
 * Callers:
 *     TimersProc @ 0x1C004BC60 (TimersProc.c)
 *     xxxRealInternalGetMessage @ 0x1C0050B40 (xxxRealInternalGetMessage.c)
 *     ?ReadyTimer@@YAHPEAUtagTIMER@@K@Z @ 0x1C01C4D30 (-ReadyTimer@@YAHPEAUtagTIMER@@K@Z.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall TimerStatistics(const struct tagTIMER *a1)
{
  __int64 v2; // rdi
  int v3; // r8d
  unsigned int *v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  int v8; // r10d
  __int64 v9; // rdx
  _DWORD *v10; // rdx
  __int64 v11; // r11
  __int64 v12; // rax

  if ( (gdwExtraInstrumentations & 2) != 0 )
  {
    v2 = 0LL;
    v3 = dword_1C0338C58;
    v4 = (unsigned int *)&unk_1C02EDF90;
    v5 = *((_DWORD *)a1 + 10);
    v6 = 0LL;
    v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v8 = v7 - *((_DWORD *)a1 + 32);
    if ( !dword_1C0338C58 )
      v3 = v7;
    dword_1C0338C58 = v3;
    do
    {
      if ( v5 <= *v4 )
        break;
      v6 = (unsigned int)(v6 + 1);
      ++v4;
    }
    while ( (unsigned int)v6 < 7 );
    v9 = v6 + 8LL * gTimerCoalCurrentState;
    ++gaTimerDeliveryDistribution[2 * v9];
    gaTimerDeliveryDistribution[2 * v9 + 1] += v8 - *((_DWORD *)a1 + 10);
    if ( (unsigned int)gaTimerDeliveryDistribution[2 * v9] >= 0x7FFFFFFF
      || gaTimerDeliveryDistribution[2 * v9 + 1] >= 0x3FFFFFFF
      || (unsigned int)(v7 - v3) >= 0xEA60 )
    {
      v10 = &unk_1C0334B08;
      v11 = 4LL;
      do
      {
        v12 = v2 + (gServiceSessionId != gSessionId ? 4 : 0);
        ++v2;
        *v10 = *((_DWORD *)&gTimerCoalescingSpec + v12);
        v10 += 16;
        --v11;
      }
      while ( v11 );
      EtwTraceTimerDelayStatistics(gSessionId, 8LL, 4LL, &unk_1C02EDF90, 32, 8, gaTimerDeliveryDistribution);
      dword_1C0338C58 = v7;
      memset(gaTimerDeliveryDistribution, 0, 0x100uLL);
    }
  }
}
