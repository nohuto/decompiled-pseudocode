/*
 * XREFs of ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18013A7E0
 * Callers:
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x18013D380 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 *     ?SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z @ 0x18013F500 (-SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@PEA_K@Z @ 0x18007752C (-Add@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@LightweightPropertySet@.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18012C63C (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x18013AB24 (--$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@@@YA-AV-$ComPtr@V-$CRefCount.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LightweightPropertySet::SetProperty(
        LightweightPropertySet *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        HWND a4)
{
  unsigned __int64 v5; // r14
  __int64 v8; // rdi
  PCWSTR StringRawBuffer; // rax
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rcx
  int v13; // edi
  int v14; // eax
  __int64 v15; // rdx
  void *v16; // r8
  const WCHAR *v17; // rax
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v21[256]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v20[1] = -2LL;
  v5 = a3;
  v20[0] = 0LL;
  v8 = 0LL;
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
  v10 = *(_QWORD *)(*(_QWORD *)this + 8 * v8);
  if ( !v10 )
  {
LABEL_7:
    v11 = (__int64 *)CreateRefCountedObj<LightweightPropertySet::LightweightProperty>(&v19);
    v10 = 0LL;
    if ( v20 != v11 )
    {
      v10 = *v11;
      *v11 = 0LL;
    }
    v20[0] = v10;
    v12 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( !v10 )
    {
      v13 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x39,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_23;
    }
    _o_wcscpy_s(v21, 256LL, L"LightweightProperty_");
    _o_wcscat_s(v21, 256LL, a2);
    v14 = Windows::Internal::String::_InitializeHelper((HSTRING *)(v10 + 8), v21);
    v13 = v14;
    if ( v14 >= 0 )
    {
      v19 = v10;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v13 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::Add(
              (__int64)this,
              &v19,
              v16);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      if ( v13 >= 0 )
        goto LABEL_20;
      v15 = 60LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
        (const char *)(unsigned int)v14);
      v15 = 59LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_23;
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*(_QWORD *)(*(_QWORD *)this + 8 * v8));
LABEL_20:
  *(_DWORD *)(v10 + 16) = v5;
  if ( a4 )
  {
    v17 = WindowsGetStringRawBuffer(*(HSTRING *)(v10 + 8), 0LL);
    SetPropW(a4, v17, (HANDLE)v5);
  }
  v13 = 0;
LABEL_23:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v13;
}
