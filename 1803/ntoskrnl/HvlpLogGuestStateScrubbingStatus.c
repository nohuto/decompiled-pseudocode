/*
 * XREFs of HvlpLogGuestStateScrubbingStatus @ 0x1401A57C4
 * Callers:
 *     HvlPhase2Initialize @ 0x1401869A4 (HvlPhase2Initialize.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x140159B9C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140159BD4 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14015D800 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     HvlpWriteEventLog @ 0x14022DACC (HvlpWriteEventLog.c)
 */

char HvlpLogGuestStateScrubbingStatus()
{
  unsigned int v0; // edi
  _DWORD *v1; // rbx
  unsigned int *v2; // rsi
  char result; // al
  int v4; // [rsp+28h] [rbp-E0h] BYREF
  int v5; // [rsp+2Ch] [rbp-DCh] BYREF
  int v6; // [rsp+30h] [rbp-D8h] BYREF
  int v7; // [rsp+34h] [rbp-D4h] BYREF
  int v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  int v10; // [rsp+40h] [rbp-C8h] BYREF
  int v11; // [rsp+44h] [rbp-C4h] BYREF
  PHYSICAL_ADDRESS v12[3]; // [rsp+48h] [rbp-C0h] BYREF
  PHYSICAL_ADDRESS v13[3]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  int *v15; // [rsp+98h] [rbp-70h]
  __int64 v16; // [rsp+A0h] [rbp-68h]
  int *v17; // [rsp+A8h] [rbp-60h]
  __int64 v18; // [rsp+B0h] [rbp-58h]
  int *v19; // [rsp+B8h] [rbp-50h]
  __int64 v20; // [rsp+C0h] [rbp-48h]
  int *v21; // [rsp+C8h] [rbp-40h]
  __int64 v22; // [rsp+D0h] [rbp-38h]
  int *v23; // [rsp+D8h] [rbp-30h]
  __int64 v24; // [rsp+E0h] [rbp-28h]
  int *v25; // [rsp+E8h] [rbp-20h]
  __int64 v26; // [rsp+F0h] [rbp-18h]
  int *v27; // [rsp+F8h] [rbp-10h]
  __int64 v28; // [rsp+100h] [rbp-8h]
  _BYTE v29[16]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v30[2064]; // [rsp+118h] [rbp+10h] BYREF

  v0 = 0;
  v1 = (_DWORD *)HvlpAcquireHypercallPage(v13, 1, (__int64)v29, 8LL);
  v2 = (unsigned int *)HvlpAcquireHypercallPage(v12, 2, (__int64)v30, 1032LL);
  *v1 = 22;
  if ( !(unsigned __int16)HvcallInitiateHypercall() )
    v0 = *v2;
  HvlpReleaseHypercallPage((__int64)v12);
  result = HvlpReleaseHypercallPage((__int64)v13);
  if ( v0 )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    v16 = 4LL;
    v4 = v0 & 1;
    v18 = 4LL;
    UserData.Ptr = (ULONGLONG)&v4;
    v20 = 4LL;
    v22 = 4LL;
    v5 = (v0 >> 1) & 1;
    v15 = &v5;
    v24 = 4LL;
    v6 = (v0 >> 2) & 1;
    v17 = &v6;
    v26 = 4LL;
    v7 = (v0 >> 3) & 1;
    v19 = &v7;
    v28 = 4LL;
    v8 = (v0 >> 4) & 1;
    v21 = &v8;
    v9 = (v0 >> 5) & 1;
    v23 = &v9;
    v10 = (v0 >> 7) & 1;
    v25 = &v10;
    v11 = (v0 >> 8) & 1;
    v27 = &v11;
    result = HvlpWriteEventLog(&HV_EVENTLOG_GUEST_STATE_SCRUBBING, 8u, &UserData);
    if ( (v0 & 0x40) != 0 )
      return HvlpWriteEventLog(&HV_EVENTLOG_GUEST_STATE_SCRUBBING_DISABLED_CORE_SCHEDULER, 0, 0LL);
  }
  return result;
}
