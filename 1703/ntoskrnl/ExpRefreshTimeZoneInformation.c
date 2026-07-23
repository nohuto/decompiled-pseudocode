/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x1405A588C
 * Callers:
 *     ExpSetSystemTime @ 0x140409E44 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x1405A57F4 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x140716E0C (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x140026E40 (RtlTimeFieldsToTime.c)
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x140088A30 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x14010F0E0 (KeInitializeTimerEx.c)
 *     ExLocalTimeToSystemTime @ 0x140136510 (ExLocalTimeToSystemTime.c)
 *     RtlTimeToTimeFields @ 0x140144710 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181740 (ZwUpdateWnfStateData.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x1405579AC (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCutoverTimeToSystemTime @ 0x1405A5D50 (RtlCutoverTimeToSystemTime.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1405A5EB4 (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1405A60DC (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1405A61A8 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1406EB080 (RtlpSetTimeZoneInformationWorker.c)
 *     ExInitializeTimeRefresh @ 0x140808838 (ExInitializeTimeRefresh.c)
 */

char ExpRefreshTimeZoneInformation()
{
  BOOLEAN v0; // r9
  __int64 v1; // rdi
  LARGE_INTEGER v2; // rbx
  int v3; // esi
  BOOLEAN v4; // r9
  LARGE_INTEGER v5; // rbx
  int v6; // eax
  int v7; // edx
  __int64 v8; // r8
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
  unsigned __int64 Buffer; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER Time; // [rsp+58h] [rbp-B0h] BYREF
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
    goto LABEL_32;
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
    v7 = 0;
    LocalTime.QuadPart = 0LL;
    goto LABEL_18;
  }
  if ( !RtlCutoverTimeToSystemTime(&CutoverTimeFields, &SystemTime, &Time, v0)
    || !RtlCutoverTimeToSystemTime(&v35, &v31, &Time, v4) )
  {
LABEL_32:
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
        goto LABEL_15;
    }
    else if ( v2.QuadPart < v31.QuadPart || v2.QuadPart >= SystemTime.QuadPart )
    {
LABEL_15:
      LocalTime = v31;
      v5 = v31;
      goto LABEL_16;
    }
    LocalTime = SystemTime;
    v5 = SystemTime;
LABEL_41:
    v6 = v36;
    v7 = 2;
    goto LABEL_17;
  }
  v5.QuadPart = 0LL;
  LocalTime.QuadPart = 0LL;
  if ( SystemTime.QuadPart <= v31.QuadPart )
    goto LABEL_41;
LABEL_16:
  v6 = v34;
  v7 = 1;
LABEL_17:
  v3 += v6;
LABEL_18:
  ExpCurrentTimeZoneId = v7;
  if ( ExpLastTimeZoneBias != v3 )
  {
    Buffer = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData(&WNF_SEB_TIME_ZONE_CHANGE, &Buffer, 8u, 0LL, 0LL, 0, 0);
    v7 = ExpCurrentTimeZoneId;
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
  MEMORY[0xFFFFF78000000240] = v7;
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
