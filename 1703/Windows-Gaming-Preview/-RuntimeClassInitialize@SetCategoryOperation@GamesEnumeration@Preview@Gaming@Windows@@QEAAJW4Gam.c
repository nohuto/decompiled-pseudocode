/*
 * XREFs of ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001D2B0
 * Callers:
 *     _lambda_1854fdeaa8c10903b3acdb056db6e24a_::operator() @ 0x1800149DC (_lambda_1854fdeaa8c10903b3acdb056db6e24a_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x18000414C (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004BE8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x180004F14 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18000C538 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001D948 (-GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 *     ?CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@_N2@Z @ 0x1800251A8 (-CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualE.c)
 *     ?SetAndRecordShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGAEAV?$ComPtr@UIStream@@@WRL@Microsoft@@@Z @ 0x18002574C (-SetAndRecordShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGAEAV-$ComPtr@UI.c)
 *     ?ClearShellPropertyStream@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBG@Z @ 0x180025A08 (-ClearShellPropertyStream@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x180028AF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::SetCategoryOperation::RuntimeClassInitialize(
        __int64 a1,
        int a2,
        int a3,
        struct ITileManager *a4,
        struct ITileInfo *a5)
{
  int v7; // eax
  struct IVisualElementEnumerator *v8; // r8
  bool v9; // r9
  signed int v10; // edi
  __int64 v11; // rdx
  IStream *v12; // rbx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  int v16; // eax
  unsigned __int16 **v17; // r8
  int AppUserModelId; // eax
  HRESULT v19; // eax
  HSTRING v20; // rbx
  __int64 v21; // rcx
  int ActivationFactory; // eax
  __int64 v23; // rbx
  HSTRING_HEADER *v24; // rdi
  __int64 v25; // rcx
  int v26; // eax
  HRESULT v27; // eax
  HSTRING v28; // rbx
  __int64 v29; // rcx
  unsigned __int64 v30; // r9
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rbx
  HSTRING_HEADER *v34; // rax
  __int64 v35; // rbx
  HSTRING_HEADER *v36; // rax
  HRESULT v37; // eax
  HSTRING v38; // rbx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  bool v51; // [rsp+28h] [rbp-C1h]
  BYTE pInit[8]; // [rsp+38h] [rbp-B1h] BYREF
  __int64 v53; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v54; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v55; // [rsp+50h] [rbp-99h] BYREF
  IStream *v56; // [rsp+58h] [rbp-91h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-89h] BYREF
  __int64 v58; // [rsp+68h] [rbp-81h]
  __int64 v59; // [rsp+70h] [rbp-79h]
  __int64 v60; // [rsp+78h] [rbp-71h]
  _BYTE v61[80]; // [rsp+88h] [rbp-61h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+D8h] [rbp-11h] BYREF
  HSTRING string; // [rsp+F0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+57h]

  v60 = -2LL;
  if ( a2 == a3 )
    return 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v61,
    a5);
  if ( a3 )
  {
    *(_DWORD *)pInit = a3;
    v12 = SHCreateMemStream(pInit, 4u);
    v56 = v12;
    v10 = v12 == 0LL ? 0x8007000E : 0;
    if ( v12 )
    {
      v15 = TileDataLayerItemWrappers::TDLTileInfoHelper::SetAndRecordShellProperty(
              v61,
              L"Windows.Gaming.AppCategory",
              &v56);
      v10 = v15;
      if ( v15 >= 0 )
      {
        (*(void (__fastcall **)(IStream *))(*(_QWORD *)v12 + 16LL))(v12);
        v10 = 0;
        goto LABEL_15;
      }
      v13 = (unsigned int)v15;
      v14 = 1154LL;
    }
    else
    {
      v13 = (unsigned int)v10;
      v14 = 1153LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v14,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)v13);
    if ( v12 )
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_15:
    if ( v10 < 0 )
    {
      v11 = 33LL;
      goto LABEL_19;
    }
    goto LABEL_17;
  }
  v7 = TileDataLayerItemWrappers::TDLTileInfoHelper::ClearShellPropertyStream(
         (TileDataLayerItemWrappers::TDLTileInfoHelper *)v61,
         L"Windows.Gaming.AppCategory");
  v10 = v7;
  if ( v7 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xF1,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v7);
  if ( v10 < 0 )
  {
    v11 = 29LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\setcategoryoperation.cpp",
      (const char *)(unsigned int)v10);
LABEL_71:
    TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v61);
    return (unsigned int)v10;
  }
LABEL_17:
  v16 = TileDataLayerItemWrappers::TDLTileInfoHelper::CommitInternal(
          (TileDataLayerItemWrappers::TDLTileInfoHelper *)v61,
          a4,
          v8,
          v9,
          v51);
  v10 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x432,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v16);
    v11 = 40LL;
    goto LABEL_19;
  }
  if ( a3 == 1 )
  {
    pv = 0LL;
    v58 = -1LL;
    v59 = -1LL;
    AppUserModelId = Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId(a5, (struct ITileInfo *)&pv, v17);
    v10 = AppUserModelId;
    if ( AppUserModelId < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x35,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\setcategoryoperation.cpp",
        (const char *)(unsigned int)AppUserModelId);
LABEL_68:
      if ( pv )
      {
        CoTaskMemFree(pv);
        pv = 0LL;
      }
      v58 = 0LL;
      v59 = 0LL;
      goto LABEL_71;
    }
    v55 = 0LL;
    string = 0LL;
    v19 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string);
    if ( v19 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19);
    v20 = string;
    v21 = v55;
    if ( v55 )
    {
      v55 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    ActivationFactory = RoGetActivationFactory(v20, &GUID_a14c8099_29fd_4730_9c5f_7cd2abac36f1, &v55);
    v10 = ActivationFactory;
    string = 0LL;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x39,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\setcategoryoperation.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_66:
      v45 = v55;
      if ( v55 )
      {
        v55 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      }
      goto LABEL_68;
    }
    v54 = 0LL;
    v23 = v55;
    v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&pv);
    v25 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, PVOID, __int64 *))(*(_QWORD *)v23 + 432LL))(
            v23,
            0LL,
            v24[1].Reserved.Reserved1,
            &v54);
    v10 = v26;
    string = 0LL;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x3D,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\setcategoryoperation.cpp",
        (const char *)(unsigned int)v26);
LABEL_64:
      v44 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
      }
      goto LABEL_66;
    }
    *(_QWORD *)pInit = 0LL;
    string = 0LL;
    v27 = WindowsCreateStringReference(
            L"Windows.Internal.StateRepository.PackagePolicy",
            0x2Eu,
            &hstringHeader,
            &string);
    if ( v27 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v27);
    v28 = string;
    v29 = *(_QWORD *)pInit;
    if ( *(_QWORD *)pInit )
    {
      *(_QWORD *)pInit = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    *(_QWORD *)pInit = 0LL;
    v10 = RoActivateInstance(v28, &v56);
    if ( v10 >= 0 )
    {
      if ( *(_QWORD *)&GUID_7619d03f_b9b1_446c_aeb9_f126825fd333.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
        && *(_QWORD *)GUID_7619d03f_b9b1_446c_aeb9_f126825fd333.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
      {
        *(_QWORD *)pInit = v56;
      }
      else
      {
        v10 = (**(__int64 (__fastcall ***)(IStream *, GUID *, BYTE *))v56)(
                v56,
                &GUID_7619d03f_b9b1_446c_aeb9_f126825fd333,
                pInit);
        (*(void (__fastcall **)(IStream *))(*(_QWORD *)v56 + 16LL))(v56);
      }
    }
    string = 0LL;
    if ( v10 < 0 )
    {
      v30 = (unsigned int)v10;
      v31 = 69LL;
LABEL_51:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v31,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\setcategoryoperation.cpp",
        (const char *)v30);
LABEL_62:
      v43 = *(_QWORD *)pInit;
      if ( *(_QWORD *)pInit )
      {
        *(_QWORD *)pInit = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      }
      goto LABEL_64;
    }
    v32 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)pInit + 136LL))(*(_QWORD *)pInit, v54);
    v10 = v32;
    if ( v32 < 0 )
    {
      v31 = 71LL;
LABEL_50:
      v30 = (unsigned int)v32;
      goto LABEL_51;
    }
    v33 = *(_QWORD *)pInit;
    v34 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_18002F778);
    v32 = (*(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v33 + 152LL))(v33, v34[1].Reserved.Reserved1);
    v10 = v32;
    string = 0LL;
    if ( v32 < 0 )
    {
      v31 = 72LL;
      goto LABEL_50;
    }
    v35 = *(_QWORD *)pInit;
    v36 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)off_18002F770);
    v32 = (*(__int64 (__fastcall **)(__int64, PVOID))(*(_QWORD *)v35 + 200LL))(v35, v36[1].Reserved.Reserved1);
    v10 = v32;
    string = 0LL;
    if ( v32 < 0 )
    {
      v31 = 73LL;
      goto LABEL_50;
    }
    v53 = 0LL;
    string = 0LL;
    v37 = WindowsCreateStringReference(
            L"Windows.Internal.StateRepository.PackagePolicy",
            0x2Eu,
            &hstringHeader,
            &string);
    if ( v37 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v37);
    v38 = string;
    v39 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    }
    v40 = RoGetActivationFactory(v38, &GUID_f7a88ec3_6f33_46bf_83b8_78aaf94ac396, &v53);
    v10 = v40;
    string = 0LL;
    if ( v40 < 0 )
    {
      v41 = 82LL;
      goto LABEL_60;
    }
    v40 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v53 + 48LL))(v53, *(_QWORD *)pInit);
    v10 = v40;
    if ( v40 < 0 )
    {
      v41 = 84LL;
LABEL_60:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v41,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\setcategoryoperation.cpp",
        (const char *)(unsigned int)v40);
      v42 = v53;
      if ( v53 )
      {
        v53 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      }
      goto LABEL_62;
    }
    v47 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    }
    v48 = *(_QWORD *)pInit;
    if ( *(_QWORD *)pInit )
    {
      *(_QWORD *)pInit = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
    v49 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    }
    v50 = v55;
    if ( v55 )
    {
      v55 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    }
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v58 = 0LL;
    v59 = 0LL;
  }
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v61);
  return 0LL;
}
