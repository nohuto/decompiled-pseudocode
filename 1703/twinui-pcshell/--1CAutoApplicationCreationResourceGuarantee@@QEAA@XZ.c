/*
 * XREFs of ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x1800255CC
 * Callers:
 *     _CApplicationManager::SetApplicationWindow_::_1_::dtor$0 @ 0x180197E8F (_CApplicationManager--SetApplicationWindow_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleViewCreation_::_1_::dtor$3 @ 0x1801985B9 (_CApplicationManager--_HandleViewCreation_--_1_--dtor$3.c)
 *     _CAppViewManager::DragEnter_::_1_::dtor$5 @ 0x180199887 (_CAppViewManager--DragEnter_--_1_--dtor$5.c)
 *     _CAppViewManager::_ShowViewAsyncWorker_::_1_::dtor$2 @ 0x180199A97 (_CAppViewManager--_ShowViewAsyncWorker_--_1_--dtor$2.c)
 *     _CAppViewManager::SplitView_::_1_::dtor$2 @ 0x180199DF7 (_CAppViewManager--SplitView_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAutoApplicationCreationResourceGuarantee::~CAutoApplicationCreationResourceGuarantee(
        CAutoApplicationCreationResourceGuarantee *this)
{
  __int64 v2; // rcx

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 48LL))(*(_QWORD *)this);
  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
