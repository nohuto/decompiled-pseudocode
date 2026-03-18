/*
 * XREFs of WPP_RECORDER_SF_qLqss @ 0x1C000DCF4
 * Callers:
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C0009EA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0009FE0 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000A4D0 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C000A7B0 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDeviceCompleteRequest @ 0x1C000A974 (ACPIDeviceCompleteRequest.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C000AD90 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C001E8B0 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C0029BE0 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPICMButtonSetPower @ 0x1C0047300 (ACPICMButtonSetPower.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C0048F30 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C0049070 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C00491B0 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C004A450 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C004A5F0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIRootIrpQueryPower @ 0x1C0057120 (ACPIRootIrpQueryPower.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1C0083008 (ACPIBusIrpQueryTargetRelation.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C008B94C (ACPIBusIrpQueryBusRelations.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C008BDF0 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C008C510 (ACPIBusIrpQueryResources.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C008CA60 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C008F420 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C009B6B8 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIDockIrpStartDevice @ 0x1C009BE70 (ACPIDockIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qLqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v11; // rdi
  const char *v13; // rsi
  unsigned __int64 v15; // r14
  __int64 v16; // rbx
  int v17; // eax
  unsigned __int8 v18; // cf
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v24; // r8
  const char *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rdx
  const char *v28; // rcx
  int v29; // [rsp+20h] [rbp-88h]
  __int64 v30; // [rsp+B0h] [rbp+8h]

  v30 = a1;
  v11 = a10;
  v13 = a9;
  v15 = (unsigned __int64)a3 >> 16;
  v16 = -1LL;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v15 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v18 = _bittest(&v17, ((_BYTE)a3 - 1) & 0x1F);
  v19 = 5LL;
  if ( v18 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v15 + 1) >= a2 )
  {
    if ( a10 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a10[v24] );
      v19 = v24 + 1;
    }
    v25 = a10;
    if ( !a10 )
      v25 = "NULL";
    if ( a9 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( a9[v26] );
      v27 = v26 + 1;
    }
    else
    {
      v27 = 5LL;
    }
    v28 = a9;
    if ( !a9 )
      v28 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v15),
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v28,
      v27,
      v25,
      v19,
      0LL);
    a1 = v30;
  }
  if ( v11 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v11[v20] );
    v21 = v20 + 1;
  }
  else
  {
    v21 = 5LL;
  }
  if ( !v11 )
    v11 = "NULL";
  if ( v13 )
  {
    do
      ++v16;
    while ( v13[v16] );
    v22 = v16 + 1;
  }
  else
  {
    v22 = 5LL;
  }
  if ( !v13 )
    v13 = "NULL";
  LOWORD(v29) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v29, &a6, 8LL, &a7, 4LL, &a8, 8LL, v13, v22, v11, v21, 0LL);
}
