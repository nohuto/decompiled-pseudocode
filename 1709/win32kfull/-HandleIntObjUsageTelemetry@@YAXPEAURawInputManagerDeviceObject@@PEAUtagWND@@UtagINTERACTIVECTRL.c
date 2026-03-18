/*
 * XREFs of ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C02224D0
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C022240C (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memcmp @ 0x1C0143590 (memcmp.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z @ 0x1C01A220C (-TraceLoggingIntObjUsageSummaryEvent@@YAXPEAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z.c)
 *     ?ProcessGetAppSessionGuid@@YA?AU_GUID@@PEAUtagPROCESSINFO@@@Z @ 0x1C0222814 (-ProcessGetAppSessionGuid@@YA-AU_GUID@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@_K@Z @ 0x1C0222870 (-UpdateIntObjUsage@@YAXPEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYP.c)
 */

__int64 __fastcall HandleIntObjUsageTelemetry(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rsi
  struct tagPROCESSINFO *v12; // rdx
  GUID v13; // xmm7
  struct tagPROCESSINFO *v14; // rdx
  GUID v15; // xmm6
  __int64 v16; // rdi
  __int64 v17; // rbx
  struct tagINTOBJTELEMETRYSTATE *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // xmm1_8
  int v21; // eax
  unsigned __int64 v24; // [rsp+40h] [rbp-C8h]
  GUID v26; // [rsp+58h] [rbp-B0h] BYREF
  GUID v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+78h] [rbp-90h]
  int v29; // [rsp+80h] [rbp-88h]
  _BYTE Buf2[96]; // [rsp+88h] [rbp-80h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  *(_QWORD *)&v26.Data1 = 0LL;
  v9 = 0LL;
  *(_QWORD *)v26.Data4 = 0LL;
  v10 = 0LL;
  v11 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / gliQpcFreq;
  *(_QWORD *)&v27.Data1 = 0LL;
  v24 = v11 - gmsLastUsageTelemetrySentTime;
  *(_QWORD *)v27.Data4 = 0LL;
  if ( gptiForeground && (v12 = *(struct tagPROCESSINFO **)(gptiForeground + 400LL)) != 0LL )
  {
    v13 = *ProcessGetAppSessionGuid(&v26, v12);
    v26 = v13;
    v9 = *(_QWORD *)v13.Data4;
    v7 = *(_QWORD *)&v13.Data1;
  }
  else
  {
    v13 = v26;
  }
  if ( a2 && (v14 = *(struct tagPROCESSINFO **)(*(_QWORD *)(a2 + 16) + 400LL)) != 0LL )
  {
    v15 = *ProcessGetAppSessionGuid(&v27, v14);
    v27 = v15;
    v10 = *(_QWORD *)v15.Data4;
    v8 = *(_QWORD *)&v15.Data1;
  }
  else
  {
    v15 = v27;
  }
  if ( v24 > 0xEA60 )
    goto LABEL_16;
  v16 = v7 - *(_QWORD *)&gLastForegroundAppSessionGuid.Data1;
  if ( !v16 )
    v16 = v9 - *(_QWORD *)gLastForegroundAppSessionGuid.Data4;
  if ( v16 )
    goto LABEL_16;
  v17 = v8 - *(_QWORD *)&gLastTargetAppSessionGuid.Data1;
  if ( !v17 )
    v17 = v10 - *(_QWORD *)gLastTargetAppSessionGuid.Data4;
  if ( v17 )
  {
LABEL_16:
    memset(Buf2, 0, sizeof(Buf2));
    if ( memcmp(&gIntObjTelemetryState, Buf2, 0x60uLL) )
    {
      if ( gmsInputEndTime < gmsInputStartTime )
      {
        v18 = (dword_1C033406C & 2) != 0 ? (struct tagINTOBJTELEMETRYSTATE *)0x30 : 0LL;
        *(struct tagINTOBJTELEMETRYSTATE near **)((char *)&gIntObjTelemetryState + (_QWORD)v18 + 40) = (struct tagINTOBJTELEMETRYSTATE near *)(*(char **)((char *)&gIntObjTelemetryState + (_QWORD)v18 + 40) + v11 - gmsInputStartTime);
      }
      v27 = gLastTargetAppSessionGuid;
      v19 = *(_QWORD *)(a1 + 520);
      v26 = gLastForegroundAppSessionGuid;
      TraceLoggingIntObjUsageSummaryEvent(v18, *(_WORD *)(v19 + 110), *(_WORD *)(v19 + 112), &v26, &v27, v24);
      memset(&gIntObjTelemetryState, 0, 0x60uLL);
    }
    gmsInputStartTime = v11;
    gmsLastUsageTelemetrySentTime = v11;
    gLastForegroundAppSessionGuid = v13;
    gLastTargetAppSessionGuid = v15;
  }
  v20 = *(_QWORD *)(a3 + 16);
  v21 = *(_DWORD *)(a3 + 24);
  v27 = *(GUID *)a3;
  v28 = v20;
  v29 = v21;
  return UpdateIntObjUsage(a2, &v27, a4, a5, v11);
}
