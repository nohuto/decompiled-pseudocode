/*
 * XREFs of ?RuntimeClassInitialize@CGlobals@ApplicationViewManagement@@QEAAJPEAVCApplicationViewManager@@@Z @ 0x18007D1FC
 * Callers:
 *     ?v_PublishServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180074540 (-v_PublishServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180002BAC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ApplicationViewManagerInitializationFailed@AEAY0L@$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY0L@$$CBGAEAJ@Z @ 0x1800846D0 (--$ApplicationViewManagerInitializationFailed@AEAY0L@$$CBGAEAJ@ApplicationViewTelemetry@Applicat.c)
 *     ??$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY06$$CBGAEAJ@Z @ 0x18008475C (--$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@Applicati.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewManagement::CGlobals::RuntimeClassInitialize(
        ApplicationViewManagement::CGlobals *this,
        struct CApplicationViewManager *a2)
{
  __int64 v3; // rax
  DWORD CurrentProcessId; // eax
  int v5; // eax
  __int64 v6; // rcx
  LSTATUS v7; // eax
  const char *v8; // r9
  __int64 v9; // rdx
  LSTATUS Key; // eax
  __int64 v11; // rcx
  HKEY v12; // rcx
  char *v14; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  DWORD pSessionId; // [rsp+60h] [rbp-A0h] BYREF
  DWORD dwDisposition[3]; // [rsp+64h] [rbp-9Ch] BYREF
  WCHAR SubKey[80]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+28h]

  if ( *((struct CApplicationViewManager **)this + 7) != a2 )
  {
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)a2 + 57);
    v3 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = a2;
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 228), 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 80) + 64LL))(v3 + 80, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  hKey = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  ProcessIdToSessionId(CurrentProcessId, &pSessionId);
  v5 = StringCchPrintfW(
         SubKey,
         75LL,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\SessionInfo\\%d",
         pSessionId);
  v6 = (unsigned int)v5;
  if ( v5 >= 0 )
  {
    v7 = RegCreateKeyExW(HKEY_CURRENT_USER, SubKey, 0, 0LL, 1u, 4u, 0LL, &hKey, dwDisposition);
    v6 = (unsigned __int16)v7 | 0x80070000;
    if ( v7 <= 0 )
      v6 = (unsigned int)v7;
  }
  LODWORD(v14) = v6;
  if ( (int)v6 < 0 )
  {
    ApplicationViewManagement::ApplicationViewTelemetry::ApplicationViewManagerInitializationFailed<unsigned short const (&)[11],long &>(
      v6,
      &v14);
    v8 = (const char *)(unsigned int)v14;
    if ( (int)v14 >= 0 )
      goto LABEL_20;
    v9 = 15LL;
    goto LABEL_19;
  }
  Key = RegCreateKeyExW(hKey, L"ApplicationViewManagement", 0, 0LL, 1u, 0xF003Fu, 0LL, (PHKEY)this + 6, 0LL);
  v11 = (unsigned __int16)Key | 0x80070000;
  if ( Key <= 0 )
    v11 = (unsigned int)Key;
  LODWORD(v14) = v11;
  if ( (int)v11 < 0 )
  {
    ApplicationViewManagement::ApplicationViewTelemetry::ApplicationViewManagerInitializationFailed<unsigned short const (&)[7],long &>(
      v11,
      &v14);
    v8 = (const char *)(unsigned int)v14;
    if ( (int)v14 < 0 )
    {
      v9 = 32LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
        v8);
    }
  }
LABEL_20:
  v12 = hKey;
  hKey = 0LL;
  if ( v12 )
    RegCloseKey(v12);
  return 0LL;
}
