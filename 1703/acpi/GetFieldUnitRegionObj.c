/*
 * XREFs of GetFieldUnitRegionObj @ 0x1C00121AC
 * Callers:
 *     WriteFieldObj @ 0x1C0010070 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C0010900 (ReadFieldObj.c)
 *     GetFieldUnitRegionObj @ 0x1C00121AC (GetFieldUnitRegionObj.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0055310 (InternalRawAccessOpRegionHandler.c)
 * Callees:
 *     GetFieldUnitRegionObj @ 0x1C00121AC (GetFieldUnitRegionObj.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 */

__int64 __fastcall GetFieldUnitRegionObj(__int64 *a1, _QWORD *a2, __int64 a3)
{
  int FieldUnitRegionObj; // esi
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // ecx
  __int64 ObjectPath; // rax
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
      PrintDebugMessage(56, *(unsigned __int16 *)(*a2 + 66LL), 0, 0, 0LL);
      FieldUnitRegionObj = -1072431101;
    }
  }
  else
  {
    *a2 = **(_QWORD **)(v5 + 96);
  }
  if ( *a2 && *(_WORD *)(*a2 + 66LL) != 10 )
  {
    LogError(3222536195LL);
    AcpiDiagTraceAmlError(0LL, 3222536195LL);
    ObjectPath = GetObjectPath(*a2);
    v10 = &unk_1C0066CD0;
    v11 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v10) = ObjectPath;
    PrintDebugMessage(55, (_DWORD)v10, *(unsigned __int16 *)(*a2 + 66LL), 0, 0LL);
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
    _InterlockedIncrement((volatile signed __int32 *)(*a2 + 112LL));
  return (unsigned int)FieldUnitRegionObj;
}
