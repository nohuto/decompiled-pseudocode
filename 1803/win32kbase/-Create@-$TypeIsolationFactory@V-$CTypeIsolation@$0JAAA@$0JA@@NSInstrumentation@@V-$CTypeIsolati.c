/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BDAAA@$0BDA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SA_NPEAPEAE@Z @ 0x1C00BEAF8
 * Callers:
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     ??1?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ @ 0x1C00BE6B4 (--1-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BDAAA@$0BDA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SA_NPEAPEAE@Z @ 0x1C00BEB74 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V-$CTypeIsolati.c)
 *     ?Initialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00BEFEC (-Initialize@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ.c)
 */

char TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<77824,304>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>>::Create()
{
  _QWORD *v0; // rdi
  _QWORD *PoolWithTag; // rax
  void *v2; // rbx

  v0 = gpUserTypeIsolation;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x20uLL, 0x6F736955u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  PoolWithTag[2] = 0LL;
  *((_DWORD *)PoolWithTag + 6) = 0;
  PoolWithTag[1] = PoolWithTag;
  *PoolWithTag = PoolWithTag;
  if ( !(unsigned __int8)NSInstrumentation::CTypeIsolation<36864,144>::Initialize(PoolWithTag) )
  {
    NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>((__int64)v2);
    ExFreePoolWithTag(v2, 0);
    return 0;
  }
  *v0 = v2;
  return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<77824,304>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>>::Create(v0);
}
