/*
 * XREFs of Divide @ 0x1C0050700
 * Callers:
 *     <none>
 * Callees:
 *     PushPost @ 0x1C00032BC (PushPost.c)
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C0048320 (ValidateTarget.c)
 */

__int64 __fastcall Divide(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v5; // [rsp+48h] [rbp+10h] BYREF

  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "II");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 135, (__int64)&v5);
    if ( !(_DWORD)result )
    {
      result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 120LL, 135, (__int64)&v5);
      if ( !(_DWORD)result )
        return PushPost(a1, (int)ProcessDivide, a2, 0LL, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
