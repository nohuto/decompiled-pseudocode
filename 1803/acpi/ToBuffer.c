/*
 * XREFs of ToBuffer @ 0x1C0052EE0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C0048320 (ValidateTarget.c)
 *     WriteObject @ 0x1C004E1D0 (WriteObject.c)
 *     ConvertToBuffer @ 0x1C0053A14 (ConvertToBuffer.c)
 */

__int64 __fastcall ToBuffer(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "D");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 135, (__int64)&v7);
    if ( !(_DWORD)result )
    {
      result = ConvertToBuffer(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), v5, v6);
      if ( !(_DWORD)result )
        return WriteObject(a1, v7, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
