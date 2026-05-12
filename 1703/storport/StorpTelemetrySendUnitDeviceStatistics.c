/*
 * XREFs of StorpTelemetrySendUnitDeviceStatistics @ 0x1C000243C
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00026F0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     StorpTelemetryDeviceStatisticsCommand @ 0x1C0002564 (StorpTelemetryDeviceStatisticsCommand.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C00433C8 (StorpTelemetryLogUnitDeviceStatisticsCriticalData.c)
 *     StorpTelemetryLogUnitDeviceStatisticsMeasures @ 0x1C0043918 (StorpTelemetryLogUnitDeviceStatisticsMeasures.c)
 *     Template_qcccjjzssxqqbqbqbqbqbqbqb @ 0x1C0045DDC (Template_qcccjjzssxqqbqbqbqbqbqbqb.c)
 */

void __fastcall StorpTelemetrySendUnitDeviceStatistics(__int64 a1)
{
  char *PoolWithTag; // rax
  char *v3; // r12
  __int64 v4; // rbx
  __int64 v5; // r8
  void *v6; // rcx
  __int64 v7; // rcx
  int SecurityDescriptor; // ecx
  _QWORD v9[14]; // [rsp+E0h] [rbp-80h] BYREF

  memset(v9, 0, sizeof(v9));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x65546152u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  memset(PoolWithTag, 0, 0x1000uLL);
  v9[4] = v3;
  v9[8] = v3 + 2048;
  v9[5] = v3 + 512;
  v9[9] = v3 + 2560;
  v9[6] = v3 + 1024;
  v9[10] = v3 + 3072;
  v9[7] = v3 + 1536;
  v9[11] = v3 + 3584;
  if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v3, 0LL) < 0 || *(_BYTE *)(v9[4] + 8LL) <= 1u )
    goto LABEL_3;
  v4 = 0LL;
  while ( (unsigned int)v4 <= 7 )
  {
    v5 = *(unsigned __int8 *)(v4 + v9[4] + 9);
    switch ( *(_BYTE *)(v4 + v9[4] + 9) )
    {
      case 1:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v9[5], v5) >= 0 )
        {
          LOWORD(v9[12]) = 88;
          break;
        }
        v6 = (void *)v9[5];
        goto LABEL_35;
      case 2:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v9[6], v5) < 0 )
        {
          v6 = (void *)v9[6];
          goto LABEL_35;
        }
        WORD1(v9[12]) = 24;
        break;
      case 3:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v9[7], v5) < 0 )
        {
          v6 = (void *)v9[7];
          goto LABEL_35;
        }
        WORD2(v9[12]) = 72;
        break;
      case 4:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v9[8], v5) < 0 )
        {
          v6 = (void *)v9[8];
          goto LABEL_35;
        }
        HIWORD(v9[12]) = 24;
        break;
      case 5:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v9[9], v5) < 0 )
        {
          v6 = (void *)v9[9];
          goto LABEL_35;
        }
        LOWORD(v9[13]) = 112;
        break;
      case 6:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v9[10], v5) < 0 )
        {
          v6 = (void *)v9[10];
          goto LABEL_35;
        }
        WORD1(v9[13]) = 32;
        break;
      case 7:
        if ( (int)StorpTelemetryDeviceStatisticsCommand(a1, v9[11], v5) < 0 )
        {
          v6 = (void *)v9[11];
LABEL_35:
          memset(v6, 0, 0x200uLL);
          break;
        }
        WORD2(v9[13]) = 16;
        break;
    }
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= *(unsigned __int8 *)(v9[4] + 8LL) )
      break;
  }
  v7 = *(_QWORD *)(a1 + 96);
  if ( v7 )
  {
    v9[0] = *(_QWORD *)(v7 + 8);
    *(_OWORD *)((char *)&v9[1] + 1) = *(_OWORD *)(v7 + 16);
  }
  SecurityDescriptor = (int)WPP_MAIN_CB.SecurityDescriptor;
  if ( g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1 && !LODWORD(WPP_MAIN_CB.SecurityDescriptor)
    || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
  {
    goto LABEL_51;
  }
  if ( *(_BYTE *)(a1 + 1704) )
  {
    SecurityDescriptor = -1;
    LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
  }
  if ( *(_BYTE *)(a1 + 1705) )
  {
    SecurityDescriptor = -1;
    LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
  }
  if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
  {
    SecurityDescriptor = -1;
    LODWORD(WPP_MAIN_CB.SecurityDescriptor) = -1;
  }
  if ( SecurityDescriptor )
    StorpTelemetryLogUnitDeviceStatisticsMeasures(a1, v9);
  else
LABEL_51:
    StorpTelemetryLogUnitDeviceStatisticsCriticalData(a1, v9);
  if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 1) != 0 )
    Template_qcccjjzssxqqbqbqbqbqbqbqb(
      WORD2(v9[13]),
      WORD1(v9[13]),
      LOWORD(v9[13]),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_BYTE *)(a1 + 88),
      *(_BYTE *)(a1 + 89),
      *(_BYTE *)(a1 + 90),
      a1 + 1688,
      *(_QWORD *)(a1 + 24) + 5192LL,
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4800LL),
      (__int64)v9,
      (__int64)&v9[1] + 1);
LABEL_3:
  ExFreePoolWithTag(v3, 0x65546152u);
}
