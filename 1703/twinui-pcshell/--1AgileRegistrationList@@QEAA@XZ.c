/*
 * XREFs of ??1AgileRegistrationList@@QEAA@XZ @ 0x180007BCC
 * Callers:
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180007D1C (--1CApplicationManager@@MEAA@XZ.c)
 *     ??_ECImmersiveMode@@MEAAPEAXI@Z @ 0x180030570 (--_ECImmersiveMode@@MEAAPEAXI@Z.c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x1800714CC (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ??_GApplicationViewManagerVisibilityDebouncer@@UEAAPEAXI@Z @ 0x180078840 (--_GApplicationViewManagerVisibilityDebouncer@@UEAAPEAXI@Z.c)
 *     ??_EHolographicPositioner@@UEAAPEAXI@Z @ 0x1800E0A08 (--_EHolographicPositioner@@UEAAPEAXI@Z.c)
 *     _CApplicationManager::_CApplicationManager_::_1_::dtor$2 @ 0x180197B3B (_CApplicationManager--_CApplicationManager_--_1_--dtor$2.c)
 *     _CApplicationViewManager::_CApplicationViewManager_::_1_::dtor$1 @ 0x18019AC82 (_CApplicationViewManager--_CApplicationViewManager_--_1_--dtor$1.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AgileRegistrationList::~AgileRegistrationList(AgileRegistrationList *this)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx

  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v3 = *((_QWORD *)this + 1);
    while ( v2 != v3 )
    {
      v4 = *(_QWORD *)(v2 + 8);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      v2 += 16LL;
    }
    std::_Deallocate(*(void **)this, (__int64)(*((_QWORD *)this + 2) - *(_QWORD *)this) >> 4, 0x10uLL);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
}
