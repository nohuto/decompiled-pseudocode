/*
 * XREFs of Unload @ 0x1C005FA10
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     PushPost @ 0x1C001CC98 (PushPost.c)
 */

__int64 __fastcall Unload(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v5; // r8

  v3 = a1;
  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 1, (__int64)"H");
  if ( !(_DWORD)result )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
    if ( v5 )
      return PushPost(v3, (int)ParseUnload, v5, 0LL, *(_QWORD *)(a2 + 88));
  }
  return result;
}
