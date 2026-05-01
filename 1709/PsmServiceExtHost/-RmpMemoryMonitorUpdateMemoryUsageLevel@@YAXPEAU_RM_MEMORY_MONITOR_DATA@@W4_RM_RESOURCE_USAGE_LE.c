/*
 * XREFs of ?RmpMemoryMonitorUpdateMemoryUsageLevel@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18001F730
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180020790 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

void __fastcall RmpMemoryMonitorUpdateMemoryUsageLevel(__int64 a1, int a2)
{
  int v3; // ebx
  const struct _TlgProvider_t *v4; // rcx
  const GUID *v5; // r8
  const GUID *v6; // r9
  int v7; // [rsp+30h] [rbp-19h] BYREF
  int v8; // [rsp+34h] [rbp-15h] BYREF
  int v9; // [rsp+38h] [rbp-11h] BYREF
  int v10; // [rsp+3Ch] [rbp-Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  int *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  int *v18; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+88h] [rbp+3Fh]
  int v20; // [rsp+8Ch] [rbp+43h]

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
    v7 = v3;
    v8 = RtlPublishWnfStateData(WNF_RM_MEMORY_MONITOR_USAGE_LEVEL, 0LL, &v7, 4LL, 0LL);
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v12 = &v8;
        v9 = *(_DWORD *)(a1 + 96);
        v15 = &v9;
        v10 = v7;
        v18 = &v10;
        v13 = 4;
        v16 = 4;
        v19 = 4;
        TlgWrite(v4, &unk_180059EB9, v5, v6, 5u, &pData);
      }
    }
    *(_DWORD *)(a1 + 96) = v3;
  }
}
