/*
 * XREFs of ToInteger @ 0x1C001CA10
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C001ADC0 (WriteObject.c)
 *     ValidateTarget @ 0x1C001B7DC (ValidateTarget.c)
 *     ConvertToInteger @ 0x1C001CA8C (ConvertToInteger.c)
 */

__int64 __fastcall ToInteger(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, (__int64)"E");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 0x87u, &v5);
    if ( !(_DWORD)result )
    {
      result = ConvertToInteger(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
      if ( !(_DWORD)result )
        return WriteObject(a1, v5, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
