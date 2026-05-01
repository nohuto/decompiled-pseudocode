/*
 * XREFs of ??0CRotationManagerSync@@QEAA@XZ @ 0x180039354
 * Callers:
 *     ??$Make@VCRotationManagerSync@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCRotationManagerSync@@@12@XZ @ 0x18003A24C (--$Make@VCRotationManagerSync@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCRotationManagerSync@@@12@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x1800024A8 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CRotationManagerSync *__fastcall CRotationManagerSync::CRotationManagerSync(CRotationManagerSync *this)
{
  CRotationManagerSync *result; // rax

  Microsoft::WRL::FtmBase::FtmBase(this);
  *((_QWORD *)this + 3) = &CWRLObjectWithGITSite::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 4);
  *((_DWORD *)this + 19) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithGITSite,Microsoft::WRL::Details::InterfaceList<IRotationManagerSync,Microsoft::WRL::Details::InterfaceList<IShellRotationManager,Microsoft::WRL::Details::Nil>>>,1,1>'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IRotationManagerSync'};
  *((_QWORD *)this + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IShellRotationManager,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CRotationManagerSync::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithGITSite,Microsoft::WRL::Details::InterfaceList<IRotationManagerSync,Microsoft::WRL::Details::InterfaceList<IShellRotationManager,Microsoft::WRL::Details::Nil>>>,1,1>'};
  *((_QWORD *)this + 7) = &CRotationManagerSync::`vftable'{for `IRotationManagerSync'};
  *((_QWORD *)this + 8) = &CRotationManagerSync::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IShellRotationManager,Microsoft::WRL::Details::Nil>,1,0>'};
  result = this;
  *((_QWORD *)this + 10) = 0LL;
  *((_WORD *)this + 44) = 1;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *((_WORD *)this + 50) = 1;
  *((_DWORD *)this + 29) = -1;
  *((_QWORD *)this + 13) = 0LL;
  *((_BYTE *)this + 112) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  return result;
}
