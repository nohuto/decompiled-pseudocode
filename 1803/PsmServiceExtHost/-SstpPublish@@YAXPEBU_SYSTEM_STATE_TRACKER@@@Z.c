/*
 * XREFs of ?SstpPublish@@YAXPEBU_SYSTEM_STATE_TRACKER@@@Z @ 0x1800374C0
 * Callers:
 *     SystemStateTrackerStart @ 0x18003740C (SystemStateTrackerStart.c)
 *     ?SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18006AB20 (-SstpOnStateChanged@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall SstpPublish(const struct _SYSTEM_STATE_TRACKER *a1)
{
  int *v1; // rbx
  const struct _TlgProvider_t *v2; // rcx
  int v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  v1 = (int *)((char *)a1 + 20);
  v3 = RtlPublishWnfStateData(*(_QWORD *)((char *)a1 + 220), 0LL, (char *)a1 + 20, 4LL, 0LL);
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v3;
      v4 = *v1;
      v9 = &v4;
      v7 = 4;
      v10 = 4;
      TlgWrite(v2, &unk_1800847C7, 0LL, 0LL, 4u, &pData);
    }
  }
}
