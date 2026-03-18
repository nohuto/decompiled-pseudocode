/*
 * XREFs of WPP_RECORDER_SF_qqss @ 0x1C00055B0
 * Callers:
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0001310 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0001728 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C0002D70 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C0003350 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C0003980 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C0005B30 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C0005F50 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIWakeWaitIrp @ 0x1C000F560 (ACPIWakeWaitIrp.c)
 *     ACPIDetectDuplicateHID @ 0x1C001E1F8 (ACPIDetectDuplicateHID.c)
 *     ACPIMatchKernelPorts @ 0x1C002B88C (ACPIMatchKernelPorts.c)
 *     ACPIDockIrpQueryPower @ 0x1C0042210 (ACPIDockIrpQueryPower.c)
 *     ACPIDevicePowerProcessPhase0SystemSubPhase1 @ 0x1C0048B10 (ACPIDevicePowerProcessPhase0SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase1 @ 0x1C00490F0 (ACPIDevicePowerProcessPhase5SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase2 @ 0x1C00491F0 (ACPIDevicePowerProcessPhase5SystemSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C00492B0 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0049450 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C0049610 (ACPIDevicePowerProcessPhase5SystemSubPhase5.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C0049710 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 *     ACPIFanCancelRequest @ 0x1C004D2F0 (ACPIFanCancelRequest.c)
 *     ACPIFanCompletePendingIrps @ 0x1C004D3F4 (ACPIFanCompletePendingIrps.c)
 *     ACPIFanDeviceControl @ 0x1C004D640 (ACPIFanDeviceControl.c)
 *     ACPIQueryGedDeviceInterface @ 0x1C004F7AC (ACPIQueryGedDeviceInterface.c)
 *     ACPIThermalStartDevice @ 0x1C0092740 (ACPIThermalStartDevice.c)
 *     ACPIBusIrpQueryResources @ 0x1C0094290 (ACPIBusIrpQueryResources.c)
 *     ACPIDockIrpEject @ 0x1C009DFA0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C009E210 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C009E6A8 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C009E890 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C009EE60 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C009FEC0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIRootIrpStartDevice @ 0x1C00AC0A0 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
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
      8LL,
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
  return WppAutoLogTrace(a1, a2, a3, a5, v28, &a6, 8LL, &a7, 8LL, v12, v21, v10, v20, 0LL);
}
