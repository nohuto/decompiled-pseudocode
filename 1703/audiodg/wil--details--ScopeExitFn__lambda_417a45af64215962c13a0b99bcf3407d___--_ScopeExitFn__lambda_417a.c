/*
 * XREFs of wil::details::ScopeExitFn__lambda_417a45af64215962c13a0b99bcf3407d___::_ScopeExitFn__lambda_417a45af64215962c13a0b99bcf3407d___ @ 0x140031BDC
 * Callers:
 *     _CSubmixImpl::CreateStream_::_1_::dtor$8 @ 0x140020BD0 (_CSubmixImpl--CreateStream_--_1_--dtor$8.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$7 @ 0x140043EE4 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$7.c)
 * Callees:
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400036D4 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 */

struct ISubmixInternal **__fastcall wil::details::ScopeExitFn__lambda_417a45af64215962c13a0b99bcf3407d___::_ScopeExitFn__lambda_417a45af64215962c13a0b99bcf3407d___(
        __int64 a1)
{
  struct ISubmixInternal **result; // rax
  struct ISubmixInternal *v2; // rdx

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(struct ISubmixInternal ***)a1;
    v2 = **(struct ISubmixInternal ***)a1;
    if ( v2 )
      return (struct ISubmixInternal **)CStreamInstance::DisconnectFromRightSubmix(
                                          **(struct CPipeInstance ****)(a1 + 8),
                                          v2);
  }
  return result;
}
