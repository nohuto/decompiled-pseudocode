/*
 * XREFs of ?Attach@?$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@Z @ 0x1801E4C40
 * Callers:
 *     ??$Make@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@W4ChainLinkEventType@2345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@12@$$QEAW4ChainLinkEventType@Chaining@Shell@Internal@Windows@@@Z @ 0x18012C814 (--$Make@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@W4ChainLinkEventType@2345@@Details@.c)
 *     ??$MakeAndInitialize@VViewHandledEventArgs@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVViewHandledEventArgs@@AEA_N@Z @ 0x1801EEAA4 (--$MakeAndInitialize@VViewHandledEventArgs@@V1@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVViewHandle.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180263C50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::ChainLinkEventArgs>::Attach(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v4);
  *a1 = a2;
  return result;
}
