/*
 * XREFs of ACPIAmliEvaluateDsm @ 0x1C00747A8
 * Callers:
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C0038D98 (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIThermalGetSensorDevice @ 0x1C003C9E4 (ACPIThermalGetSensorDevice.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C007F340 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 *     AcpiQueryPciDeviceChassisLabel @ 0x1C007F52C (AcpiQueryPciDeviceChassisLabel.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C007FF58 (ACPIPepInitializePlatformNotificationSupport.c)
 *     ACPIPepPlatformEntryExitNotify @ 0x1C0080160 (ACPIPepPlatformEntryExitNotify.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0085C6C (PnpiUpdateForceActiveBothInterrupts.c)
 *     ACPIThermalStartDevice @ 0x1C00895C0 (ACPIThermalStartDevice.c)
 *     ACPIThermalWorker @ 0x1C0089A40 (ACPIThermalWorker.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall ACPIAmliEvaluateDsm(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 *v9; // rbp
  int v10; // ebx
  PVOID PoolWithTag; // rsi
  _WORD *v12; // rdi

  v7 = a4;
  v8 = a3;
  v9 = AMLIGetNamedChild(a1, 1297302623);
  if ( v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x41706341u);
    if ( PoolWithTag )
    {
      v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52706341u);
      if ( v12 )
      {
        memset(PoolWithTag, 0, 0xA0uLL);
        memset(v12, 0, 0x28uLL);
        *((_DWORD *)PoolWithTag + 6) = 16;
        *((_WORD *)PoolWithTag + 1) = 3;
        *((_QWORD *)PoolWithTag + 4) = a2;
        *((_QWORD *)PoolWithTag + 7) = v8;
        *((_QWORD *)PoolWithTag + 12) = v7;
        *((_WORD *)PoolWithTag + 21) = 1;
        *((_WORD *)PoolWithTag + 41) = 1;
        *((_WORD *)PoolWithTag + 61) = 4;
        *((_DWORD *)PoolWithTag + 36) = 48;
        *((_QWORD *)PoolWithTag + 19) = a5;
        v10 = AMLIEvalNameSpaceObject(v9, v12, 4u, PoolWithTag);
        if ( v10 >= 0 )
        {
          if ( (_DWORD)v7 || v12[1] == 3 )
          {
            *a6 = v12;
            v10 = 0;
          }
          else
          {
            v10 = -1073741823;
          }
        }
      }
      else
      {
        v10 = -1073741670;
      }
      ExFreePoolWithTag(PoolWithTag, 0x41706341u);
      if ( v10 < 0 && v12 )
        ExFreePoolWithTag(v12, 0x52706341u);
    }
    else
    {
      v10 = -1073741670;
    }
    AMLIDereferenceHandleEx((volatile signed __int32 *)v9);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v10;
}
