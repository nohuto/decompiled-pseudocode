/*
 * XREFs of PopPublishAndPurgePowerRequestStats @ 0x14070C050
 * Callers:
 *     PopStatsNotifyPowerRequestCsState @ 0x14070C3A4 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     _TlgWrite @ 0x1400AE914 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1400B0934 (_TlgCreateSz.c)
 *     _TlgCreateWsz @ 0x1400BA358 (_TlgCreateWsz.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     PoQueryStopWatch @ 0x140128D50 (PoQueryStopWatch.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x140247084 (PopDiagTraceSleepStudyBlocker.c)
 *     PoResetStopWatch @ 0x14024C3FC (PoResetStopWatch.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14058D1BC (PopAvlDeleteStatsForPowerRequest.c)
 *     PopGetStopWatchByRequestType @ 0x14058D224 (PopGetStopWatchByRequestType.c)
 *     PopGetBlockedPhaseGuid @ 0x14070C024 (PopGetBlockedPhaseGuid.c)
 */

__int64 __fastcall PopPublishAndPurgePowerRequestStats(volatile signed __int32 *Buffer, char a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edi
  _QWORD *StopWatchByRequestType; // rax
  __int64 v8; // rsi
  LPCWSTR v9; // r9
  __int128 v10; // xmm0
  __int64 v11; // rcx
  __int64 result; // rax
  bool v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v17; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+50h] [rbp-B0h]
  _BYTE v20[16]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+70h] [rbp-90h] BYREF
  __int128 v22; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+90h] [rbp-70h] BYREF
  __int128 *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  int *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  __int64 v28; // [rsp+C0h] [rbp-40h]
  int v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+CCh] [rbp-34h]
  __int128 *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 *v38; // [rsp+130h] [rbp+30h]
  __int64 v39; // [rsp+138h] [rbp+38h]
  BOOL *v40; // [rsp+140h] [rbp+40h]
  __int64 v41; // [rsp+148h] [rbp+48h]
  char *v42; // [rsp+150h] [rbp+50h]
  __int64 v43; // [rsp+158h] [rbp+58h]
  char v44; // [rsp+198h] [rbp+98h] BYREF

  v44 = a2;
  v2 = -1LL;
  v4 = *((_QWORD *)Buffer + 2);
  do
    ++v2;
  while ( *(_WORD *)(v4 + 2 * v2) );
  v16 = v2;
  v23.Ptr = (ULONGLONG)&v44;
  v29 = 2 * v2;
  v28 = v4;
  *(_QWORD *)&v23.Size = 1LL;
  v26 = &v16;
  v27 = 4LL;
  v30 = 0;
  *((_QWORD *)&v19 + 1) = 0LL;
  v5 = ExGenRandom(1);
  LODWORD(v5) = v5 & 0x7FFFFFFF;
  v32 = 16LL;
  *(_QWORD *)&v19 = v5;
  v6 = 0;
  v21 = v19;
  v31 = &v21;
  do
  {
    StopWatchByRequestType = PopGetStopWatchByRequestType((__int64)Buffer, v6);
    v8 = (__int64)StopWatchByRequestType;
    if ( StopWatchByRequestType )
    {
      v13 = 0;
      v15 = 0LL;
      PoQueryStopWatch(StopWatchByRequestType, (__int64 *)&v15, &v13);
      PoResetStopWatch(v8);
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        v17 = v13;
        v18 = v15 / 0xA / 0xF4240;
        v14 = v44;
        TlgCreateSz(&pDesc, "SleepStudy Blocker Event");
        TlgCreateWsz(&v37, v9);
        v39 = 8LL;
        v40 = &v17;
        v38 = &v18;
        v42 = &v14;
        v41 = 4LL;
        v43 = 1LL;
        TlgWrite(&pCallbackContext, &unk_1402D2C89, 0LL, 0LL, 7u, &pData);
      }
      if ( v15 )
      {
        v10 = *(_OWORD *)PopGetBlockedPhaseGuid((__int64)v20, v6);
        v25 = 16LL;
        v24 = &v22;
        v33 = &v15;
        v22 = v10;
        v34 = 8LL;
        PopDiagTraceSleepStudyBlocker(v11, &v23);
      }
    }
    ++v6;
  }
  while ( v6 < 4 );
  result = (unsigned int)_InterlockedExchangeAdd(Buffer, 0);
  if ( (int)result <= 0 )
    return PopAvlDeleteStatsForPowerRequest((char *)Buffer);
  return result;
}
