/*
 * XREFs of ?get_AppUserModelId@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180087ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::get_AppUserModelId(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *this,
        HSTRING *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, HSTRING *))(**((_QWORD **)this + 10) + 56LL))(*((_QWORD *)this + 10), a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x23,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\conten"
             "tdeliverymanagerappinfo.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
