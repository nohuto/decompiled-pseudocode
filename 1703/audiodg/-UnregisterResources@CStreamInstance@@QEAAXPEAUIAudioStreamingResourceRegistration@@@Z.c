/*
 * XREFs of ?UnregisterResources@CStreamInstance@@QEAAXPEAUIAudioStreamingResourceRegistration@@@Z @ 0x1400311E4
 * Callers:
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x1400037B0 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     wil::details::ScopeExitFn__lambda_502d8130799b1bb814d4b13fc7bd91be___::_ScopeExitFn__lambda_502d8130799b1bb814d4b13fc7bd91be___ @ 0x140031BB4 (wil--details--ScopeExitFn__lambda_502d8130799b1bb814d4b13fc7bd91be___--_ScopeExitFn__lambda_502d.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStreamInstance::UnregisterResources(
        CStreamInstance *this,
        struct IAudioStreamingResourceRegistration *a2)
{
  if ( *((_QWORD *)this + 6) )
  {
    (*(void (__fastcall **)(struct IAudioStreamingResourceRegistration *))(*(_QWORD *)a2 + 32LL))(a2);
    *((_QWORD *)this + 6) = 0LL;
  }
}
