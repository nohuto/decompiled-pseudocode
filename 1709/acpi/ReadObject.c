/*
 * XREFs of ReadObject @ 0x1C001A0F0
 * Callers:
 *     IncDec @ 0x1C0018C50 (IncDec.c)
 *     DerefOf @ 0x1C00191C0 (DerefOf.c)
 *     ParseNameObj @ 0x1C001ADAC (ParseNameObj.c)
 *     AMLIReadNamespaceOverrideObject @ 0x1C005D1DC (AMLIReadNamespaceOverrideObject.c)
 *     LoadFieldUnitDDB @ 0x1C005ECF8 (LoadFieldUnitDDB.c)
 *     NestAsyncEvalObject @ 0x1C00602C8 (NestAsyncEvalObject.c)
 * Callees:
 *     PushFrame @ 0x1C0018B78 (PushFrame.c)
 *     GetBaseData @ 0x1C001A170 (GetBaseData.c)
 *     CopyObjData @ 0x1C001A1A4 (CopyObjData.c)
 *     ReadField @ 0x1C001FD00 (ReadField.c)
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 *     PrintObject @ 0x1C005E804 (PrintObject.c)
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
    v4 = PushFrame(v8, 1430668097, 0x30u, (__int64)AccFieldUnit, &v12);
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
