/*
 * XREFs of ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x180196E28
 * Callers:
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180196778 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x1801944D8 (--$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z.c)
 *     ??0Iterator@?$ObjectArrayAdapter@UIPenWorkspaceLayoutItem@@@@QEAA@QEAV1@I@Z @ 0x180195348 (--0Iterator@-$ObjectArrayAdapter@UIPenWorkspaceLayoutItem@@@@QEAA@QEAV1@I@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIPenWorkspaceLayoutItem@@@@AEAAXXZ @ 0x180195B38 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIPenWorkspaceLayoutItem@@@@AEAAXXZ.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1801972C8 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z @ 0x180199260 (-GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z.c)
 *     ??0?$ObjectArrayAdapter@UIPenWorkspaceLayoutItem@@@@QEAA@PEAUIObjectArray@@@Z @ 0x1801F756C (--0-$ObjectArrayAdapter@UIPenWorkspaceLayoutItem@@@@QEAA@PEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadOEMApps(
        PenWorkspace::Discover::RecentAppsCache *this,
        struct _FILETIME a2,
        int *a3)
{
  HRESULT v5; // eax
  unsigned int v6; // ebx
  LPVOID v7; // rbx
  int v8; // eax
  __int64 v9; // rbx
  HSTRING v10; // r14
  DWORD LastError; // edi
  HSTRING v12; // rcx
  __int64 v13; // rbx
  HSTRING *v14; // r8
  const unsigned __int16 *v15; // rax
  HSTRING v17; // [rsp+38h] [rbp-79h] BYREF
  HSTRING v18; // [rsp+40h] [rbp-71h] BYREF
  void *v19; // [rsp+48h] [rbp-69h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-61h] BYREF
  const unsigned __int16 *StringRawBuffer; // [rsp+58h] [rbp-59h] BYREF
  struct _FILETIME v22; // [rsp+60h] [rbp-51h] BYREF
  HSTRING string; // [rsp+68h] [rbp-49h] BYREF
  __int64 v24; // [rsp+70h] [rbp-41h] BYREF
  __int64 v25; // [rsp+78h] [rbp-39h] BYREF
  __int64 v26[2]; // [rsp+80h] [rbp-31h] BYREF
  void *v27; // [rsp+90h] [rbp-21h] BYREF
  int v28; // [rsp+98h] [rbp-19h]
  int v29; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v30[3]; // [rsp+A8h] [rbp-9h] BYREF
  _BYTE v31[32]; // [rsp+C0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v30[2] = -2LL;
  *a3 = 0;
  v17 = (HSTRING)(*(_QWORD *)&a2 + 100000000LL);
  v22 = (struct _FILETIME)(*(_QWORD *)&a2 + 100000000LL);
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v5 = CoCreateInstance(
         &CLSID_PenWorkspaceLayoutPolicyManager,
         0LL,
         1u,
         &GUID_9302a129_7433_42a0_9cb8_5da5964f2756,
         &ppv);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v19 = 0LL;
    v7 = ppv;
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v19);
    v8 = (*(__int64 (__fastcall **)(LPVOID, __int64, void **))(*(_QWORD *)v7 + 32LL))(v7, 1LL, &v19);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        657LL,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v8);
    if ( !v19 )
    {
LABEL_27:
      v6 = 0;
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v19);
      goto LABEL_28;
    }
    ObjectArrayAdapter<IPenWorkspaceLayoutItem>::ObjectArrayAdapter<IPenWorkspaceLayoutItem>(&v27);
    ObjectArrayAdapter<IPenWorkspaceLayoutItem>::Iterator::Iterator((__int64)&v25, (__int64)&v27, 0);
    ObjectArrayAdapter<IPenWorkspaceLayoutItem>::Iterator::Iterator((__int64)&v29, (__int64)&v27, v28);
    while ( 1 )
    {
      if ( (_DWORD)v25 == v29 && v26[1] == v30[1] )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v30);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v26);
        Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease(&v27);
        goto LABEL_27;
      }
      v9 = v26[0];
      v24 = v26[0];
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v24);
      v18 = 0LL;
      string = 0LL;
      if ( (*(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v9 + 24LL))(v9, &string) < 0 )
      {
        v10 = v18;
        if ( v18 )
        {
          LastError = GetLastError();
          WindowsDeleteString(v10);
          SetLastError(LastError);
        }
        v18 = 0LL;
        if ( (*(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v9 + 32LL))(v9, &v18) >= 0 )
        {
          v12 = v18;
          if ( !v18 )
            goto LABEL_21;
          StringRawBuffer = WindowsGetStringRawBuffer(v18, 0LL);
          v17 = 0LL;
          v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v31, &StringRawBuffer);
          WindowsDeleteString(v17);
          v17 = 0LL;
          if ( (int)PenWorkspace::Discover::GetApplicationUserModelIdFromLinkFile(
                      *(HSTRING *)(v13 + 24),
                      (HSTRING)&v17,
                      v14) >= 0 )
          {
            v15 = WindowsGetStringRawBuffer(v17, 0LL);
            if ( PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, v15, &v22) >= 0 )
            {
              PenWorkspaceBrokerTelemetry::OemAppLoaded<unsigned short const * &>(&StringRawBuffer);
              ++*a3;
            }
          }
          WindowsDeleteString(v17);
          v17 = 0LL;
        }
      }
      else
      {
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        if ( PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, StringRawBuffer, &v22) >= 0 )
        {
          PenWorkspaceBrokerTelemetry::OemAppLoaded<unsigned short const * &>(&StringRawBuffer);
          ++*a3;
        }
      }
      v12 = v18;
LABEL_21:
      if ( v12 )
        WindowsDeleteString(v12);
      if ( string )
        WindowsDeleteString(string);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      LODWORD(v25) = v25 + 1;
      ObjectArrayAdapter<IPenWorkspaceLayoutItem>::Iterator::GetCurrentObject(&v25);
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x28E,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)(unsigned int)v5);
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v6;
}
