/*
 * XREFs of ?GetRectFromContactIdWorker@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x1800E895C
 * Callers:
 *     ?GetRectFromContactId@PeoplePaneViewManager@@UEAAJPEBGPEAUtagRECT@@@Z @ 0x1800E8920 (-GetRectFromContactId@PeoplePaneViewManager@@UEAAJPEBGPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180043D94 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18008D6D4 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??IRoVariant@@QEAA?AVOutRef@0@XZ @ 0x18008D7CC (--IRoVariant@@QEAA-AVOutRef@0@XZ.c)
 *     ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800E9E00 (-FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewIn.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall PeoplePaneViewManager::GetRectFromContactIdWorker(
        PeoplePaneViewManager *this,
        const unsigned __int16 *a2,
        struct tagRECT *a3)
{
  int v6; // eax
  int v8; // edi
  HRESULT v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  HSTRING Reserved1; // rbx
  int ViewInfoByApplicationViewId; // eax
  __int64 v16; // rbx
  void (*v17)(void); // rax
  const WCHAR *v18; // rax
  HSTRING v19; // rbx
  __int64 v20; // rbx
  _QWORD *v21; // rax
  bool v22; // bl
  __int64 v23; // rdi
  _QWORD *v24; // rbx
  HSTRING_HEADER *v25; // rax
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  HSTRING newString; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D8h] BYREF
  __int64 (__fastcall ***v35)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B8h] BYREF
  int v39; // [rsp+58h] [rbp-B0h]
  __int128 v40; // [rsp+60h] [rbp-A8h] BYREF
  const WCHAR *v41; // [rsp+70h] [rbp-98h] BYREF
  const WCHAR *v42[4]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v43[2]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v44[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v45; // [rsp+B8h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp-40h] BYREF
  HSTRING string; // [rsp+E0h] [rbp-28h] BYREF
  HSTRING_HEADER v48; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v49; // [rsp+100h] [rbp-8h]
  HSTRING_HEADER v50; // [rsp+108h] [rbp+0h] BYREF
  HSTRING_HEADER v51; // [rsp+128h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v42[3] = (const WCHAR *)-2LL;
  v41 = a2;
  SetRectEmpty(a3);
  v6 = *((_DWORD *)this + 54);
  if ( !v6 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  v37 = 0LL;
  v8 = CoreQueryWindowService(
         ~v6,
         &GUID_c56c5799_4bb3_7fae_7fad_4db2f6a53eff,
         &GUID_905a0fe0_bc53_11df_8c49_001e4fc686da,
         &v37);
  if ( v8 >= 0 )
  {
    v35 = 0LL;
    string = 0LL;
    v9 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
    if ( v9 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
      __debugbreak();
    }
    v10 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            (__int64)string,
            (__int64 *)&v35);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x107,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_50:
      v31 = (__int64)v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      goto LABEL_52;
    }
    v36 = 0LL;
    v11 = RoCreatePropertySetSerializer(&v36);
    v8 = v11;
    if ( v11 < 0 )
    {
      v12 = 267LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_48:
      v30 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      goto LABEL_50;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v36 + 56LL))(v36, v35, v37);
    v8 = v11;
    if ( v11 < 0 )
    {
      v12 = 268LL;
      goto LABEL_12;
    }
    v34 = 0LL;
    v13 = (**v35)(v35, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v34);
    v8 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x10F,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_46;
    }
    newString = 0LL;
    if ( *a2 )
    {
      Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v50, &v41)[1].Reserved.Reserved1;
      WindowsDeleteString(newString);
      newString = 0LL;
      WindowsDuplicateString(Reserved1, &newString);
    }
    else
    {
      v40 = 0LL;
      ViewInfoByApplicationViewId = PeoplePaneViewManager::FindViewInfoByApplicationViewId(this, 0LL, &v40);
      v8 = ViewInfoByApplicationViewId;
      if ( ViewInfoByApplicationViewId < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x11D,
          (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
          (const char *)(unsigned int)ViewInfoByApplicationViewId);
        if ( !*((_QWORD *)&v40 + 1) )
          goto LABEL_45;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v40 + 1) + 8LL), 0xFFFFFFFF) != 1 )
          goto LABEL_45;
        v16 = *((_QWORD *)&v40 + 1);
        (***((void (__fastcall ****)(_QWORD))&v40 + 1))(*((_QWORD *)&v40 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) != 1 )
          goto LABEL_45;
        v17 = *(void (**)(void))(**((_QWORD **)&v40 + 1) + 8LL);
        goto LABEL_40;
      }
      v18 = (const WCHAR *)v40;
      if ( *(_QWORD *)(v40 + 24) >= 8uLL )
        v18 = *(const WCHAR **)v40;
      v42[0] = v18;
      v19 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v51, v42)[1].Reserved.Reserved1;
      WindowsDeleteString(newString);
      newString = 0LL;
      WindowsDuplicateString(v19, &newString);
      if ( *((_QWORD *)&v40 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v40 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v20 = *((_QWORD *)&v40 + 1);
          (***((void (__fastcall ****)(_QWORD))&v40 + 1))(*((_QWORD *)&v40 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v40 + 1) + 8LL))(*((_QWORD *)&v40 + 1));
        }
      }
    }
    v38 = 0LL;
    v39 = 0;
    v21 = RoVariant::operator&((__int64)&v38, v43);
    v22 = (*(int (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v34 + 48LL))(v34, newString, v21 + 1) < 0;
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v43);
    if ( v22
      && (v23 = v34,
          v24 = RoVariant::operator&((__int64)&v38, v44),
          v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v48, (const WCHAR **)off_1801BD1E8),
          v8 = (*(__int64 (__fastcall **)(__int64, PVOID, _QWORD *))(*(_QWORD *)v23 + 48LL))(
                 v23,
                 v25[1].Reserved.Reserved1,
                 v24 + 1),
          v49 = 0LL,
          RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v44),
          v8 < 0) )
    {
      v26 = 298LL;
    }
    else
    {
      v42[1] = 0LL;
      v42[2] = 0LL;
      v45 = 0u;
      if ( v39 == 7 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v38 + 200LL))(v38, &v45);
        if ( v8 >= 0 )
        {
          if ( v38 && ((v39 - 3) & 0xFFFFFFFB) == 0 )
            (*(void (**)(void))(*(_QWORD *)v38 + 16LL))();
          v27 = (int)*(float *)&v45;
          a3->left = (int)*(float *)&v45;
          v28 = (int)*((float *)&v45 + 1);
          a3->top = (int)*((float *)&v45 + 1);
          a3->right = v27 + (int)*((float *)&v45 + 2);
          a3->bottom = v28 + (int)*((float *)&v45 + 3);
          v8 = 0;
          goto LABEL_45;
        }
      }
      else
      {
        v8 = -2147316576;
        if ( v39 < 0 )
          v8 = v39;
      }
      v26 = 300LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v26,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v8);
    if ( !v38 || ((v39 - 3) & 0xFFFFFFFB) != 0 )
    {
LABEL_45:
      WindowsDeleteString(newString);
      newString = 0LL;
LABEL_46:
      v29 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      goto LABEL_48;
    }
    v17 = *(void (**)(void))(*(_QWORD *)v38 + 16LL);
LABEL_40:
    v17();
    goto LABEL_45;
  }
LABEL_52:
  v32 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  return (unsigned int)v8;
}
