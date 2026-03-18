/*
 * XREFs of GetObjectTypeName @ 0x1C005D6E0
 * Callers:
 *     AMLIEvalPackageElement @ 0x1C0005854 (AMLIEvalPackageElement.c)
 *     ReadField @ 0x1C0013B20 (ReadField.c)
 *     FreeObjData @ 0x1C0015D30 (FreeObjData.c)
 *     WriteField @ 0x1C0017038 (WriteField.c)
 *     AccFieldUnit @ 0x1C0017A60 (AccFieldUnit.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     NewObjData @ 0x1C001A9F4 (NewObjData.c)
 *     ExprOp2_64 @ 0x1C001AB40 (ExprOp2_64.c)
 *     WriteObject @ 0x1C001ADC0 (WriteObject.c)
 *     Store @ 0x1C001B040 (Store.c)
 *     ValidateTarget @ 0x1C001B7DC (ValidateTarget.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B8B8 (AMLIEvalPkgDataElement.c)
 *     CopyObjBuffer @ 0x1C001BD30 (CopyObjBuffer.c)
 *     ProcessIncDec @ 0x1C001C570 (ProcessIncDec.c)
 *     Acquire @ 0x1C001CB50 (Acquire.c)
 *     Release @ 0x1C001D360 (Release.c)
 *     ObjTypeSizeOf @ 0x1C002A0B0 (ObjTypeSizeOf.c)
 *     DumpObject @ 0x1C002C0B0 (DumpObject.c)
 *     PrintObject @ 0x1C005CA50 (PrintObject.c)
 *     ResetSignal @ 0x1C005F7B0 (ResetSignal.c)
 *     Concat @ 0x1C005FA70 (Concat.c)
 *     Wait @ 0x1C0061DD0 (Wait.c)
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
  if ( off_1C0076188 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C0076180 + v4) )
    {
      ++v3;
      ++v2;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C0076180 + 2 * v3 + 1) )
        return result;
    }
    return *((_QWORD *)&unk_1C0076180 + 2 * v2 + 1);
  }
  return result;
}
