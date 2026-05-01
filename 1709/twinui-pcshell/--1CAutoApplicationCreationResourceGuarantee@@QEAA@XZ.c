/*
 * XREFs of ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x180025D7C
 * Callers:
 *     _CApplicationManager::SetApplicationWindow_::_1_::dtor$0 @ 0x1801E64AD (_CApplicationManager--SetApplicationWindow_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleViewCreation_::_1_::dtor$5 @ 0x1801E6DA6 (_CApplicationManager--_HandleViewCreation_--_1_--dtor$5.c)
 *     _CAppViewManager::DragEnter_::_1_::dtor$5 @ 0x1801E81BB (_CAppViewManager--DragEnter_--_1_--dtor$5.c)
 *     _CAppViewManager::_ShowViewAsyncWorker_::_1_::dtor$2 @ 0x1801E83CB (_CAppViewManager--_ShowViewAsyncWorker_--_1_--dtor$2.c)
 *     _CAppViewManager::SplitView_::_1_::dtor$2 @ 0x1801E87B9 (_CAppViewManager--SplitView_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
