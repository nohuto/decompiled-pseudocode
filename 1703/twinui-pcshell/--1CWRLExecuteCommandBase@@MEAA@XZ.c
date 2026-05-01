/*
 * XREFs of ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x180146EF0
 * Callers:
 *     ??_GCWRLExecuteCommandBase@@MEAAPEAXI@Z @ 0x180146FB0 (--_GCWRLExecuteCommandBase@@MEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLExecuteCommandBase@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180147DC0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLExecuteCommandBase@@VNil@Details.c)
 * Callees:
 *     Str_SetPtrW @ 0x1801909F0 (Str_SetPtrW.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWRLExecuteCommandBase::~CWRLExecuteCommandBase(CWRLExecuteCommandBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CWRLExecuteCommandBase::`vftable'{for `IExecuteCommand'};
  *((_QWORD *)this + 1) = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IObjectWithAssociationElement,Microsoft::WRL::Details::InterfaceList<IObjectWithSelection,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 2) = &CWRLExecuteCommandBase::`vftable'{for `IObjectWithSelection'};
  *((_QWORD *)this + 3) = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::Nil>,1,1>'};
  g_pfn_Str_SetPtrW((LPWSTR *)this + 9, 0LL);
  g_pfn_Str_SetPtrW((LPWSTR *)this + 10, 0LL);
  v2 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  ObjectArrayAdapter<IImmersiveApplicationInternal>::Iterator::~Iterator((_QWORD *)this + 3);
}
