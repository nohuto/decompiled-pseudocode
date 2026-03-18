/*
 * XREFs of OSNotifyDeviceWakeByInterrupt @ 0x1C00526CC
 * Callers:
 *     ACPIWakeEmulationInterruptServiceRoutine @ 0x1C00507A0 (ACPIWakeEmulationInterruptServiceRoutine.c)
 * Callees:
 *     ACPIWakeEmulationDisable @ 0x1C0001918 (ACPIWakeEmulationDisable.c)
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0010234 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0014E98 (WPP_RECORDER_SF_qD.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0052860 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIWakeDisableAsync @ 0x1C005A400 (ACPIWakeDisableAsync.c)
 */

void __fastcall OSNotifyDeviceWakeByInterrupt(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  int v3; // edx
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 *v6; // rdi
  __int64 v7; // rbp
  _QWORD *v8; // rsi
  _QWORD *i; // rax
  _QWORD *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rcx
  KIRQL Irql; // [rsp+60h] [rbp+8h] BYREF

  WPP_RECORDER_SF_qD(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    17,
    34,
    (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
    a1,
    *(_DWORD *)(a1 + 32));
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x4D706341u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    v5 = v4[1];
    if ( v5 )
    {
      do
      {
        while ( 1 )
        {
          v6 = (__int64 *)AcpiPowerWaitWakeList;
          v7 = v5;
          if ( (__int64 *)AcpiPowerWaitWakeList == &AcpiPowerWaitWakeList )
            break;
          v8 = (_QWORD *)(a1 + 16);
          while ( 1 )
          {
            for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
            {
              if ( v6 == (__int64 *)i[2] )
              {
                ACPIWakeRemoveDevicesAndUpdate(v6[5], (__int64)v4);
                break;
              }
            }
            v5 = v4[1];
            if ( v7 != v5 )
              break;
            v6 = (__int64 *)*v6;
            if ( v6 == &AcpiPowerWaitWakeList )
              goto LABEL_14;
          }
        }
LABEL_14:
        v5 = v4[1];
      }
      while ( v5 != v7 );
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    v10 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
    {
      ExFreePoolWithTag(v4, 0);
    }
    else
    {
      do
      {
        ACPIWakeEmulationDisable((__int64)v10);
        v12 = v10[5];
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != v4 );
      if ( !v12 || (unsigned int)ACPIWakeDisableAsync(v12, v4, v11, v4) != 259 )
        OSNotifyDeviceWakeCallBack(0LL, 0LL, 0LL, v4);
    }
  }
  else
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      22,
      35,
      (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids);
  }
}
