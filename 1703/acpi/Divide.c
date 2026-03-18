/*
 * XREFs of Divide @ 0x1C0060080
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C001B7DC (ValidateTarget.c)
 *     PushPost @ 0x1C001CC98 (PushPost.c)
 */

__int64 __fastcall Divide(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, (__int64)"II");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 80LL, 0x87u, &v5);
    if ( !(_DWORD)result )
    {
      result = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 120LL, 0x87u, &v5);
      if ( !(_DWORD)result )
        return PushPost(a1, (int)ProcessDivide, a2, 0LL, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
