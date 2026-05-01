/*
 * XREFs of ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012F0C
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAUITileInfo@@@Z @ 0x180012DA0 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIT.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x18000414C (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004BE8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x180004F14 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18000C538 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18001CD24 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z @ 0x180027544 (--$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x180028AF0 (__security_check_cookie.c)
 *     atexit @ 0x18002916C (atexit.c)
 *     _Init_thread_footer @ 0x180029358 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800293B8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  HRESULT v2; // eax
  HSTRING v3; // rbx
  IStream *v4; // rcx
  int ActivationFactory; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  IStream *v8; // rbx
  HSTRING_HEADER *v9; // r14
  __int64 v10; // rcx
  IStream *v11; // rcx
  IStream *v12; // rcx
  HRESULT v13; // ebx
  IStream *v14; // rcx
  char v15; // cl
  HRESULT v16; // eax
  HSTRING v17; // rbx
  IStream *v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  HRESULT v22; // eax
  HSTRING v23; // rbx
  IStream *v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  IStream *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  IStream *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  IStream *v33; // rcx
  __int64 v34; // rcx
  char v36[8]; // [rsp+48h] [rbp-79h] BYREF
  IStream *pstm; // [rsp+50h] [rbp-71h] BYREF
  __int64 v38; // [rsp+58h] [rbp-69h] BYREF
  __int64 v39; // [rsp+60h] [rbp-61h] BYREF
  IStream *v40; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v41[3]; // [rsp+70h] [rbp-51h] BYREF
  _BYTE v42[72]; // [rsp+88h] [rbp-39h] BYREF
  __int64 v43; // [rsp+D0h] [rbp+Fh]
  HSTRING_HEADER hstringHeader; // [rsp+D8h] [rbp+17h] BYREF
  HSTRING string; // [rsp+F0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v41[1] = -2LL;
  v41[0] = 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v42,
    *((struct ITileInfo **)this + 24));
  v36[0] = 0;
  TileDataLayerItemWrappers::TDLTileInfoHelper::GetSimpleDataMetaProperty<bool>(
    v42,
    L"AppResolver_IsDesktopAppTile",
    v36);
  if ( !v36[0] )
  {
    pstm = 0LL;
    string = 0LL;
    v2 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Application", 0x2Cu, &hstringHeader, &string);
    if ( v2 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    v3 = string;
    v4 = pstm;
    if ( pstm )
    {
      pstm = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v4 + 16LL))(v4);
    }
    ActivationFactory = RoGetActivationFactory(v3, &GUID_a2e68a2e_20c7_49f4_ba27_268b020ad4f8, &pstm);
    v6 = ActivationFactory;
    string = 0LL;
    if ( ActivationFactory < 0 )
    {
      v7 = 130LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v7,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)ActivationFactory);
      v11 = pstm;
      if ( !pstm )
        goto LABEL_70;
      pstm = 0LL;
LABEL_58:
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v11 + 16LL))(v11);
      goto LABEL_70;
    }
    v8 = pstm;
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)this + 14);
    v10 = v41[0];
    if ( v41[0] )
    {
      v41[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    ActivationFactory = (*(__int64 (__fastcall **)(IStream *, _QWORD, PVOID, _QWORD *))(*(_QWORD *)v8 + 240LL))(
                          v8,
                          0LL,
                          v9[1].Reserved.Reserved1,
                          v41);
    v6 = ActivationFactory;
    string = 0LL;
    if ( ActivationFactory < 0 )
    {
      v7 = 133LL;
      goto LABEL_12;
    }
    v12 = pstm;
    if ( pstm )
    {
      pstm = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  pstm = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, IStream **))(*(_QWORD *)v43 + 96LL))(
          v43,
          L"Windows.Gaming.AppCategory",
          &pstm);
  v14 = pstm;
  if ( v13 < 0 )
    goto LABEL_17;
  if ( !pstm )
    goto LABEL_27;
  v13 = IStream_Read(pstm, (char *)this + 104, 4u);
  v14 = pstm;
  if ( v13 < 0 )
  {
LABEL_17:
    if ( v14 )
    {
      pstm = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else
  {
    if ( pstm )
    {
      pstm = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v13 = 0;
  }
  if ( v13 != -2147023728 )
  {
    if ( (int)wil::details::in1diag3::Log_IfFailedMsg(
                retaddr,
                (void *)0xB5,
                (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                (const char *)(unsigned int)v13,
                (int)"%ls",
                *((const char **)this + 14)) < 0 )
      *((_DWORD *)this + 26) = 0;
    goto LABEL_69;
  }
LABEL_27:
  if ( !v36[0] )
  {
    v40 = 0LL;
    string = 0LL;
    v16 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.User", 0x25u, &hstringHeader, &string);
    if ( v16 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
    v17 = string;
    v18 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = RoGetActivationFactory(v17, &GUID_b07904dd_31f6_452c_a738_fa5a2fda337b, &v40);
    v6 = v19;
    string = 0LL;
    if ( v19 >= 0 )
    {
      v39 = 0LL;
      v20 = (*(__int64 (__fastcall **)(IStream *, __int64 *))(*(_QWORD *)v40 + 112LL))(v40, &v39);
      v6 = v20;
      if ( v20 >= 0 )
      {
        v38 = 0LL;
        v21 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v41[0] + 96LL))(v41[0], &v38);
        v6 = v21;
        if ( v21 >= 0 )
        {
          pstm = 0LL;
          string = 0LL;
          v22 = WindowsCreateStringReference(
                  L"Windows.Internal.StateRepository.PackagePolicy",
                  0x2Eu,
                  &hstringHeader,
                  &string);
          if ( v22 < 0 )
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
          v23 = string;
          v24 = pstm;
          if ( pstm )
          {
            pstm = 0LL;
            (*(void (__fastcall **)(IStream *))(*(_QWORD *)v24 + 16LL))(v24);
          }
          v25 = RoGetActivationFactory(v23, &GUID_f7a88ec3_6f33_46bf_83b8_78aaf94ac396, &pstm);
          v6 = v25;
          string = 0LL;
          if ( v25 >= 0 )
          {
            if ( dword_18003BC94 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                               + (unsigned int)tls_index)
                                             + 4LL) )
            {
              Init_thread_header(&dword_18003BC94);
              if ( dword_18003BC94 == -1 )
              {
                Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  &stru_18003BC98,
                  (const WCHAR **)off_18002F768);
                atexit(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory_::_27_::_dynamic_atexit_destructor_for__appCategoryString__);
                Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  &stru_18003BCB8,
                  (const WCHAR **)off_18002F760);
                atexit(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory_::_27_::_dynamic_atexit_destructor_for__gameString__);
                Init_thread_footer(&dword_18003BC94);
              }
            }
            v25 = (*(__int64 (__fastcall **)(IStream *, __int64, __int64, __int64, _QWORD, char *))(*(_QWORD *)pstm
                                                                                                  + 264LL))(
                    pstm,
                    v39,
                    v38,
                    qword_18003BCB0,
                    *(_QWORD *)&qword_18003BCD0,
                    v36);
            v6 = v25;
            if ( v25 >= 0 )
            {
              v30 = pstm;
              if ( pstm )
              {
                pstm = 0LL;
                (*(void (__fastcall **)(IStream *))(*(_QWORD *)v30 + 16LL))(v30);
              }
              v31 = v38;
              if ( v38 )
              {
                v38 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
              }
              v32 = v39;
              if ( v39 )
              {
                v39 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
              }
              v33 = v40;
              if ( v40 )
              {
                v40 = 0LL;
                (*(void (__fastcall **)(IStream *))(*(_QWORD *)v33 + 16LL))(v33);
              }
              v15 = v36[0];
              goto LABEL_68;
            }
            v26 = 176LL;
          }
          else
          {
            v26 = 170LL;
          }
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v26,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v25);
          v27 = pstm;
          if ( pstm )
          {
            pstm = 0LL;
            (*(void (__fastcall **)(IStream *))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0xA5,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v21);
        }
        v28 = v38;
        if ( v38 )
        {
          v38 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xA2,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v20);
      }
      v29 = v39;
      if ( v39 )
      {
        v39 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x9F,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v19);
    }
    v11 = v40;
    if ( !v40 )
      goto LABEL_70;
    v40 = 0LL;
    goto LABEL_58;
  }
  v15 = 0;
LABEL_68:
  *((_DWORD *)this + 26) = v15 != 0;
LABEL_69:
  v6 = 0;
LABEL_70:
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v42);
  v34 = v41[0];
  if ( v41[0] )
  {
    v41[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  return v6;
}
