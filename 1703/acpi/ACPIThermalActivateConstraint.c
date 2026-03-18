/*
 * XREFs of ACPIThermalActivateConstraint @ 0x1C001DB88
 * Callers:
 *     ACPIThermalBuildConstraints @ 0x1C0090010 (ACPIThermalBuildConstraints.c)
 * Callees:
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0009BF4 (ACPIInternalDecrementIrpReferenceCount.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C001DCE8 (ACPIThermalQueryCoolingInterfaces.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C0028F58 (ACPIThermalAssocaiteConstraint.c)
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
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rbx
  KIRQL v11; // al
  __int64 v12; // rdi
  KIRQL v13; // bl
  volatile signed __int32 *v14; // [rsp+30h] [rbp+8h] BYREF

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
  v6 = (_QWORD *)qword_1C0076918;
  if ( *(__int64 **)qword_1C0076918 != &AcpiThermalUnclaimedConstraintList )
    __fastfail(3u);
  *v5 = &AcpiThermalUnclaimedConstraintList;
  *(_QWORD *)(a1 + 24) = v6;
  *v6 = v5;
  qword_1C0076918 = a1 + 16;
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v3);
  v7 = *(_QWORD *)(a1 + 32);
  v14 = 0LL;
  v8 = AMLIGetNameSpaceObject((_BYTE *)(a1 + 56), *(_QWORD *)(v7 + 712), &v14);
  v10 = v14;
  if ( v8 >= 0 )
  {
    if ( !v14 )
      return;
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v12 = *(_QWORD *)(*(_QWORD *)v10 + 104LL);
    if ( !v12 || (*(_BYTE *)(v12 + 8) & 4) != 0 )
    {
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 680));
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
      ACPIThermalQueryCoolingInterfaces(v12);
      v13 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
      if ( *(_QWORD *)(v12 + 608) )
        ACPIThermalAssocaiteConstraint(v12, a1);
      KeReleaseSpinLock(&AcpiThermalConstraintLock, v13);
      ACPIInternalDecrementIrpReferenceCount(v12);
      v10 = v14;
    }
  }
  if ( v10 )
    AMLIDereferenceHandleEx(v10, v9);
}
