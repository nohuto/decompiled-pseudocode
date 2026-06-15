/*
 * XREFs of wil::details::lambda_call__lambda_257b64a16ccf78513dcb8abf17d7ffc7___::_lambda_call__lambda_257b64a16ccf78513dcb8abf17d7ffc7___ @ 0x1800CF44C
 * Callers:
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$6 @ 0x1800D3201 (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$6.c)
 * Callees:
 *     _lambda_1b72e5d594e55fed068379ebbc44b0d0_::operator() @ 0x1800CF554 (_lambda_1b72e5d594e55fed068379ebbc44b0d0_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_257b64a16ccf78513dcb8abf17d7ffc7___::_lambda_call__lambda_257b64a16ccf78513dcb8abf17d7ffc7___(
        __int64 a1)
{
  __int64 result; // rax
  _QWORD v2[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 48) )
  {
    *(_BYTE *)(a1 + 48) = 0;
    v2[0] = *(_QWORD *)a1;
    v2[1] = *(_QWORD *)(a1 + 8);
    v2[2] = *(_QWORD *)(a1 + 16);
    v2[3] = *(_QWORD *)(a1 + 24);
    v2[4] = *(_QWORD *)(a1 + 32);
    v2[5] = *(_QWORD *)(a1 + 40);
    return lambda_1b72e5d594e55fed068379ebbc44b0d0_::operator()(v2);
  }
  return result;
}
