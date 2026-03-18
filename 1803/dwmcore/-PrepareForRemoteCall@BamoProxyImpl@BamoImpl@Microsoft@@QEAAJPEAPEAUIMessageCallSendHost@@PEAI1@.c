/*
 * XREFs of ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180169C8C
 * Callers:
 *     ?OnAddDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801698A0 (-OnAddDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ @ 0x1801699A4 (-OnAllReadersDisconnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJXZ.c)
 *     ?OnReaderConnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x180169AC0 (-OnReaderConnected@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 *     ?OnRemoveDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x180169BD0 (-OnRemoveDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?OnSetPropertyValueError@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18016B6D0 (-OnSetPropertyValueError@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x180169830 (-IsDisconnected@BamoProxyImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        struct IMessageCallSendHost **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  _DWORD *v6; // r8
  _DWORD *v7; // r9
  __int64 v8; // r10
  _QWORD *v9; // r11
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_QWORD *)this + 2);
  *a2 = 0LL;
  *a3 = 0;
  *a4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 24LL);
  if ( Microsoft::BamoImpl::BamoProxyImpl::IsDisconnected(this) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF9,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoProxy.inl",
      (const char *)0x87B20805LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE1,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\BamoProxy.inl",
      (const char *)0x87B20805LL);
    return 2276591621LL;
  }
  else
  {
    *v7 = *(_DWORD *)(v8 + 24);
    *v9 = *(_QWORD *)(v5 + 48);
    *v6 = *(_DWORD *)(v4 + 36);
    return 0LL;
  }
}
