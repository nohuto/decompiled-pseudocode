/*
 * XREFs of ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x1800FA8D8
 * Callers:
 *     ?SetLightweightProperty@WindowWrapperBase@@UEAAJPEBGK@Z @ 0x1801F3A60 (-SetLightweightProperty@WindowWrapperBase@@UEAAJPEBGK@Z.c)
 *     ?SetRegistration@WindowWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x1801F3D70 (-SetRegistration@WindowWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x18004EA40 (--$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@@@YA-AV-$ComPtr@V-$CRefCount.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Add@$$QEAV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ$$QEAV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@PEA_K@Z @ 0x1800836E0 (--$_Add@$$QEAV-$ComPtr@V-$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x180087690 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z @ 0x1800FAE84 (-IsName@LightweightProperty@LightweightPropertySet@@QEAA_NPEBG@Z.c)
 *     ?s_MangleName@LightweightPropertySet@@CAXPEBGPEAG_K@Z @ 0x1801E2268 (-s_MangleName@LightweightPropertySet@@CAXPEBGPEAG_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LightweightPropertySet::SetProperty(
        LightweightPropertySet *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        HWND a4)
{
  unsigned __int64 v5; // r15
  __int64 v8; // rdi
  __int64 *v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // rdx
  const WCHAR *StringRawBuffer; // rax
  HRESULT v19; // eax
  IMalloc *v20; // r8
  int v21[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v22[3]; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int16 v23[256]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v22[1] = -2LL;
  v5 = a3;
  v22[0] = 0LL;
  v8 = 0LL;
  if ( !*((_QWORD *)this + 1) )
    goto LABEL_4;
  while ( !LightweightPropertySet::LightweightProperty::IsName(
             (LightweightPropertySet::LightweightProperty *)(*(_QWORD *)(*(_QWORD *)this + 8 * v8) + 8LL),
             a2) )
  {
    if ( (unsigned __int64)++v8 >= *((_QWORD *)this + 1) )
      goto LABEL_4;
  }
  v12 = *(_QWORD *)(*(_QWORD *)this + 8 * v8);
  if ( !v12 )
  {
LABEL_4:
    v9 = CreateRefCountedObj<LightweightPropertySet::LightweightProperty>(v21);
    v11 = 0LL;
    v12 = 0LL;
    if ( v22 != v9 )
    {
      v12 = *v9;
      v11 = *v9;
      *v9 = 0LL;
    }
    v22[0] = v11;
    v13 = *(_QWORD *)v21;
    v14 = v12;
    if ( *(_QWORD *)v21 )
    {
      *(_QWORD *)v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v14 = v12;
    }
    if ( v14 )
    {
      LightweightPropertySet::s_MangleName(a2, v23, v10);
      v19 = Windows::Internal::String::_InitializeHelper((HSTRING *)(v12 + 8), v23);
      v15 = v19;
      if ( v19 >= 0 )
      {
        *(_QWORD *)v21 = v11;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v21);
        v15 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_Add<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>> &&>(
                (__int64)this,
                v21,
                v20);
        if ( *(_QWORD *)v21 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v21 + 16LL))(*(_QWORD *)v21);
        if ( v15 >= 0 )
          goto LABEL_12;
        v16 = 60LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8A,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
          (const char *)(unsigned int)v19);
        v16 = 59LL;
      }
    }
    else
    {
      v15 = -2147024882;
      v16 = 57LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_15;
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*(_QWORD *)(*(_QWORD *)this + 8 * v8));
LABEL_12:
  *(_DWORD *)(v12 + 16) = v5;
  if ( a4 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v12 + 8), 0LL);
    SetPropW(a4, StringRawBuffer, (HANDLE)v5);
  }
  v15 = 0;
LABEL_15:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v15;
}
