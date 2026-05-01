/*
 * XREFs of ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180089198
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180088B30 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18008A0C0 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18008A7FC (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18008A94C (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18008AECC (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x18008B130 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z @ 0x18008CBB0 (-_RegSetKeyValue@@YAKPEAUHKEY__@@PEBG1KPEBXK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(
        TaskbarLayoutPolicyManager *this,
        int *a2,
        int *a3)
{
  signed int v6; // ebx
  __int64 v7; // rdx
  HRESULT v9; // eax
  int ActivationFactory; // eax
  unsigned int v11; // edi
  int v12; // eax
  LSTATUS ValueW; // eax
  signed int v14; // ecx
  TaskbarLayoutPolicyManager *v15; // rcx
  int v16; // eax
  TaskbarLayoutPolicyManager *v17; // rcx
  struct IXMLDOMDocument2 *v18; // rbx
  int v19; // eax
  struct IXMLDOMNode *v20; // rcx
  __int64 v21; // rdx
  struct IXMLDOMNode *v22; // rcx
  int v23; // eax
  struct IXMLDOMNode *v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  DWORD pcbData[2]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v28; // [rsp+48h] [rbp-61h] BYREF
  FILETIME FileTime1; // [rsp+50h] [rbp-59h] BYREF
  FILETIME v30; // [rsp+58h] [rbp-51h] BYREF
  struct IXMLDOMDocument2 *v31; // [rsp+60h] [rbp-49h] BYREF
  FILETIME v32; // [rsp+68h] [rbp-41h] BYREF
  FILETIME FileTime2; // [rsp+70h] [rbp-39h] BYREF
  __int64 v34; // [rsp+78h] [rbp-31h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-29h] BYREF
  HSTRING string; // [rsp+98h] [rbp-11h] BYREF
  _BYTE v37[24]; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v38; // [rsp+B8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v34 = -2LL;
  *a2 = 0;
  *a3 = 0;
  if ( !(unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
  {
    v30 = 0LL;
    v26 = _RegSetKeyValue(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
            L"LayoutXMLLastModified",
            3u,
            &v30,
            8u);
    v6 = (unsigned __int16)v26 | 0x80070000;
    if ( v26 <= 0 )
      v6 = v26;
    if ( v6 < 0 )
    {
      v7 = 275LL;
      goto LABEL_4;
    }
    return 0LL;
  }
  v6 = TaskbarLayoutPolicyManager::EnsureEnterpriseLayoutFilePath(this);
  if ( v6 < 0 )
  {
    v7 = 235LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v28 = 0LL;
  string = 0LL;
  v9 = WindowsCreateStringReference(
         L"SharedStartModel.StartLayoutInitializationStatics",
         0x31u,
         &hstringHeader,
         &string);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_af581601_f71a_4a31_8f8d_91f7df79371f, &v28);
  v11 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v37, (const WCHAR **)this + 4);
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, FILETIME *))(*(_QWORD *)v28 + 64LL))(v28, v38, &v32);
    v11 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xF3,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_28:
      v38 = 0LL;
      goto LABEL_29;
    }
    v30 = v32;
    FileTime1 = 0LL;
    pcbData[0] = 8;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
               L"LayoutXMLLastModified",
               8u,
               0LL,
               &FileTime1,
               pcbData);
    v14 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v14 = ValueW;
    if ( v14 < 0 )
      goto LABEL_17;
    if ( pcbData[0] != 8 )
      v14 = -2147467259;
    if ( v14 < 0 )
LABEL_17:
      FileTime1 = 0LL;
    FileTime2 = 0LL;
    if ( !CompareFileTime(&FileTime1, &FileTime2) || CompareFileTime(&FileTime1, &v30) )
    {
      v31 = 0LL;
      v16 = TaskbarLayoutPolicyManager::LoadLayoutXMLFromFilePath(
              v15,
              (struct Microsoft::WRL::Wrappers::HStringReference *)v37,
              &v31);
      v11 = v16;
      v18 = v31;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x100,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v16);
LABEL_26:
        if ( v18 )
          ((void (__fastcall *)(struct IXMLDOMDocument2 *))v18->lpVtbl->Release)(v18);
        goto LABEL_28;
      }
      if ( (int)TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(v17, v31) >= 0 )
      {
        *(_QWORD *)pcbData = 0LL;
        hstringHeader = *(HSTRING_HEADER *)((char *)this + 80);
        v19 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, HSTRING_HEADER *))v18->lpVtbl->setProperty)(
                v18,
                *((_QWORD *)this + 13),
                &hstringHeader);
        v11 = v19;
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x106,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            (const char *)(unsigned int)v19);
          v20 = *(struct IXMLDOMNode **)pcbData;
          if ( *(_QWORD *)pcbData )
          {
            *(_QWORD *)pcbData = 0LL;
            ((void (__fastcall *)(struct IXMLDOMNode *))v20->lpVtbl->Release)(v20);
          }
          goto LABEL_26;
        }
        v22 = *(struct IXMLDOMNode **)pcbData;
        if ( *(_QWORD *)pcbData )
        {
          *(_QWORD *)pcbData = 0LL;
          ((void (__fastcall *)(struct IXMLDOMNode *))v22->lpVtbl->Release)(v22);
        }
        v23 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, DWORD *))v18->lpVtbl->selectSingleNode)(
                v18,
                *((_QWORD *)this + 15),
                pcbData);
        v24 = *(struct IXMLDOMNode **)pcbData;
        if ( v23 >= 0 && *(_QWORD *)pcbData )
        {
          *a3 = TaskbarLayoutPolicyManager::IsOverrideLayout(this, *(struct IXMLDOMNode **)pcbData);
          *a2 = 1;
          v24 = *(struct IXMLDOMNode **)pcbData;
        }
        if ( v24 )
        {
          *(_QWORD *)pcbData = 0LL;
          ((void (__fastcall *)(struct IXMLDOMNode *))v24->lpVtbl->Release)(v24);
        }
      }
      if ( v18 )
        ((void (__fastcall *)(struct IXMLDOMDocument2 *))v18->lpVtbl->Release)(v18);
    }
    v38 = 0LL;
    v25 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xEF,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_29:
  v21 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return v11;
}
