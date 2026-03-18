/*
 * XREFs of ?OnSetPropertyValueError@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18016B6D0
 * Callers:
 *     ?OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z @ 0x18016B680 (-OnSetPropertyValueError@BamoDataSourceProxy@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180169C8C (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::OnSetPropertyValueError(BamoImpl::BamoDataSourceProxyImpl *this)
{
  int v1; // ebx
  __int64 v2; // rdx
  _QWORD v4[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v6; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v8; // [rsp+88h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 24LL) + 40LL) )
  {
    v1 = -2018375660;
    v2 = 2349LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)(unsigned int)v1);
    return (unsigned int)v1;
  }
  v1 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v8, &v6, &v7);
  if ( v1 < 0 )
  {
    v2 = 2356LL;
    goto LABEL_3;
  }
  v4[0] = v6;
  v4[1] = v7;
  return CoreUICallSend(v8, v4, 2LL, 4LL, 0, &unk_180277D35);
}
