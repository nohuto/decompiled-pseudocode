/*
 * XREFs of ACPIPepInitializePlatformNotificationSupport @ 0x1C007FF58
 * Callers:
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0078860 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0028B50 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIFreeDataBuffs @ 0x1C0043994 (AMLIFreeDataBuffs.c)
 *     ACPIAmliEvaluateDsm @ 0x1C00747A8 (ACPIAmliEvaluateDsm.c)
 */

char __fastcall ACPIPepInitializePlatformNotificationSupport(char *Context)
{
  _QWORD *v2; // rcx
  NTSTATUS v3; // eax
  char v4; // dl
  signed __int32 *v5; // rax
  _BYTE OutputBuffer[4]; // [rsp+38h] [rbp-9h] BYREF
  signed __int32 v8; // [rsp+3Ch] [rbp-5h] BYREF
  __int64 v9; // [rsp+40h] [rbp-1h] BYREF
  __int128 v10; // [rsp+48h] [rbp+7h] BYREF
  _BYTE v11[48]; // [rsp+58h] [rbp+17h] BYREF

  *((_QWORD *)Context + 31) = 1LL;
  *((_DWORD *)Context + 46) = 1;
  *((_QWORD *)Context + 24) = 0LL;
  *((_DWORD *)Context + 50) = 0;
  KeInitializeEvent((PRKEVENT)(Context + 208), SynchronizationEvent, 0);
  v8 = 0;
  memset(v11, 0, sizeof(v11));
  v2 = (_QWORD *)*((_QWORD *)Context + 89);
  v9 = 0LL;
  v10 = PEP_NOTIFICATIONS_DSM_UUID;
  if ( (int)ACPIAmliEvaluateDsm(v2, (__int64)&v10, 0, 0, (__int64)v11, &v9) >= 0 )
  {
    if ( *(_WORD *)(v9 + 2) == 3 && *(_DWORD *)(v9 + 24) )
      v8 = **(unsigned __int8 **)(v9 + 32);
    AMLIFreeDataBuffs(v9);
  }
  v3 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, OutputBuffer, 1u);
  v4 = 0;
  if ( v3 >= 0 )
    v4 = OutputBuffer[0];
  if ( _bittest(&v8, 3u) && _bittest(&v8, 4u) )
    Context[242] = 1;
  v5 = &v8;
  if ( _bittest(&v8, 5u) )
  {
    v5 = &v8;
    if ( _bittest(&v8, 6u) )
      Context[241] = 1;
  }
  if ( !v4 )
  {
    Context[241] = 0;
    goto LABEL_17;
  }
  if ( !Context[241] )
  {
LABEL_17:
    if ( !Context[242] )
      return (char)v5;
  }
  LOBYTE(v5) = ACPIInitReferenceDeviceExtension((__int64)Context);
  if ( (_BYTE)v5 )
  {
    Context[240] = 1;
    if ( Context[241] )
      LOBYTE(v5) = PoRegisterPowerSettingCallback(
                     0LL,
                     &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
                     ACPIPepPowerSettingChangeCallback,
                     Context,
                     (PVOID *)Context + 32);
    if ( Context[242] )
    {
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_CONSOLE_DISPLAY_STATE,
        ACPIPepPowerSettingChangeCallback,
        Context,
        (PVOID *)Context + 33);
      LOBYTE(v5) = PoRegisterPowerSettingCallback(
                     0LL,
                     &GUID_GLOBAL_USER_PRESENCE,
                     ACPIPepPowerSettingChangeCallback,
                     Context,
                     (PVOID *)Context + 34);
    }
  }
  return (char)v5;
}
