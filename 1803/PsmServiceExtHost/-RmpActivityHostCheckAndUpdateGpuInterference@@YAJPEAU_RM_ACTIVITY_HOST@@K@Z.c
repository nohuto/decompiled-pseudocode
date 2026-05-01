/*
 * XREFs of ?RmpActivityHostCheckAndUpdateGpuInterference@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18005CC60
 * Callers:
 *     ?RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18005D380 (-RmpGpuMonitorTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DAA0 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z @ 0x18005CDC0 (-RmpActivityHostIsGpuInterfering@@YAJPEAU_RM_ACTIVITY_HOST@@PEAE@Z.c)
 */

__int64 __fastcall RmpActivityHostCheckAndUpdateGpuInterference(struct _RM_ACTIVITY_HOST *a1, int a2)
{
  int v2; // r9d
  __int64 v4; // rax
  int IsGpuInterfering; // edi
  __int64 v6; // rax
  unsigned __int8 v8[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]

  v2 = *((_DWORD *)a1 + 288);
  if ( (v2 & 2) != 0 )
  {
    if ( !a2 )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v4 = *((_QWORD *)a1 + 4);
        v13 = 0;
        v9 = v4;
        v11 = &v9;
        v12 = 8;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007FA6C, 0LL, 0LL, 3u, &pData);
        v2 = *((_DWORD *)a1 + 288);
      }
      *((_DWORD *)a1 + 288) = v2 & 0xFFFFFFFD;
    }
LABEL_13:
    IsGpuInterfering = 0;
    goto LABEL_14;
  }
  IsGpuInterfering = RmpActivityHostIsGpuInterfering(a1, v8);
  if ( IsGpuInterfering >= 0 )
  {
    if ( v8[0] )
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v6 = *((_QWORD *)a1 + 4);
        v13 = 0;
        v9 = v6;
        v11 = &v9;
        v12 = 8;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007FA3F, 0LL, 0LL, 3u, &pData);
      }
      *((_DWORD *)a1 + 288) |= 2u;
    }
    goto LABEL_13;
  }
LABEL_14:
  RmpActivityHostCheckQueueWork(a1);
  return (unsigned int)IsGpuInterfering;
}
