/*
 * XREFs of ??1?$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18012CBB4
 * Callers:
 *     __lambda_980e5bf982dd22897162bb149475091f_::operator()_::_1_::dtor$0 @ 0x1801BEA50 (__lambda_980e5bf982dd22897162bb149475091f_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180263C50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::ChainLinkEventArgs>::~ComPtr<Windows::Internal::Shell::Chaining::ChainLinkEventArgs>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
