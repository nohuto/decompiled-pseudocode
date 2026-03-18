/*
 * XREFs of WPP_RECORDER_SF_qLqss @ 0x1C000544C
 * Callers:
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0002E90 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C0003120 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C0003350 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C0004CF0 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDeviceCompleteRequest @ 0x1C0005908 (ACPIDeviceCompleteRequest.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C0005D20 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C000FAD0 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C0010070 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPICMButtonSetPower @ 0x1C0046A50 (ACPICMButtonSetPower.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C0048310 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C0048450 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C0048590 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C0049830 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C00499D0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIRootIrpQueryPower @ 0x1C0057D20 (ACPIRootIrpQueryPower.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C008C280 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C008C4D0 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryTargetRelation @ 0x1C008C92C (ACPIBusIrpQueryTargetRelation.c)
 *     ACPIBusIrpQueryResources @ 0x1C0094290 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0094760 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C0096EC0 (ACPIBusIrpQueryBusRelations.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1C009E6A8 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIDockIrpStartDevice @ 0x1C009EE60 (ACPIDockIrpStartDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
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
  __int64 v21; // rbx
  __int64 v23; // r8
  const char *v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rdx
  const char *v27; // rcx
  int v28; // [rsp+20h] [rbp-88h]
  __int64 v29; // [rsp+B0h] [rbp+8h]

  v29 = a1;
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
      v23 = -1LL;
      do
        ++v23;
      while ( a10[v23] );
      v19 = v23 + 1;
    }
    v24 = a10;
    if ( !a10 )
      v24 = "NULL";
    if ( a9 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( a9[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    v27 = a9;
    if ( !a9 )
      v27 = "NULL";
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
      v27,
      v26,
      v24,
      v19,
      0LL);
    a1 = v29;
  }
  if ( v11 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v11[v20] );
  }
  if ( !v11 )
    v11 = "NULL";
  if ( v13 )
  {
    do
      ++v16;
    while ( v13[v16] );
    v21 = v16 + 1;
  }
  else
  {
    v21 = 5LL;
  }
  if ( !v13 )
    v13 = "NULL";
  LOWORD(v28) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v28, &a6, 8LL, &a7, 4LL, &a8, 8LL, v13, v21, v11);
}
