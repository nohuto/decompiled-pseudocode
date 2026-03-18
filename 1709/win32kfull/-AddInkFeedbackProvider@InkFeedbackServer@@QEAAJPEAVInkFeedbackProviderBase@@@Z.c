/*
 * XREFs of ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00E16C4
 * Callers:
 *     ??0InkProcessor@@AEAA@XZ @ 0x1C00E0BA8 (--0InkProcessor@@AEAA@XZ.c)
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0218DF4 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0043700 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall InkFeedbackServer::AddInkFeedbackProvider(
        InkFeedbackServer *this,
        struct InkFeedbackProviderBase *a2)
{
  InkFeedbackServer **v2; // r8
  InkFeedbackServer *v3; // rax
  const CHAR *v4; // rdx
  const GUID *v5; // r9
  LPCGUID v6; // r8
  int v8; // [rsp+30h] [rbp-29h] BYREF
  const GUID *v9; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v11; // [rsp+60h] [rbp+7h]
  __int64 v12; // [rsp+68h] [rbp+Fh]
  const char *v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+27h] BYREF
  const GUID **v16; // [rsp+90h] [rbp+37h]
  __int64 v17; // [rsp+98h] [rbp+3Fh]

  v2 = (InkFeedbackServer **)*((_QWORD *)this + 1);
  v3 = (struct InkFeedbackProviderBase *)((char *)a2 + 8);
  if ( *v2 != this )
    __fastfail(3u);
  *(_QWORD *)v3 = this;
  *((_QWORD *)a2 + 2) = v2;
  *v2 = v3;
  *((_QWORD *)this + 1) = v3;
  if ( (unsigned int)pRelatedActivityId > 4 )
  {
    v4 = (const CHAR *)*((_QWORD *)a2 + 6);
    v11 = &v8;
    v12 = 4LL;
    v13 = "Added ink feedback provider";
    v8 = 0;
    v14 = 28LL;
    TlgCreateSz(&pDesc, v4);
    v9 = v5;
    v16 = &v9;
    v17 = 8LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E914B, v6, v5, 6u, &pData);
  }
  return 0LL;
}
