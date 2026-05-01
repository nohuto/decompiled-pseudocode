/*
 * XREFs of ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x180110490
 * Callers:
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x180113160 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 *     ?SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z @ 0x180114FD0 (-SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@PEA_K@Z @ 0x18007472C (-Add@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@LightweightPropertySet@.c)
 *     ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x180110870 (--$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@@@YA-AV-$ComPtr@V-$CRefCount.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LightweightPropertySet::SetProperty(
        LightweightPropertySet *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        HWND a4)
{
  unsigned __int64 v5; // r15
  __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  PCWSTR StringRawBuffer; // rax
  HSTRING v11; // rbx
  HSTRING *v12; // rax
  HSTRING v13; // rcx
  int v14; // edi
  HSTRING v15; // rcx
  __int64 v16; // rdx
  void *v17; // r8
  const WCHAR *v18; // rax
  HSTRING string; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v21[3]; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR sourceString[256]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  v21[1] = -2LL;
  v5 = a3;
  v21[0] = 0LL;
  v8 = 0LL;
  v9 = -1LL;
  if ( !*((_QWORD *)this + 1) )
    goto LABEL_7;
  while ( 1 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(*(_QWORD *)this + 8 * v8) + 8LL), 0LL);
    if ( CompareStringOrdinal(StringRawBuffer + 20, -1, a2, -1, 1) == 2 )
      break;
    if ( (unsigned __int64)++v8 >= *((_QWORD *)this + 1) )
      goto LABEL_7;
  }
  v11 = *(HSTRING *)(*(_QWORD *)this + 8 * v8);
  if ( !v11 )
  {
LABEL_7:
    v12 = (HSTRING *)CreateRefCountedObj<LightweightPropertySet::LightweightProperty>(&string);
    v11 = 0LL;
    if ( v21 != v12 )
    {
      v11 = *v12;
      *v12 = 0LL;
    }
    v21[0] = v11;
    v13 = string;
    if ( string )
    {
      string = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( !v11 )
    {
      v14 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_30;
    }
    _o_wcscpy_s(sourceString, 256LL, L"LightweightProperty_");
    _o_wcscat_s(sourceString, 256LL, a2);
    string = 0LL;
    do
      ++v9;
    while ( sourceString[v9] );
    if ( v9 <= 0xFFFFFFFF )
    {
      v14 = WindowsCreateString(sourceString, v9, &string);
      if ( v14 >= 0 )
      {
        v15 = (HSTRING)*((_QWORD *)v11 + 1);
        *((_QWORD *)v11 + 1) = string;
        WindowsDeleteString(v15);
        goto LABEL_20;
      }
    }
    else
    {
      v14 = -2147024362;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
      (const char *)(unsigned int)v14);
LABEL_20:
    if ( v14 >= 0 )
    {
      string = v11;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 8LL))(v11);
      v14 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::Add(
              (__int64)this,
              &string,
              v17);
      if ( string )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 16LL))(string);
      if ( v14 >= 0 )
        goto LABEL_27;
      v16 = 60LL;
    }
    else
    {
      v16 = 59LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_30;
  }
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 8LL))(v11);
LABEL_27:
  *((_DWORD *)v11 + 4) = v5;
  if ( a4 )
  {
    v18 = WindowsGetStringRawBuffer(*((HSTRING *)v11 + 1), 0LL);
    SetPropW(a4, v18, (HANDLE)v5);
  }
  v14 = 0;
LABEL_30:
  if ( v11 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v14;
}
