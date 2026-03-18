/*
 * XREFs of ValidateTarget @ 0x1C001B7DC
 * Callers:
 *     Index @ 0x1C001B680 (Index.c)
 *     CondRefOf @ 0x1C001C620 (CondRefOf.c)
 *     ToInteger @ 0x1C001CA10 (ToInteger.c)
 *     ExprOp1_64 @ 0x1C001E7DC (ExprOp1_64.c)
 *     Load @ 0x1C00296F0 (Load.c)
 *     Concat @ 0x1C005FA70 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C005FD60 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C005FF60 (CopyObject.c)
 *     Divide @ 0x1C0060080 (Divide.c)
 *     ExprOp1_32 @ 0x1C0060114 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C0060250 (ExprOp2_32.c)
 *     MidString @ 0x1C0060B70 (MidString.c)
 *     ToBuffer @ 0x1C00614E0 (ToBuffer.c)
 *     ToDecStr @ 0x1C0061560 (ToDecStr.c)
 *     ToHexStr @ 0x1C00618F0 (ToHexStr.c)
 *     ToString @ 0x1C0061C00 (ToString.c)
 * Callees:
 *     FreeData @ 0x1C0004EA8 (FreeData.c)
 *     MatchObjType @ 0x1C001B164 (MatchObjType.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     GetObjectTypeName @ 0x1C005D6E0 (GetObjectTypeName.c)
 */

__int64 __fastcall ValidateTarget(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // ebx
  int v10; // ecx
  unsigned int v11; // eax
  __int64 v13; // rax
  __int16 v14; // r10
  __int16 v15; // r11
  int ObjectTypeName; // eax
  int v17; // r11d
  int v18; // r8d
  int v19; // ecx

  v4 = *(unsigned __int16 *)(a2 + 2);
  v5 = 0;
  if ( (_WORD)v4 == 128 )
  {
    v13 = *(_QWORD *)(a2 + 16) + 64LL;
LABEL_12:
    *a4 = v13;
    goto LABEL_6;
  }
  if ( (_WORD)v4 == 129 )
  {
    v13 = *(_QWORD *)(a2 + 16);
    goto LABEL_12;
  }
  if ( (unsigned __int16)v4 > 0x10u || (v10 = 81921, !_bittest(&v10, v4)) )
  {
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
    v18 = 0;
    v19 = 208;
    goto LABEL_26;
  }
  *a4 = a2;
LABEL_6:
  if ( (_WORD)v4 != 128 )
    goto LABEL_7;
  if ( !MatchObjType(*(unsigned __int16 *)(*a4 + 2), a3) )
  {
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    GetObjectTypeName(a3);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(*a4 + 2));
    v18 = v17;
    v19 = 207;
LABEL_26:
    PrintDebugMessage(v19, ObjectTypeName, v18, 0, 0LL);
    return (unsigned int)-1072431094;
  }
  if ( v14 == v15 )
    return v5;
LABEL_7:
  v11 = *(unsigned __int16 *)(*a4 + 2);
  if ( v11 == 133 || !*(_WORD *)(*a4 + 2) )
  {
LABEL_9:
    FreeData((_QWORD *)*a4);
    return v5;
  }
  if ( v11 <= 4 )
  {
    v11 = 133;
    goto LABEL_23;
  }
  if ( v11 != 5 && v11 != 14 )
  {
LABEL_23:
    if ( v11 != 133 )
      return v5;
    goto LABEL_9;
  }
  return v5;
}
