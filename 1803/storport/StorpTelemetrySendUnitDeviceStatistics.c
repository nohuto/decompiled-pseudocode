/*
 * XREFs of StorpTelemetrySendUnitDeviceStatistics @ 0x1C0002D70
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C0002D10 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     StorpTelemetryDeviceStatisticsCommand @ 0x1C0001DAC (StorpTelemetryDeviceStatisticsCommand.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     McTemplateK0qcccjjzssxqqbqbqbqbqbqbqb @ 0x1C00421A0 (McTemplateK0qcccjjzssxqqbqbqbqbqbqbqb.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C0043EB8 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C00443EC (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 */

void __fastcall StorpTelemetrySendUnitDeviceStatistics(__int64 a1)
{
  char *PoolWithTag; // rax
  char *v3; // r12
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  char v7; // r8
  void *v8; // rcx
  __int64 v9; // rcx
  char *v10; // [rsp+E8h] [rbp-80h]
  _QWORD v11[14]; // [rsp+F8h] [rbp-70h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( (*(_DWORD *)(a1 + 1736) & 4) != 0 )
    return;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x65546152u);
  v10 = PoolWithTag;
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  memset(PoolWithTag, 0, 0x1000uLL);
  v11[4] = v3;
  v11[8] = v3 + 2048;
  v11[5] = v3 + 512;
  v11[9] = v3 + 2560;
  v11[6] = v3 + 1024;
  v11[10] = v3 + 3072;
  v11[7] = v3 + 1536;
  v11[11] = v3 + 3584;
  v4 = StorpTelemetryDeviceStatisticsCommand(a1, (__int64)v3, 0);
  if ( v4 < 0 )
  {
    if ( v4 != -1073741670 )
    {
      v5 = *(_DWORD *)(a1 + 1736);
      if ( (v5 & 1) == 0 )
        *(_DWORD *)(a1 + 1736) = v5 | 4;
    }
    goto LABEL_7;
  }
  if ( *(_BYTE *)(v11[4] + 8LL) <= 1u )
    goto LABEL_7;
  v6 = 0;
  while ( v6 <= 7 )
  {
    v7 = *(_BYTE *)(v6 + v11[4] + 9LL);
    if ( v7 == 1 )
    {
      if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v11[5], v7) >= 0 )
      {
        LOWORD(v11[12]) = 88;
        goto LABEL_41;
      }
      v8 = (void *)v11[5];
LABEL_22:
      memset(v8, 0, 0x200uLL);
      goto LABEL_41;
    }
    switch ( *(_BYTE *)(v6 + v11[4] + 9LL) )
    {
      case 2:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v11[6], v7) >= 0 )
        {
          WORD1(v11[12]) = 24;
          break;
        }
        v8 = (void *)v11[6];
        goto LABEL_22;
      case 3:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v11[7], v7) >= 0 )
        {
          WORD2(v11[12]) = 72;
          break;
        }
        v8 = (void *)v11[7];
        goto LABEL_22;
      case 4:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v11[8], v7) >= 0 )
        {
          HIWORD(v11[12]) = 24;
          break;
        }
        v8 = (void *)v11[8];
        goto LABEL_22;
      case 5:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v11[9], v7) >= 0 )
        {
          LOWORD(v11[13]) = 112;
          break;
        }
        v8 = (void *)v11[9];
        goto LABEL_22;
      case 6:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v11[10], v7) >= 0 )
        {
          WORD1(v11[13]) = 32;
          break;
        }
        v8 = (void *)v11[10];
        goto LABEL_22;
      case 7:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v11[11], v7) >= 0 )
        {
          WORD2(v11[13]) = 16;
          break;
        }
        v8 = (void *)v11[11];
        goto LABEL_22;
    }
LABEL_41:
    if ( ++v6 >= *(unsigned __int8 *)(v11[4] + 8LL) )
      break;
  }
  v3 = v10;
  v9 = *(_QWORD *)(a1 + 96);
  if ( v9 )
  {
    v11[0] = *(_QWORD *)(v9 + 8);
    *(_OWORD *)((char *)&v11[1] + 1) = *(_OWORD *)(v9 + 16);
  }
  if ( LOBYTE(WPP_MAIN_CB.Reserved) == 1 && !HIDWORD(WPP_MAIN_CB.Reserved)
    || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
  {
    goto LABEL_55;
  }
  if ( (*(_DWORD *)(a1 + 1736) & 0x10) != 0 )
    HIDWORD(WPP_MAIN_CB.Reserved) = -1;
  if ( *(_BYTE *)(a1 + 1740) )
    HIDWORD(WPP_MAIN_CB.Reserved) = -1;
  if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
    HIDWORD(WPP_MAIN_CB.Reserved) = -1;
  if ( HIDWORD(WPP_MAIN_CB.Reserved) )
    StorpTelemetryLogUnitDeviceStatisticsMeasures(a1, v11);
  else
LABEL_55:
    StorpTelemetryLogUnitDeviceStatisticsCriticalData(a1, v11);
  if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 8) != 0 )
    McTemplateK0qcccjjzssxqqbqbqbqbqbqbqb(
      WORD2(v11[13]),
      WORD1(v11[13]),
      LOWORD(v11[13]),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 88),
      *(_BYTE *)(a1 + 89),
      *(_BYTE *)(a1 + 90),
      a1 + 1720,
      *(_QWORD *)(a1 + 24) + 5192LL,
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4800LL),
      (__int64)v11,
      (__int64)&v11[1] + 1);
LABEL_7:
  ExFreePoolWithTag(v3, 0x65546152u);
}
