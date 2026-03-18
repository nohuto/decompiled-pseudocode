/*
 * XREFs of AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C005482C
 * Callers:
 *     AcpiNotifyPlExtDeleteDeviceSync @ 0x1C00549D4 (AcpiNotifyPlExtDeleteDeviceSync.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0014E98 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x1C0054394 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C0054760 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0055400 (WPP_RECORDER_SF_qqD.c)
 */

__int64 __fastcall AcpiNotifyPlExtDeleteDeviceAsync(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  _QWORD *PoolWithTag; // rax
  int v9; // edx
  _QWORD *v10; // rdi
  int v11; // eax
  int v12; // edx
  _BYTE *v13; // rsi
  int v14; // edx
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  P = 0LL;
  if ( qword_1C0078B48 && (*((unsigned __int8 (**)(void))&xmmword_1C0078B50 + 1))() )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x4E706341u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      v10[1] = v10;
      *v10 = v10;
      v10[4] = a2;
      v10[5] = AcpiInterpreterPausedSignalEventCallback;
      v10[6] = a4;
      v10[2] = a1;
      v11 = AcpiCreateDiscoveryDeleteParameters(v10, 0, &P);
      v13 = P;
      v7 = v11;
      if ( v11 >= 0 )
      {
        v7 = ((__int64 (__fastcall *)(PVOID))xmmword_1C0078B50)(P);
        if ( v7 != 259 )
        {
          AcpiNotifyDiscoverDeleteMainCompletion(v13);
          v7 = 259;
        }
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_qD(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          19,
          16,
          (__int64)&WPP_f584d6e152f936bbeb0888d1dfdf0b19_Traceguids,
          a1,
          v7);
      }
      else
      {
        WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v12, 19, 15);
      }
      if ( v7 != 259 )
      {
        ExFreePoolWithTag(v10, 0x4E706341u);
        if ( v13 )
          ExFreePoolWithTag(v13, 0x4E706341u);
      }
    }
    else
    {
      v7 = -1073741670;
      WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v9, 19, 14);
    }
  }
  else
  {
    return 0;
  }
  return v7;
}
