/*
 * XREFs of Device @ 0x1C0012740
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C00196F0 (CreateNameSpaceObject.c)
 *     PushScope @ 0x1C001BFE8 (PushScope.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Device(_QWORD *a1, _QWORD *a2)
{
  __int64 *v2; // rdi
  __int64 result; // rax

  v2 = a2 + 8;
  result = CreateNameSpaceObject(a1[40], *(_QWORD *)(a2[10] + 32LL), a1[10], a1[11], a2 + 8, 0);
  if ( !(_DWORD)result )
  {
    *(_WORD *)(*v2 + 66) = 6;
    if ( ghCreate )
      ghCreate(6LL, *v2 + 120);
    return PushScope((_DWORD)a1, a1[15], a2[5], 0, *v2, a1[11], a1[40], a2[11]);
  }
  return result;
}
