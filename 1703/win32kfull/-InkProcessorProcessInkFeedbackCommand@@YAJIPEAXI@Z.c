/*
 * XREFs of ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C01E9540
 * Callers:
 *     NtUserProcessInkFeedbackCommand @ 0x1C01DE2F0 (NtUserProcessInkFeedbackCommand.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C02184EC (-ProcessInkFeedbackCommand@InkProcessor@@QEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 */

__int64 __fastcall InkProcessorProcessInkFeedbackCommand(unsigned int a1, const GUID *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned int v8; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-48h] BYREF
  unsigned int *v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]

  if ( a1 < 5 )
  {
    v3 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    if ( InkProcessor::s_pInstance )
    {
      v4 = InkProcessor::ProcessInkFeedbackCommand(InkProcessor::s_pInstance, a1, a2, a3);
      v3 = v4;
      if ( v4 < 0 && hProvider > 2u )
      {
        v12 = 0;
        v8 = v4;
        v10 = &v8;
        v11 = 4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v5, v6, 3u, &pData);
      }
    }
    else if ( hProvider > 2u )
    {
      v12 &= (unsigned int)InkProcessor::s_pInstance;
      v10 = &v8;
      v8 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
      v11 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, a2, (LPCGUID)a3, 3u, &pData);
    }
  }
  else
  {
    v3 = -1073741811;
    if ( hProvider > 2u )
    {
      v12 = 0;
      v10 = &v8;
      v8 = -1073741811;
      v11 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, a2, (LPCGUID)a3, 3u, &pData);
    }
  }
  return v3;
}
