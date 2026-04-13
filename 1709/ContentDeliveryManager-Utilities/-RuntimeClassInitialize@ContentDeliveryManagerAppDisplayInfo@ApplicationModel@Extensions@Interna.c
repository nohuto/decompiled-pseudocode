/*
 * XREFs of ?RuntimeClassInitialize@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEBGPEAUIAppDisplayInfo@25@@Z @ 0x180089158
 * Callers:
 *     ??$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UIAppDisplayInfo@25@PEBGPEAU625@@Details@WRL@Microsoft@@YAJPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@$$QEAPEBG$$QEAPEAU345@@Z @ 0x1800884E8 (--$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800545F8 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Resolve@MRTHelperBase@StartUI@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x180088DC4 (-Resolve@MRTHelperBase@StartUI@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 *     ??1MRTHelperBase@StartUI@@QEAA@XZ @ 0x1800890BC (--1MRTHelperBase@StartUI@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo *this,
        const unsigned __int16 *a2,
        struct Windows::ApplicationModel::IAppDisplayInfo *a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ebx
  int v11; // eax
  HRESULT String; // eax
  const WCHAR *v13; // rbx
  wil *v14; // rcx
  unsigned int v15; // r8d
  __int64 result; // rax
  __int64 v17; // [rsp+0h] [rbp-A8h] BYREF
  int v18[2]; // [rsp+20h] [rbp-88h]
  unsigned __int64 v19; // [rsp+28h] [rbp-80h]
  __int128 v20; // [rsp+30h] [rbp-78h] BYREF
  __int64 v21; // [rsp+40h] [rbp-68h]
  __int64 v22; // [rsp+48h] [rbp-60h]
  __int64 v23; // [rsp+50h] [rbp-58h]
  _QWORD v24[7]; // [rsp+58h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  LPVOID pv; // [rsp+C8h] [rbp+20h] BYREF

  *(_QWORD *)v18 = -2LL;
  try
  {
    v5 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct Windows::ApplicationModel::IAppDisplayInfo *))(*(_QWORD *)a3 + 8LL))(a3);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0x10000000000LL;
    memset(v24, 0, 48);
    v6 = -1LL;
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
           v24,
           (__int64)a2,
           0xFFFFFFFFFFFFFFFFuLL);
    v10 = v7;
    if ( v7 >= 0 )
      v10 = 0;
    else
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x12,
        (__int64)"shellcommon\\shell\\windows.ui.shell\\startui\\common\\shellmrthelper.h",
        (const char *)(unsigned int)v7);
    if ( v10 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x15F,
        (__int64)"shellcommon\\shell\\windows.ui.shell\\startui\\common\\shellmrthelper.h",
        (const char *)(unsigned int)v10);
    pv = 0LL;
    v11 = StartUI::MRTHelperBase::Resolve((__int64)&v20, v8, v9, (char *)&pv);
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x44,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\co"
                 "ntentdeliverymanagerappdisplayinfo.cpp",
        (const char *)(unsigned int)v11);
    String = 0;
    v13 = (const WCHAR *)pv;
    if ( pv )
    {
      do
        ++v6;
      while ( *((_WORD *)pv + v6) );
      v19 = v6;
      if ( v6 <= 0xFFFFFFFF )
      {
        WindowsDeleteString(*((HSTRING *)this + 11));
        *((_QWORD *)this + 11) = 0LL;
        String = WindowsCreateString(v13, v6, (HSTRING *)this + 11);
      }
      else
      {
        String = -2147024362;
      }
    }
    if ( String < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\co"
                 "ntentdeliverymanagerappdisplayinfo.cpp",
        (const char *)(unsigned int)String);
    if ( pv )
      CoTaskMemFree(pv);
    StartUI::MRTHelperBase::~MRTHelperBase((StartUI::MRTHelperBase *)&v20);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(pv) = wil::ResultFromCaughtException(v14, &v17, v15);
    return (unsigned int)pv;
  }
  return result;
}
