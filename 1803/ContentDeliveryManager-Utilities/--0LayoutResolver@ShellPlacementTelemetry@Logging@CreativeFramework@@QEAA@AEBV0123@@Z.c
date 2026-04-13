/*
 * XREFs of ??0LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@AEBV0123@@Z @ 0x180097060
 * Callers:
 *     ?ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z @ 0x1800983FC (-ResolveLayoutBindings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@@Z.c)
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x180098D10 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x180016F68 (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ??4?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18009B164 (--4-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04U_TlgRe.c)
 *     memset_0 @ 0x1800C1147 (memset_0.c)
 */

CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *__fastcall CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::LayoutResolver(
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *this,
        const struct CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *a2)
{
  char *v2; // rbx
  _QWORD *Local; // rcx

  v2 = (char *)this + 8;
  *(_QWORD *)this = &wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = this;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  if ( wil::details::g_pThreadFailureCallbacks )
    Local = (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                        (__int64)this,
                        1);
  else
    Local = 0LL;
  *(_QWORD *)v2 = Local;
  if ( Local )
  {
    *((_QWORD *)v2 + 2) = *Local;
    *Local = v2;
    *((_DWORD *)v2 + 6) = GetCurrentThreadId();
  }
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 60) = 0;
  *((_BYTE *)this + 120) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = 1LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  memset_0((char *)this + 136, 0, 0x90uLL);
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::operator=(
    this,
    a2);
  *(_QWORD *)this = &CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::`vftable';
  return this;
}
