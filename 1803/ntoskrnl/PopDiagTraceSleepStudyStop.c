/*
 * XREFs of PopDiagTraceSleepStudyStop @ 0x140769204
 * Callers:
 *     PopWdiTimerWorkerThread @ 0x14027E770 (PopWdiTimerWorkerThread.c)
 * Callees:
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void PopDiagTraceSleepStudyStop()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+30h] [rbp-D0h] BYREF
  int v2; // [rsp+34h] [rbp-CCh] BYREF
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  int v4; // [rsp+3Ch] [rbp-C4h] BYREF
  int v5; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  void *v7; // [rsp+60h] [rbp-A0h]
  __int64 v8; // [rsp+68h] [rbp-98h]
  int *v9; // [rsp+70h] [rbp-90h]
  __int64 v10; // [rsp+78h] [rbp-88h]
  void *v11; // [rsp+80h] [rbp-80h]
  __int64 v12; // [rsp+88h] [rbp-78h]
  void *v13; // [rsp+90h] [rbp-70h]
  __int64 v14; // [rsp+98h] [rbp-68h]
  void *v15; // [rsp+A0h] [rbp-60h]
  __int64 v16; // [rsp+A8h] [rbp-58h]
  void *v17; // [rsp+B0h] [rbp-50h]
  __int64 v18; // [rsp+B8h] [rbp-48h]
  void *v19; // [rsp+C0h] [rbp-40h]
  __int64 v20; // [rsp+C8h] [rbp-38h]
  void *v21; // [rsp+D0h] [rbp-30h]
  __int64 v22; // [rsp+D8h] [rbp-28h]
  void *v23; // [rsp+E0h] [rbp-20h]
  __int64 v24; // [rsp+E8h] [rbp-18h]
  void *v25; // [rsp+F0h] [rbp-10h]
  __int64 v26; // [rsp+F8h] [rbp-8h]
  void *v27; // [rsp+100h] [rbp+0h]
  __int64 v28; // [rsp+108h] [rbp+8h]
  void *v29; // [rsp+110h] [rbp+10h]
  __int64 v30; // [rsp+118h] [rbp+18h]
  int *v31; // [rsp+120h] [rbp+20h]
  __int64 v32; // [rsp+128h] [rbp+28h]
  int *v33; // [rsp+130h] [rbp+30h]
  __int64 v34; // [rsp+138h] [rbp+38h]
  void *v35; // [rsp+140h] [rbp+40h]
  __int64 v36; // [rsp+148h] [rbp+48h]
  int *v37; // [rsp+150h] [rbp+50h]
  __int64 v38; // [rsp+158h] [rbp+58h]
  void *v39; // [rsp+160h] [rbp+60h]
  __int64 v40; // [rsp+168h] [rbp+68h]
  void *v41; // [rsp+170h] [rbp+70h]
  __int64 v42; // [rsp+178h] [rbp+78h]
  void *v43; // [rsp+180h] [rbp+80h]
  __int64 v44; // [rsp+188h] [rbp+88h]
  void *v45; // [rsp+190h] [rbp+90h]
  __int64 v46; // [rsp+198h] [rbp+98h]
  void *v47; // [rsp+1A0h] [rbp+A0h]
  __int64 v48; // [rsp+1A8h] [rbp+A8h]
  void *v49; // [rsp+1B0h] [rbp+B0h]
  __int64 v50; // [rsp+1B8h] [rbp+B8h]
  void *v51; // [rsp+1C0h] [rbp+C0h]
  __int64 v52; // [rsp+1C8h] [rbp+C8h]
  void *v53; // [rsp+1D0h] [rbp+D0h]
  __int64 v54; // [rsp+1D8h] [rbp+D8h]
  int *v55; // [rsp+1E0h] [rbp+E0h]
  __int64 v56; // [rsp+1E8h] [rbp+E8h]
  void *v57; // [rsp+1F0h] [rbp+F0h]
  __int64 v58; // [rsp+1F8h] [rbp+F8h]
  void *v59; // [rsp+200h] [rbp+100h]
  __int64 v60; // [rsp+208h] [rbp+108h]

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SPM_SCENARIO_STOP) )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      v1 = byte_1403A89D4 & 1;
      v8 = 8LL;
      v3 = byte_1403A89D5 & 1;
      v2 = ((unsigned __int8)byte_1403A89D5 >> 1) & 1;
      v5 = (unsigned __int8)byte_1403A8A20;
      UserData.Ptr = (ULONGLONG)&PopWdiScenarioStopEventData;
      v7 = &unk_1403A8988;
      v9 = &v1;
      v11 = &unk_1403A89D8;
      v13 = &unk_1403A89E0;
      v15 = &unk_1403A89E8;
      v17 = &unk_1403A8980;
      v19 = &unk_1403A897C;
      v21 = &unk_1403A89B8;
      v23 = &unk_1403A89F8;
      v25 = &unk_1403A8978;
      v27 = &unk_1403A89B0;
      v29 = &unk_1403A89D0;
      v31 = &v2;
      v33 = &v3;
      v35 = &unk_1403A89C0;
      v37 = &v4;
      v39 = &unk_1403A89FC;
      v41 = &unk_1403A8A00;
      v43 = &unk_1403A8A04;
      v45 = &unk_1403A8A08;
      v4 = ((unsigned __int8)byte_1403A89D5 >> 2) & 1;
      v10 = 4LL;
      v12 = 8LL;
      v14 = 8LL;
      v16 = 8LL;
      v18 = 8LL;
      v20 = 4LL;
      v22 = 8LL;
      v24 = 1LL;
      v26 = 4LL;
      v28 = 8LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 8LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v47 = &unk_1403A8A0C;
      v48 = 4LL;
      v49 = &unk_1403A8968;
      v50 = 4LL;
      v51 = &unk_1403A8970;
      v52 = 8LL;
      v53 = &unk_1403A8A1C;
      v54 = 4LL;
      v55 = &v5;
      v57 = &unk_1403A8A24;
      v59 = &unk_1403A8A28;
      v56 = 4LL;
      v58 = 4LL;
      v60 = 4LL;
      EtwWrite(v0, &POP_ETW_EVENT_SPM_SCENARIO_STOP, &PopDiagActivityId, 0x1Cu, &UserData);
    }
  }
}
