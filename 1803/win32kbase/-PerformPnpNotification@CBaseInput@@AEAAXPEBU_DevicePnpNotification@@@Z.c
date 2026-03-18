/*
 * XREFs of ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C012395C
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0123CA0 (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     IsInputProcessingActivated @ 0x1C003A380 (IsInputProcessingActivated.c)
 *     IsInputThread @ 0x1C003A3D0 (IsInputThread.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0055980 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01204D0 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 *     GetKnownRIMDeviceKind @ 0x1C012E388 (GetKnownRIMDeviceKind.c)
 *     RimInputTypeToDeviceInputType @ 0x1C012E918 (RimInputTypeToDeviceInputType.c)
 *     ApiSetEditionDevicePnpNotification @ 0x1C013DC98 (ApiSetEditionDevicePnpNotification.c)
 *     ApiSetEditionWakeInputThreadForPnp @ 0x1C01404D8 (ApiSetEditionWakeInputThreadForPnp.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::PerformPnpNotification(CBaseInput *this, const struct _DevicePnpNotification *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  int KnownRIMDeviceKind; // eax
  struct DEVICEINFO *v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // rdx
  _QWORD *i; // rcx
  unsigned int v13; // eax
  __int64 v14; // [rsp+20h] [rbp-E0h]
  _QWORD v15[32]; // [rsp+30h] [rbp-D0h] BYREF

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  if ( IsInputProcessingActivated() )
  {
    v6 = *((_DWORD *)a2 + 5);
    if ( (unsigned int)(v6 - 2) <= 1 )
    {
      KnownRIMDeviceKind = GetKnownRIMDeviceKind(*(_QWORD *)a2);
      if ( KnownRIMDeviceKind )
      {
        LODWORD(v14) = KnownRIMDeviceKind;
        HIDWORD(v14) = *((_DWORD *)a2 + 2);
        if ( IsInputThread() )
        {
          LODWORD(v15[0]) = RimInputTypeToDeviceInputType(*((unsigned int *)this + 34));
          memset((char *)v15 + 4, 0, 0xF4uLL);
          v8 = *(struct DEVICEINFO **)a2;
          v15[1] = v14;
          LODWORD(v15[2]) = v6;
          InputExtensibilityCallout::CallUserModeWithDeviceLock(
            gpInputExtensibilityCallout,
            v8,
            (struct _CLIENT_DEVICE_NOTIFICATION *)v15);
        }
        else
        {
          v9 = Win32AllocPool(24LL, 0x6D504E50u);
          if ( v9 )
          {
            v10 = (_QWORD *)(v9 + 16);
            *(_QWORD *)(v9 + 16) = 0LL;
            *(_QWORD *)v9 = v14;
            *(_DWORD *)(v9 + 8) = v6;
            RIMLockExclusive((__int64)this + 1064);
            v11 = (_QWORD *)((char *)this + 1056);
            for ( i = (_QWORD *)*((_QWORD *)this + 132); i; i = (_QWORD *)*i )
              v11 = i;
            *v11 = v10;
            if ( *v10 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(i, v11);
            CInpPushLock::UnLockExclusive((CBaseInput *)((char *)this + 1064));
            v13 = RimInputTypeToDeviceInputType(*((unsigned int *)this + 34));
            ApiSetEditionWakeInputThreadForPnp(v13);
          }
        }
      }
    }
  }
  ApiSetEditionDevicePnpNotification(a2);
}
