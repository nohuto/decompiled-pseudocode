/*
 * XREFs of ACPIDeviceInitializePowerRequest @ 0x1C001A5DC
 * Callers:
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C001A8AC (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C001A984 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C001AB84 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C001B050 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C001B1CC (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpSystemRequest @ 0x1C001B4FC (ACPIDeviceIrpSystemRequest.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C001B65C (ACPIDeviceIrpWaitWakeRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C001BA88 (ACPIDeviceIrpWarmEjectRequest.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C0020BA4 (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C0003CBC (ExAllocateFromNPagedLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIDeviceInternalQueueRequest @ 0x1C001AA78 (ACPIDeviceInternalQueueRequest.c)
 *     ACPIWakeEmulationDisable @ 0x1C0040AC8 (ACPIWakeEmulationDisable.c)
 *     ACPIWakeEmulationEnable @ 0x1C0040B10 (ACPIWakeEmulationEnable.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0040BA4 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEmulationPrepare @ 0x1C008C06C (ACPIWakeEmulationPrepare.c)
 */

__int64 __fastcall ACPIDeviceInitializePowerRequest(
        __int64 a1,
        int a2,
        void (__fastcall *a3)(__int64, __int64, _QWORD),
        __int64 a4,
        int a5,
        int a6,
        unsigned int a7)
{
  _DWORD *v11; // rax
  _DWORD *v12; // rdi
  int v13; // ebx
  __int64 result; // rax
  KIRQL v15; // r12
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  void (__fastcall *v19)(__int64, int *); // rax
  struct _DEVICE_OBJECT *v20; // rcx
  int v21; // [rsp+20h] [rbp-38h] BYREF
  char v22; // [rsp+24h] [rbp-34h]

  v11 = ExAllocateFromNPagedLookasideList(&RequestLookAsideList);
  v12 = v11;
  if ( !v11 )
  {
    v13 = -1073741670;
LABEL_3:
    if ( a3 )
      a3(a1, a4, (unsigned int)v13);
    return (unsigned int)v13;
  }
  memset(v11, 0, 0x108uLL);
  v12[12] = a6;
  v12[8] = 1599293264;
  *((_QWORD *)v12 + 24) = a3;
  *((_QWORD *)v12 + 25) = a4;
  *((_QWORD *)v12 + 5) = a1;
  v12[52] = 3;
  v12[64] = 0;
  *((_QWORD *)v12 + 1) = v12;
  *(_QWORD *)v12 = v12;
  *((_QWORD *)v12 + 3) = v12 + 4;
  *((_QWORD *)v12 + 2) = v12 + 4;
  *((_QWORD *)v12 + 11) = v12 + 20;
  *((_QWORD *)v12 + 10) = v12 + 20;
  *((_QWORD *)v12 + 9) = v12 + 16;
  *((_QWORD *)v12 + 8) = v12 + 16;
  v15 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  if ( !a6 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 688), 0, 0) )
    {
      if ( a5 == 3 )
      {
        if ( a2 == 4 )
        {
          v16 = a7 | 0x10;
          goto LABEL_32;
        }
      }
      else if ( a2 == 1 )
      {
        v16 = a7 | 0x20;
        goto LABEL_32;
      }
    }
    v16 = a7;
LABEL_32:
    v12[26] = a2;
    v12[27] = 0;
    v12[14] = v16;
    if ( a2 > *(_DWORD *)(a1 + 336) )
    {
      v20 = *(struct _DEVICE_OBJECT **)(a1 + 720);
      if ( v20 )
        PoSetPowerState(v20, DevicePowerState, (POWER_STATE)a2);
    }
    if ( a2 > 1 )
      *(_QWORD *)(a1 + 952) &= ~0x10000uLL;
    goto LABEL_37;
  }
  if ( a6 == 1 )
  {
    v16 = a7;
    v12[27] = a5;
    v12[26] = a2;
    goto LABEL_37;
  }
  if ( a6 != 2 )
  {
    if ( a6 == 3 )
    {
      v16 = a7;
      v12[26] = a2;
    }
    else
    {
      v16 = a7;
      if ( a6 != 4 )
      {
LABEL_37:
        if ( (v16 & 2) == 0 )
          ACPIDeviceInternalQueueRequest(a1, v12, v16);
        KeReleaseSpinLock(&AcpiPowerQueueLock, v15);
        return 3221225494LL;
      }
    }
    v12[14] = v16;
    goto LABEL_37;
  }
  v12[14] = a7;
  v12[26] = a2;
  v12[28] = 1;
  KeReleaseSpinLock(&AcpiPowerQueueLock, v15);
  if ( (*(_QWORD *)(a1 + 952) & 0x100000000LL) != 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v13 = -1073741496;
      goto LABEL_3;
    }
    v13 = ACPIWakeEmulationPrepare(v12);
    if ( v13 < 0 )
      goto LABEL_3;
    v13 = ACPIWakeEmulationEnable(v12);
    if ( v13 < 0 )
    {
      ACPIWakeEmulationDisable(v12);
      goto LABEL_3;
    }
  }
  if ( (*(_QWORD *)(a1 + 952) & 0x4000000000LL) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 944);
    v21 = *(_DWORD *)(a1 + 928);
    v19 = *(void (__fastcall **)(__int64, int *))(a1 + 936);
    v22 = 1;
    v19(v18, &v21);
  }
  LOBYTE(v17) = 1;
  result = ACPIWakeEnableDisableAsync(a1, v17, &ACPIDeviceIrpWaitWakeRequestPending, v12);
  if ( (_DWORD)result == 259 )
    return 3221225494LL;
  return result;
}
