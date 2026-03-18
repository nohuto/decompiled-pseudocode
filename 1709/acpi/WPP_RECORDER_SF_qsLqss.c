/*
 * XREFs of WPP_RECORDER_SF_qsLqss @ 0x1C0005700
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C0001010 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIRootIrpCompleteRoutine @ 0x1C0006100 (ACPIRootIrpCompleteRoutine.c)
 *     ACPIBusIrpUnhandled @ 0x1C001A700 (ACPIBusIrpUnhandled.c)
 *     ACPICMButtonStartWorker @ 0x1C0025930 (ACPICMButtonStartWorker.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C0028DE0 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIBusIrpStartDeviceCompletion @ 0x1C002A740 (ACPIBusIrpStartDeviceCompletion.c)
 *     ACPICMButtonStartCompletion @ 0x1C002BA80 (ACPICMButtonStartCompletion.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0042350 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C00455E0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C0045BF0 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIEcStartDeviceCompletion @ 0x1C004BDD0 (ACPIEcStartDeviceCompletion.c)
 *     ACPIEcStartDeviceWorker @ 0x1C004BF30 (ACPIEcStartDeviceWorker.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C004E290 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIProcessorContainerStartDeviceCompletion @ 0x1C0056AD0 (ACPIProcessorContainerStartDeviceCompletion.c)
 *     ACPIProcessorContainerStartDeviceWorker @ 0x1C0056C20 (ACPIProcessorContainerStartDeviceWorker.c)
 *     ACPIRootIrpRemoveDevice @ 0x1C0057EB0 (ACPIRootIrpRemoveDevice.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1C0085C20 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C0085F50 (ACPIFilterIrpStartDevice.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0086060 (ACPIRootIrpQueryInterface.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0086D20 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0087230 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C00874E0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0087DC0 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C008C280 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008C7B0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1C008CAE0 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C008D3BC (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusIrpQueryResources @ 0x1C0094290 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0094760 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C0094AB0 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1C0094E30 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1C00954E0 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1C00963D0 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C0096670 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C00968E0 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C009E210 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C009E4A0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryInterface @ 0x1C009EB90 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x1C009ED40 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C009FEC0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x1C00A02C0 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C00A0390 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x1C00A05F0 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x1C00A0760 (ACPIBusIrpStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C00A1DB0 (ACPIFanStartDevice.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x1C00A2080 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStopDevice @ 0x1C00A2270 (ACPIFilterIrpStopDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C00A68E0 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpStopDevice @ 0x1C00A6A10 (ACPIRootIrpStopDevice.c)
 *     ACPIRootIrpStartDevice @ 0x1C00AC0A0 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // rsi
  const char *v14; // rbp
  const char *v15; // rdi
  unsigned __int64 v17; // r14
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  char *v24; // r14
  __int64 v25; // r9
  __int64 v26; // r9
  const char *v27; // r11
  __int64 v28; // r8
  __int64 v29; // r8
  const char *v30; // r10
  __int64 v31; // rcx
  __int64 v32; // rcx
  const char *v33; // rdx
  int v34; // [rsp+20h] [rbp-98h]

  v12 = (__int64)a11;
  v14 = a10;
  v15 = a7;
  v17 = (unsigned __int64)a3 >> 16;
  v18 = -1LL;
  v19 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v17 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v19, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v24 = (char *)WPP_GLOBAL_Control + 80 * v17;
    if ( (unsigned __int8)v24[41] >= a2 )
    {
      if ( a11 )
      {
        v25 = -1LL;
        do
          ++v25;
        while ( a11[v25] );
        v26 = v25 + 1;
      }
      else
      {
        v26 = 5LL;
      }
      v27 = a11;
      if ( !a11 )
        v27 = "NULL";
      if ( a10 )
      {
        v28 = -1LL;
        do
          ++v28;
        while ( a10[v28] );
        v29 = v28 + 1;
      }
      else
      {
        v29 = 5LL;
      }
      v30 = a10;
      if ( !a10 )
        v30 = "NULL";
      if ( a7 )
      {
        v31 = -1LL;
        do
          ++v31;
        while ( a7[v31] );
        v32 = v31 + 1;
      }
      else
      {
        v32 = 5LL;
      }
      v33 = a7;
      if ( !a7 )
        v33 = "NULL";
      ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
        *((_QWORD *)v24 + 3),
        43LL,
        a5,
        a4,
        &a6,
        8LL,
        v33,
        v32,
        &a8,
        4LL,
        &a9,
        8LL,
        v30,
        v29,
        v27,
        v26,
        0LL);
    }
  }
  if ( v12 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v12 + v20) );
  }
  if ( v14 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v14[v21] );
  }
  else
  {
    v14 = "NULL";
  }
  if ( v15 )
  {
    do
      ++v18;
    while ( v15[v18] );
    v22 = v18 + 1;
  }
  else
  {
    v22 = 5LL;
    v15 = "NULL";
  }
  LOWORD(v34) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v34, &a6, 8LL, v15, v22, &a8, 4LL, &a9, 8LL, v14);
}
