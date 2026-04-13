/*
 * XREFs of ?GetLogo@ContentDeliveryManagerAppDisplayInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAJUSize@Foundation@5@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x180089410
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::GetLogo(
        __int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 64LL))(*(_QWORD *)(a1 + 80));
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x33,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\contentdeliverymanagernotificationextension\\lib\\conten"
             "tdeliverymanagerappdisplayinfo.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
