/*
 * XREFs of ?GetRectFromContactIdWorker@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x18011182C
 * Callers:
 *     ?GetRectFromContactId@PeoplePaneViewManager@@UEAAJPEBGPEAUtagRECT@@@Z @ 0x1801117F0 (-GetRectFromContactId@PeoplePaneViewManager@@UEAAJPEBGPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008FD24 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18011324C (-FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewIn.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall PeoplePaneViewManager::GetRectFromContactIdWorker(
        PeoplePaneViewManager *this,
        const unsigned __int16 *a2,
        struct tagRECT *a3)
{
  __int64 v6; // rcx
  int v8; // edi
  HRESULT v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  HSTRING v14; // rbx
  int ViewInfoByApplicationViewId; // eax
  __int64 v16; // rbx
  void (*v17)(void); // rax
  const WCHAR *v18; // rax
  HSTRING v19; // rbx
  __int64 v20; // rbx
  int v21; // ebx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  BOOL WindowRect; // eax
  float v26; // xmm2_4
  float v27; // xmm0_4
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  HSTRING newString; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+28h] [rbp-D8h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+50h] [rbp-B0h]
  __int128 v39; // [rsp+58h] [rbp-A8h] BYREF
  const WCHAR *v40; // [rsp+68h] [rbp-98h] BYREF
  const WCHAR *v41; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v42; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v44; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h] BYREF
  __int128 v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  __int128 v48; // [rsp+B0h] [rbp-50h] BYREF
  struct tagRECT Rect; // [rsp+C0h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+D0h] [rbp-30h] BYREF
  HSTRING string; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v52[24]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v53; // [rsp+108h] [rbp+8h]
  _BYTE v54[32]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v55[32]; // [rsp+130h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v47 = -2LL;
  v40 = a2;
  SetRectEmpty(a3);
  v6 = *((_QWORD *)this + 71);
  if ( !v6 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x160,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v36 = 0LL;
  v8 = CoreQueryWindowService(
         v6,
         &GUID_c56c5799_4bb3_7fae_7fad_4db2f6a53eff,
         &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da,
         &v36);
  if ( v8 >= 0 )
  {
    v34 = 0LL;
    string = 0LL;
    v9 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
    if ( v9 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
      __debugbreak();
    }
    v10 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            (__int64)string,
            (__int64 *)&v34);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x169,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_53:
      v30 = (__int64)v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      goto LABEL_55;
    }
    v35 = 0LL;
    v11 = RoCreatePropertySetSerializer(&v35);
    v8 = v11;
    if ( v11 < 0 )
    {
      v12 = 365LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_51:
      v29 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      goto LABEL_53;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v35 + 56LL))(v35, v34, v36);
    v8 = v11;
    if ( v11 < 0 )
    {
      v12 = 366LL;
      goto LABEL_12;
    }
    v33 = 0LL;
    v13 = (**v34)(v34, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v33);
    v8 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x171,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_49;
    }
    newString = 0LL;
    if ( *a2 )
    {
      v14 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v54, &v40) + 24);
      WindowsDeleteString(newString);
      newString = 0LL;
      WindowsDuplicateString(v14, &newString);
    }
    else
    {
      v39 = 0LL;
      ViewInfoByApplicationViewId = PeoplePaneViewManager::FindViewInfoByApplicationViewId(this, 0LL, &v39);
      v8 = ViewInfoByApplicationViewId;
      if ( ViewInfoByApplicationViewId < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x17F,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)ViewInfoByApplicationViewId);
        if ( !*((_QWORD *)&v39 + 1) )
          goto LABEL_48;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL), 0xFFFFFFFF) != 1 )
          goto LABEL_48;
        v16 = *((_QWORD *)&v39 + 1);
        (***((void (__fastcall ****)(_QWORD))&v39 + 1))(*((_QWORD *)&v39 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) != 1 )
          goto LABEL_48;
        v17 = *(void (**)(void))(**((_QWORD **)&v39 + 1) + 8LL);
        goto LABEL_40;
      }
      v18 = (const WCHAR *)v39;
      if ( *(_QWORD *)(v39 + 24) >= 8uLL )
        v18 = *(const WCHAR **)v39;
      v41 = v18;
      v19 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v55, &v41) + 24);
      WindowsDeleteString(newString);
      newString = 0LL;
      WindowsDuplicateString(v19, &newString);
      if ( *((_QWORD *)&v39 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v20 = *((_QWORD *)&v39 + 1);
          (***((void (__fastcall ****)(_QWORD))&v39 + 1))(*((_QWORD *)&v39 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v39 + 1) + 8LL))(*((_QWORD *)&v39 + 1));
        }
      }
    }
    v37 = 0LL;
    v38 = 0;
    v42 = &v37;
    v43 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v33 + 48LL))(v33, newString, &v43);
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v42);
    if ( v21 >= 0
      || (v22 = v33,
          v44 = &v37,
          v45 = 0LL,
          v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  (__int64)v52,
                  (const WCHAR **)off_180214A08),
          v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v22 + 48LL))(
                 v22,
                 *(_QWORD *)(v23 + 24),
                 &v45),
          v53 = 0LL,
          RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v44),
          v8 >= 0) )
    {
      v46 = 0uLL;
      v48 = 0uLL;
      if ( v38 == 7 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v37 + 200LL))(v37, &v48);
        if ( v8 >= 0 )
        {
          if ( v37 && ((v38 - 3) & 0xFFFFFFFB) == 0 )
            (*(void (**)(void))(*(_QWORD *)v37 + 16LL))();
          WindowRect = GetWindowRect(*((HWND *)this + 71), &Rect);
          v26 = *(float *)&v48;
          if ( WindowRect )
          {
            v26 = *(float *)&v48 + (float)Rect.left;
            *(float *)&v48 = v26;
            v27 = *((float *)&v48 + 1) + (float)Rect.top;
            *((float *)&v48 + 1) = v27;
          }
          else
          {
            v27 = *((float *)&v48 + 1);
          }
          a3->left = (int)v26;
          a3->top = (int)v27;
          a3->right = (int)v26 + (int)*((float *)&v48 + 2);
          a3->bottom = (int)v27 + (int)*((float *)&v48 + 3);
          v8 = 0;
          goto LABEL_48;
        }
      }
      else
      {
        v8 = -2147316576;
        if ( v38 < 0 )
          v8 = v38;
      }
      v24 = 398LL;
    }
    else
    {
      v24 = 396LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v24,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v8);
    if ( !v37 || ((v38 - 3) & 0xFFFFFFFB) != 0 )
    {
LABEL_48:
      WindowsDeleteString(newString);
      newString = 0LL;
LABEL_49:
      v28 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      goto LABEL_51;
    }
    v17 = *(void (**)(void))(*(_QWORD *)v37 + 16LL);
LABEL_40:
    v17();
    goto LABEL_48;
  }
LABEL_55:
  v31 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return (unsigned int)v8;
}
