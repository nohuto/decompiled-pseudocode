/*
 * XREFs of WPP_RECORDER_SF_qss @ 0x1C0003CBC
 * Callers:
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0001728 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIInitStartDevice @ 0x1C0001AF4 (ACPIInitStartDevice.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C00021C0 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001CFD0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001D460 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C001ED80 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPICMButtonStartWorker @ 0x1C0025930 (ACPICMButtonStartWorker.c)
 *     ACPIFanFSTCallback @ 0x1C004D8C0 (ACPIFanFSTCallback.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C004E100 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C004F7AC (ACPIQueryGedDeviceInterface.c)
 *     ACPIInternalEvaluateOST @ 0x1C004F9C8 (ACPIInternalEvaluateOST.c)
 *     OSNotifyDeviceWake @ 0x1C00522CC (OSNotifyDeviceWake.c)
 *     ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1C009027C (ACPIDevicePowerDetermineSupportedDeviceStates.c)
 *     PcisuppReleasePciInterfaces @ 0x1C00A7B08 (PcisuppReleasePciInterfaces.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
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
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v22; // r8
  const char *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  const char *v26; // rcx
  int v27; // [rsp+20h] [rbp-68h]
  __int64 v28; // [rsp+60h] [rbp-28h]
  __int64 v29; // [rsp+68h] [rbp-20h]
  __int64 v30; // [rsp+90h] [rbp+8h]

  v30 = a1;
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
      v22 = -1LL;
      do
        ++v22;
      while ( a8[v22] );
      v17 = v22 + 1;
    }
    v23 = a8;
    if ( !a8 )
      v23 = "NULL";
    if ( a7 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a7[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a7;
    if ( !a7 )
      v26 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v13),
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      v26,
      v25,
      v23,
      v17,
      0LL);
    a1 = v30;
  }
  if ( v9 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v9[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  if ( !v9 )
    v9 = "NULL";
  if ( v11 )
  {
    do
      ++v14;
    while ( v11[v14] );
    v20 = v14 + 1;
  }
  else
  {
    v20 = 5LL;
  }
  if ( !v11 )
    v11 = "NULL";
  LOWORD(v27) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v27, &a6, 8LL, v11, v20, v9, v19, 0LL, v28, v29);
}
