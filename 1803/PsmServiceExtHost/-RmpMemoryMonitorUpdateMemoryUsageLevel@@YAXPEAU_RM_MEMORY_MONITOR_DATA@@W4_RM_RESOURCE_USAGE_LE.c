/*
 * XREFs of ?RmpMemoryMonitorUpdateMemoryUsageLevel@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180031888
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18003C0C0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall RmpMemoryMonitorUpdateMemoryUsageLevel(__int64 a1, int a2)
{
  int v3; // ebx
  const struct _TlgProvider_t *v4; // rcx
  int v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+34h] [rbp-15h] BYREF
  int v7; // [rsp+38h] [rbp-11h] BYREF
  int v8; // [rsp+3Ch] [rbp-Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  int *v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  int *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]

  if ( a2 <= 1 )
    goto LABEL_2;
  v3 = 2;
  if ( a2 == 2 )
  {
    v3 = 1;
  }
  else if ( (unsigned int)(a2 - 3) > 1 )
  {
LABEL_2:
    v3 = 0;
  }
  if ( v3 != *(_DWORD *)(a1 + 96) )
  {
    v5 = v3;
    v6 = RtlPublishWnfStateData(WNF_RM_MEMORY_MONITOR_USAGE_LEVEL, 0LL, &v5, 4LL, 0LL);
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v12 = 0;
        v15 = 0;
        v18 = 0;
        v10 = &v6;
        v7 = *(_DWORD *)(a1 + 96);
        v13 = &v7;
        v8 = v5;
        v16 = &v8;
        v11 = 4;
        v14 = 4;
        v17 = 4;
        TlgWrite(v4, &unk_180080183, 0LL, 0LL, 5u, &pData);
      }
    }
    *(_DWORD *)(a1 + 96) = v3;
  }
}
