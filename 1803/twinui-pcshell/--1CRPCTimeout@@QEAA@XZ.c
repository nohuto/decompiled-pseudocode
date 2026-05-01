/*
 * XREFs of ??1CRPCTimeout@@QEAA@XZ @ 0x18012CBD4
 * Callers:
 *     _CImmersiveApp::QueryService_::_1_::dtor$0 @ 0x18012FBFB (_CImmersiveApp--QueryService_--_1_--dtor$0.c)
 *     __lambda_5eeb3274d8dd6409222f94091fb661d1_::operator()_::_1_::dtor$6 @ 0x1801E313F (__lambda_5eeb3274d8dd6409222f94091fb661d1_--operator()_--_1_--dtor$6.c)
 *     __lambda_4f3507863b21d28a47ffae36e7c55767_::operator()_::_1_::dtor$6 @ 0x1801EE379 (__lambda_4f3507863b21d28a47ffae36e7c55767_--operator()_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CRPCTimeout::~CRPCTimeout(CRPCTimeout *this)
{
  CBaseRPCTimeout::Disarm(this);
}
