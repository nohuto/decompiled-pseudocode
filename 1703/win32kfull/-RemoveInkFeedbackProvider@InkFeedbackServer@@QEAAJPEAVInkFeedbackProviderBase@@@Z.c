/*
 * XREFs of ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00DAA84
 * Callers:
 *     ??1InkProcessor@@AEAA@XZ @ 0x1C00DA2F0 (--1InkProcessor@@AEAA@XZ.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C021823C (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall InkFeedbackServer::RemoveInkFeedbackProvider(
        InkFeedbackServer *this,
        struct InkFeedbackProviderBase *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rcx
  __int64 v6; // r9
  const GUID *v7; // r9
  LPCGUID v8; // r8
  int v9; // [rsp+30h] [rbp-39h] BYREF
  const GUID *v10; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v12; // [rsp+60h] [rbp-9h]
  __int64 v13; // [rsp+68h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+80h] [rbp+17h] BYREF
  const GUID **v16; // [rsp+90h] [rbp+27h]
  __int64 v17; // [rsp+98h] [rbp+2Fh]

  v2 = (_QWORD *)((char *)a2 + 8);
  v3 = *((_QWORD *)a2 + 1);
  v4 = (_QWORD *)*((_QWORD *)a2 + 2);
  if ( *(struct InkFeedbackProviderBase **)(v3 + 8) != (struct InkFeedbackProviderBase *)((char *)a2 + 8)
    || (_QWORD *)*v4 != v2 )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *((_QWORD *)a2 + 2) = 0LL;
  *v2 = 0LL;
  if ( hProvider > 4u )
  {
    v9 = 0;
    v12 = &v9;
    v13 = 4LL;
    TlgCreateSz(&pDesc, "Removed ink feedback provider");
    TlgCreateSz(&v15, *(LPCSTR *)(v6 + 48));
    v10 = v7;
    v16 = &v10;
    v17 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC56A, v8, v7, 6u, &pData);
  }
  return 0LL;
}
