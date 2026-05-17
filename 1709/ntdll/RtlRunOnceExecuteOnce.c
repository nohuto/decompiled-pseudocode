/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x1800367D0
 * Callers:
 *     RtlQueryResourcePolicy @ 0x180007560 (RtlQueryResourcePolicy.c)
 *     EtwpRegisterProvider @ 0x18003652C (EtwpRegisterProvider.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18006DBB4 (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpHpTagRunOnceInit @ 0x18006F140 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpMetadataAlloc @ 0x18006F214 (RtlpHpMetadataAlloc.c)
 *     RtlSetHeapInformation @ 0x18007D960 (RtlSetHeapInformation.c)
 *     RtlRandomEx @ 0x18007DD70 (RtlRandomEx.c)
 *     LdrpResReportResourceAccessInternal @ 0x18007F19C (LdrpResReportResourceAccessInternal.c)
 *     LdrpLogCFGModuleInfoTelemetry @ 0x18007F364 (LdrpLogCFGModuleInfoTelemetry.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180088C08 (RtlpQueryDiskSpeedPolicy.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800D2168 (LdrpLogIntegrityContinuityTelemetry.c)
 *     RtlpHpPerHeapStackTraceInitialize @ 0x1800FFD30 (RtlpHpPerHeapStackTraceInitialize.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18010080C (RtlpHpStackTraceHeapGetContext.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x180078C00 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x180087308 (RtlpRunOnceWaitForInit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlReportCriticalFailure @ 0x1800F8394 (RtlReportCriticalFailure.c)
 */

__int64 __fastcall RtlRunOnceExecuteOnce(
        volatile signed __int64 *a1,
        unsigned int (__fastcall *a2)(volatile signed __int64 *, __int64, unsigned __int64 *),
        __int64 a3,
        unsigned __int64 *a4)
{
  signed __int64 v4; // rax
  unsigned int v9; // edi
  signed __int64 v11; // rdx
  signed __int64 v12; // rcx
  int v13; // ebx
  char v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( (*a1 & 3) == 2 )
  {
LABEL_2:
    if ( a4 )
      *a4 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
    return 0;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = v4 & 3;
        if ( (v4 & 3) != 0 )
          break;
        v12 = v4;
        v4 = _InterlockedCompareExchange64(a1, 1LL, v4);
        if ( v4 == v12 )
        {
          if ( a2(a1, a3, a4) )
          {
            v13 = RtlRunOnceComplete(a1, 0LL);
            if ( v13 >= 0 )
              return 0;
            v14[0] = 1;
          }
          else
          {
            v9 = -1073741823;
            v13 = RtlRunOnceComplete(a1, 4LL);
            if ( v13 >= 0 )
              return v9;
            v14[0] = 2;
          }
          goto LABEL_17;
        }
      }
      if ( v11 != 1 )
        break;
      v4 = RtlpRunOnceWaitForInit(v4, a1);
    }
    if ( v11 != 3 )
      goto LABEL_2;
    v13 = -1073741584;
    v14[0] = 0;
LABEL_17:
    RtlReportCriticalFailure((unsigned int)v13, v14, 1LL);
    return (unsigned int)v13;
  }
}
