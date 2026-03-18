/*
 * XREFs of ?EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UEAAXPEBX@Z @ 0x1C00E0C60
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0043700 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z @ 0x1C021E0A0 (-RemoveAndReleaseActiveCommand@InkFeedbackProviderBase@@IEAAXPEAPEAVActiveCommand@1@@Z.c)
 */

void __fastcall InkFeedbackProviderBase::EndActiveCommandsByOwnerThread(InkFeedbackProviderBase *this, const void *a2)
{
  struct InkFeedbackProviderBase::ActiveCommand *v2; // rdi
  struct InkFeedbackProviderBase::ActiveCommand *v4; // rbx
  struct InkFeedbackProviderBase::ActiveCommand *v6; // rsi
  __int64 v7; // rax
  const CHAR *v8; // rdx
  char v9; // cl
  const GUID *v10; // r9
  LPCGUID v11; // r8
  char v12; // [rsp+38h] [rbp-59h] BYREF
  int v13; // [rsp+3Ch] [rbp-55h] BYREF
  struct InkFeedbackProviderBase::ActiveCommand *v14; // [rsp+40h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  int *v16; // [rsp+68h] [rbp-29h]
  int v17; // [rsp+70h] [rbp-21h]
  int v18; // [rsp+74h] [rbp-1Dh]
  const char *v19; // [rsp+78h] [rbp-19h]
  int v20; // [rsp+80h] [rbp-11h]
  int v21; // [rsp+84h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-9h] BYREF
  char *v23; // [rsp+98h] [rbp+7h]
  int v24; // [rsp+A0h] [rbp+Fh]
  int v25; // [rsp+A4h] [rbp+13h]
  char *v26; // [rsp+A8h] [rbp+17h]
  int v27; // [rsp+B0h] [rbp+1Fh]
  int v28; // [rsp+B4h] [rbp+23h]
  const GUID *v29; // [rsp+B8h] [rbp+27h]
  int v30; // [rsp+C0h] [rbp+2Fh]
  int v31; // [rsp+C4h] [rbp+33h]

  v2 = (InkFeedbackProviderBase *)((char *)this + 24);
  v4 = (struct InkFeedbackProviderBase::ActiveCommand *)*((_QWORD *)this + 3);
  if ( v4 != (InkFeedbackProviderBase *)((char *)this + 24) )
  {
    do
    {
      v6 = v4;
      v14 = v4;
      v4 = *(struct InkFeedbackProviderBase::ActiveCommand **)v4;
      if ( *((const void **)v6 + 3) == a2 )
      {
        if ( (unsigned int)pRelatedActivityId > 4 )
        {
          v13 = 0;
          v18 = 0;
          v16 = &v13;
          v7 = -1LL;
          v17 = 4;
          do
            ++v7;
          while ( aTerminatingAct[v7] );
          v8 = (const CHAR *)*((_QWORD *)this + 6);
          v21 = 0;
          v19 = "Terminating active command by owner thread";
          v20 = v7 + 1;
          TlgCreateSz(&pDesc, v8);
          v9 = *((_BYTE *)v6 + 16);
          v25 = 0;
          v28 = 0;
          v31 = 0;
          v23 = &v12;
          v26 = (char *)v6 + 20;
          v12 = v9;
          v24 = 1;
          v27 = 4;
          v29 = v10;
          v30 = 8;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E93A3, v11, v10, 8u, &pData);
        }
        (*(void (__fastcall **)(InkFeedbackProviderBase *, struct InkFeedbackProviderBase::ActiveCommand *))(*(_QWORD *)this + 32LL))(
          this,
          v6);
        InkFeedbackProviderBase::RemoveAndReleaseActiveCommand(this, &v14);
      }
    }
    while ( v4 != v2 );
  }
}
