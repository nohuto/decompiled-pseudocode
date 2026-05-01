/*
 * XREFs of ??_ECApplicationFrameService@@UEAAPEAXI@Z @ 0x18004B360
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x18001EAF0 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004DF10 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIApplicationFrameProxy@@UIApplicati.c)
 *     ??1CCrashDetector@@QEAA@XZ @ 0x18004FA70 (--1CCrashDetector@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
CApplicationFrameService *__fastcall CApplicationFrameService::`vector deleting destructor'(
        CApplicationFrameService *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 i; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 j; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx

  CCrashDetector::~CCrashDetector((CApplicationFrameService *)((char *)this + 184));
  v4 = *((_QWORD *)this + 21);
  if ( v4 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 20);
  if ( v5 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 19);
  if ( v6 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( *((_QWORD *)this + 15) )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 16); ++i )
    {
      v8 = *((_QWORD *)this + 15);
      v9 = *(_QWORD *)(v8 + 8 * i);
      if ( v9 )
      {
        *(_QWORD *)(v8 + 8 * i) = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v9);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 15));
    *((_QWORD *)this + 15) = 0LL;
  }
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  if ( *((_QWORD *)this + 11) )
  {
    for ( j = 0LL; j < *((_QWORD *)this + 12); ++j )
    {
      v11 = *((_QWORD *)this + 11);
      v12 = *(_QWORD *)(v11 + 8 * j);
      if ( v12 )
      {
        *(_QWORD *)(v11 + 8 * j) = 0LL;
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v12);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 11));
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 19) = -1073741823;
  v13 = *((_QWORD *)this + 8);
  if ( v13 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
