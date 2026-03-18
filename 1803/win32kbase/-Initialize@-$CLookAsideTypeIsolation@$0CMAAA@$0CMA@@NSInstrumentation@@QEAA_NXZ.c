/*
 * XREFs of ?Initialize@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NXZ @ 0x1C00D7ED8
 * Callers:
 *     ?Create@?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV?$CTypeIsolation@$0CMAAA@$0CMA@@2@XZ @ 0x1C00D7B88 (-Create@-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV-$CTypeIsolation@$0CMA.c)
 * Callees:
 *     ?Create@?$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C005D41C (-Create@-$CSectionEntry@$0CMAAA@$0CMA@@NSInstrumentation@@SAPEAV12@XZ.c)
 */

char __fastcall NSInstrumentation::CLookAsideTypeIsolation<180224,704>::Initialize(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rcx

  ExInitializeLookasideListEx(
    (PLOOKASIDE_LIST_EX)(a1 + 32),
    (PALLOCATE_FUNCTION_EX)lambda_2d2a1476764a2b010e311b2aabac4e07_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long__LOOKASIDE_LIST_EX_____ptr64_,
    (PFREE_FUNCTION_EX)lambda_06b16099bfc1f7b9c33b9410b68cf5d0_::_lambda_invoker_cdecl__void_____ptr64__LOOKASIDE_LIST_EX_____ptr64_,
    (POOL_TYPE)512,
    2u,
    0x2C0uLL,
    0x616C6947u,
    0x100u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 8uLL, 0x6F736955u);
  *(_QWORD *)(a1 + 16) = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  *PoolWithTag = 0LL;
  v3 = NSInstrumentation::CSectionEntry<180224,704>::Create();
  if ( !v3 )
    return 0;
  v4 = *(_QWORD **)(a1 + 8);
  *(_DWORD *)(a1 + 24) = 220;
  if ( *v4 != a1 )
    __fastfail(3u);
  *v3 = a1;
  v3[1] = v4;
  *v4 = v3;
  *(_QWORD *)(a1 + 8) = v3;
  return 1;
}
