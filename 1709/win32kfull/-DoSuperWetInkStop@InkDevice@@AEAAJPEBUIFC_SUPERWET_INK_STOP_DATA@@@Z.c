/*
 * XREFs of ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C021E938
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021F520 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?TerminateActiveCommand@InkDevice@@EEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1C021FE70 (-TerminateActiveCommand@InkDevice@@EEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0043700 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C021E350 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 */

__int64 __fastcall InkDevice::DoSuperWetInkStop(InkDevice *this, const struct IFC_SUPERWET_INK_STOP_DATA *a2)
{
  int v4; // eax
  const GUID *v5; // r8
  unsigned int v6; // ebx
  const CHAR *v7; // rdx
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  int v11; // [rsp+30h] [rbp-79h] BYREF
  char *v12; // [rsp+38h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-69h] BYREF
  int *v14; // [rsp+60h] [rbp-49h]
  __int64 v15; // [rsp+68h] [rbp-41h]
  const char *v16; // [rsp+70h] [rbp-39h]
  __int64 v17; // [rsp+78h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-29h] BYREF
  char **v19; // [rsp+90h] [rbp-19h]
  __int64 v20; // [rsp+98h] [rbp-11h]
  const struct IFC_SUPERWET_INK_STOP_DATA *v21; // [rsp+A0h] [rbp-9h]
  __int64 v22; // [rsp+A8h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp+7h] BYREF
  int *v24; // [rsp+D0h] [rbp+27h]
  __int64 v25; // [rsp+D8h] [rbp+2Fh]

  v4 = InkDevice::CreateAndSendSuperWetInkPayloadForCommand((__int64)this, 2u, (__int64)a2, 4u);
  v6 = v4;
  if ( v4 >= 0 )
  {
    if ( (unsigned int)pRelatedActivityId > 4 )
    {
      v7 = (const CHAR *)*((_QWORD *)this + 10);
      v14 = &v11;
      v11 = 0;
      v16 = "Stopped super-wet ink";
      v15 = 4LL;
      v17 = 22LL;
      TlgCreateSz(&pDesc, v7);
      v20 = 8LL;
      v19 = &v12;
      v12 = (char *)this + 32;
      v21 = a2;
      v22 = 4LL;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E92AF, v8, v9, 7u, &v13);
    }
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v11 = v4;
    v24 = &v11;
    v25 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v5, 0LL, 3u, &pData);
  }
  return v6;
}
