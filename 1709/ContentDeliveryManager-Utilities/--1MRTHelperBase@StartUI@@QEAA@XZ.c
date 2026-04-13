/*
 * XREFs of ??1MRTHelperBase@StartUI@@QEAA@XZ @ 0x1800890BC
 * Callers:
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x180089158 (-RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Interna.c)
 *     ??1MRTHelperForPackage@StartUI@@QEAA@XZ @ 0x180089560 (--1MRTHelperForPackage@StartUI@@QEAA@XZ.c)
 *     _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1800BBC4C (_Windows--Internal--Extensions--ApplicationModel--ContentDeliveryManagerAppDisplayInfo--RuntimeC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall StartUI::MRTHelperBase::~MRTHelperBase(StartUI::MRTHelperBase *this)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    CoTaskMemFree(v3);
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
