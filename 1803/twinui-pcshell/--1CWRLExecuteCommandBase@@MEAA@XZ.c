/*
 * XREFs of ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x180224338
 * Callers:
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLExecuteCommandBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180224400 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLExecuteCommandBase@@@WRL@Microso.c)
 *     ??_GCWRLExecuteCommandBase@@MEAAPEAXI@Z @ 0x180224440 (--_GCWRLExecuteCommandBase@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x180238AEC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 *     Str_SetPtrW @ 0x18030A8C0 (Str_SetPtrW.c)
 */

void __fastcall CWRLExecuteCommandBase::~CWRLExecuteCommandBase(CWRLExecuteCommandBase *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CWRLExecuteCommandBase::`vftable'{for `IExecuteCommand'};
  *((_QWORD *)this + 1) = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithAssociationElement,IObjectWithSelection,CWRLObjectWithSite>'};
  *((_QWORD *)this + 2) = &CWRLExecuteCommandBase::`vftable'{for `IObjectWithSelection'};
  *((_QWORD *)this + 3) = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>>'};
  g_pfn_Str_SetPtrW((LPWSTR *)this + 11, 0LL);
  g_pfn_Str_SetPtrW((LPWSTR *)this + 12, 0LL);
  SafeRelease<IShellItemArray>((char *)this + 120);
  v2 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  SafeRelease<IShellItemArray>((char *)this + 112);
  CWRLObjectWithSite::~CWRLObjectWithSite((CWinRTApplicationView **)this + 3);
}
