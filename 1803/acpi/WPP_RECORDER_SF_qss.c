/*
 * XREFs of WPP_RECORDER_SF_qss @ 0x1C0012DE0
 * Callers:
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000D1E0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000F660 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C000FB70 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0013AA8 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPICMButtonStartWorker @ 0x1C00168B0 (ACPICMButtonStartWorker.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C001AB84 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIFanFSTCallback @ 0x1C0023CF0 (ACPIFanFSTCallback.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C00245D0 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIInitStartDevice @ 0x1C0028FBC (ACPIInitStartDevice.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C00297F4 (ACPIQueryGedDeviceInterface.c)
 *     ACPIInternalEvaluateOST @ 0x1C0029B5C (ACPIInternalEvaluateOST.c)
 *     OSNotifyDeviceWake @ 0x1C002EECC (OSNotifyDeviceWake.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C00795B8 (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     PcisuppReleasePciInterfaces @ 0x1C008C88C (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        const char *a8)
{
  const char *v9; // rdi
  const char *v11; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // rbx
  int v15; // eax
  unsigned __int8 v16; // cf
  __int64 v17; // r8
  __int64 v18; // r8
  const char *v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rdx
  const char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  int v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+60h] [rbp-28h]
  __int64 v29; // [rsp+68h] [rbp-20h]
  __int64 v30; // [rsp+70h] [rbp-18h]
  __int64 v31; // [rsp+78h] [rbp-10h]
  __int64 v32; // [rsp+90h] [rbp+8h]

  v32 = a1;
  v9 = a8;
  v11 = a7;
  v13 = (unsigned __int64)a3 >> 16;
  v14 = -1LL;
  v15 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v13 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v16 = _bittest(&v15, ((_BYTE)a3 - 1) & 0x1F);
  v17 = 5LL;
  if ( v16 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v13 + 1) >= a2 )
  {
    if ( a8 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a8[v18] );
      v17 = v18 + 1;
    }
    v19 = a8;
    if ( !a8 )
      v19 = "NULL";
    if ( a7 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a7[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a7;
    if ( !a7 )
      v22 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v13),
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      v22,
      v21,
      v19,
      v17,
      0LL);
    a1 = v32;
  }
  if ( v9 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( v9[v23] );
    v24 = v23 + 1;
  }
  else
  {
    v24 = 5LL;
  }
  if ( !v9 )
    v9 = "NULL";
  if ( v11 )
  {
    do
      ++v14;
    while ( v11[v14] );
    v25 = v14 + 1;
  }
  else
  {
    v25 = 5LL;
  }
  if ( !v11 )
    v11 = "NULL";
  LOWORD(v27) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v27, &a6, 8LL, v11, v25, v9, v24, 0LL, v28, v29, v30, v31);
}
