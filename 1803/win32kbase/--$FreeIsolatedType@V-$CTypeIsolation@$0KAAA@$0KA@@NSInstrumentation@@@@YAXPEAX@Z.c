/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C003FD60
 * Callers:
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C001CBF4 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C003D910 (-FreeBrushMemory@@YAXPEAVBRUSH@@@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0062100 (-Free@-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

PVOID __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<40960,160>>(__int64 a1)
{
  PVOID result; // rax
  __int64 v3; // rcx

  result = gpUserTypeIsolation;
  v3 = *((_QWORD *)gpUserTypeIsolation + 1);
  if ( v3 )
    return (PVOID)NSInstrumentation::CTypeIsolation<40960,160>::Free(v3, a1);
  return result;
}
