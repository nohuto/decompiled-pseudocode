/*
 * XREFs of GetObjectTypeName @ 0x1C005D4E0
 * Callers:
 *     NewObjData @ 0x1C0008108 (NewObjData.c)
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     ValidateArgTypes @ 0x1C000C6D0 (ValidateArgTypes.c)
 *     FreeObjData @ 0x1C000CD80 (FreeObjData.c)
 *     AMLIEvalPkgDataElement @ 0x1C000D7EC (AMLIEvalPkgDataElement.c)
 *     Release @ 0x1C0015300 (Release.c)
 *     Acquire @ 0x1C0016280 (Acquire.c)
 *     Store @ 0x1C001F810 (Store.c)
 *     ReadField @ 0x1C001FD00 (ReadField.c)
 *     ExprOp2_64 @ 0x1C0020100 (ExprOp2_64.c)
 *     WriteObject @ 0x1C0020320 (WriteObject.c)
 *     ValidateTarget @ 0x1C00208D4 (ValidateTarget.c)
 *     WriteField @ 0x1C00209B8 (WriteField.c)
 *     CopyObjBuffer @ 0x1C0020AF8 (CopyObjBuffer.c)
 *     ProcessIncDec @ 0x1C0020C30 (ProcessIncDec.c)
 *     AMLIEvalPackageElement @ 0x1C00216BC (AMLIEvalPackageElement.c)
 *     ObjTypeSizeOf @ 0x1C002AEB0 (ObjTypeSizeOf.c)
 *     PrintObject @ 0x1C005E804 (PrintObject.c)
 *     DumpObject @ 0x1C005F5C8 (DumpObject.c)
 *     ResetSignal @ 0x1C00609B0 (ResetSignal.c)
 *     Concat @ 0x1C0060C70 (Concat.c)
 *     Wait @ 0x1C0062FA0 (Wait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetObjectTypeName(int a1)
{
  __int64 result; // rax
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // rdx

  result = 0LL;
  v2 = 0;
  if ( off_1C00781D8 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C00781D0 + v4) )
    {
      ++v3;
      ++v2;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C00781D0 + 2 * v3 + 1) )
        return result;
    }
    return *((_QWORD *)&unk_1C00781D0 + 2 * v2 + 1);
  }
  return result;
}
