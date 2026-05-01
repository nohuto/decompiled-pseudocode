/*
 * XREFs of ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18003DBA8
 * Callers:
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003E240 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180015680 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x18003DCF0 (-RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z.c)
 */

__int64 __fastcall RmpActivityHostCheckAndUpdateGpuInterference(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  const GUID *v3; // r8
  const GUID *v4; // r9
  __int64 v5; // rax
  int IsGpuInterfering; // edi
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // rax
  unsigned __int8 v11[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]

  if ( (*((_BYTE *)a1 + 1008) & 2) != 0 )
  {
    if ( !a2 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v5 = *((_QWORD *)a1 + 3);
        v16 = 0;
        v12 = v5;
        v14 = &v12;
        v15 = 8;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005982D, v3, v4, 3u, &pData);
      }
      *((_DWORD *)a1 + 252) &= ~2u;
    }
LABEL_13:
    IsGpuInterfering = 0;
    goto LABEL_14;
  }
  IsGpuInterfering = RmpActivityHostIsGpuInterfering(a1, v11);
  if ( IsGpuInterfering >= 0 )
  {
    if ( v11[0] )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v9 = *((_QWORD *)a1 + 3);
        v16 = 0;
        v12 = v9;
        v14 = &v12;
        v15 = 8;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180059800, v7, v8, 3u, &pData);
      }
      *((_DWORD *)a1 + 252) |= 2u;
    }
    goto LABEL_13;
  }
LABEL_14:
  RmpActivityHostCheckQueueWork(a1, 0);
  return (unsigned int)IsGpuInterfering;
}
