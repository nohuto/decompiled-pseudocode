/*
 * XREFs of WPP_RECORDER_SF_qqss @ 0x1C000DE58
 * Callers:
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C0009D50 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000A4D0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C000A640 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C000ABA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C000AFC0 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDetectDuplicateHID @ 0x1C001341C (ACPIDetectDuplicateHID.c)
 *     ACPIWakeWaitIrp @ 0x1C0028B10 (ACPIWakeWaitIrp.c)
 *     ACPIMatchKernelPorts @ 0x1C002AD1C (ACPIMatchKernelPorts.c)
 *     ACPIDockIrpQueryPower @ 0x1C00426A0 (ACPIDockIrpQueryPower.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0045B34 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0048950 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C0049730 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C0049D10 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C0049E10 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0049ED0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004A070 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C004A230 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C004A330 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     ACPIFanCancelRequest @ 0x1C004D680 (ACPIFanCancelRequest.c)
 *     ACPIFanCompletePendingIrps @ 0x1C004D784 (ACPIFanCompletePendingIrps.c)
 *     ACPIFanDeviceControl @ 0x1C004D9D0 (ACPIFanDeviceControl.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C004FE58 (ACPIQueryGedDeviceInterface.c)
 *     ACPIBusIrpQueryResources @ 0x1C008C510 (ACPIBusIrpQueryResources.c)
 *     ACPIThermalStartDevice @ 0x1C00919A0 (ACPIThermalStartDevice.c)
 *     ACPIDockIrpEject @ 0x1C009AFB0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C009B220 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C009B6B8 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C009B8A0 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C009BE70 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C009CEF0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIRootIrpStartDevice @ 0x1C00AA010 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
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
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v23; // r8
  const char *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rdx
  const char *v27; // rcx
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
      8LL,
      &a7,
      8LL,
      v27,
      v26,
      v24,
      v18,
      0LL);
    a1 = v31;
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
  return WppAutoLogTrace(a1, a2, a3, a5, v28, &a6, 8LL, &a7, 8LL, v12, v21, v10, v20, 0LL, v29, v30);
}
