/*
 * XREFs of ?RemoveActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C021DF80
 * Callers:
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C021E0A0 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0043700 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall InkFeedbackProviderBase::RemoveActiveCommand(
        InkFeedbackProviderBase *this,
        struct InkFeedbackProviderBase::ActiveCommand ***a2)
{
  struct InkFeedbackProviderBase::ActiveCommand **v4; // rcx
  struct InkFeedbackProviderBase::ActiveCommand **v5; // rax
  const CHAR *v6; // rdx
  __int64 v7; // r9
  char v8; // cl
  __int64 v9; // r10
  LPCGUID v10; // r8
  char v11; // [rsp+30h] [rbp-59h] BYREF
  int v12; // [rsp+34h] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  int *v14; // [rsp+60h] [rbp-29h]
  __int64 v15; // [rsp+68h] [rbp-21h]
  const char *v16; // [rsp+70h] [rbp-19h]
  __int64 v17; // [rsp+78h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-9h] BYREF
  char *v19; // [rsp+90h] [rbp+7h]
  __int64 v20; // [rsp+98h] [rbp+Fh]
  __int64 v21; // [rsp+A0h] [rbp+17h]
  __int64 v22; // [rsp+A8h] [rbp+1Fh]
  __int64 v23; // [rsp+B0h] [rbp+27h]
  __int64 v24; // [rsp+B8h] [rbp+2Fh]
  __int64 v25; // [rsp+C0h] [rbp+37h]
  __int64 v26; // [rsp+C8h] [rbp+3Fh]

  --*((_DWORD *)this + 10);
  v4 = *a2;
  if ( (*a2)[1] != (struct InkFeedbackProviderBase::ActiveCommand *)a2
    || (v5 = a2[1], *v5 != (struct InkFeedbackProviderBase::ActiveCommand *)a2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct InkFeedbackProviderBase::ActiveCommand *)v4;
  v4[1] = (struct InkFeedbackProviderBase::ActiveCommand *)v5;
  a2[1] = 0LL;
  *a2 = 0LL;
  if ( (unsigned int)pRelatedActivityId > 4 )
  {
    v6 = (const CHAR *)*((_QWORD *)this + 6);
    v14 = &v12;
    v12 = 0;
    v16 = "Removed active command";
    v15 = 4LL;
    v17 = 23LL;
    TlgCreateSz(&pDesc, v6);
    v8 = *(_BYTE *)(v7 + 16);
    v19 = &v11;
    v21 = v7 + 20;
    v23 = v7 + 24;
    v11 = v8;
    v20 = 1LL;
    v22 = 4LL;
    v24 = 8LL;
    v25 = v9;
    v26 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E931D, v10, (LPCGUID)v7, 9u, &pData);
  }
}
