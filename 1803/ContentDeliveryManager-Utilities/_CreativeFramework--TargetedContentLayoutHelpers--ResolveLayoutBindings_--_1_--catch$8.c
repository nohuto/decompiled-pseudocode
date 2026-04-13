/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::catch$8 @ 0x1800C931E
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180048D1C (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ?Stop@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009AFEC (-Stop@-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04U_Tl.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::catch_8(
        wil *a1,
        _DWORD *a2,
        unsigned int a3)
{
  int v4; // eax

  v4 = wil::ResultFromCaughtException(a1, a2, a3);
  a2[8] = v4;
  wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *)(a2 + 116),
    v4);
  return &loc_18009861C;
}
