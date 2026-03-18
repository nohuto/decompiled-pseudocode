/*
 * XREFs of OSNotifyDeviceWakeByInterrupt @ 0x1C002F2CC
 * Callers:
 *     ACPIWakeEmulationInterruptServiceRoutine @ 0x1C002B1B0 (ACPIWakeEmulationInterruptServiceRoutine.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C002F460 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIWakeDisableAsync @ 0x1C004066C (ACPIWakeDisableAsync.c)
 *     ACPIWakeEmulationDisable @ 0x1C0040AC8 (ACPIWakeEmulationDisable.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C00417F8 (ACPIWakeRemoveDevicesAndUpdate.c)
 */

void __fastcall OSNotifyDeviceWakeByInterrupt(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  int v3; // edx
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  __int64 *v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rax
  _QWORD *v9; // r14
  _QWORD *i; // rax
  _QWORD *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // rcx
  KIRQL Irql; // [rsp+70h] [rbp+8h] BYREF

  WPP_RECORDER_SF_qd(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    17,
    34,
    (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
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
        v6 = (__int64 *)AcpiPowerWaitWakeList;
        v7 = v5;
        v8 = v5;
        if ( (__int64 *)AcpiPowerWaitWakeList != &AcpiPowerWaitWakeList )
        {
          v9 = (_QWORD *)(a1 + 16);
          do
          {
            for ( i = (_QWORD *)*v9; i != v9; i = (_QWORD *)*i )
            {
              if ( v6 == (__int64 *)i[2] )
              {
                ACPIWakeRemoveDevicesAndUpdate(v6[5], v4);
                break;
              }
            }
            v8 = v4[1];
            if ( v5 != v8 )
              break;
            v6 = (__int64 *)*v6;
          }
          while ( v6 != &AcpiPowerWaitWakeList );
        }
        v5 = v8;
      }
      while ( v8 != v7 );
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    v11 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 == v4 )
    {
      ExFreePoolWithTag(v4, 0);
    }
    else
    {
      do
      {
        ACPIWakeEmulationDisable(v11);
        v13 = v11[5];
        v11 = (_QWORD *)*v11;
      }
      while ( v11 != v4 );
      if ( !v13 || (unsigned int)ACPIWakeDisableAsync(v13, v4, v12, v4) != 259 )
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
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids);
  }
}
