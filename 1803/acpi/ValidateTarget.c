/*
 * XREFs of ValidateTarget @ 0x1C0048320
 * Callers:
 *     Load @ 0x1C004F530 (Load.c)
 *     Concat @ 0x1C004FFA0 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00502A0 (ConcatenateResTemplate.c)
 *     CondRefOf @ 0x1C00504A0 (CondRefOf.c)
 *     CopyObject @ 0x1C0050550 (CopyObject.c)
 *     Divide @ 0x1C0050700 (Divide.c)
 *     ExprOp1_32 @ 0x1C00507DC (ExprOp1_32.c)
 *     ExprOp1_64 @ 0x1C0050918 (ExprOp1_64.c)
 *     ExprOp2_32 @ 0x1C0050ABC (ExprOp2_32.c)
 *     ExprOp2_64 @ 0x1C0050C44 (ExprOp2_64.c)
 *     Index @ 0x1C0050E60 (Index.c)
 *     MidString @ 0x1C0051D60 (MidString.c)
 *     Store @ 0x1C0052E20 (Store.c)
 *     ToBuffer @ 0x1C0052EE0 (ToBuffer.c)
 *     ToDecStr @ 0x1C0052F60 (ToDecStr.c)
 *     ToHexStr @ 0x1C0053330 (ToHexStr.c)
 *     ToInteger @ 0x1C0053650 (ToInteger.c)
 *     ToString @ 0x1C00536D0 (ToString.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0046D68 (GetObjectTypeName.c)
 *     MatchObjType @ 0x1C0047034 (MatchObjType.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall ValidateTarget(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // edi
  __int64 v8; // rbx
  int v10; // ecx
  __int16 v11; // r10
  __int16 v12; // r11
  int ObjectTypeName; // eax
  int v14; // r11d
  int v15; // r8d
  int v16; // ecx

  v4 = *(unsigned __int16 *)(a2 + 2);
  v5 = 0;
  v8 = a2;
  if ( (_WORD)v4 == 128 )
  {
    v8 = *(_QWORD *)(a2 + 16) + 64LL;
  }
  else if ( (_WORD)v4 == 129 )
  {
    v8 = *(_QWORD *)(a2 + 16);
  }
  else if ( (unsigned __int16)v4 > 0x10u || (v10 = 81921, !_bittest(&v10, v4)) )
  {
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, -1072431094);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v8 + 2));
    v15 = 0;
    v16 = 208;
    goto LABEL_14;
  }
  *(_QWORD *)a4 = v8;
  if ( (_WORD)v4 != 128 )
    goto LABEL_18;
  if ( !MatchObjType(*(unsigned __int16 *)(v8 + 2), a3) )
  {
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, -1072431094);
    GetObjectTypeName(a3);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(*(_QWORD *)a4 + 2LL));
    v15 = v14;
    v16 = 207;
LABEL_14:
    PrintDebugMessage(v16, ObjectTypeName, v15, 0, 0LL);
    return (unsigned int)-1072431094;
  }
  if ( v11 != v12 )
  {
LABEL_18:
    if ( MatchObjType(*(unsigned __int16 *)(v8 + 2), 133) )
      FreeDataBuffs(v8, 1u);
  }
  return v5;
}
