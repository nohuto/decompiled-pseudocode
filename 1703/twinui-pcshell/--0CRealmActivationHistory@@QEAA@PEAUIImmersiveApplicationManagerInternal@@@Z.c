/*
 * XREFs of ??0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x18004A1BC
 * Callers:
 *     ??$Make@VCRealmActivationHistory@@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCRealmActivationHistory@@@12@AEAPEAUIImmersiveApplicationManagerInternal@@@Z @ 0x18004A8F4 (--$Make@VCRealmActivationHistory@@AEAPEAUIImmersiveApplicationManagerInternal@@@Details@WRL@Micr.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CRealmActivationHistory *__fastcall CRealmActivationHistory::CRealmActivationHistory(
        CRealmActivationHistory *this,
        struct IImmersiveApplicationManagerInternal *a2)
{
  _DWORD *v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx

  Microsoft::WRL::FtmBase::FtmBase(this);
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 3) = &CWRLObjectWithGITSite::`vftable';
  *((_QWORD *)this + 6) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 4);
  *((_DWORD *)this + 19) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 3) = &CRealmActivationHistory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,1,1>'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IRealmActivationHistory'};
  *((_QWORD *)this + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IRealmActivationHistoryInternal,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 30) = -2;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 2);
  *(_QWORD *)this = &CRealmActivationHistory::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 3) = &CRealmActivationHistory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,1,1>'};
  *((_QWORD *)this + 7) = &CRealmActivationHistory::`vftable'{for `IRealmActivationHistory'};
  *((_QWORD *)this + 8) = &CRealmActivationHistory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IRealmActivationHistoryInternal,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 46) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplicationManagerInternal *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 47) = 0LL;
  v4 = (_DWORD *)((char *)this + 128);
  v5 = 0LL;
  do
  {
    switch ( (_DWORD)v5 )
    {
      case 6:
        *v4 = 4;
        break;
      case 1:
      case 8:
        if ( (_DWORD)v5 == 1 )
          *v4 = 2;
        else
          *v4 = 1;
        break;
      case 0xD:
        *v4 = 8;
        break;
      case 0x13:
        *v4 = 16;
        break;
      default:
        *((_DWORD *)this + 3 * (int)v5 + 32) = 0;
        break;
    }
    v4 += 3;
    v6 = (int)v5++ + 11LL;
    v7 = 3 * v6;
    *((_DWORD *)this + v7) = 0;
    *((_DWORD *)this + v7 + 1) = 0;
  }
  while ( v5 < 0x14 );
  return this;
}
