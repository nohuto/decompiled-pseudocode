/*
 * XREFs of ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C02196D0
 * Callers:
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C01F552C (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?ProcessInkFeedbackCommand@InkFeedbackServer@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021DE0C (-ProcessInkFeedbackCommand@InkFeedbackServer@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 */

__int64 __fastcall InkProcessor::ProcessInkFeedbackCommand(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned int v10; // ebx
  int v11; // eax
  const GUID *v12; // r8
  const GUID *v13; // r9
  _DWORD v15[4]; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  _DWORD *v17; // [rsp+60h] [rbp-9h]
  int v18; // [rsp+68h] [rbp-1h]
  int v19; // [rsp+6Ch] [rbp+3h]
  const char *v20; // [rsp+70h] [rbp+7h]
  int v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+7Ch] [rbp+13h]

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v10 = *(_BYTE *)(a1 + 8) == 0 ? 0xC0000001 : 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v11 = InkFeedbackServer::ProcessInkFeedbackCommand(a1 + 96, a2, a3, a4);
    v10 = v11;
    if ( v11 < 0 && (unsigned int)pRelatedActivityId > 2 )
    {
      v19 = 0;
      v15[0] = v11;
      v17 = v15;
      v18 = 4;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v12, v13, 3u, &pData);
    }
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v19 = 0;
    v22 = 0;
    v17 = v15;
    v20 = "Ink processor not enabled";
    v15[0] = v10;
    v18 = 4;
    v21 = 26;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E8C52, v8, v9, 4u, &pData);
  }
  if ( a1 )
  {
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
  }
  return v10;
}
