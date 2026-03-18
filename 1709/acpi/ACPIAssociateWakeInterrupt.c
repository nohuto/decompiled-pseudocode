/*
 * XREFs of ACPIAssociateWakeInterrupt @ 0x1C0059E28
 * Callers:
 *     ACPIWakeEmulationEnable @ 0x1C005A7E4 (ACPIWakeEmulationEnable.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C00111E4 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIDelayedFreeWakeInterrupt @ 0x1C005A0F4 (ACPIDelayedFreeWakeInterrupt.c)
 *     ACPIDereferenceWakeInterrupt @ 0x1C005A210 (ACPIDereferenceWakeInterrupt.c)
 *     ACPIFindWakeInterruptForVector @ 0x1C005A32C (ACPIFindWakeInterruptForVector.c)
 *     OSPowerTryAcquireWakeInterruptChangeStateLock @ 0x1C005AA64 (OSPowerTryAcquireWakeInterruptChangeStateLock.c)
 *     ACPIConnectWakeInterrupt @ 0x1C00A78B4 (ACPIConnectWakeInterrupt.c)
 */

__int64 __fastcall ACPIAssociateWakeInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // r12
  KIRQL v4; // al
  KIRQL v5; // si
  __int64 v7; // r15
  unsigned int v8; // ebp
  __int64 v9; // rbx
  int v10; // edi
  _QWORD *v11; // rcx
  int v12; // eax
  PVOID v13; // rax
  int v14; // eax
  _QWORD *v15; // rax
  __int64 *v16; // rax
  int v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v19 = 0LL;
  v3 = *(_QWORD *)(v1 + 40);
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v5 = v4;
  if ( *(_DWORD *)(v1 + 108) )
  {
    KeReleaseSpinLock(&AcpiPowerLock, v4);
    return 3221225760LL;
  }
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_DWORD *)(a1 + 24);
  if ( (int)ACPIFindWakeInterruptForVector(v8, v7, &v19) < 0 )
  {
    v13 = ExAllocateFromNPagedLookasideList(&WakeInterruptLookAsideList);
    v9 = (__int64)v13;
    if ( !v13 )
    {
      v10 = -1073741670;
      KeReleaseSpinLock(&AcpiPowerLock, v5);
      v9 = v19;
      goto LABEL_28;
    }
    memset(v13, 0, 0x60uLL);
    *(_QWORD *)(v9 + 8) = v9;
    *(_QWORD *)v9 = v9;
    *(_QWORD *)(v9 + 24) = v9 + 16;
    *(_QWORD *)(v9 + 16) = v9 + 16;
    *(_DWORD *)(v9 + 32) = v8;
    v14 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(v9 + 56) = 0;
    *(_DWORD *)(v9 + 36) = v14;
    *(_QWORD *)(v9 + 40) = v7;
    KeInitializeEvent((PRKEVENT)(v9 + 64), SynchronizationEvent, 0);
    *(_DWORD *)(v9 + 88) = 2;
    v15 = *(_QWORD **)(v9 + 24);
    if ( *v15 != v9 + 16 )
      __fastfail(3u);
    *(_QWORD *)a1 = v9 + 16;
    *(_QWORD *)(a1 + 8) = v15;
    *v15 = a1;
    *(_QWORD *)(v9 + 24) = a1;
    v16 = (__int64 *)qword_1C0078938;
    if ( *(__int64 **)qword_1C0078938 != &AcpiPowerWaitWakeInterruptList )
      __fastfail(3u);
    *(_QWORD *)(v9 + 8) = qword_1C0078938;
    *(_QWORD *)v9 = &AcpiPowerWaitWakeInterruptList;
    *v16 = v9;
    v12 = 5;
    qword_1C0078938 = v9;
    v19 = v9;
LABEL_22:
    if ( v12 == 4 )
    {
      v17 = 1;
      v18 = *(_QWORD *)(v9 + 48);
      IoReportInterruptActive(&v17);
      v10 = 0;
    }
    else
    {
      KeReleaseSpinLock(&AcpiPowerLock, v5);
      v10 = ACPIConnectWakeInterrupt(v3, v9);
      v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      if ( v10 < 0 )
      {
        *(_DWORD *)(v9 + 56) = 5;
        goto LABEL_27;
      }
    }
    *(_DWORD *)(v9 + 56) = 3;
LABEL_27:
    KeSetEvent((PRKEVENT)(v9 + 64), 0, 0);
    KeReleaseSpinLock(&AcpiPowerLock, v5);
LABEL_28:
    if ( v9 )
    {
      ACPIDereferenceWakeInterrupt(&v19);
      ACPIDelayedFreeWakeInterrupt(v8, v7);
    }
    return (unsigned int)v10;
  }
  v9 = v19;
  if ( *(_DWORD *)(v19 + 36) == *(_DWORD *)(a1 + 28) )
  {
    *(_DWORD *)(v19 + 88) += 2;
    v11 = *(_QWORD **)(v9 + 24);
    if ( *v11 != v9 + 16 )
      __fastfail(3u);
    *(_QWORD *)a1 = v9 + 16;
    *(_QWORD *)(a1 + 8) = v11;
    *v11 = a1;
    *(_QWORD *)(v9 + 24) = a1;
    if ( *(int *)(v9 + 56) >= 2 )
    {
      if ( !(unsigned __int8)OSPowerTryAcquireWakeInterruptChangeStateLock(v9) )
      {
        KeReleaseSpinLock(&AcpiPowerLock, v5);
        v10 = -1073741823;
        goto LABEL_28;
      }
    }
    else
    {
      KeReleaseSpinLock(&AcpiPowerLock, v5);
      KeWaitForSingleObject((PVOID)(v9 + 64), Executive, 0, 0, 0LL);
      v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    }
    v12 = *(_DWORD *)(v9 + 56);
    if ( v12 == 3 )
    {
      KeSetEvent((PRKEVENT)(v9 + 64), 0, 0);
      KeReleaseSpinLock(&AcpiPowerLock, v5);
      v10 = 0;
      goto LABEL_28;
    }
    *(_DWORD *)(v9 + 56) = 0;
    goto LABEL_22;
  }
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  return (unsigned int)-1073741637;
}
