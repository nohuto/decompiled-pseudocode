/*
 * XREFs of ThermalZone @ 0x1C002B3C0
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C001C380 (CreateNameSpaceObject.c)
 *     PushScope @ 0x1C001EA98 (PushScope.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ThermalZone(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 result; // rax

  v2 = a2 + 8;
  result = CreateNameSpaceObject(
             *(_QWORD *)(a1 + 320),
             *(unsigned __int8 **)(a2[10] + 32),
             *(_QWORD *)(a1 + 80),
             *(struct _EX_RUNDOWN_REF **)(a1 + 88),
             (struct _EX_RUNDOWN_REF **)a2 + 8,
             0);
  if ( !(_DWORD)result )
  {
    *(_WORD *)(*v2 + 66) = 13;
    if ( ghCreate )
      ghCreate(13LL, *v2 + 120);
    return PushScope(
             (_QWORD *)a1,
             *(_QWORD *)(a1 + 120),
             a2[5],
             0LL,
             *v2,
             *(_QWORD *)(a1 + 88),
             *(_QWORD *)(a1 + 320),
             a2[11]);
  }
  return result;
}
