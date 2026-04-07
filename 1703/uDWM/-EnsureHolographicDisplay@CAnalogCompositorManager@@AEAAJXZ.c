/*
 * XREFs of ?EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ @ 0x18001036C
 * Callers:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x1800231E4 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180018C4C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072054 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800720D0 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$UDwmHolographicDisplayConnected@AEAU_GUID@@_N@UDwmTrace@@SAXAEAU_GUID@@$$QEA_N@Z @ 0x180072BF8 (--$UDwmHolographicDisplayConnected@AEAU_GUID@@_N@UDwmTrace@@SAXAEAU_GUID@@$$QEA_N@Z.c)
 *     _anonymous_namespace_::GetCbsSession @ 0x180073610 (_anonymous_namespace_--GetCbsSession.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180073810 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _anonymous_namespace_::IsFodInstalled @ 0x1800738A4 (_anonymous_namespace_--IsFodInstalled.c)
 *     ?ReleaseHolographicDisplay@CAnalogCompositorManager@@AEAAXXZ @ 0x180073F64 (-ReleaseHolographicDisplay@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?ValidateHardwareAdapters@CAnalogCompositorManager@@AEAAJXZ @ 0x1800747D8 (-ValidateHardwareAdapters@CAnalogCompositorManager@@AEAAJXZ.c)
 *     _anonymous_namespace_::WaitForFodInstalled @ 0x18007499C (_anonymous_namespace_--WaitForFodInstalled.c)
 *     ?reset@?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180074BFC (-reset@-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@detai.c)
 */

__int64 __fastcall CAnalogCompositorManager::EnsureHolographicDisplay(CAnalogCompositorManager *this)
{
  _QWORD *v1; // rsi
  char v3; // r14
  unsigned int v4; // ebx
  __int64 CbsSession; // rax
  char IsFodInstalled; // bl
  HRESULT v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 File2; // rax
  int v12; // [rsp+20h] [rbp-E0h]
  const char *v13; // [rsp+20h] [rbp-E0h]
  char v14[8]; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-C8h] BYREF
  PWSTR ppszPath; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  char v18; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v19[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v17 = 0LL;
  v1 = (_QWORD *)((char *)this + 104);
  v3 = 1;
  if ( *((_QWORD *)this + 13)
    || !*((_DWORD *)this + 40)
    || (int)CAnalogCompositorManager::ValidateHardwareAdapters(this) < 0 )
  {
    goto LABEL_3;
  }
  CbsSession = anonymous_namespace_::GetCbsSession(&ppv);
  IsFodInstalled = anonymous_namespace_::IsFodInstalled(CbsSession);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppv);
  if ( !IsFodInstalled )
  {
    v14[0] = 0;
    UDwmTrace::UDwmHolographicDisplayConnected<_GUID &,bool>((char *)this + 128, v14);
    anonymous_namespace_::WaitForFodInstalled();
    goto LABEL_3;
  }
  ppv = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_DWORD *)this + 42) )
  {
LABEL_42:
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&ppv);
LABEL_3:
    v3 = 0;
    v4 = 0;
    goto LABEL_4;
  }
  v14[0] = 1;
  UDwmTrace::UDwmHolographicDisplayConnected<_GUID &,bool>((char *)this + 128, v14);
  ppszPath = 0LL;
  v8 = SHGetKnownFolderPath(&FOLDERID_System, 0, 0LL, &ppszPath);
  v4 = v8;
  if ( v8 >= 0 )
  {
    v13 = L"\\hologramcompositor.lock";
    v9 = StringCchPrintfW(v19, 0x104uLL, L"%s\\%s", ppszPath);
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = 307LL;
LABEL_38:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)(unsigned int)v9,
        (int)v13);
      goto LABEL_39;
    }
    LODWORD(v13) = 0;
    File2 = CreateFile2(v19, 0x80000000LL, 1LL, 3LL);
    if ( (char *)this + 112 != &v18 )
    {
      wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        (char *)this + 112,
        File2);
      File2 = -1LL;
    }
    if ( (unsigned __int64)(File2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle((HANDLE)File2);
    if ( ((*((_QWORD *)this + 14) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      v4 = -2147483635;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x136,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        (const char *)0x8000000DLL,
        0);
LABEL_39:
      CoTaskMemFree(ppszPath);
      goto LABEL_40;
    }
    v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))CDesktopManager::s_pDesktopManagerInstance + 21))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21),
           &GUID_ad9a1415_d7c0_48fe_810f_2cf1efa8f436,
           &v17);
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = 313LL;
      goto LABEL_38;
    }
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v17 + 24LL))(v17, v1);
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = 315LL;
      goto LABEL_38;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 24LL))(*v1, *((_QWORD *)this + 18));
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = 317LL;
      goto LABEL_38;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 32LL))(*v1, *((_QWORD *)this + 19));
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = 318LL;
      goto LABEL_38;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 40LL))(*v1, 0LL);
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = 319LL;
      goto LABEL_38;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v1 + 48LL))(*v1, *((unsigned int *)this + 40));
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = 320LL;
      goto LABEL_38;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v1 + 56LL))(*v1, (char *)this + 128);
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = 321LL;
      goto LABEL_38;
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 21) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21));
    v4 = v9;
    if ( v9 < 0 )
    {
      v10 = 323LL;
      goto LABEL_38;
    }
    CoTaskMemFree(ppszPath);
    goto LABEL_42;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x12C,
    (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
    (const char *)(unsigned int)v8,
    v12);
LABEL_40:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&ppv);
LABEL_4:
  if ( v17 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    v17 = 0LL;
  }
  if ( v3 )
  {
    ppv = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    CAnalogCompositorManager::ReleaseHolographicDisplay(this);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&ppv);
  }
  return v4;
}
