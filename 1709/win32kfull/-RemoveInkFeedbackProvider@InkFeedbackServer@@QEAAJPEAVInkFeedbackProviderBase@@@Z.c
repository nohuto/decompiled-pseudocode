/*
 * XREFs of ?RemoveInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00E15E4
 * Callers:
 *     ??1InkProcessor@@AEAA@XZ @ 0x1C00E0B14 (--1InkProcessor@@AEAA@XZ.c)
 *     ?OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0219408 (-OnDeviceRemoved@InkProcessor@@QEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0043700 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall InkFeedbackServer::RemoveInkFeedbackProvider(
        InkFeedbackServer *this,
        struct InkFeedbackProviderBase *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rcx
  const CHAR *v5; // rdx
  const GUID *v6; // r9
  LPCGUID v7; // r8
  int v9; // [rsp+30h] [rbp-29h] BYREF
  const GUID *v10; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v12; // [rsp+60h] [rbp+7h]
  __int64 v13; // [rsp+68h] [rbp+Fh]
  const char *v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+27h] BYREF
  const GUID **v17; // [rsp+90h] [rbp+37h]
  __int64 v18; // [rsp+98h] [rbp+3Fh]

  v2 = (_QWORD *)((char *)a2 + 8);
  v3 = *((_QWORD *)a2 + 1);
  if ( *(struct InkFeedbackProviderBase **)(v3 + 8) != (struct InkFeedbackProviderBase *)((char *)a2 + 8)
    || (v4 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v4 != v2) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *((_QWORD *)a2 + 2) = 0LL;
  *v2 = 0LL;
  if ( (unsigned int)pRelatedActivityId > 4 )
  {
    v5 = (const CHAR *)*((_QWORD *)a2 + 6);
    v12 = &v9;
    v9 = 0;
    v14 = "Removed ink feedback provider";
    v13 = 4LL;
    v15 = 30LL;
    TlgCreateSz(&pDesc, v5);
    v10 = v6;
    v17 = &v10;
    v18 = 8LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E914B, v7, v6, 6u, &pData);
  }
  return 0LL;
}
