/*
 * XREFs of ?RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileInfo@@@Z @ 0x18001CDF4
 * Callers:
 *     _lambda_156a2acd22091851321d998ccb9c82aa_::operator() @ 0x180013CF8 (_lambda_156a2acd22091851321d998ccb9c82aa_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x18000414C (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004BE8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x180004F14 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ??$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z @ 0x180027544 (--$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x180028AF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::LaunchOperation *this,
        struct ITileInfo *a2)
{
  int v3; // eax
  int v4; // ebx
  HRESULT v5; // eax
  HSTRING v6; // rbx
  __int64 v7; // rcx
  int ActivationFactory; // eax
  __int64 v9; // rdx
  int v10; // eax
  HRESULT v11; // eax
  HSTRING v12; // rbx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rbx
  HRESULT v17; // eax
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  _BYTE v29[8]; // [rsp+38h] [rbp-69h] BYREF
  __int64 (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-61h] BYREF
  __int64 v31; // [rsp+48h] [rbp-59h] BYREF
  __int64 v32; // [rsp+50h] [rbp-51h] BYREF
  __int64 v33; // [rsp+58h] [rbp-49h] BYREF
  __int64 v34; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v35[2]; // [rsp+68h] [rbp-39h] BYREF
  _BYTE v36[80]; // [rsp+78h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp+27h] BYREF
  HSTRING string; // [rsp+E0h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v35[1] = -2LL;
  v34 = 0LL;
  v3 = VE_MaterializeApplicationActivator(a2, &v34);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x17,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\launchoperation.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_50;
  }
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v36,
    a2);
  v29[0] = 0;
  TileDataLayerItemWrappers::TDLTileInfoHelper::GetSimpleDataMetaProperty<bool>(
    v36,
    L"AppResolver_IsDesktopAppTile",
    v29);
  if ( v29[0] )
    goto LABEL_47;
  v33 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  v6 = string;
  v7 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  ActivationFactory = RoGetActivationFactory(v6, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v33);
  v4 = ActivationFactory;
  string = 0LL;
  if ( ActivationFactory >= 0 )
  {
    v32 = 0LL;
    LOBYTE(v9) = 1;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v33 + 136LL))(v33, v9, &v32);
    v4 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x28,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\launchoperation.cpp",
        (const char *)(unsigned int)v10);
LABEL_35:
      v20 = v32;
      if ( v32 )
      {
        v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      goto LABEL_37;
    }
    v30 = 0LL;
    string = 0LL;
    v11 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
    if ( v11 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
    v12 = string;
    v13 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
    }
    v30 = 0LL;
    v4 = RoActivateInstance(v12, v35);
    if ( v4 >= 0 )
    {
      if ( *(_QWORD *)&GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
        && *(_QWORD *)GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
      {
        v30 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v35[0];
      }
      else
      {
        v4 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD))v35[0])(
               v35[0],
               &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
               &v30);
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v35[0] + 16LL))(v35[0]);
      }
    }
    string = 0LL;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x2C,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\launchoperation.cpp",
        (const char *)(unsigned int)v4);
LABEL_33:
      v19 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v19)[2])(v19);
      }
      goto LABEL_35;
    }
    v31 = 0LL;
    v14 = (**v30)(v30, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v31);
    v4 = v14;
    if ( v14 < 0 )
    {
      v15 = 47LL;
      goto LABEL_31;
    }
    v16 = v31;
    string = 0LL;
    v17 = WindowsCreateStringReference(L"AppActivation.ShouldNotifyUAOfLaunch", 0x24u, &hstringHeader, &string);
    if ( v17 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
    v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v16 + 80LL))(v16, string, v32, v29);
    v4 = v14;
    string = 0LL;
    if ( v14 < 0 )
    {
      v15 = 56LL;
      goto LABEL_31;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*(_QWORD *)v34 + 40LL))(
            v34,
            0LL,
            0LL,
            v30,
            0LL);
    v4 = v14;
    if ( v14 < 0 )
    {
      v15 = 58LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\launchoperation.cpp",
        (const char *)(unsigned int)v14);
      v18 = v31;
      if ( v31 )
      {
        v31 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      goto LABEL_33;
    }
    v22 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v23)[2])(v23);
    }
    v24 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v25 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
LABEL_47:
    v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 48LL))(v34);
    v4 = v26;
    if ( v26 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\launchoperation.cpp",
        (const char *)(unsigned int)v26);
    goto LABEL_49;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x25,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\launchoperation.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_37:
  v21 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
LABEL_49:
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v36);
LABEL_50:
  v27 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return (unsigned int)v4;
}
