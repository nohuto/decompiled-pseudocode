/*
 * XREFs of PopPublishAndPurgePowerRequestStats @ 0x14076F51C
 * Callers:
 *     PopStatsNotifyPowerRequestCsState @ 0x14076F870 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x14006F020 (_TlgCreateWsz.c)
 *     RtlRandomEx @ 0x140071930 (RtlRandomEx.c)
 *     _TlgCreateSz @ 0x140076288 (_TlgCreateSz.c)
 *     PoQueryStopWatch @ 0x140077178 (PoQueryStopWatch.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x14027D824 (PopDiagTraceSleepStudyBlocker.c)
 *     PoResetStopWatch @ 0x14028210C (PoResetStopWatch.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x1405250AC (PopAvlDeleteStatsForPowerRequest.c)
 *     PopGetStopWatchByRequestType @ 0x140525114 (PopGetStopWatchByRequestType.c)
 *     PopGetBlockedPhaseGuid @ 0x14076F4F4 (PopGetBlockedPhaseGuid.c)
 */

__int64 __fastcall PopPublishAndPurgePowerRequestStats(volatile signed __int32 *Buffer, char a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned int v5; // edi
  _QWORD *StopWatchByRequestType; // rax
  __int64 v7; // rsi
  LPCWSTR v8; // r9
  GUID v9; // xmm0
  __int64 v10; // rcx
  __int64 result; // rax
  bool v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v16; // [rsp+44h] [rbp-BCh] BYREF
  ULONG Seed; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+60h] [rbp-A0h]
  GUID v20; // [rsp+70h] [rbp-90h] BYREF
  __int128 v21; // [rsp+80h] [rbp-80h] BYREF
  GUID v22; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+A0h] [rbp-60h] BYREF
  GUID *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  int *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  __int64 v28; // [rsp+D0h] [rbp-30h]
  int v29; // [rsp+D8h] [rbp-28h]
  int v30; // [rsp+DCh] [rbp-24h]
  __int128 *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 *v38; // [rsp+140h] [rbp+40h]
  __int64 v39; // [rsp+148h] [rbp+48h]
  BOOL *v40; // [rsp+150h] [rbp+50h]
  __int64 v41; // [rsp+158h] [rbp+58h]
  char *v42; // [rsp+160h] [rbp+60h]
  __int64 v43; // [rsp+168h] [rbp+68h]
  char v44; // [rsp+1A8h] [rbp+A8h] BYREF

  v44 = a2;
  v2 = -1LL;
  v4 = *((_QWORD *)Buffer + 2);
  do
    ++v2;
  while ( *(_WORD *)(v4 + 2 * v2) );
  v15 = v2;
  v23.Ptr = (ULONGLONG)&v44;
  v29 = 2 * v2;
  v28 = v4;
  *((_QWORD *)&v19 + 1) = 0LL;
  *(_QWORD *)&v23.Size = 1LL;
  v26 = &v15;
  v27 = 4LL;
  v30 = 0;
  v5 = 0;
  *(_QWORD *)&v19 = RtlRandomEx(&Seed);
  v21 = v19;
  v31 = &v21;
  v32 = 16LL;
  do
  {
    StopWatchByRequestType = PopGetStopWatchByRequestType((__int64)Buffer, v5);
    v7 = (__int64)StopWatchByRequestType;
    if ( StopWatchByRequestType )
    {
      v12 = 0;
      v14 = 0LL;
      PoQueryStopWatch(StopWatchByRequestType, (__int64 *)&v14, &v12);
      PoResetStopWatch(v7);
      if ( pCallbackContext.LevelPlus1 > 5 )
      {
        v16 = v12;
        v18 = v14 / 0xA / 0xF4240;
        v13 = v44;
        TlgCreateSz(&pDesc, "SleepStudy Blocker Event");
        TlgCreateWsz(&v37, v8);
        v39 = 8LL;
        v40 = &v16;
        v38 = &v18;
        v42 = &v13;
        v41 = 4LL;
        v43 = 1LL;
        TlgWrite(&pCallbackContext, &unk_14030CB62, 0LL, 0LL, 7u, &pData);
      }
      if ( v14 )
      {
        v9 = *PopGetBlockedPhaseGuid(&v20, v5);
        v25 = 16LL;
        v24 = &v22;
        v33 = &v14;
        v22 = v9;
        v34 = 8LL;
        PopDiagTraceSleepStudyBlocker(v10, &v23);
      }
    }
    ++v5;
  }
  while ( v5 < 4 );
  result = (unsigned int)_InterlockedExchangeAdd(Buffer, 0);
  if ( (int)result <= 0 )
    return PopAvlDeleteStatsForPowerRequest((char *)Buffer);
  return result;
}
