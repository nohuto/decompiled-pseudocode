/*
 * XREFs of ??0CRealmActivationHistory@@QEAA@PEAUIImmersiveApplicationManagerInternal@@@Z @ 0x18004C52C
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800106D8 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 5) = &CWRLObjectWithGITSite::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 7);
  *((_DWORD *)this + 29) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>'};
  *((_QWORD *)this + 10) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::`vftable'{for `IRealmActivationHistory'};
  *((_QWORD *)this + 11) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRealmActivationHistoryInternal>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 40) = -2;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 3);
  *(_QWORD *)this = &CRealmActivationHistory::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>'};
  *((_QWORD *)this + 10) = &CRealmActivationHistory::`vftable'{for `IRealmActivationHistory'};
  *((_QWORD *)this + 11) = &CRealmActivationHistory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRealmActivationHistoryInternal>'};
  *((_QWORD *)this + 51) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IImmersiveApplicationManagerInternal *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 52) = 0LL;
  v4 = (_DWORD *)((char *)this + 168);
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
        *((_DWORD *)this + 3 * (int)v5 + 42) = 0;
        break;
    }
    v6 = (int)v5;
    v4 += 3;
    ++v5;
    v7 = 3 * v6;
    *((_DWORD *)this + v7 + 43) = 0;
    *((_DWORD *)this + v7 + 44) = 0;
  }
  while ( v5 < 0x14 );
  return this;
}
