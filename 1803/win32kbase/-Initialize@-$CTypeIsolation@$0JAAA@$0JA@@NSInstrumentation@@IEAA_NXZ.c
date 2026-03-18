/*
 * XREFs of ?Initialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00BEFEC
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BDAAA@$0BDA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SA_NPEAPEAE@Z @ 0x1C00BEAF8 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTypeIsolati.c)
 *     ?Initialize@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ @ 0x1C00D7F84 (-Initialize@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0073234 (-Create@-$CSectionEntry@$0JAAA@$0JA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

char __fastcall NSInstrumentation::CTypeIsolation<36864,144>::Initialize(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rcx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 8uLL, 0x6F736955u);
  *(_QWORD *)(a1 + 16) = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  *PoolWithTag = 0LL;
  v3 = NSInstrumentation::CSectionEntry<36864,144>::Create();
  if ( !v3 )
    return 0;
  v4 = *(_QWORD **)(a1 + 8);
  *(_DWORD *)(a1 + 24) = 252;
  if ( *v4 != a1 )
    __fastfail(3u);
  *v3 = a1;
  v3[1] = v4;
  *v4 = v3;
  *(_QWORD *)(a1 + 8) = v3;
  return 1;
}
