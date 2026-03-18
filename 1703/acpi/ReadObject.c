/*
 * XREFs of ReadObject @ 0x1C00141BC
 * Callers:
 *     DerefOf @ 0x1C0013AA0 (DerefOf.c)
 *     ParseNameObj @ 0x1C00147FC (ParseNameObj.c)
 *     IncDec @ 0x1C001CC40 (IncDec.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C005D3E8 (AMLIReadNamespaceOverrideObject.c)
 *     LoadFieldUnitDDB @ 0x1C005E15C (LoadFieldUnitDDB.c)
 *     NestAsyncEvalObject @ 0x1C005F0C0 (NestAsyncEvalObject.c)
 * Callees:
 *     ReadField @ 0x1C0013B20 (ReadField.c)
 *     GetBaseData @ 0x1C001423C (GetBaseData.c)
 *     CopyObjData @ 0x1C0014270 (CopyObjData.c)
 *     PushFrame @ 0x1C001CCF0 (PushFrame.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     PrintObject @ 0x1C005CA50 (PrintObject.c)
 */

__int64 __fastcall ReadObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 BaseData; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  int v9; // eax
  __int64 v11; // rax
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  BaseData = GetBaseData(a2);
  v9 = *(unsigned __int16 *)(BaseData + 2);
  if ( v9 == 5 )
  {
    v4 = PushFrame(v8, 1430668097, 48, (unsigned int)AccFieldUnit, (__int64)&v12);
    if ( !v4 )
    {
      v11 = v12;
      *(_QWORD *)(v12 + 32) = BaseData;
      *(_DWORD *)(v11 + 16) = 0x10000;
      *(_QWORD *)(v11 + 40) = a3;
    }
  }
  else if ( v9 == 14 )
  {
    return (unsigned int)ReadField(v8, BaseData, *(_QWORD *)(BaseData + 32) + 12LL, a3);
  }
  else
  {
    CopyObjData(a3, BaseData, v6, v7);
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("=");
      PrintObject(a3);
    }
  }
  return v4;
}
