/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x14062FA98
 * Callers:
 *     ExpSetSystemTime @ 0x1404710F4 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x14062FA00 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1407BD00C (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeInitializeDpc @ 0x140038FE0 (KeInitializeDpc.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     RtlTimeFieldsToTime @ 0x1400C0BA0 (RtlTimeFieldsToTime.c)
 *     KeInitializeTimerEx @ 0x1401325F0 (KeInitializeTimerEx.c)
 *     RtlTimeToTimeFields @ 0x1401457D0 (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x14014D0A0 (ExLocalTimeToSystemTime.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401AAD80 (ZwUpdateWnfStateData.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140588E84 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCutoverTimeToSystemTime @ 0x14062FF6C (RtlCutoverTimeToSystemTime.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1406300CC (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1406302F4 (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1406303C0 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14078689C (RtlpSetTimeZoneInformationWorker.c)
 *     ExInitializeTimeRefresh @ 0x1408B1178 (ExInitializeTimeRefresh.c)
 */

char ExpRefreshTimeZoneInformation()
{
  BOOLEAN v0; // r9
  __int64 v1; // rdi
  LARGE_INTEGER v2; // rbx
  int v3; // esi
  BOOLEAN v4; // r9
  LARGE_INTEGER v5; // rbx
  int v6; // edx
  int v7; // eax
  __int64 v8; // rdx
  char *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int16 Year; // bx
  LARGE_INTEGER v22; // rax
  __int16 v23; // bx
  char result; // al
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  LARGE_INTEGER Time; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD Buffer[2]; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v28; // [rsp+60h] [rbp-A8h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v31; // [rsp+80h] [rbp-88h] BYREF
  char ValueData[68]; // [rsp+88h] [rbp-80h] BYREF
  _TIME_FIELDS CutoverTimeFields; // [rsp+CCh] [rbp-3Ch] BYREF
  int v34; // [rsp+DCh] [rbp-2Ch]
  _TIME_FIELDS v35; // [rsp+120h] [rbp+18h] BYREF
  int v36; // [rsp+130h] [rbp+28h]
  __int16 v37; // [rsp+134h] [rbp+2Ch]
  char v38; // [rsp+234h] [rbp+12Ch]

  if ( !ExpTimeZoneWorkItem.WorkerRoutine )
  {
    ExInitializeTimeRefresh();
    KeInitializeDpc(&ExpTimeZoneDpc, (PKDEFERRED_ROUTINE)ExpTimeZoneDpcRoutine, &ExpOkToTimeZoneRefresh);
    ExpTimeZoneWorkItem.Parameter = 0LL;
    ExpTimeZoneWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeZoneWork;
    ExpTimeZoneWorkItem.List.Flink = 0LL;
    KeInitializeTimerEx(&ExpTimeZoneTimer, NotificationTimer);
    KeInitializeDpc(&ExpNextYearDpc, (PKDEFERRED_ROUTINE)ExpNextYearDpcRoutine, &ExpOkToTimeZoneRefresh);
    ExpNextYearWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeZoneWork;
    ExpNextYearWorkItem.Parameter = 0LL;
    ExpNextYearWorkItem.List.Flink = 0LL;
    KeInitializeTimerEx(&ExpNextYearTimer, NotificationTimer);
    KeInitializeDpc(&ExpCenturyDpc, (PKDEFERRED_ROUTINE)ExpCenturyDpcRoutine, &ExpOkToTimeZoneRefresh);
    ExpCenturyWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ExpTimeZoneWork;
    ExpCenturyWorkItem.Parameter = 0LL;
    ExpCenturyWorkItem.List.Flink = 0LL;
    KeInitializeTimerEx(&ExpCenturyTimer, NotificationTimer);
    *(_QWORD *)&ExpNextCenturyTimeFieldsInLocalTime.Year = 0x100010000LL;
    *(_QWORD *)&ExpNextCenturyTimeFieldsInLocalTime.Minute = 0x100000000LL;
    *(_QWORD *)&ExpNextYearTimeFieldsInLocalTime.Year = 0x100010000LL;
    *(_QWORD *)&ExpNextYearTimeFieldsInLocalTime.Minute = 0x100000000LL;
  }
  if ( (int)RtlpQueryTimeZoneInformationWorker(ValueData, 0x1B0uLL) < 0 )
    goto LABEL_33;
  v1 = MEMORY[0xFFFFF78000000014];
  v2.QuadPart = MEMORY[0xFFFFF78000000014] - ExpTimeZoneBias;
  Time.QuadPart = MEMORY[0xFFFFF78000000014] - ExpTimeZoneBias;
  if ( !v38 )
  {
    if ( v37 )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( (unsigned __int8)RtlpCheckDynamicTimeZoneInformation(ValueData) )
        RtlpSetTimeZoneInformationWorker(ValueData);
    }
  }
  v3 = *(_DWORD *)ValueData;
  if ( !CutoverTimeFields.Month || !v35.Month )
  {
    KeCancelTimer(&ExpTimeZoneTimer);
    v5.QuadPart = 0LL;
    ExpCurrentTimeZoneId = 0;
    LocalTime.QuadPart = 0LL;
    goto LABEL_19;
  }
  if ( !RtlCutoverTimeToSystemTime(&CutoverTimeFields, &SystemTime, &Time, v0)
    || !RtlCutoverTimeToSystemTime(&v35, &v31, &Time, v4) )
  {
LABEL_33:
    ++ExpRefreshFailures;
    result = 0;
    ExpSystemIsInCmosMode = 1;
    return result;
  }
  if ( v2.QuadPart < v31.QuadPart || v2.QuadPart < SystemTime.QuadPart )
  {
    if ( v31.QuadPart >= SystemTime.QuadPart )
    {
      if ( v2.QuadPart >= SystemTime.QuadPart && v2.QuadPart < v31.QuadPart )
      {
        v5 = v31;
        LocalTime = v31;
        ExpCurrentTimeZoneId = 1;
        goto LABEL_17;
      }
    }
    else if ( v2.QuadPart < v31.QuadPart || v2.QuadPart >= SystemTime.QuadPart )
    {
      v5 = v31;
      LocalTime = v31;
      v6 = 1;
      goto LABEL_16;
    }
    v6 = 2;
    LocalTime = SystemTime;
    v5 = SystemTime;
  }
  else
  {
    v5.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    v6 = (SystemTime.QuadPart <= v31.QuadPart) + 1;
  }
LABEL_16:
  v7 = v36;
  ExpCurrentTimeZoneId = v6;
  if ( v6 != 2 )
LABEL_17:
    v7 = v34;
  v3 += v7;
LABEL_19:
  if ( ExpLastTimeZoneBias != v3 )
  {
    Buffer[1] = -1;
    Buffer[0] = 0;
    ZwUpdateWnfStateData(&WNF_SEB_TIME_ZONE_CHANGE, Buffer, 8u, 0LL, 0LL, 0, 0);
  }
  v8 = 3LL;
  ExpLastTimeZoneBias = v3;
  v9 = ValueData;
  ExpTimeZoneBias = 600000000LL * v3;
  v10 = &ExpTimeZoneInformation;
  do
  {
    v11 = *((_OWORD *)v9 + 1);
    *v10 = *(_OWORD *)v9;
    v12 = *((_OWORD *)v9 + 2);
    v10[1] = v11;
    v13 = *((_OWORD *)v9 + 3);
    v10[2] = v12;
    v14 = *((_OWORD *)v9 + 4);
    v10[3] = v13;
    v15 = *((_OWORD *)v9 + 5);
    v10[4] = v14;
    v16 = *((_OWORD *)v9 + 6);
    v10[5] = v15;
    v17 = *((_OWORD *)v9 + 7);
    v9 += 128;
    v10[6] = v16;
    v10 += 8;
    *(v10 - 1) = v17;
    --v8;
  }
  while ( v8 );
  v18 = *(_OWORD *)v9;
  ExpSystemIsInCmosMode = 0;
  v19 = *((_OWORD *)v9 + 1);
  *v10 = v18;
  v20 = *((_OWORD *)v9 + 2);
  v10[1] = v19;
  v10[2] = v20;
  MEMORY[0xFFFFF78000000240] = ExpCurrentTimeZoneId;
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v5.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, &ExpNextSystemCutoverInUTC);
    KiSetTimerEx((__int64)&ExpTimeZoneTimer, ExpNextSystemCutoverInUTC.QuadPart, 0, 0, (__int64)&ExpTimeZoneDpc);
  }
  Year = TimeFields.Year;
  ExpNextCenturyTimeFieldsInLocalTime.Year = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime(&ExpNextCenturyTimeFieldsInLocalTime, &v28);
  ExLocalTimeToSystemTime(&v28, &ExpNextCenturyTimeInUTC);
  KiSetTimerEx((__int64)&ExpCenturyTimer, ExpNextCenturyTimeInUTC.QuadPart, 0, 0, (__int64)&ExpCenturyDpc);
  ExpNextYearTimeFieldsInLocalTime.Year = Year + 1;
  RtlTimeFieldsToTime(&ExpNextYearTimeFieldsInLocalTime, &v28);
  ExLocalTimeToSystemTime(&v28, &ExpNextYearTimeInUTC);
  KiSetTimerEx((__int64)&ExpNextYearTimer, ExpNextYearTimeInUTC.QuadPart, 0, 0, (__int64)&ExpNextYearDpc);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  MEMORY[0xFFFFF78000000028] = HIDWORD(ExpTimeZoneBias);
  MEMORY[0xFFFFF78000000020] = ExpTimeZoneBias;
  MEMORY[0xFFFFF780000003C8] = v1;
  if ( LocalTime.QuadPart )
    v22 = ExpNextSystemCutoverInUTC;
  else
    v22.QuadPart = ExpNextYearTimeInUTC.QuadPart - 10000;
  MEMORY[0xFFFFF780000003D0] = v22.QuadPart;
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias();
  v23 = TimeFields.Year;
  if ( TimeFields.Year != ExpLastDynamicTimeZoneYear )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      ExpLastDynamicTimeZoneYear = v23;
  }
  return 1;
}
