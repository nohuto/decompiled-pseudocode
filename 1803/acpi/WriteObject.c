/*
 * XREFs of WriteObject @ 0x1C004E1D0
 * Callers:
 *     Concat @ 0x1C004FFA0 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00502A0 (ConcatenateResTemplate.c)
 *     CondRefOf @ 0x1C00504A0 (CondRefOf.c)
 *     CopyObject @ 0x1C0050550 (CopyObject.c)
 *     ExprOp1_32 @ 0x1C00507DC (ExprOp1_32.c)
 *     ExprOp1_64 @ 0x1C0050918 (ExprOp1_64.c)
 *     ExprOp2_32 @ 0x1C0050ABC (ExprOp2_32.c)
 *     ExprOp2_64 @ 0x1C0050C44 (ExprOp2_64.c)
 *     Index @ 0x1C0050E60 (Index.c)
 *     MidString @ 0x1C0051D60 (MidString.c)
 *     ProcessDivide @ 0x1C0052680 (ProcessDivide.c)
 *     ProcessIncDec @ 0x1C00527D0 (ProcessIncDec.c)
 *     Store @ 0x1C0052E20 (Store.c)
 *     ToBuffer @ 0x1C0052EE0 (ToBuffer.c)
 *     ToDecStr @ 0x1C0052F60 (ToDecStr.c)
 *     ToHexStr @ 0x1C0053330 (ToHexStr.c)
 *     ToInteger @ 0x1C0053650 (ToInteger.c)
 * Callees:
 *     DupObjData @ 0x1C0003188 (DupObjData.c)
 *     GetBaseData @ 0x1C000328C (GetBaseData.c)
 *     PushFrame @ 0x1C0003314 (PushFrame.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     CopyObjBuffer @ 0x1C0046368 (CopyObjBuffer.c)
 *     GetObjectTypeName @ 0x1C0046D68 (GetObjectTypeName.c)
 *     IsCompatableDSDTRevision @ 0x1C0046E34 (IsCompatableDSDTRevision.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     DumpObject @ 0x1C004C888 (DumpObject.c)
 *     WriteField @ 0x1C004DDF4 (WriteField.c)
 */

__int64 __fastcall WriteObject(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 BaseData; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdi
  unsigned int v9; // ebx
  const void *ObjectTypeName; // rax
  __int64 v12; // rax
  size_t v13; // rdx
  void *v14; // rcx
  int v15; // edx
  bool v16; // al
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  BaseData = GetBaseData(a2);
  v8 = BaseData;
  switch ( *(_WORD *)(BaseData + 2) )
  {
    case 0:
      return (unsigned int)DupObjData(gpheapGlobal, BaseData, v7);
    case 1:
      v16 = IsCompatableDSDTRevision();
      v14 = (void *)(v8 + 16);
      v7 = a3;
      v13 = v16 ? 8 : 4;
      return (unsigned int)CopyObjBuffer(v14, v13, v7);
    case 2:
      v15 = *(_DWORD *)(BaseData + 24);
      if ( !v15 )
        return (unsigned int)-1073741811;
      v13 = (unsigned int)(v15 - 1);
      goto LABEL_16;
    case 3:
      v13 = *(unsigned int *)(BaseData + 24);
LABEL_16:
      v14 = *(void **)(BaseData + 32);
      return (unsigned int)CopyObjBuffer(v14, v13, v7);
  }
  if ( *(_WORD *)(BaseData + 2) != 5 )
  {
    if ( *(_WORD *)(BaseData + 2) != 14 )
    {
      if ( *(_WORD *)(BaseData + 2) == 16 )
      {
        if ( (gDebugger & 0x20000) != 0 )
          DumpObject(a3, v6, 0);
        return 0;
      }
      else
      {
        v9 = -1072431095;
        LogError(-1072431095);
        AcpiDiagTraceAmlError(a1, -1072431095);
        ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(v8 + 2));
        PrintDebugMessage(215, ObjectTypeName, 0LL, 0LL, 0LL);
      }
      return v9;
    }
    return (unsigned int)WriteField(a1, BaseData, *(_QWORD *)(BaseData + 32) + 12LL, a3);
  }
  v9 = PushFrame(a1, 1430668097, 48LL, (__int64)AccFieldUnit, &v18);
  if ( !v9 )
  {
    v12 = v18;
    *(_QWORD *)(v18 + 32) = v8;
    *(_QWORD *)(v12 + 40) = a3;
  }
  return v9;
}
