/*
 * XREFs of WPP_RECORDER_SF_qdqss @ 0x1C0008814
 * Callers:
 *     ACPIDockIrpSetSystemPower @ 0x1C00085E4 (ACPIDockIrpSetSystemPower.c)
 *     ACPIBuildRegRequest @ 0x1C001104C (ACPIBuildRegRequest.c)
 *     ACPIBusIrpSetSystemPower @ 0x1C0014894 (ACPIBusIrpSetSystemPower.c)
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C001A8AC (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C001A984 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C001B050 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C001B1CC (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpSystemRequest @ 0x1C001B4FC (ACPIDeviceIrpSystemRequest.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C001B65C (ACPIDeviceIrpWaitWakeRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C001BA88 (ACPIDeviceIrpWarmEjectRequest.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001C6B0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C001D980 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001DBA0 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIRootIrpSetPower @ 0x1C0039730 (ACPIRootIrpSetPower.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qdqss(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  const char *v10; // rdi
  __int64 v11; // rbx
  const char *v12; // rsi
  unsigned __int64 v16; // r14
  int v17; // eax
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

  v10 = a10;
  v11 = -1LL;
  v12 = a9;
  v16 = (unsigned __int64)a3 >> 16;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v16 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v17, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v16 + 1) >= 4u )
  {
    if ( a10 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a10[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a10;
    if ( !a10 )
      v20 = "NULL";
    if ( a9 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a9[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a9;
    if ( !a9 )
      v23 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v16),
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      8LL,
      v23,
      v22,
      v20,
      v19,
      0LL);
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
      ++v11;
    while ( v12[v11] );
    v26 = v11 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v28) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v28, &a6, 8LL, &a7, 4LL, &a8, 8LL, v12, v26, v10, v25, 0LL);
}
