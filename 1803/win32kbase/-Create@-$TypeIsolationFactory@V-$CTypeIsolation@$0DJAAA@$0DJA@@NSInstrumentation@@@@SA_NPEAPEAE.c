/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@SA_NPEAPEAE@Z @ 0x1C0077714
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C0077674 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTy.c)
 * Callees:
 *     ?Destroy@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0077838 (-Destroy@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00779B0 (-Initialize@-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@IEAA_NXZ.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<233472,912>>::Create(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  void *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x20uLL, 0x6F736955u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  PoolWithTag[2] = 0LL;
  *((_DWORD *)PoolWithTag + 6) = 0;
  PoolWithTag[1] = PoolWithTag;
  *PoolWithTag = PoolWithTag;
  if ( !(unsigned __int8)NSInstrumentation::CTypeIsolation<233472,912>::Initialize(PoolWithTag) )
  {
    NSInstrumentation::CTypeIsolation<233472,912>::Destroy(v3);
    return 0;
  }
  *(_QWORD *)(a1 + 40) = v3;
  return 1;
}
