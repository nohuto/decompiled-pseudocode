/*
 * XREFs of ?get_DisplayInfo@ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAJPEAPEAUIAppDisplayInfo@25@@Z @ 0x180087F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::get_DisplayInfo(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *this,
        struct Windows::ApplicationModel::IAppDisplayInfo **a2,
        __int64 a3,
        const char *a4)
{
  struct Windows::ApplicationModel::IAppDisplayInfo *v4; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v4 = (struct Windows::ApplicationModel::IAppDisplayInfo *)*((_QWORD *)this + 11);
    if ( v4 )
    {
      *a2 = v4;
      (*(void (__fastcall **)(struct Windows::ApplicationModel::IAppDisplayInfo *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    else
    {
      *a2 = 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2C,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificatio"
                                    "nextension\\lib\\contentdeliverymanagerappinfo.cpp",
                           a4);
  }
  return result;
}
