/*
 * XREFs of ?InitializeInputSensors@@YAJXZ @ 0x1C0130BA4
 * Callers:
 *     UserActivateMITInputProcessingHelper @ 0x1C0130E60 (UserActivateMITInputProcessingHelper.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0123060 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0124210 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     WPP_RECORDER_SF_sd @ 0x1C012DA2C (WPP_RECORDER_SF_sd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InitializeInputSensors(__int64 a1, __int64 a2)
{
  CMouseSensor **v2; // rsi
  __int64 v3; // rdi
  CBaseInput **v4; // rbx
  int v5; // eax
  int v6; // eax
  unsigned __int16 v7; // r9
  __int64 v8; // rbx
  int v9; // edi
  __int64 v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-18h]

  v2 = &qword_1C019A5A8;
  v3 = 0LL;
  v4 = &qword_1C019A5A8;
  while ( 1 )
  {
    v5 = *((_DWORD *)v4 - 2);
    if ( v5 != 2 )
    {
      if ( v5 != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
      goto LABEL_7;
    }
    LODWORD(a1) = CBaseInput::InitializeSensor(*v4);
    if ( (int)a1 < 0 )
      break;
    v6 = CBaseInput::RegisterDispatcherObject((char **)*v4, gpIOCPDispatcher);
    a1 = (unsigned int)v6;
    if ( v6 < 0 )
    {
      v7 = 21;
      goto LABEL_11;
    }
LABEL_7:
    v3 = (unsigned int)(v3 + 1);
    v4 += 6;
    if ( (unsigned int)v3 >= 3 )
      goto LABEL_12;
  }
  v7 = 20;
LABEL_11:
  v12 = a1;
  WPP_RECORDER_SF_sd(
    (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
    2u,
    2u,
    v7,
    (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids,
    (const char *)s_rgSensorMap[6 * v3 + 5],
    v12);
LABEL_12:
  v8 = 0LL;
  while ( 1 )
  {
    v9 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)*v2 + 16LL))(*v2);
    if ( v9 < 0 )
      break;
    v8 = (unsigned int)(v8 + 1);
    v2 += 6;
    if ( (unsigned int)v8 >= 3 )
      return (unsigned int)v9;
  }
  LODWORD(v11) = v9;
  WPP_RECORDER_SF_sd(
    (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
    2u,
    2u,
    0x16u,
    (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids,
    (const char *)s_rgSensorMap[6 * v8 + 5],
    v11);
  return (unsigned int)v9;
}
