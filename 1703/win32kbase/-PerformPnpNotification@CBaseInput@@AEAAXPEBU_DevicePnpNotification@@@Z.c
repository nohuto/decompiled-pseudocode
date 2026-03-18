/*
 * XREFs of ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C004F3E0
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C004F1D8 (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ @ 0x1C004EFC0 (-RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C009A820 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 *     ApiSetEditionWakeInputThreadForPnp @ 0x1C009BD6C (ApiSetEditionWakeInputThreadForPnp.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall CBaseInput::PerformPnpNotification(CBaseInput *this, const struct _DevicePnpNotification *a2)
{
  __int64 v2; // rdi
  int v5; // ebx
  int v6; // edx
  int v7; // edx
  __int64 v8; // rdi
  bool v9; // bl
  struct DEVICEINFO *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // [rsp+30h] [rbp-138h]
  _QWORD v15[32]; // [rsp+40h] [rbp-128h] BYREF

  v2 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  v5 = *(_DWORD *)(v2 + 16);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 == 2 && (unsigned int)(*((_DWORD *)a2 + 5) - 2) <= 1 )
  {
    v8 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
    LODWORD(v14) = *((_DWORD *)a2 + 2);
    HIDWORD(v14) = *((_DWORD *)a2 + 5);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v8, 0LL);
    v9 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v8 + 40);
    ExReleasePushLockSharedEx(v8, 0LL);
    KeLeaveCriticalRegion();
    if ( v9 )
    {
      LODWORD(v15[0]) = CBaseInput::RimInputTypeToDeviceInputType(this);
      memset((char *)v15 + 4, 0, 0xFCuLL);
      v10 = *(struct DEVICEINFO **)a2;
      v15[1] = v14;
      InputExtensibilityCallout::CallUserModeWithDeviceLock(
        (InputExtensibilityCallout *)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
        v10,
        (struct _CLIENT_DEVICE_NOTIFICATION *)v15);
    }
    else
    {
      v11 = (_QWORD *)Win32AllocPool(16LL, 0x6D504E50u);
      v12 = v11;
      if ( v11 )
      {
        *v11 = v14;
        RIMLockExclusive((char *)this + 616);
        v12[1] = *((_QWORD *)this + 76);
        *((_QWORD *)this + 76) = v12 + 1;
        *((_QWORD *)this + 78) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 616, 0LL);
        KeLeaveCriticalRegion();
        v13 = CBaseInput::RimInputTypeToDeviceInputType(this);
        ApiSetEditionWakeInputThreadForPnp(v13);
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      14,
      68,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsEditionDevicePnpNotificationSupported() >= 0 )
    EditionDevicePnpNotification(a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      14,
      69,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
}
