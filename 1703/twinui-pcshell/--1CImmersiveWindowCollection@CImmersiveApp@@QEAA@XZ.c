/*
 * XREFs of ??1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ @ 0x180050EFC
 * Callers:
 *     ??1CImmersiveApp@@MEAA@XZ @ 0x18005103C (--1CImmersiveApp@@MEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISplashScreen@Activation@ApplicationModel@Windows@@U?$InterfaceList@UISplashScreen@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005EA00 (-Release@-$RuntimeClass@U-$InterfaceList@UISplashScreen@Activation@ApplicationModel@Windows@@U-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::~CImmersiveWindowCollection(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  unsigned __int64 i; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 j; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  if ( *((_QWORD *)this + 30) )
  {
    for ( i = 0LL; i < *((_QWORD *)this + 31); ++i )
    {
      v3 = *((_QWORD *)this + 30);
      v4 = *(_QWORD *)(v3 + 8 * i);
      if ( v4 )
      {
        *(_QWORD *)(v3 + 8 * i) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 30));
    *((_QWORD *)this + 30) = 0LL;
  }
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  if ( *((_QWORD *)this + 29) )
  {
    *((_QWORD *)this + 29) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ISplashScreen,Microsoft::WRL::Details::InterfaceList<ISplashScreen,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release();
  }
  if ( *((_QWORD *)this + 19) )
  {
    for ( j = 0LL; j < *((_QWORD *)this + 20); ++j )
    {
      v6 = *((_QWORD *)this + 19);
      v7 = *(_QWORD *)(v6 + 8 * j);
      if ( v7 )
      {
        *(_QWORD *)(v6 + 8 * j) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    CoTaskMemFree(*((LPVOID *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  v8 = *((_QWORD *)this + 17);
  if ( v8 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 14);
  if ( v9 )
  {
    *((_QWORD *)this + 14) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
}
