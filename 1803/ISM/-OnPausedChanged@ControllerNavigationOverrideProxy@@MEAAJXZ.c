/*
 * XREFs of ?OnPausedChanged@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x180030DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180019264 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18002F618 (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerNavigationOverrideProxy::OnPausedChanged(ControllerNavigationOverrideProxy *this)
{
  struct ControllerNavigationManager *ControllerNavigationManager; // rsi
  const char *v3; // r9
  ControllerNavigationOverrideProxy **v4; // r14
  ControllerNavigationOverrideProxy **i; // rdi
  ControllerNavigationOverrideProxy *v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  v4 = (ControllerNavigationOverrideProxy **)*((_QWORD *)ControllerNavigationManager + 26);
  for ( i = (ControllerNavigationOverrideProxy **)*((_QWORD *)ControllerNavigationManager + 25); i != v4; ++i )
  {
    v6 = *i;
    if ( *i )
    {
      (**(void (__fastcall ***)(ControllerNavigationOverrideProxy *))v6)(*i);
      (*(void (__fastcall **)(ControllerNavigationOverrideProxy *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    if ( v6 == this )
      break;
  }
  if ( i == *((ControllerNavigationOverrideProxy ***)ControllerNavigationManager + 26) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x179,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      v3);
    JUMPOUT(0x180030E50LL);
  }
  ControllerNavigationManager::SetCurrentStateWithOverride(ControllerNavigationManager, this);
  return 0LL;
}
