/*
 * XREFs of PopLogPowerRequestAction @ 0x140524A88
 * Callers:
 *     PopStatsCreatePowerRequest @ 0x14052439C (PopStatsCreatePowerRequest.c)
 *     PopStatsDeletePowerRequest @ 0x140524A08 (PopStatsDeletePowerRequest.c)
 *     PopStatsMarkPowerRequestActive @ 0x140524F90 (PopStatsMarkPowerRequestActive.c)
 *     PopStatsMarkPowerRequestInactive @ 0x140525174 (PopStatsMarkPowerRequestInactive.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x14076F870 (PopStatsNotifyPowerRequestCsState.c)
 *     PopStatsNotifyPowerRequestDamPhase @ 0x14076F8F0 (PopStatsNotifyPowerRequestDamPhase.c)
 *     PopStatsNotifyPowerRequestLpePhase @ 0x14076F96C (PopStatsNotifyPowerRequestLpePhase.c)
 * Callees:
 *     _TlgWrite @ 0x14000769C (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x14006F020 (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x140076288 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

int __fastcall PopLogPowerRequestAction(LPCSTR psz, __int64 a2, int *a3)
{
  int v3; // r10d
  int v5; // ecx
  __int64 v6; // rax
  LPCWSTR v7; // r9
  int v9; // [rsp+30h] [rbp-29h] BYREF
  int v10; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+70h] [rbp+17h] BYREF
  int *v14; // [rsp+80h] [rbp+27h]
  int v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+8Ch] [rbp+33h]
  int *v17; // [rsp+90h] [rbp+37h]
  int v18; // [rsp+98h] [rbp+3Fh]
  int v19; // [rsp+9Ch] [rbp+43h]

  v3 = 0;
  if ( a3 )
    v5 = *a3;
  else
    v5 = 0;
  if ( a2 )
  {
    v6 = *(_QWORD *)(a2 + 112);
    v3 = *(_DWORD *)(a2 + 28);
  }
  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    v10 = v5;
    v9 = v3;
    TlgCreateSz(&pDesc, psz);
    TlgCreateWsz(&v13, v7);
    v16 = 0;
    v19 = 0;
    v14 = &v9;
    v15 = 4;
    v18 = 4;
    v17 = &v10;
    LODWORD(v6) = TlgWrite(&pCallbackContext, &unk_14030CB04, 0LL, 0LL, 6u, &pData);
  }
  return v6;
}
