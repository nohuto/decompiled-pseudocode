/*
 * XREFs of ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x18017BBA0
 * Callers:
 *     ??_GCWRLExecuteCommandBase@@MEAAPEAXI@Z @ 0x18017BC60 (--_GCWRLExecuteCommandBase@@MEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLExecuteCommandBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18017CA30 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLExecuteCommandBase@@@WRL@Microso.c)
 * Callees:
 *     Str_SetPtrW @ 0x1801DE3C0 (Str_SetPtrW.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWRLExecuteCommandBase::~CWRLExecuteCommandBase(CWRLExecuteCommandBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CWRLExecuteCommandBase::`vftable'{for `IExecuteCommand'};
  *((_QWORD *)this + 1) = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithAssociationElement,IObjectWithSelection,CWRLObjectWithSite>'};
  *((_QWORD *)this + 2) = &CWRLExecuteCommandBase::`vftable'{for `IObjectWithSelection'};
  *((_QWORD *)this + 3) = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CWRLObjectWithSite>'};
  g_pfn_Str_SetPtrW((LPWSTR *)this + 11, 0LL);
  g_pfn_Str_SetPtrW((LPWSTR *)this + 12, 0LL);
  v2 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO((CWRLExecuteCommandBase *)((char *)this + 24));
}
