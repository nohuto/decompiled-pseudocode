/*
 * XREFs of ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x1800880B0
 * Callers:
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUIAppInfo@25@@Z @ 0x180087E0C (-RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windo.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180033414 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?get_Properties@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z @ 0x180087FB0 (-get_Properties@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAA.c)
 *     ??$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UIAppDisplayInfo@25@PEBGPEAU625@@Details@WRL@Microsoft@@YAJPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@$$QEAPEBG$$QEAPEAU345@@Z @ 0x1800884E8 (--$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@.c)
 *     ??$LookupWString@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBG@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18008866C (--$LookupWString@U-$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@P.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::PrefetchDisplayInfo(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  int Properties; // eax
  __int64 v6; // rdx
  char v7; // al
  void **v8; // rdx
  void **v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // [rsp+28h] [rbp-39h] BYREF
  __int64 v13; // [rsp+30h] [rbp-31h] BYREF
  void **v14; // [rsp+38h] [rbp-29h] BYREF
  void *v15[2]; // [rsp+40h] [rbp-21h] BYREF
  __int64 v16; // [rsp+50h] [rbp-11h]
  unsigned __int64 v17; // [rsp+58h] [rbp-9h]
  _QWORD v18[2]; // [rsp+60h] [rbp-1h] BYREF
  void *v19[2]; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+80h] [rbp+1Fh]
  unsigned __int64 v21; // [rsp+88h] [rbp+27h]
  void *v22[2]; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v23; // [rsp+A0h] [rbp+3Fh]
  unsigned __int64 v24; // [rsp+A8h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v18[1] = -2LL;
  v2 = (__int64 *)((char *)this + 88);
  if ( !*((_QWORD *)this + 11) )
  {
    v3 = *((_QWORD *)this + 10);
    if ( v3 )
    {
      v13 = 0LL;
      v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 64LL))(v3, &v13);
      if ( v4 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x42,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\"
                   "contentdeliverymanagerappinfo.cpp",
          (const char *)(unsigned int)v4);
      v12 = 0LL;
      Properties = Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::get_Properties(
                     (__int64)this + 16,
                     &v12);
      if ( Properties < 0 )
      {
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x45,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\"
                   "contentdeliverymanagerappinfo.cpp",
          (const char *)(unsigned int)Properties);
        __debugbreak();
      }
      v17 = 7LL;
      v16 = 0LL;
      LOWORD(v15[0]) = 0;
      v14 = v15;
      v24 = 7LL;
      v23 = 0LL;
      LOWORD(v22[0]) = 0;
      v7 = PropertySetHelper::LookupWString<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,unsigned short const *>(
             v12,
             v6,
             v22);
      v8 = v22;
      if ( !v7 )
        v8 = v15;
      v21 = 7LL;
      v20 = 0LL;
      LOWORD(v19[0]) = 0;
      std::wstring::assign(v19, v8, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v24 >= 8 )
        operator delete(v22[0]);
      v24 = 7LL;
      v23 = 0LL;
      LOWORD(v22[0]) = 0;
      if ( v17 >= 8 )
        operator delete(v15[0]);
      v17 = 7LL;
      v16 = 0LL;
      LOWORD(v15[0]) = 0;
      v18[0] = v13;
      v9 = v19;
      if ( v21 >= 8 )
        v9 = (void **)v19[0];
      v14 = v9;
      v10 = *v2;
      *v2 = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v11 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo,Windows::ApplicationModel::IAppDisplayInfo,unsigned short const *,Windows::ApplicationModel::IAppDisplayInfo *>(
              v2,
              &v14,
              v18);
      if ( v11 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x48,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\"
                   "contentdeliverymanagerappinfo.cpp",
          (const char *)(unsigned int)v11);
      if ( v21 >= 8 )
        operator delete(v19[0]);
      v21 = 7LL;
      v20 = 0LL;
      LOWORD(v19[0]) = 0;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
}
