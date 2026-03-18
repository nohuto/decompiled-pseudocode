/*
 * XREFs of GetFieldUnitRegionObj @ 0x1C00185FC
 * Callers:
 *     WriteFieldObj @ 0x1C00168F0 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C0016D90 (ReadFieldObj.c)
 *     GetFieldUnitRegionObj @ 0x1C00185FC (GetFieldUnitRegionObj.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0055F00 (InternalRawAccessOpRegionHandler.c)
 * Callees:
 *     GetObjectPath @ 0x1C0012478 (GetObjectPath.c)
 *     GetFieldUnitRegionObj @ 0x1C00185FC (GetFieldUnitRegionObj.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 */

__int64 __fastcall GetFieldUnitRegionObj(__int64 *a1, __int64 *a2, __int64 a3)
{
  int FieldUnitRegionObj; // esi
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // ecx
  _QWORD *ObjectPath; // rax
  void *v10; // rdx
  void *v11; // rdi

  FieldUnitRegionObj = 0;
  v5 = *a1;
  v6 = *(unsigned __int16 *)(*a1 + 66) - 130;
  if ( v6 && (v7 = v6 - 1) != 0 )
  {
    if ( v7 == 1 )
    {
      FieldUnitRegionObj = GetFieldUnitRegionObj(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 96) + 8LL) + 96LL), a2, a3);
    }
    else
    {
      LogError(3222536195LL);
      AcpiDiagTraceAmlError(0LL, 3222536195LL);
      PrintDebugMessage(56, *(unsigned __int16 *)(*a2 + 66), 0, 0, 0LL);
      FieldUnitRegionObj = -1072431101;
    }
  }
  else
  {
    *a2 = **(_QWORD **)(v5 + 96);
  }
  if ( *a2 && *(_WORD *)(*a2 + 66) != 10 )
  {
    LogError(3222536195LL);
    AcpiDiagTraceAmlError(0LL, 3222536195LL);
    ObjectPath = GetObjectPath(*a2);
    v10 = &unk_1C0067B08;
    v11 = ObjectPath;
    if ( ObjectPath )
      LODWORD(v10) = (_DWORD)ObjectPath;
    PrintDebugMessage(55, (_DWORD)v10, *(unsigned __int16 *)(*a2 + 66), 0, 0LL);
    FieldUnitRegionObj = -1072431101;
    if ( !v11 )
      goto LABEL_18;
    ExFreePoolWithTag(v11, 0);
  }
  if ( FieldUnitRegionObj < 0 || !*a2 )
  {
LABEL_18:
    *a2 = 0LL;
    return (unsigned int)FieldUnitRegionObj;
  }
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*a2 + 112));
  return (unsigned int)FieldUnitRegionObj;
}
