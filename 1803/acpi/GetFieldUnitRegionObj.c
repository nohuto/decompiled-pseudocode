/*
 * XREFs of GetFieldUnitRegionObj @ 0x1C0046B60
 * Callers:
 *     InternalRawAccessOpRegionHandler @ 0x1C0035EB0 (InternalRawAccessOpRegionHandler.c)
 *     GetFieldUnitRegionObj @ 0x1C0046B60 (GetFieldUnitRegionObj.c)
 *     AccessFieldData @ 0x1C004C4E0 (AccessFieldData.c)
 * Callees:
 *     GetObjectPath @ 0x1C00036E8 (GetObjectPath.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     GetFieldUnitRegionObj @ 0x1C0046B60 (GetFieldUnitRegionObj.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall GetFieldUnitRegionObj(__int64 *a1, __int64 *a2)
{
  int FieldUnitRegionObj; // esi
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // ecx
  __int64 ObjectPath; // rax
  void *v8; // rdx
  void *v9; // rdi

  FieldUnitRegionObj = 0;
  v4 = *a1;
  v5 = *(unsigned __int16 *)(*a1 + 66) - 130;
  if ( v5 && (v6 = v5 - 1) != 0 )
  {
    if ( v6 == 1 )
    {
      FieldUnitRegionObj = GetFieldUnitRegionObj(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 96) + 8LL) + 96LL), a2);
    }
    else
    {
      LogError(3222536195LL);
      AcpiDiagTraceAmlError(0LL, -1072431101);
      PrintDebugMessage(56, *(unsigned __int16 *)(*a2 + 66), 0, 0, 0LL);
      FieldUnitRegionObj = -1072431101;
    }
  }
  else
  {
    *a2 = **(_QWORD **)(v4 + 96);
  }
  if ( *a2 && *(_WORD *)(*a2 + 66) != 10 )
  {
    LogError(3222536195LL);
    AcpiDiagTraceAmlError(0LL, -1072431101);
    ObjectPath = GetObjectPath(*a2);
    v8 = &unk_1C005B1F0;
    v9 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v8) = ObjectPath;
    PrintDebugMessage(55, (_DWORD)v8, *(unsigned __int16 *)(*a2 + 66), 0, 0LL);
    FieldUnitRegionObj = -1072431101;
    if ( !v9 )
      goto LABEL_17;
    ExFreePoolWithTag(v9, 0);
  }
  if ( FieldUnitRegionObj < 0 || !*a2 )
  {
LABEL_17:
    *a2 = 0LL;
    return (unsigned int)FieldUnitRegionObj;
  }
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*a2 + 112));
  return (unsigned int)FieldUnitRegionObj;
}
