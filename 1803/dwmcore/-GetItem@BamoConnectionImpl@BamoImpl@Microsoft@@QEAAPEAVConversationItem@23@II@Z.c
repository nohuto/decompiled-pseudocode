/*
 * XREFs of ?GetItem@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x1801538C4
 * Callers:
 *     ?Thunk_MarkProxyReady_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154BC0 (-Thunk_MarkProxyReady_5@-$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@S.c)
 *     ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180168FB0 (-Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18016935C (-Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18016C298 (-AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18016C520 (-RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

struct Microsoft::BamoImpl::ConversationItem *__fastcall Microsoft::BamoImpl::BamoConnectionImpl::GetItem(
        Microsoft::BamoImpl::BamoConnectionImpl *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v8 = 0LL;
  if ( (_DWORD)a3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 5) + 56LL))(
           *((_QWORD *)this + 5),
           a2,
           a3,
           &v8);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x24F,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
        (const char *)(unsigned int)v4,
        v6);
      __debugbreak();
    }
    return (struct Microsoft::BamoImpl::ConversationItem *)v8;
  }
  return (struct Microsoft::BamoImpl::ConversationItem *)v3;
}
