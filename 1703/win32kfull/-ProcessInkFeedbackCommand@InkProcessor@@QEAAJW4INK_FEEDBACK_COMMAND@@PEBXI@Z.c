/*
 * XREFs of ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C02184EC
 * Callers:
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C01E9540 (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?ProcessInkFeedbackCommand@InkFeedbackServer@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C021CB2C (-ProcessInkFeedbackCommand@InkFeedbackServer@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 */

__int64 __fastcall InkProcessor::ProcessInkFeedbackCommand(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // ebx
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  int v11; // eax
  const GUID *v12; // r8
  const GUID *v13; // r9
  _DWORD v15[4]; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  _DWORD *v17; // [rsp+60h] [rbp-9h]
  int v18; // [rsp+68h] [rbp-1h]
  int v19; // [rsp+6Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v8 = *(_BYTE *)(a1 + 8) == 0 ? 0xC0000001 : 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v11 = InkFeedbackServer::ProcessInkFeedbackCommand(a1 + 96, a2, a3, a4);
    v8 = v11;
    if ( v11 < 0 && hProvider > 2u )
    {
      v19 = 0;
      v15[0] = v11;
      v17 = v15;
      v18 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v12, v13, 3u, &pData);
    }
  }
  else if ( hProvider > 2u )
  {
    v19 = 0;
    v17 = v15;
    v15[0] = v8;
    v18 = 4;
    TlgCreateSz(&pDesc, "Ink processor not enabled");
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC09D, v9, v10, 4u, &pData);
  }
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v8;
}
