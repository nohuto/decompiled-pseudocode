/*
 * XREFs of ACPIDeviceInitializePowerRequest @ 0x1C0002A38
 * Callers:
 *     ACPIDeviceInternalDeviceRequest @ 0x1C0001E68 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C00021C0 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C000F7D8 (ACPIDeviceIrpWaitWakeRequest.c)
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C001F0D4 (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C002A000 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C002B590 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpSystemRequest @ 0x1C004868C (ACPIDeviceIrpSystemRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C0048978 (ACPIDeviceIrpWarmEjectRequest.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C004ACD4 (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     ACPIWakeEmulationDisable @ 0x1C0001918 (ACPIWakeEmulationDisable.c)
 *     ACPIDeviceInternalQueueRequest @ 0x1C0002C88 (ACPIDeviceInternalQueueRequest.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C000FCCC (ACPIWakeEnableDisableAsync.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIWakeEmulationEnable @ 0x1C005A7E4 (ACPIWakeEmulationEnable.c)
 *     ACPIWakeEmulationPrepare @ 0x1C00A79F4 (ACPIWakeEmulationPrepare.c)
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
  int v17; // ebx
  __int64 v18; // rcx
  void (__fastcall *v19)(__int64, int *); // rax
  int v20; // [rsp+20h] [rbp-38h] BYREF
  char v21; // [rsp+24h] [rbp-34h]

  ++RequestLookAsideList.L.TotalAllocates;
  v11 = ExpInterlockedPopEntrySList(&RequestLookAsideList.L.ListHead);
  if ( v11
    || (++RequestLookAsideList.L.AllocateMisses,
        (v11 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RequestLookAsideList.L.AllocateEx)(
                               (unsigned int)RequestLookAsideList.L.Type,
                               RequestLookAsideList.L.Size,
                               RequestLookAsideList.L.Tag)) != 0LL) )
  {
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
    switch ( a6 )
    {
      case 0:
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 688), 0, 0) )
        {
LABEL_4:
          v13 = a7;
          goto LABEL_5;
        }
        if ( a5 == 3 )
        {
          if ( a2 != 4 )
            goto LABEL_4;
          v13 = a7 | 0x10;
        }
        else
        {
          if ( a2 != 1 )
            goto LABEL_4;
          v13 = a7 | 0x20;
        }
LABEL_5:
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
        goto LABEL_10;
      case 1:
        v13 = a7;
        *((_DWORD *)&v11[6].Next + 3) = a5;
        *((_DWORD *)&v11[6].Next + 2) = a2;
        goto LABEL_10;
      case 2:
        *((_DWORD *)&v11[3].Next + 2) = a7;
        *((_DWORD *)&v11[6].Next + 2) = a2;
        LODWORD(v11[7].Next) = 1;
        KeReleaseSpinLock(&AcpiPowerQueueLock, v12);
        if ( (*(_QWORD *)(a1 + 952) & 0x100000000LL) != 0 )
        {
          if ( KeGetCurrentIrql() >= 2u )
          {
            v17 = -1073741496;
            goto LABEL_25;
          }
          v17 = ACPIWakeEmulationPrepare(v11);
          if ( v17 < 0 )
            goto LABEL_25;
          v17 = ACPIWakeEmulationEnable(v11);
          if ( v17 < 0 )
          {
            ACPIWakeEmulationDisable((__int64)v11);
            goto LABEL_25;
          }
        }
        if ( (*(_QWORD *)(a1 + 952) & 0x4000000000LL) != 0 )
        {
          v18 = *(_QWORD *)(a1 + 944);
          v20 = *(_DWORD *)(a1 + 928);
          v19 = *(void (__fastcall **)(__int64, int *))(a1 + 936);
          v21 = 1;
          v19(v18, &v20);
        }
        LOBYTE(v16) = 1;
        ACPIWakeEnableDisableAsync(a1, v16, &ACPIDeviceIrpWaitWakeRequestPending, v11);
        return 3221225494LL;
      case 3:
        v13 = a7;
        *((_DWORD *)&v11[6].Next + 2) = a2;
        break;
      default:
        v13 = a7;
        if ( a6 != 4 )
        {
LABEL_10:
          if ( (v13 & 2) == 0 )
            ACPIDeviceInternalQueueRequest(a1, v11, v13);
          KeReleaseSpinLock(&AcpiPowerQueueLock, v12);
          return 3221225494LL;
        }
        break;
    }
    *((_DWORD *)&v11[3].Next + 2) = v13;
    goto LABEL_10;
  }
  v17 = -1073741670;
LABEL_25:
  if ( a3 )
    ((void (__fastcall *)(__int64, __int64, _QWORD))a3)(a1, a4, (unsigned int)v17);
  return (unsigned int)v17;
}
