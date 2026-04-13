/*
 * XREFs of ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x1800628A4
 * Callers:
 *     _lambda_14acc09073ccfc16760233ebaab8e057_::operator() @ 0x18005A03C (_lambda_14acc09073ccfc16760233ebaab8e057_--operator().c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x18002F1C8 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005B1D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x18005F0B4 (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?ResolveTriggerFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentKnownTrigger@1234@PEB_W@Z @ 0x18005F24C (-ResolveTriggerFromName@Internal@TargetedContent@Services@Windows@@YA-AW4TargetedContentKnownTri.c)
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180061BF4 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 *     ??4?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800646FC (--4-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180065040 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x180093C84 (-RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?SplitString@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@PEB_W@Z @ 0x180093D90 (-SplitString@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$vector@V-$basic_string@_WU-$char.c)
 *     ?CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@_N@Z @ 0x1800962D0 (-CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VISetting.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 *__fastcall Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainerFromName(
        __int64 *a1,
        HSTRING a2,
        HSTRING a3)
{
  char *StringRawBuffer; // rax
  char *v6; // rdi
  unsigned __int64 v7; // r8
  const WCHAR *v8; // rcx
  int v9; // ebx
  _QWORD *v10; // rax
  const WCHAR *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 Container; // rax
  volatile signed __int32 *v16; // rbx
  char *v17; // rax
  unsigned __int64 v18; // r8
  void **v19; // rbx
  void **v20; // rdi
  const WCHAR *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  volatile signed __int32 *v26; // rsi
  int v28; // [rsp+20h] [rbp-E0h]
  const WCHAR *v29; // [rsp+28h] [rbp-D8h] BYREF
  const WCHAR *v30; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v31[3]; // [rsp+38h] [rbp-C8h] BYREF
  void *Src[5]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v33[8]; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v34; // [rsp+80h] [rbp-80h]
  _BYTE v35[8]; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v36; // [rsp+90h] [rbp-70h]
  void *v37[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v39; // [rsp+B0h] [rbp-50h]
  void *v40[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v41; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v42; // [rsp+D0h] [rbp-30h]
  void *v43[3]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v44; // [rsp+F0h] [rbp-10h]
  void *v45[3]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v46; // [rsp+110h] [rbp+10h]
  _BYTE v47[32]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v48[32]; // [rsp+138h] [rbp+38h] BYREF

  Src[3] = (void *)-2LL;
  Src[4] = a1;
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(a2, 0LL);
  v6 = StringRawBuffer;
  v39 = 7LL;
  v38 = 0LL;
  LOWORD(v37[0]) = 0;
  if ( *(_WORD *)StringRawBuffer )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)&StringRawBuffer[2 * v7] );
  }
  else
  {
    v7 = 0LL;
  }
  std::wstring::assign(v37, StringRawBuffer, v7);
  CreativeFramework::CommonHelper::StringUtils::SplitString(Src, v37, L":");
  if ( v39 >= 8 )
    operator delete(v37[0]);
  v39 = 7LL;
  v38 = 0LL;
  LOWORD(v37[0]) = 0;
  v8 = (const WCHAR *)Src[0];
  if ( *((_QWORD *)Src[0] + 3) >= 8uLL )
    v8 = *(const WCHAR **)Src[0];
  v9 = Windows::Services::TargetedContent::Internal::ResolveTriggerFromName(v8);
  Windows::Services::TargetedContent::Internal::GetRootRegistrationSettingsForTriggerContainer((const WCHAR *)a1, v9);
  v28 = 1;
  if ( (Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v9) & 0x80u) != 0LL )
  {
    v10 = (_QWORD *)std::wstring::append(Src[0], L":");
    if ( v10[3] >= 8uLL )
      v10 = (_QWORD *)*v10;
    CreativeFramework::CommonHelper::StringUtils::RemoveSubstring(v45, v6, v10);
    v11 = (const WCHAR *)v45;
    if ( v46 >= 8 )
      v11 = (const WCHAR *)v45[0];
    v29 = v11;
    v12 = *a1;
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v47, &v29);
    LOBYTE(v14) = 1;
    Container = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(
                  v12,
                  v33,
                  *(_QWORD *)(v13 + 24),
                  v14,
                  1);
    std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a1, Container);
    v16 = v34;
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
    if ( v46 >= 8 )
      operator delete(v45[0]);
  }
  if ( !WindowsIsStringEmpty(a3) )
  {
    v17 = (char *)WindowsGetStringRawBuffer(a3, 0LL);
    v42 = 7LL;
    v41 = 0LL;
    LOWORD(v40[0]) = 0;
    if ( *(_WORD *)v17 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_WORD *)&v17[2 * v18] );
    }
    else
    {
      v18 = 0LL;
    }
    std::wstring::assign(v40, v17, v18);
    CreativeFramework::CommonHelper::StringUtils::SplitString(v31, v40, L"&");
    if ( v42 >= 8 )
      operator delete(v40[0]);
    v42 = 7LL;
    v41 = 0LL;
    LOWORD(v40[0]) = 0;
    v19 = (void **)v31[0];
    v20 = (void **)v31[1];
    while ( v19 != v20 )
    {
      v44 = 7LL;
      v43[2] = 0LL;
      LOWORD(v43[0]) = 0;
      std::wstring::assign(v43, v19, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      v21 = (const WCHAR *)v43;
      if ( v44 >= 8 )
        v21 = (const WCHAR *)v43[0];
      v30 = v21;
      v22 = *a1;
      v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v48, &v30);
      LOBYTE(v24) = 1;
      v25 = CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(
              v22,
              v35,
              *(_QWORD *)(v23 + 24),
              v24,
              v28);
      std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(a1, v25);
      v26 = v36;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
        }
      }
      if ( v44 >= 8 )
        operator delete(v43[0]);
      v19 += 4;
    }
    std::vector<std::wstring>::~vector<std::wstring>((__int64)v31);
  }
  std::vector<std::wstring>::~vector<std::wstring>((__int64)Src);
  return a1;
}
