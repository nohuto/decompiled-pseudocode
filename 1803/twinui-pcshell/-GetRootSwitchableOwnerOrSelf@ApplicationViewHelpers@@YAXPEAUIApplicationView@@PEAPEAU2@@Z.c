/*
 * XREFs of ?GetRootSwitchableOwnerOrSelf@ApplicationViewHelpers@@YAXPEAUIApplicationView@@PEAPEAU2@@Z @ 0x1803056A0
 * Callers:
 *     ?ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1802C633C (-ForegroundViewChanged@TabletModePositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1802C7A30 (-HandleSwitchToView@TabletModePositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ApplicationViewHelpers::GetRootSwitchableOwnerOrSelf(
        ApplicationViewHelpers *this,
        struct IApplicationView *a2,
        struct IApplicationView **a3)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (*(int (__fastcall **)(ApplicationViewHelpers *, struct IApplicationView *, struct IApplicationView **))(*(_QWORD *)this + 360LL))(
         this,
         a2,
         a3) < 0 )
  {
    v5 = (**(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, struct IApplicationView *))this)(
           this,
           &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
           a2);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        307LL,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v5);
  }
}
