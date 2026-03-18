/*
 * XREFs of PopDiagTraceSleepStudyStop @ 0x1406CDE48
 * Callers:
 *     PopWdiTimerWorkerThread @ 0x140233180 (PopWdiTimerWorkerThread.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void PopDiagTraceSleepStudyStop()
{
  REGHANDLE v0; // rbx
  int v1; // [rsp+30h] [rbp-D0h] BYREF
  int v2; // [rsp+34h] [rbp-CCh] BYREF
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  int v4; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  void *v6; // [rsp+50h] [rbp-B0h]
  __int64 v7; // [rsp+58h] [rbp-A8h]
  int *v8; // [rsp+60h] [rbp-A0h]
  __int64 v9; // [rsp+68h] [rbp-98h]
  void *v10; // [rsp+70h] [rbp-90h]
  __int64 v11; // [rsp+78h] [rbp-88h]
  void *v12; // [rsp+80h] [rbp-80h]
  __int64 v13; // [rsp+88h] [rbp-78h]
  void *v14; // [rsp+90h] [rbp-70h]
  __int64 v15; // [rsp+98h] [rbp-68h]
  void *v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  void *v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  void *v20; // [rsp+C0h] [rbp-40h]
  __int64 v21; // [rsp+C8h] [rbp-38h]
  void *v22; // [rsp+D0h] [rbp-30h]
  __int64 v23; // [rsp+D8h] [rbp-28h]
  void *v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  void *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  void *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  int *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  int *v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  void *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  int *v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]
  void *v38; // [rsp+150h] [rbp+50h]
  __int64 v39; // [rsp+158h] [rbp+58h]
  void *v40; // [rsp+160h] [rbp+60h]
  __int64 v41; // [rsp+168h] [rbp+68h]
  void *v42; // [rsp+170h] [rbp+70h]
  __int64 v43; // [rsp+178h] [rbp+78h]
  void *v44; // [rsp+180h] [rbp+80h]
  __int64 v45; // [rsp+188h] [rbp+88h]
  void *v46; // [rsp+190h] [rbp+90h]
  __int64 v47; // [rsp+198h] [rbp+98h]

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SPM_SCENARIO_STOP) )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      v1 = byte_14034A484 & 1;
      v7 = 8LL;
      v3 = byte_14034A485 & 1;
      v2 = ((unsigned __int8)byte_14034A485 >> 1) & 1;
      v4 = ((unsigned __int8)byte_14034A485 >> 2) & 1;
      UserData.Ptr = (ULONGLONG)&PopWdiScenarioStopEventData;
      v6 = &unk_14034A438;
      v8 = &v1;
      v10 = &unk_14034A488;
      v12 = &unk_14034A490;
      v14 = &unk_14034A498;
      v16 = &unk_14034A430;
      v18 = &unk_14034A428;
      v20 = &unk_14034A468;
      v22 = &unk_14034A4A8;
      v24 = &unk_14034A424;
      v26 = &unk_14034A460;
      v28 = &unk_14034A480;
      v30 = &v2;
      v32 = &v3;
      v34 = &unk_14034A470;
      v36 = &v4;
      v38 = &unk_14034A4AC;
      v40 = &unk_14034A4B0;
      v42 = &unk_14034A4B4;
      v44 = &unk_14034A4B8;
      v46 = &unk_14034A4BC;
      v9 = 4LL;
      v11 = 8LL;
      v13 = 8LL;
      v15 = 8LL;
      v17 = 8LL;
      v19 = 4LL;
      v21 = 8LL;
      v23 = 1LL;
      v25 = 4LL;
      v27 = 8LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 8LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 4LL;
      v47 = 4LL;
      EtwWrite(v0, &POP_ETW_EVENT_SPM_SCENARIO_STOP, &PopDiagActivityId, 0x16u, &UserData);
    }
  }
}
