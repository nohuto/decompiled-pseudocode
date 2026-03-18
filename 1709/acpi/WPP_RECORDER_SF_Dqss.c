/*
 * XREFs of WPP_RECORDER_SF_Dqss @ 0x1C0003B6C
 * Callers:
 *     ACPIInitStartDevice @ 0x1C0001AF4 (ACPIInitStartDevice.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1C00027A0 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C000FCCC (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0010234 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1C00114B0 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C0012900 (ACPIBuildProcessThermalZoneCheckType.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C00178B0 (PciConfigSpaceHandlerWorker.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C001F30C (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIProcessorStartDevice @ 0x1C0025740 (ACPIProcessorStartDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C00271F8 (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessorExtension @ 0x1C00293D8 (ACPIBuildProcessorExtension.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002A2B0 (ACPIBuildThermalZoneExtension.c)
 *     ACPICMButtonNotify @ 0x1C00468FC (ACPICMButtonNotify.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x1C0046CF8 (ACPICMExperienceButtonHandleEvent.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C0046DB0 (ACPICMLidPowerStateCallBack.c)
 *     ACPIFanEvent @ 0x1C004D800 (ACPIFanEvent.c)
 *     ACPIFanFSTCallback @ 0x1C004D8C0 (ACPIFanFSTCallback.c)
 *     ACPIFanPowerCallback @ 0x1C004DEE0 (ACPIFanPowerCallback.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F024 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIInternalEvaluateOST @ 0x1C004F9C8 (ACPIInternalEvaluateOST.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0093990 (ACPIProcessorGetInitialApicId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Dqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  const char *v10; // rdi
  const char *v12; // rsi
  unsigned __int64 v14; // r14
  __int64 v15; // rbx
  int v16; // eax
  unsigned __int8 v17; // cf
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v23; // r8
  const char *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rdx
  const char *v27; // rcx
  int v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+A0h] [rbp+8h]

  v29 = a1;
  v10 = a9;
  v12 = a8;
  v14 = (unsigned __int64)a3 >> 16;
  v15 = -1LL;
  v16 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v14 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v17 = _bittest(&v16, ((_BYTE)a3 - 1) & 0x1F);
  v18 = 5LL;
  if ( v17 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v14 + 1) >= a2 )
  {
    if ( a9 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a9[v23] );
      v18 = v23 + 1;
    }
    v24 = a9;
    if ( !a9 )
      v24 = "NULL";
    if ( a8 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( a8[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    v27 = a8;
    if ( !a8 )
      v27 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v14),
      43LL,
      a5,
      a4,
      &a6,
      4LL,
      &a7,
      8LL,
      v27,
      v26,
      v24,
      v18,
      0LL);
    a1 = v29;
  }
  if ( v10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v10[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  if ( v12 )
  {
    do
      ++v15;
    while ( v12[v15] );
    v21 = v15 + 1;
  }
  else
  {
    v21 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v28) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v28, &a6, 4LL, &a7, 8LL, v12, v21, v10, v20, 0LL);
}
