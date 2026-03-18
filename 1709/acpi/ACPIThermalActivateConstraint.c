/*
 * XREFs of ACPIThermalActivateConstraint @ 0x1C002339C
 * Callers:
 *     ACPIThermalBuildConstraints @ 0x1C0092604 (ACPIThermalBuildConstraints.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0003FF4 (ACPIInternalDecrementIrpReferenceCount.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C00234FC (ACPIThermalQueryCoolingInterfaces.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C0029BF8 (ACPIThermalAssocaiteConstraint.c)
 */

void __fastcall ACPIThermalActivateConstraint(__int64 a1)
{
  __int64 v2; // rbx
  KIRQL v3; // dl
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rbx
  KIRQL v10; // al
  __int64 v11; // rdi
  KIRQL v12; // bl
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 200LL) + 176LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v4 = *(_QWORD **)(v2 + 8);
  if ( *v4 != v2 )
    __fastfail(3u);
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)a1 = v2;
  *v4 = a1;
  v5 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 8) = a1;
  v6 = (_QWORD *)qword_1C00789D8;
  if ( *(__int64 **)qword_1C00789D8 != &AcpiThermalUnclaimedConstraintList )
    __fastfail(3u);
  *v5 = &AcpiThermalUnclaimedConstraintList;
  *(_QWORD *)(a1 + 24) = v6;
  *v6 = v5;
  qword_1C00789D8 = a1 + 16;
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v3);
  v7 = *(_QWORD *)(a1 + 32);
  v13 = 0LL;
  v8 = AMLIGetNameSpaceObject((_BYTE *)(a1 + 56), *(__int64 **)(v7 + 712), &v13, 0);
  v9 = v13;
  if ( v8 >= 0 )
  {
    if ( !v13 )
      return;
    v10 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v11 = *(_QWORD *)(*(_QWORD *)v9 + 104LL);
    if ( !v11 || (*(_BYTE *)(v11 + 8) & 4) != 0 )
    {
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 680));
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v10);
      ACPIThermalQueryCoolingInterfaces(v11);
      v12 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
      if ( *(_QWORD *)(v11 + 608) )
        ACPIThermalAssocaiteConstraint(v11, a1);
      KeReleaseSpinLock(&AcpiThermalConstraintLock, v12);
      ACPIInternalDecrementIrpReferenceCount(v11);
      v9 = v13;
    }
  }
  if ( v9 )
    AMLIDereferenceHandleEx(v9);
}
