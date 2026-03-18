/*
 * XREFs of ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C0019E30
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0019C1C (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     IsInputProcessingActivated @ 0x1C0013A50 (IsInputProcessingActivated.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0016920 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0016C80 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     ?GetKnownRIMDeviceKind@CBaseInput@@AEBA?AW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@@Z @ 0x1C0019900 (-GetKnownRIMDeviceKind@CBaseInput@@AEBA-AW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@@Z.c)
 *     ?RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ @ 0x1C0019964 (-RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C00960A0 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 *     ApiSetEditionWakeInputThreadForPnp @ 0x1C009BEF0 (ApiSetEditionWakeInputThreadForPnp.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __fastcall CBaseInput::PerformPnpNotification(CBaseInput *this, const struct _DevicePnpNotification *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  int KnownRIMDeviceKind; // eax
  CInputThread *v7; // rcx
  struct DEVICEINFO *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 *i; // rax
  unsigned int v12; // eax
  __int64 v13; // [rsp+30h] [rbp-D0h]
  _QWORD v14[32]; // [rsp+40h] [rbp-C0h] BYREF

  if ( IsInputProcessingActivated() )
  {
    v5 = *((_DWORD *)a2 + 5);
    if ( (unsigned int)(v5 - 2) <= 1 )
    {
      KnownRIMDeviceKind = CBaseInput::GetKnownRIMDeviceKind(v4, *(_QWORD *)a2);
      if ( KnownRIMDeviceKind )
      {
        LODWORD(v13) = KnownRIMDeviceKind;
        HIDWORD(v13) = *((_DWORD *)a2 + 2);
        if ( CInputThread::IsInputThread(v7) )
        {
          LODWORD(v14[0]) = CBaseInput::RimInputTypeToDeviceInputType(this);
          memset((char *)v14 + 4, 0, 0xFCuLL);
          v8 = *(struct DEVICEINFO **)a2;
          v14[1] = v13;
          LODWORD(v14[2]) = v5;
          InputExtensibilityCallout::CallUserModeWithDeviceLock(
            (InputExtensibilityCallout *)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
            v8,
            (struct _CLIENT_DEVICE_NOTIFICATION *)v14);
        }
        else
        {
          v9 = Win32AllocPool(24LL, 1833979472LL);
          if ( v9 )
          {
            v10 = v9 + 16;
            *(_QWORD *)v9 = v13;
            *(_DWORD *)(v9 + 8) = v5;
            *(_QWORD *)(v9 + 16) = 0LL;
            RIMLockExclusive((__int64)this + 936);
            for ( i = (__int64 *)((char *)this + 928); *i; i = (__int64 *)*i )
              ;
            *i = v10;
            CInpPushLock::UnLockExclusive((CBaseInput *)((char *)this + 936));
            v12 = CBaseInput::RimInputTypeToDeviceInputType(this);
            ApiSetEditionWakeInputThreadForPnp(v12);
          }
        }
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x4Au,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionDevicePnpNotificationSupported() >= 0 )
    EditionDevicePnpNotification(a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x4Bu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
}
