/*
 * XREFs of GetObjectTypeName @ 0x1C0046D68
 * Callers:
 *     AMLIEvalPackageElement @ 0x1C0043464 (AMLIEvalPackageElement.c)
 *     AMLIEvalPkgDataElement @ 0x1C0043638 (AMLIEvalPkgDataElement.c)
 *     CopyObjBuffer @ 0x1C0046368 (CopyObjBuffer.c)
 *     FreeObjData @ 0x1C0046808 (FreeObjData.c)
 *     NewObjData @ 0x1C0047164 (NewObjData.c)
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C0048320 (ValidateTarget.c)
 *     PrintObject @ 0x1C00491C0 (PrintObject.c)
 *     DumpObject @ 0x1C004C888 (DumpObject.c)
 *     ReadField @ 0x1C004D4C0 (ReadField.c)
 *     WriteField @ 0x1C004DDF4 (WriteField.c)
 *     WriteObject @ 0x1C004E1D0 (WriteObject.c)
 *     Release @ 0x1C004F7F0 (Release.c)
 *     ResetSignal @ 0x1C004F950 (ResetSignal.c)
 *     Acquire @ 0x1C004FCE0 (Acquire.c)
 *     Concat @ 0x1C004FFA0 (Concat.c)
 *     ObjTypeSizeOf @ 0x1C00521E0 (ObjTypeSizeOf.c)
 *     ProcessIncDec @ 0x1C00527D0 (ProcessIncDec.c)
 *     Wait @ 0x1C00538B0 (Wait.c)
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
  if ( off_1C0065F48 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C0065F40 + v4) )
    {
      ++v3;
      ++v2;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C0065F40 + 2 * v3 + 1) )
        return result;
    }
    return *((_QWORD *)&unk_1C0065F40 + 2 * v2 + 1);
  }
  return result;
}
