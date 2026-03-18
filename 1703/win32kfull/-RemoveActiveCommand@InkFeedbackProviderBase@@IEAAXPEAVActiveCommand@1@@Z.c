/*
 * XREFs of ?RemoveActiveCommand@InkFeedbackProviderBase@@IEAAXPEAVActiveCommand@1@@Z @ 0x1C021CC94
 * Callers:
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C021CDC0 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall InkFeedbackProviderBase::RemoveActiveCommand(
        InkFeedbackProviderBase *this,
        struct InkFeedbackProviderBase::ActiveCommand *a2)
{
  __int64 v2; // rcx
  struct InkFeedbackProviderBase::ActiveCommand **v3; // rax
  __int64 v4; // r11
  __int64 v5; // r9
  char v6; // cl
  __int64 v7; // r10
  LPCGUID v8; // r8
  char v9; // [rsp+30h] [rbp-69h] BYREF
  int v10; // [rsp+34h] [rbp-65h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  int *v12; // [rsp+60h] [rbp-39h]
  int v13; // [rsp+68h] [rbp-31h]
  int v14; // [rsp+6Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+80h] [rbp-19h] BYREF
  char *v17; // [rsp+90h] [rbp-9h]
  int v18; // [rsp+98h] [rbp-1h]
  int v19; // [rsp+9Ch] [rbp+3h]
  __int64 v20; // [rsp+A0h] [rbp+7h]
  int v21; // [rsp+A8h] [rbp+Fh]
  int v22; // [rsp+ACh] [rbp+13h]
  __int64 v23; // [rsp+B0h] [rbp+17h]
  int v24; // [rsp+B8h] [rbp+1Fh]
  int v25; // [rsp+BCh] [rbp+23h]
  __int64 v26; // [rsp+C0h] [rbp+27h]
  int v27; // [rsp+C8h] [rbp+2Fh]
  int v28; // [rsp+CCh] [rbp+33h]

  --*((_DWORD *)this + 10);
  v2 = *(_QWORD *)a2;
  v3 = (struct InkFeedbackProviderBase::ActiveCommand **)*((_QWORD *)a2 + 1);
  if ( *(struct InkFeedbackProviderBase::ActiveCommand **)(*(_QWORD *)a2 + 8LL) != a2 || *v3 != a2 )
    __fastfail(3u);
  *v3 = (struct InkFeedbackProviderBase::ActiveCommand *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  *((_QWORD *)a2 + 1) = 0LL;
  *(_QWORD *)a2 = 0LL;
  if ( hProvider > 4u )
  {
    v10 = 0;
    v14 = 0;
    v12 = &v10;
    v13 = 4;
    TlgCreateSz(&pDesc, "Removed active command");
    TlgCreateSz(&v16, *(LPCSTR *)(v4 + 48));
    v6 = *(_BYTE *)(v5 + 16);
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v17 = &v9;
    v20 = v5 + 20;
    v23 = v5 + 24;
    v9 = v6;
    v18 = 1;
    v21 = 4;
    v24 = 8;
    v26 = v7;
    v27 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6D6, v8, (LPCGUID)v5, 9u, &pData);
  }
}
