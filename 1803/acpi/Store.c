/*
 * XREFs of Store @ 0x1C0052E20
 * Callers:
 *     <none>
 * Callees:
 *     MoveObjData @ 0x1C0047124 (MoveObjData.c)
 *     ValidateTarget @ 0x1C0048320 (ValidateTarget.c)
 *     WriteObject @ 0x1C004E1D0 (WriteObject.c)
 */

__int64 __fastcall Store(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 135, (__int64)&v5);
  if ( !(_DWORD)result )
  {
    MoveObjData(*(_OWORD **)(a2 + 88), *(_OWORD **)(a2 + 80));
    return WriteObject(a1, v5, *(_QWORD *)(a2 + 88));
  }
  return result;
}
