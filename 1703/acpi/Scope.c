/*
 * XREFs of Scope @ 0x1C001C2B0
 * Callers:
 *     <none>
 * Callees:
 *     GetNameSpaceObject @ 0x1C00171C0 (GetNameSpaceObject.c)
 *     PushScope @ 0x1C001BFE8 (PushScope.c)
 */

__int64 __fastcall Scope(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax

  result = GetNameSpaceObject(*(_BYTE **)(a2[10] + 32));
  if ( !(_DWORD)result )
    return PushScope(a1, a1[15], a2[5], 0LL, a2[8], a1[11], a1[40], a2[11]);
  return result;
}
