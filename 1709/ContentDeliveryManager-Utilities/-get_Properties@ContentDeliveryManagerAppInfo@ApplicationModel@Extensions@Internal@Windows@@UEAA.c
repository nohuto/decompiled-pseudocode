/*
 * XREFs of ?get_Properties@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z @ 0x180087FB0
 * Callers:
 *     ?PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@AEAAXXZ @ 0x1800880B0 (-PrefetchDisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::get_Properties(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void (*v5)(void); // rax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 64))(
         *(_QWORD *)(a1 + 64),
         &GUID_58b612f7_0fbb_480d_abea_5ce1a45a9ec7,
         &v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E1,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v3);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x38,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappinfo.cpp",
      (const char *)v4);
    if ( !v9 )
      return v4;
    v5 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
LABEL_4:
    v5();
    return v4;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 48LL))(v9, a2);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x39,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\cont"
               "entdeliverymanagerappinfo.cpp",
      (const char *)(unsigned int)v7);
    if ( !v9 )
      return v4;
    v5 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
    goto LABEL_4;
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return 0LL;
}
