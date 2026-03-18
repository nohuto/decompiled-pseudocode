/*
 * XREFs of WPP_RECORDER_SF_qsLqss @ 0x1C00014E0
 * Callers:
 *     ACPIRootIrpCompleteRoutine @ 0x1C00013D0 (ACPIRootIrpCompleteRoutine.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0008350 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C00144B0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpStartDeviceCompletion @ 0x1C0014B00 (ACPIBusIrpStartDeviceCompletion.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0014CC0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpUnhandled @ 0x1C0014F70 (ACPIBusIrpUnhandled.c)
 *     ACPICMButtonStartCompletion @ 0x1C0016760 (ACPICMButtonStartCompletion.c)
 *     ACPICMButtonStartWorker @ 0x1C00168B0 (ACPICMButtonStartWorker.c)
 *     ACPIEcStartDeviceCompletion @ 0x1C0022090 (ACPIEcStartDeviceCompletion.c)
 *     ACPIEcStartDeviceWorker @ 0x1C00221F0 (ACPIEcStartDeviceWorker.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C0024690 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C0024910 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C0024F40 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIProcessorContainerStartDeviceCompletion @ 0x1C0036DA0 (ACPIProcessorContainerStartDeviceCompletion.c)
 *     ACPIProcessorContainerStartDeviceWorker @ 0x1C0036EF0 (ACPIProcessorContainerStartDeviceWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C0039540 (ACPIRootIrpRemoveDevice.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C00713C0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0071690 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C0073030 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C00732C0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryInterface @ 0x1C00739C0 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x1C0073B70 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C0075650 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C00758E0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0075FF0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x1C0076350 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C0076420 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0076550 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1C0076830 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C0077BA0 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0077CF0 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C00781C0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0078860 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C00789F0 (ACPIBusIrpStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C007B250 (ACPIFanStartDevice.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1C007B4F0 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C007B640 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C007BA80 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStartDevice @ 0x1C007C120 (ACPIFilterIrpStartDevice.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1C007C270 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIFilterIrpStopDevice @ 0x1C007C600 (ACPIFilterIrpStopDevice.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C007CAB0 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C0087530 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C0087654 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1C0087860 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C0087A90 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0087D40 (ACPIRootIrpQueryInterface.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C0087F60 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIRootIrpStopDevice @ 0x1C0088090 (ACPIRootIrpStopDevice.c)
 *     ACPIRootIrpStartDevice @ 0x1C009B330 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsLqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  const char *v12; // rsi
  const char *v14; // rbp
  const char *v15; // rdi
  unsigned __int64 v17; // r14
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rbx
  char *v26; // r14
  __int64 v27; // r9
  __int64 v28; // r9
  const char *v29; // r11
  __int64 v30; // r8
  __int64 v31; // r8
  const char *v32; // r10
  __int64 v33; // rcx
  __int64 v34; // rcx
  const char *v35; // rdx
  int v36; // [rsp+20h] [rbp-98h]

  v12 = a11;
  v14 = a10;
  v15 = a7;
  v17 = (unsigned __int64)a3 >> 16;
  v18 = -1LL;
  v19 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v17 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v19, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v26 = (char *)WPP_GLOBAL_Control + 80 * v17;
    if ( (unsigned __int8)v26[41] >= a2 )
    {
      if ( a11 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( a11[v27] );
        v28 = v27 + 1;
      }
      else
      {
        v28 = 5LL;
      }
      v29 = a11;
      if ( !a11 )
        v29 = "NULL";
      if ( a10 )
      {
        v30 = -1LL;
        do
          ++v30;
        while ( a10[v30] );
        v31 = v30 + 1;
      }
      else
      {
        v31 = 5LL;
      }
      v32 = a10;
      if ( !a10 )
        v32 = "NULL";
      if ( a7 )
      {
        v33 = -1LL;
        do
          ++v33;
        while ( a7[v33] );
        v34 = v33 + 1;
      }
      else
      {
        v34 = 5LL;
      }
      v35 = a7;
      if ( !a7 )
        v35 = "NULL";
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)v26 + 3),
        43LL,
        a5,
        a4,
        &a6,
        8LL,
        v35,
        v34,
        &a8,
        4LL,
        &a9,
        8LL,
        v32,
        v31,
        v29,
        v28,
        0LL);
    }
  }
  if ( v12 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v12[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5LL;
    v12 = "NULL";
  }
  if ( v14 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v14[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5LL;
    v14 = "NULL";
  }
  if ( v15 )
  {
    do
      ++v18;
    while ( v15[v18] );
    v24 = v18 + 1;
  }
  else
  {
    v24 = 5LL;
    v15 = "NULL";
  }
  LOWORD(v36) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v36, &a6, 8LL, v15, v24, &a8, 4LL, &a9, 8LL, v14, v23, v12, v21, 0LL);
}
