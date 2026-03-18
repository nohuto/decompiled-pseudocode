/*
 * XREFs of ?Initialize@?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NXZ @ 0x1C00D7F84
 * Callers:
 *     ?Create@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0DJAAA@$0DJA@@2@@@SA_NPEAPEAE@Z @ 0x1C0077674 (-Create@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTy.c)
 * Callees:
 *     ?Initialize@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00BEFEC (-Initialize@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA_NXZ.c)
 */

bool __fastcall NSInstrumentation::CLookAsideTypeIsolation<36864,144>::Initialize(__int64 a1)
{
  ExInitializeLookasideListEx(
    (PLOOKASIDE_LIST_EX)(a1 + 32),
    (PALLOCATE_FUNCTION_EX)lambda_6493bb42a6ebd8bb32b97ba0eb0d18a2_::_lambda_invoker_cdecl__enum__POOL_TYPE_unsigned___int64_unsigned_long__LOOKASIDE_LIST_EX_____ptr64_,
    (PFREE_FUNCTION_EX)lambda_4244bae6fa0a501e9e28a4e0afb3a818_::_lambda_invoker_cdecl__void_____ptr64__LOOKASIDE_LIST_EX_____ptr64_,
    (POOL_TYPE)512,
    2u,
    0x90uLL,
    0x616C6947u,
    0x100u);
  return NSInstrumentation::CTypeIsolation<36864,144>::Initialize(a1) != 0;
}
