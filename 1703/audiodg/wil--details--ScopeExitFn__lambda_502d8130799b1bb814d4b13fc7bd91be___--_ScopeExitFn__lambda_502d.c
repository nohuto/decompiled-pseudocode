/*
 * XREFs of wil::details::ScopeExitFn__lambda_502d8130799b1bb814d4b13fc7bd91be___::_ScopeExitFn__lambda_502d8130799b1bb814d4b13fc7bd91be___ @ 0x140031BB4
 * Callers:
 *     _CStreamInstance::ConnectToRightSubmix_::_1_::dtor$1 @ 0x1400207FC (_CStreamInstance--ConnectToRightSubmix_--_1_--dtor$1.c)
 * Callees:
 *     ?UnregisterResources@CStreamInstance@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400311E4 (-UnregisterResources@CStreamInstance@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_502d8130799b1bb814d4b13fc7bd91be___::_ScopeExitFn__lambda_502d8130799b1bb814d4b13fc7bd91be___(
        __int64 a1)
{
  struct IAudioStreamingResourceRegistration *v1; // rdx

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = **(struct IAudioStreamingResourceRegistration ***)a1;
    if ( v1 )
      CStreamInstance::UnregisterResources(*(CStreamInstance **)(a1 + 8), v1);
  }
}
