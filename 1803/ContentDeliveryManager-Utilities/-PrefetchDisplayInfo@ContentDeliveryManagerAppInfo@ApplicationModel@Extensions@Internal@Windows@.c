/*
 * XREFs of ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x1800953D0
 * Callers:
 *     ?RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAUIAppInfo@25@@Z @ 0x18009512C (-RuntimeClassInitialize@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800366EC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?get_Properties@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z @ 0x1800952D0 (-get_Properties@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAA.c)
 *     ??$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UIAppDisplayInfo@25@PEBGPEAU625@@Details@WRL@Microsoft@@YAJPEAPEAUIAppDisplayInfo@ApplicationModel@Windows@@$$QEAPEBG$$QEAPEAU345@@Z @ 0x1800957D0 (--$MakeAndInitialize@VContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@.c)
 *     ??$LookupWString@U?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBG@PropertySetHelper@@SA_NPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18009597C (--$LookupWString@U-$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@P.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
  wil::details::in1diag3 *v7; // rcx
  char v8; // al
  void **v9; // rdx
  void **v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // [rsp+28h] [rbp-39h] BYREF
  __int64 v15; // [rsp+30h] [rbp-31h] BYREF
  void **v16; // [rsp+38h] [rbp-29h] BYREF
  void *v17[2]; // [rsp+40h] [rbp-21h] BYREF
  __int64 v18; // [rsp+50h] [rbp-11h]
  unsigned __int64 v19; // [rsp+58h] [rbp-9h]
  _QWORD v20[2]; // [rsp+60h] [rbp-1h] BYREF
  void *v21[2]; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+80h] [rbp+1Fh]
  unsigned __int64 v23; // [rsp+88h] [rbp+27h]
  void *v24[2]; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 v25; // [rsp+A0h] [rbp+3Fh]
  unsigned __int64 v26; // [rsp+A8h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v20[1] = -2LL;
  v2 = (__int64 *)((char *)this + 80);
  if ( *((_QWORD *)this + 10) )
    return;
  v3 = *((_QWORD *)this + 9);
  if ( !v3 )
    return;
  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 64LL))(v3, &v15);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappinfo.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_24;
  }
  v14 = 0LL;
  Properties = Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::get_Properties(
                 (__int64)this + 16,
                 &v14);
  v7 = retaddr;
  if ( Properties < 0 )
  {
LABEL_24:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x45,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappinfo.cpp",
      (const char *)(unsigned int)Properties);
    goto LABEL_25;
  }
  v19 = 7LL;
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  v16 = v17;
  v26 = 7LL;
  v25 = 0LL;
  LOWORD(v24[0]) = 0;
  v8 = PropertySetHelper::LookupWString<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,unsigned short const *>(
         v14,
         v6,
         v24);
  v9 = v24;
  if ( !v8 )
    v9 = v17;
  v23 = 7LL;
  v22 = 0LL;
  LOWORD(v21[0]) = 0;
  std::wstring::assign(v21, v9, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v26 >= 8 )
    operator delete(v24[0]);
  v26 = 7LL;
  v25 = 0LL;
  LOWORD(v24[0]) = 0;
  if ( v19 >= 8 )
    operator delete(v17[0]);
  v19 = 7LL;
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  v20[0] = v15;
  v10 = v21;
  if ( v23 >= 8 )
    v10 = (void **)v21[0];
  v16 = v10;
  v11 = *v2;
  *v2 = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo,Windows::ApplicationModel::IAppDisplayInfo,unsigned short const *,Windows::ApplicationModel::IAppDisplayInfo *>(
          v2,
          &v16,
          v20);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_25:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x48,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappinfo.cpp",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x1800955EELL);
  }
  if ( v23 >= 8 )
    operator delete(v21[0]);
  v23 = 7LL;
  v22 = 0LL;
  LOWORD(v21[0]) = 0;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
}
