/*
 * XREFs of ACPIDeviceInitializePowerRequest @ 0x1C00094B0
 * Callers:
 *     ACPIDeviceInternalDeviceRequest @ 0x1C00077D8 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C000F074 (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C000F83C (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C0028CBC (ACPIDeviceIrpWaitWakeRequest.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C0029330 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C002A9C0 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpSystemRequest @ 0x1C00492A8 (ACPIDeviceIrpSystemRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C0049594 (ACPIDeviceIrpWarmEjectRequest.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C004B8D4 (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     ACPIDeviceInternalQueueRequest @ 0x1C00096EC (ACPIDeviceInternalQueueRequest.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002073C (ACPIWakeEnableDisableAsync.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIWakeEmulationDisable @ 0x1C0059DE4 (ACPIWakeEmulationDisable.c)
 *     ACPIWakeEmulationEnable @ 0x1C0059E30 (ACPIWakeEmulationEnable.c)
 *     ACPIWakeEmulationPrepare @ 0x1C00A4F40 (ACPIWakeEmulationPrepare.c)
 */

__int64 __fastcall ACPIDeviceInitializePowerRequest(
        __int64 a1,
        int a2,
        _SLIST_ENTRY *a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned int a7)
{
  PSLIST_ENTRY v11; // rdi
  KIRQL v12; // r12
  unsigned int v13; // esi
  struct _DEVICE_OBJECT *v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // ebx
  __int64 v19; // rcx
  void (__fastcall *v20)(__int64, int *); // rax
  int v21; // [rsp+20h] [rbp-38h] BYREF
  char v22; // [rsp+24h] [rbp-34h]

  ++dword_1C0077C54;
  v11 = ExpInterlockedPopEntrySList(&RequestLookAsideList);
  if ( !v11 )
  {
    ++dword_1C0077C58;
    v11 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0077C70)(
                          (unsigned int)dword_1C0077C64,
                          (unsigned int)dword_1C0077C6C,
                          (unsigned int)dword_1C0077C68);
    if ( !v11 )
    {
      if ( !a3 )
        return 3221225494LL;
      v17 = 3221225626LL;
      goto LABEL_26;
    }
  }
  memset(v11, 0, 0x108uLL);
  LODWORD(v11[3].Next) = a6;
  LODWORD(v11[2].Next) = 1599293264;
  v11[12].Next = a3;
  *((_QWORD *)&v11[12].Next + 1) = a4;
  *((_QWORD *)&v11[2].Next + 1) = a1;
  LODWORD(v11[13].Next) = 3;
  LODWORD(v11[16].Next) = 0;
  *((_QWORD *)&v11->Next + 1) = v11;
  v11->Next = v11;
  *((_QWORD *)&v11[1].Next + 1) = v11 + 1;
  v11[1].Next = v11 + 1;
  *((_QWORD *)&v11[5].Next + 1) = v11 + 5;
  v11[5].Next = v11 + 5;
  *((_QWORD *)&v11[4].Next + 1) = v11 + 4;
  v11[4].Next = v11 + 4;
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  if ( !a6 )
  {
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 688), 0, 0) )
    {
LABEL_5:
      v13 = a7;
      goto LABEL_6;
    }
    if ( a5 == 3 )
    {
      if ( a2 != 4 )
        goto LABEL_5;
      v13 = a7 | 0x10;
    }
    else
    {
      if ( a2 != 1 )
        goto LABEL_5;
      v13 = a7 | 0x20;
    }
LABEL_6:
    *((_DWORD *)&v11[6].Next + 2) = a2;
    *((_DWORD *)&v11[6].Next + 3) = 0;
    *((_DWORD *)&v11[3].Next + 2) = v13;
    if ( a2 > *(_DWORD *)(a1 + 336) )
    {
      v14 = *(struct _DEVICE_OBJECT **)(a1 + 720);
      if ( v14 )
        PoSetPowerState(v14, DevicePowerState, (POWER_STATE)a2);
    }
    if ( a2 > 1 )
      *(_QWORD *)(a1 + 952) &= ~0x10000uLL;
    goto LABEL_11;
  }
  if ( a6 == 1 )
  {
    v13 = a7;
    *((_DWORD *)&v11[6].Next + 3) = a5;
    *((_DWORD *)&v11[6].Next + 2) = a2;
    goto LABEL_11;
  }
  if ( a6 != 2 )
  {
    if ( a6 == 3 )
    {
      v13 = a7;
      *((_DWORD *)&v11[6].Next + 2) = a2;
    }
    else
    {
      v13 = a7;
      if ( a6 != 4 )
      {
LABEL_11:
        if ( (v13 & 2) == 0 )
          ACPIDeviceInternalQueueRequest(a1, v11, v13);
        KeReleaseSpinLock(&AcpiPowerQueueLock, v12);
        return 3221225494LL;
      }
    }
    *((_DWORD *)&v11[3].Next + 2) = v13;
    goto LABEL_11;
  }
  *((_DWORD *)&v11[3].Next + 2) = a7;
  *((_DWORD *)&v11[6].Next + 2) = a2;
  LODWORD(v11[7].Next) = 1;
  KeReleaseSpinLock(&AcpiPowerQueueLock, v12);
  if ( (*(_QWORD *)(a1 + 952) & 0x100000000LL) != 0 )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      v18 = ACPIWakeEmulationPrepare(v11);
      if ( v18 >= 0 )
      {
        v18 = ACPIWakeEmulationEnable(v11);
        if ( v18 >= 0 )
          goto LABEL_21;
        ACPIWakeEmulationDisable(v11);
      }
    }
    else
    {
      v18 = -1073741496;
    }
    if ( !a3 )
      return 3221225494LL;
    v17 = (unsigned int)v18;
LABEL_26:
    ((void (__fastcall *)(__int64, __int64, __int64))a3)(a1, a4, v17);
    return 3221225494LL;
  }
LABEL_21:
  if ( (*(_QWORD *)(a1 + 952) & 0x4000000000LL) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 944);
    v21 = *(_DWORD *)(a1 + 928);
    v20 = *(void (__fastcall **)(__int64, int *))(a1 + 936);
    v22 = 1;
    v20(v19, &v21);
  }
  LOBYTE(v16) = 1;
  ACPIWakeEnableDisableAsync(a1, v16, ACPIDeviceIrpWaitWakeRequestPending, v11);
  return 3221225494LL;
}
