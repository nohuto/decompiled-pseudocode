/*
 * XREFs of ??0CRotationManagerSync@@QEAA@XZ @ 0x18003A850
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800106D8 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002658 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

CRotationManagerSync *__fastcall CRotationManagerSync::CRotationManagerSync(CRotationManagerSync *this)
{
  CRotationManagerSync *result; // rax

  Microsoft::WRL::FtmBase::FtmBase(this);
  *((_QWORD *)this + 5) = &CWRLObjectWithGITSite::`vftable';
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 7);
  *((_DWORD *)this + 25) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>'};
  *((_QWORD *)this + 10) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>::`vftable'{for `IRotationManagerSync'};
  *((_QWORD *)this + 11) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellRotationManager>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CRotationManagerSync::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>'};
  *((_QWORD *)this + 10) = &CRotationManagerSync::`vftable'{for `IRotationManagerSync'};
  *((_QWORD *)this + 11) = &CRotationManagerSync::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellRotationManager>'};
  result = this;
  *((_QWORD *)this + 13) = 0LL;
  *((_WORD *)this + 56) = 1;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *((_WORD *)this + 62) = 1;
  *((_DWORD *)this + 35) = -1;
  *((_QWORD *)this + 16) = 0LL;
  *((_BYTE *)this + 136) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  return result;
}
