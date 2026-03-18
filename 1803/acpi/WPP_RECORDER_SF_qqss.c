/*
 * XREFs of WPP_RECORDER_SF_qqss @ 0x1C0008CB0
 * Callers:
 *     ACPIDockIrpQueryPower @ 0x1C0008210 (ACPIDockIrpQueryPower.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0013AA8 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDetectDuplicateHID @ 0x1C0017E78 (ACPIDetectDuplicateHID.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0019920 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C001C510 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C001C5F0 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001CC30 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001DE20 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C001E1E0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C001E2F0 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C001E400 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C001E500 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C001E5C0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C001E760 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C001E920 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C001EA20 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     ACPIFanCancelRequest @ 0x1C0023730 (ACPIFanCancelRequest.c)
 *     ACPIFanCompletePendingIrps @ 0x1C0023834 (ACPIFanCompletePendingIrps.c)
 *     ACPIFanDeviceControl @ 0x1C0023A70 (ACPIFanDeviceControl.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C00297F4 (ACPIQueryGedDeviceInterface.c)
 *     ACPIMatchKernelPorts @ 0x1C002DE30 (ACPIMatchKernelPorts.c)
 *     ACPIWakeWaitIrp @ 0x1C0041C00 (ACPIWakeWaitIrp.c)
 *     ACPIDockIrpEject @ 0x1C0072DC0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C0073030 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C00734C8 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C00736B0 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C0073C90 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C0075650 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusIrpQueryResources @ 0x1C00781C0 (ACPIBusIrpQueryResources.c)
 *     ACPIThermalStartDevice @ 0x1C00895C0 (ACPIThermalStartDevice.c)
 *     ACPIRootIrpStartDevice @ 0x1C009B330 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqss(
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
  __int64 v19; // r8
  const char *v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  const char *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  int v28; // [rsp+20h] [rbp-78h]
  __int64 v29; // [rsp+70h] [rbp-28h]
  __int64 v30; // [rsp+78h] [rbp-20h]
  __int64 v31; // [rsp+A0h] [rbp+8h]

  v31 = a1;
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
      v19 = -1LL;
      do
        ++v19;
      while ( a9[v19] );
      v18 = v19 + 1;
    }
    v20 = a9;
    if ( !a9 )
      v20 = "NULL";
    if ( a8 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a8[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a8;
    if ( !a8 )
      v23 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v14),
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      &a7,
      8LL,
      v23,
      v22,
      v20,
      v18,
      0LL);
    a1 = v31;
  }
  if ( v10 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( v10[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  if ( v12 )
  {
    do
      ++v15;
    while ( v12[v15] );
    v26 = v15 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v28) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v28, &a6, 8LL, &a7, 8LL, v12, v26, v10, v25, 0LL, v29, v30);
}
