/*
 * XREFs of ?EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UEAAXPEBX@Z @ 0x1C00DA440
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C021CDC0 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 */

void __fastcall InkFeedbackProviderBase::EndActiveCommandsByOwnerThread(InkFeedbackProviderBase *this, const void *a2)
{
  struct InkFeedbackProviderBase::ActiveCommand *v2; // rsi
  struct InkFeedbackProviderBase::ActiveCommand *v4; // rbx
  struct InkFeedbackProviderBase::ActiveCommand *v6; // rdi
  char v7; // cl
  const GUID *v8; // r9
  LPCGUID v9; // r8
  char v10; // [rsp+38h] [rbp-69h] BYREF
  int v11; // [rsp+3Ch] [rbp-65h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *v12; // [rsp+40h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-59h] BYREF
  int *v14; // [rsp+68h] [rbp-39h]
  int v15; // [rsp+70h] [rbp-31h]
  int v16; // [rsp+74h] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+88h] [rbp-19h] BYREF
  char *v19; // [rsp+98h] [rbp-9h]
  int v20; // [rsp+A0h] [rbp-1h]
  int v21; // [rsp+A4h] [rbp+3h]
  char *v22; // [rsp+A8h] [rbp+7h]
  int v23; // [rsp+B0h] [rbp+Fh]
  int v24; // [rsp+B4h] [rbp+13h]
  const GUID *v25; // [rsp+B8h] [rbp+17h]
  int v26; // [rsp+C0h] [rbp+1Fh]
  int v27; // [rsp+C4h] [rbp+23h]

  v2 = (InkFeedbackProviderBase *)((char *)this + 24);
  v4 = (struct InkFeedbackProviderBase::ActiveCommand *)*((_QWORD *)this + 3);
  while ( v4 != v2 )
  {
    v6 = v4;
    v12 = v4;
    v4 = *(struct InkFeedbackProviderBase::ActiveCommand **)v4;
    if ( *((const void **)v6 + 3) == a2 )
    {
      if ( hProvider > 4u )
      {
        v11 = 0;
        v16 = 0;
        v14 = &v11;
        v15 = 4;
        TlgCreateSz(&pDesc, "Terminating active command by owner thread");
        TlgCreateSz(&v18, *((LPCSTR *)this + 6));
        v7 = *((_BYTE *)v6 + 16);
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v19 = &v10;
        v22 = (char *)v6 + 20;
        v10 = v7;
        v20 = 1;
        v23 = 4;
        v25 = v8;
        v26 = 8;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC75C, v9, v8, 8u, &pData);
      }
      (*(void (__fastcall **)(InkFeedbackProviderBase *, struct InkFeedbackProviderBase::ActiveCommand *))(*(_QWORD *)this + 32LL))(
        this,
        v6);
      InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(this, &v12);
    }
  }
}
