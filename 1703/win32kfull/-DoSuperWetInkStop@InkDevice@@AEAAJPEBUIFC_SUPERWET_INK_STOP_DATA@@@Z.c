/*
 * XREFs of ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1C021D654
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021E220 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 *     ?TerminateActiveCommand@InkDevice@@EEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z @ 0x1C021EB30 (-TerminateActiveCommand@InkDevice@@EEAAXPEAVActiveCommand@InkFeedbackProviderBase@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C021D070 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 */

__int64 __fastcall InkDevice::DoSuperWetInkStop(LPCSTR *this, const struct IFC_SUPERWET_INK_STOP_DATA *a2)
{
  int v4; // eax
  const GUID *v5; // r8
  unsigned int v6; // ebx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  int v10; // [rsp+30h] [rbp-89h] BYREF
  char *v11; // [rsp+38h] [rbp-81h] BYREF
  EVENT_DATA_DESCRIPTOR v12; // [rsp+40h] [rbp-79h] BYREF
  int *v13; // [rsp+60h] [rbp-59h]
  __int64 v14; // [rsp+68h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+80h] [rbp-39h] BYREF
  char **v17; // [rsp+90h] [rbp-29h]
  __int64 v18; // [rsp+98h] [rbp-21h]
  const struct IFC_SUPERWET_INK_STOP_DATA *v19; // [rsp+A0h] [rbp-19h]
  __int64 v20; // [rsp+A8h] [rbp-11h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp+7h] BYREF
  int *v22; // [rsp+E0h] [rbp+27h]
  __int64 v23; // [rsp+E8h] [rbp+2Fh]

  v4 = InkDevice::CreateAndSendSuperWetInkPayloadForCommand((__int64)this, 2u, (__int64)a2, 4u);
  v6 = v4;
  if ( v4 >= 0 )
  {
    if ( hProvider > 4u )
    {
      v10 = 0;
      v13 = &v10;
      v14 = 4LL;
      TlgCreateSz(&pDesc, "Stopped super-wet ink");
      TlgCreateSz(&v16, this[10]);
      v18 = 8LL;
      v17 = &v11;
      v11 = (char *)(this + 4);
      v19 = a2;
      v20 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC7CD, v7, v8, 7u, &v12);
    }
  }
  else if ( hProvider > 2u )
  {
    v10 = v4;
    v22 = &v10;
    v23 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v5, 0LL, 3u, &pData);
  }
  return v6;
}
