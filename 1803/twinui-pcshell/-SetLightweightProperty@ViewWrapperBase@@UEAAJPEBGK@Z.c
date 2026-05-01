/*
 * XREFs of ?SetLightweightProperty@ViewWrapperBase@@UEAAJPEBGK@Z @ 0x18004FCE0
 * Callers:
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180049D40 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x18004EA40 (--$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@@@YA-AV-$ComPtr@V-$CRefCount.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Add@$$QEAV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@PEA_K@Z @ 0x1800836E0 (--$_Add@$$QEAV-$ComPtr@V-$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x180087690 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F7878 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewWrapperBase::SetLightweightProperty(
        ViewWrapperBase *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  unsigned __int64 v3; // r13
  RTL_SRWLOCK *v6; // r15
  HWND v7; // r12
  _QWORD *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r14
  PCWSTR StringRawBuffer; // rax
  char *v12; // rax
  _DWORD *v13; // rbx
  __int64 v14; // rcx
  _DWORD *v15; // r14
  int v16; // eax
  int v17; // ebp
  __int64 (__fastcall *v18)(volatile signed __int32 *); // rax
  const WCHAR *v20; // rax
  HSTRING v21; // rcx
  __int64 v22; // rdx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-298h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-298h]
  void *v25; // [rsp+30h] [rbp-288h] BYREF
  _DWORD *v26; // [rsp+38h] [rbp-280h] BYREF
  __int64 v27; // [rsp+40h] [rbp-278h] BYREF
  HWND hWnd; // [rsp+48h] [rbp-270h]
  __int64 v29; // [rsp+50h] [rbp-268h]
  RTL_SRWLOCK *v30; // [rsp+58h] [rbp-260h]
  char v31; // [rsp+60h] [rbp-258h] BYREF
  unsigned __int16 v32[256]; // [rsp+70h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  v29 = -2LL;
  v3 = a3;
  v6 = (RTL_SRWLOCK *)(*((_QWORD *)this + 21) + 296LL);
  AcquireSRWLockExclusive(v6);
  v30 = v6;
  v7 = (HWND)*((_QWORD *)this + 33);
  hWnd = v7;
  v8 = (_QWORD *)((char *)this + 104);
  v25 = 0LL;
  v9 = 0LL;
  if ( v8[1] )
  {
    while ( 1 )
    {
      v10 = 8 * v9;
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(8 * v9 + *v8) + 8LL), 0LL);
      if ( CompareStringOrdinal(StringRawBuffer + 20, -1, a2, -1, 1) == 2 )
        break;
      if ( (unsigned __int64)++v9 >= v8[1] )
        goto LABEL_4;
    }
    v13 = *(_DWORD **)(v10 + *v8);
    if ( v13 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 8LL))(*(_QWORD *)(v10 + *v8));
      v25 = v13;
      v15 = v13;
      goto LABEL_14;
    }
  }
LABEL_4:
  v12 = (char *)CreateRefCountedObj<LightweightPropertySet::LightweightProperty>(&v27);
  v13 = 0LL;
  if ( &v31 != v12 )
  {
    v13 = *(_DWORD **)v12;
    *(_QWORD *)v12 = 0LL;
  }
  v25 = v13;
  v14 = v27;
  v15 = v13;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( !v13 )
  {
    v17 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
      (const char *)0x8007000ELL,
      bIgnoreCase);
    Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v25);
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x43E,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v17,
      bIgnoreCasea);
    goto LABEL_19;
  }
  _o_wcscpy_s(v32, 256LL, L"LightweightProperty_");
  _o_wcscat_s(v32, 256LL, a2);
  v16 = Windows::Internal::String::_InitializeHelper((Windows::Internal::String *)(v13 + 2), v32);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
      (const char *)(unsigned int)v16,
      bIgnoreCase);
    v22 = 59LL;
    goto LABEL_30;
  }
  v26 = v13;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 8LL))(v13);
  v17 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_Add<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>> &&>(
          v8,
          &v26);
  if ( v26 )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 16LL))(v26);
    v15 = v13;
  }
  if ( v17 < 0 )
  {
    v22 = 60LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
      (const char *)(unsigned int)v17,
      bIgnoreCase);
    Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v25);
    if ( v17 >= 0 )
      goto LABEL_19;
    goto LABEL_31;
  }
  v7 = hWnd;
LABEL_14:
  v13[4] = v3;
  if ( v7 )
  {
    v20 = WindowsGetStringRawBuffer(*((HSTRING *)v13 + 1), 0LL);
    SetPropW(v7, v20, (HANDLE)v3);
  }
  v18 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL);
  if ( v18 == CRefCountedObject<LightweightPropertySet::LightweightProperty>::Release )
  {
    if ( _InterlockedExchangeAdd(v15 + 6, 0xFFFFFFFF) == 1 )
    {
      v21 = (HSTRING)*((_QWORD *)v25 + 1);
      if ( v21 )
        WindowsDeleteString(v21);
      operator delete(v25, (const struct std::nothrow_t *)0x20);
    }
  }
  else
  {
    v18(v13);
  }
  v17 = 0;
LABEL_19:
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return (unsigned int)v17;
}
