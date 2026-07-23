/*
 * XREFs of ExpRefreshTimeZoneInformation @ 0x1405C1FB4
 * Callers:
 *     ExpSetSystemTime @ 0x14043A934 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x1405C1F1C (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14075653C (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlTimeToTimeFields @ 0x1400134F0 (RtlTimeToTimeFields.c)
 *     KeInitializeTimerEx @ 0x140025A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400B2860 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     RtlTimeFieldsToTime @ 0x14011C830 (RtlTimeFieldsToTime.c)
 *     ExLocalTimeToSystemTime @ 0x140145660 (ExLocalTimeToSystemTime.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140181140 (ZwUpdateWnfStateData.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x140578AF4 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlCutoverTimeToSystemTime @ 0x1405C2488 (RtlCutoverTimeToSystemTime.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1405C25EC (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1405C2814 (RtlSetActiveTimeBias.c)
 *     RtlpCheckDynamicTimeZoneInformation @ 0x1405C28E0 (RtlpCheckDynamicTimeZoneInformation.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x140722FCC (RtlpSetTimeZoneInformationWorker.c)
 *     ExInitializeTimeRefresh @ 0x14083CB54 (ExInitializeTimeRefresh.c)
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
  __int64 v7; // rdx
  char *v8; // rcx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int16 Year; // bx
  LARGE_INTEGER v21; // rax
  __int16 v22; // bx
  char result; // al
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 Buffer; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER Time; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v27; // [rsp+60h] [rbp-A8h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+68h] [rbp-A0h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER v30; // [rsp+80h] [rbp-88h] BYREF
  char ValueData[68]; // [rsp+88h] [rbp-80h] BYREF
  _TIME_FIELDS CutoverTimeFields; // [rsp+CCh] [rbp-3Ch] BYREF
  int v33; // [rsp+DCh] [rbp-2Ch]
  _TIME_FIELDS v34; // [rsp+120h] [rbp+18h] BYREF
  int v35; // [rsp+130h] [rbp+28h]
  __int16 v36; // [rsp+134h] [rbp+2Ch]
  char v37; // [rsp+234h] [rbp+12Ch]

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
  if ( !v37 )
  {
    if ( v36 )
    {
      RtlTimeToTimeFields(&Time, &TimeFields);
      if ( (unsigned __int8)RtlpCheckDynamicTimeZoneInformation(ValueData) )
        RtlpSetTimeZoneInformationWorker(ValueData);
    }
  }
  v3 = *(_DWORD *)ValueData;
  if ( !CutoverTimeFields.Month || !v34.Month )
  {
    KeCancelTimer(&ExpTimeZoneTimer);
    v5.QuadPart = 0LL;
    ExpCurrentTimeZoneId = 0;
    LocalTime.QuadPart = 0LL;
    goto LABEL_19;
  }
  if ( !RtlCutoverTimeToSystemTime(&CutoverTimeFields, &SystemTime, &Time, v0)
    || !RtlCutoverTimeToSystemTime(&v34, &v30, &Time, v4) )
  {
LABEL_33:
    ++ExpRefreshFailures;
    result = 0;
    ExpSystemIsInCmosMode = 1;
    return result;
  }
  if ( v2.QuadPart >= SystemTime.QuadPart && v2.QuadPart >= v30.QuadPart )
  {
    v5.QuadPart = 0LL;
    LocalTime.QuadPart = 0LL;
    if ( SystemTime.QuadPart <= v30.QuadPart )
      goto LABEL_17;
LABEL_40:
    v6 = v33;
    ExpCurrentTimeZoneId = 1;
    goto LABEL_18;
  }
  if ( v30.QuadPart >= SystemTime.QuadPart )
  {
    if ( v2.QuadPart < SystemTime.QuadPart || v2.QuadPart >= v30.QuadPart )
      goto LABEL_16;
LABEL_39:
    LocalTime = v30;
    v5 = v30;
    goto LABEL_40;
  }
  if ( v2.QuadPart < v30.QuadPart || v2.QuadPart >= SystemTime.QuadPart )
    goto LABEL_39;
LABEL_16:
  LocalTime = SystemTime;
  v5 = SystemTime;
LABEL_17:
  ExpCurrentTimeZoneId = 2;
  v6 = v35;
LABEL_18:
  v3 += v6;
LABEL_19:
  if ( ExpLastTimeZoneBias != v3 )
  {
    Buffer = 0xFFFFFFFF00000000uLL;
    ZwUpdateWnfStateData(&WNF_SEB_TIME_ZONE_CHANGE, &Buffer, 8u, 0LL, 0LL, 0, 0);
  }
  v7 = 3LL;
  ExpLastTimeZoneBias = v3;
  v8 = ValueData;
  ExpTimeZoneBias = 600000000LL * v3;
  v9 = &ExpTimeZoneInformation;
  do
  {
    v10 = *((_OWORD *)v8 + 1);
    *v9 = *(_OWORD *)v8;
    v11 = *((_OWORD *)v8 + 2);
    v9[1] = v10;
    v12 = *((_OWORD *)v8 + 3);
    v9[2] = v11;
    v13 = *((_OWORD *)v8 + 4);
    v9[3] = v12;
    v14 = *((_OWORD *)v8 + 5);
    v9[4] = v13;
    v15 = *((_OWORD *)v8 + 6);
    v9[5] = v14;
    v16 = *((_OWORD *)v8 + 7);
    v8 += 128;
    v9[6] = v15;
    v9 += 8;
    *(v9 - 1) = v16;
    --v7;
  }
  while ( v7 );
  v17 = *(_OWORD *)v8;
  ExpSystemIsInCmosMode = 0;
  v18 = *((_OWORD *)v8 + 1);
  *v9 = v17;
  v19 = *((_OWORD *)v8 + 2);
  v9[1] = v18;
  v9[2] = v19;
  MEMORY[0xFFFFF78000000240] = ExpCurrentTimeZoneId;
  RtlTimeToTimeFields(&Time, &TimeFields);
  if ( v5.QuadPart )
  {
    ExLocalTimeToSystemTime(&LocalTime, &ExpNextSystemCutoverInUTC);
    KiSetTimerEx((__int64)&ExpTimeZoneTimer, ExpNextSystemCutoverInUTC.QuadPart, 0, 0, (__int64)&ExpTimeZoneDpc);
  }
  Year = TimeFields.Year;
  ExpNextCenturyTimeFieldsInLocalTime.Year = 100 * (TimeFields.Year / 100 + 1);
  RtlTimeFieldsToTime(&ExpNextCenturyTimeFieldsInLocalTime, &v27);
  ExLocalTimeToSystemTime(&v27, &ExpNextCenturyTimeInUTC);
  KiSetTimerEx((__int64)&ExpCenturyTimer, ExpNextCenturyTimeInUTC.QuadPart, 0, 0, (__int64)&ExpCenturyDpc);
  ExpNextYearTimeFieldsInLocalTime.Year = Year + 1;
  RtlTimeFieldsToTime(&ExpNextYearTimeFieldsInLocalTime, &v27);
  ExLocalTimeToSystemTime(&v27, &ExpNextYearTimeInUTC);
  KiSetTimerEx((__int64)&ExpNextYearTimer, ExpNextYearTimeInUTC.QuadPart, 0, 0, (__int64)&ExpNextYearDpc);
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  MEMORY[0xFFFFF78000000028] = HIDWORD(ExpTimeZoneBias);
  MEMORY[0xFFFFF78000000020] = ExpTimeZoneBias;
  MEMORY[0xFFFFF780000003C8] = v1;
  if ( LocalTime.QuadPart )
    v21 = ExpNextSystemCutoverInUTC;
  else
    v21.QuadPart = ExpNextYearTimeInUTC.QuadPart - 10000;
  MEMORY[0xFFFFF780000003D0] = v21.QuadPart;
  _InterlockedAdd((volatile signed __int32 *)0xFFFFF7800000025CLL, 1u);
  if ( !ExpRealTimeIsUniversal )
    RtlSetActiveTimeBias();
  v22 = TimeFields.Year;
  if ( TimeFields.Year != ExpLastDynamicTimeZoneYear )
  {
    if ( (unsigned __int8)RtlpUpdateDynamicTimeZones((unsigned __int16)TimeFields.Year) )
      ExpLastDynamicTimeZoneYear = v22;
  }
  return 1;
}
