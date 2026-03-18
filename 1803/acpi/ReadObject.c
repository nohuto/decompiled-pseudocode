/*
 * XREFs of ReadObject @ 0x1C00031E0
 * Callers:
 *     AsyncEvalObject @ 0x1C0002BD8 (AsyncEvalObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C0046100 (AMLIReadNamespaceOverrideObject.c)
 *     LoadFieldUnitDDB @ 0x1C004A5F4 (LoadFieldUnitDDB.c)
 *     NestAsyncEvalObject @ 0x1C004EC28 (NestAsyncEvalObject.c)
 *     DerefOf @ 0x1C0050670 (DerefOf.c)
 *     IncDec @ 0x1C0050E00 (IncDec.c)
 *     ParseNameObj @ 0x1C0055A68 (ParseNameObj.c)
 * Callees:
 *     CopyObjData @ 0x1C000324C (CopyObjData.c)
 *     GetBaseData @ 0x1C000328C (GetBaseData.c)
 *     PushFrame @ 0x1C0003314 (PushFrame.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     PrintObject @ 0x1C00491C0 (PrintObject.c)
 *     ReadField @ 0x1C004D4C0 (ReadField.c)
 */

__int64 __fastcall ReadObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 BaseData; // rdi
  __int64 v6; // r10
  int v7; // eax
  __int64 v9; // rax
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  BaseData = GetBaseData(a2);
  v7 = *(unsigned __int16 *)(BaseData + 2);
  if ( v7 == 5 )
  {
    v4 = PushFrame(v6, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v10);
    if ( !v4 )
    {
      v9 = v10;
      *(_QWORD *)(v10 + 32) = BaseData;
      *(_DWORD *)(v9 + 16) = 0x10000;
      *(_QWORD *)(v9 + 40) = a3;
    }
  }
  else if ( v7 == 14 )
  {
    return (unsigned int)ReadField(v6, BaseData, *(_QWORD *)(BaseData + 32) + 12LL, a3);
  }
  else
  {
    CopyObjData(a3, BaseData);
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("=");
      PrintObject(a3);
    }
  }
  return v4;
}
