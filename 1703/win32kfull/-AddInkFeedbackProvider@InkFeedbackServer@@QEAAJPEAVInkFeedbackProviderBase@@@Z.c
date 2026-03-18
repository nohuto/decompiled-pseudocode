/*
 * XREFs of ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00DAAFC
 * Callers:
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C00DA384 (--0InkProcessor@@AEAA@XZ.c)
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0217C64 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall InkFeedbackServer::AddInkFeedbackProvider(
        InkFeedbackServer *this,
        struct InkFeedbackProviderBase *a2)
{
  InkFeedbackServer **v2; // r8
  InkFeedbackServer *v3; // rax
  __int64 v5; // r9
  const GUID *v6; // r9
  LPCGUID v7; // r8
  int v8; // [rsp+30h] [rbp-39h] BYREF
  const GUID *v9; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v11; // [rsp+60h] [rbp-9h]
  __int64 v12; // [rsp+68h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+80h] [rbp+17h] BYREF
  const GUID **v15; // [rsp+90h] [rbp+27h]
  __int64 v16; // [rsp+98h] [rbp+2Fh]

  v2 = (InkFeedbackServer **)*((_QWORD *)this + 1);
  v3 = (struct InkFeedbackProviderBase *)((char *)a2 + 8);
  if ( *v2 != this )
    __fastfail(3u);
  *(_QWORD *)v3 = this;
  *((_QWORD *)a2 + 2) = v2;
  *v2 = v3;
  *((_QWORD *)this + 1) = v3;
  if ( hProvider > 4u )
  {
    v12 = 4LL;
    v11 = &v8;
    v8 = 0;
    TlgCreateSz(&pDesc, "Added ink feedback provider");
    TlgCreateSz(&v14, *(LPCSTR *)(v5 + 48));
    v9 = v6;
    v15 = &v9;
    v16 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC56A, v7, v6, 6u, &pData);
  }
  return 0LL;
}
