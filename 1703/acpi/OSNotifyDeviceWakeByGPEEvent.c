/*
 * XREFs of OSNotifyDeviceWakeByGPEEvent @ 0x1C0051AC0
 * Callers:
 *     ACPIInterruptDispatchEventDpc @ 0x1C002B850 (ACPIInterruptDispatchEventDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C001EF58 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0051E20 (OSNotifyDeviceWakeCallBack.c)
 *     WPP_RECORDER_SF_LDL @ 0x1C0051F78 (WPP_RECORDER_SF_LDL.c)
 *     ACPIWakeDisableAsync @ 0x1C005998C (ACPIWakeDisableAsync.c)
 */

void __fastcall OSNotifyDeviceWakeByGPEEvent(int a1, int a2, int a3, int a4)
{
  char v4; // bp
  __int64 v6; // rdi
  _QWORD *PoolWithTag; // rax
  int v8; // edx
  _QWORD *v9; // rbx
  __int64 *i; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  char v13; // si
  const char *v14; // rcx
  const char *v15; // rdx
  __int64 v16; // rax
  KIRQL Irql; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v6 = 0LL;
  WPP_RECORDER_SF_LDL(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x4D706341u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    for ( i = (__int64 *)AcpiPowerWaitWakeList; i != &AcpiPowerWaitWakeList; i = (__int64 *)*i )
    {
      v6 = i[5];
      if ( (*(_QWORD *)(v6 + 952) & 0x500000000LL) == 0 && *(_DWORD *)(v6 + 456) == a1 )
      {
        ACPIWakeRemoveDevicesAndUpdate(i[5], (__int64)v9);
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    if ( (_QWORD *)*v9 == v9 )
    {
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      v12 = ACPIWakeDisableAsync(v6, v9, v11, v9);
      v13 = v12;
      if ( v12 != 259 )
        OSNotifyDeviceWakeCallBack(0LL, v12, 0LL, v9);
      v14 = byte_1C0066CD0;
      v15 = byte_1C0066CD0;
      if ( v6 )
      {
        v16 = *(_QWORD *)(v6 + 8);
        v4 = v6;
        if ( (v16 & 0x200000000000LL) != 0 )
        {
          v14 = *(const char **)(v6 + 560);
          if ( (v16 & 0x400000000000LL) != 0 )
            v15 = *(const char **)(v6 + 568);
        }
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x21u,
        (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids,
        v13,
        v4,
        v14,
        v15);
    }
  }
  else
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      22,
      32,
      (__int64)&WPP_fc5f32dc68223ba17e04db848c1e6b0f_Traceguids);
  }
}
