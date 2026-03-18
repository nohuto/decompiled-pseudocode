/*
 * XREFs of ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C0077674
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C0077618 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V-$C.c)
 * Callees:
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@SA_NPEAPEAE@Z @ 0x1C0077714 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@SA_NPEAPEAE.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?Create@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00D7C58 (-Create@-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Destroy@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D7E34 (-Destroy@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ @ 0x1C00D7F84 (-Initialize@-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ.c)
 */

char __fastcall TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(
        __int64 a1)
{
  _QWORD *PoolWithTag; // rax
  char v3; // di
  _QWORD *v4; // rbx
  __int64 v6; // rax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x80uLL, 0x6F736955u);
  v3 = 0;
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x80uLL);
  v4[2] = 0LL;
  *((_DWORD *)v4 + 6) = 0;
  v4[1] = v4;
  *v4 = v4;
  if ( !(unsigned __int8)NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Initialize(v4) )
  {
    NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Destroy(v4);
    return 0;
  }
  *(_QWORD *)(a1 + 8) = v4;
  v6 = NSInstrumentation::CTypeIsolation<81920,320>::Create();
  if ( v6 )
  {
    *(_QWORD *)(a1 + 32) = v6;
    return TypeIsolationFactory<NSInstrumentation::CTypeIsolation<233472,912>>::Create(a1);
  }
  return v3;
}
