/*
 * XREFs of SendBDDDiagTelemetry @ 0x1C003AEC0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0007C84 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0007E1C (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SendBDDDiagTelemetry(__int64 a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  const GUID *v5; // r9
  char v6; // [rsp+30h] [rbp-D0h] BYREF
  char v7; // [rsp+31h] [rbp-CFh] BYREF
  char v8; // [rsp+32h] [rbp-CEh] BYREF
  char v9; // [rsp+33h] [rbp-CDh] BYREF
  char v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+48h] [rbp-B8h]
  PVOID v15; // [rsp+50h] [rbp-B0h]
  int v16; // [rsp+58h] [rbp-A8h]
  __int64 v17; // [rsp+60h] [rbp-A0h]
  GUID ActivityId; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  char *v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  _QWORD *v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  char *v24; // [rsp+C0h] [rbp-40h]
  _QWORD v25[19]; // [rsp+C8h] [rbp-38h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x86E8uLL, 0x74727044u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    v4 = *(_QWORD *)(a1 + 40);
    v13 = 0LL;
    v14 = 0;
    v15 = PoolWithTag;
    v16 = 34536;
    v17 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(v4 + 408))(v4, &v13) >= 0 )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C0079090 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0079090, 0x800000000000uLL) )
        {
          v6 = 1;
          v20 = &v6;
          v22 = v25;
          v24 = (char *)(v3 + 8608);
          v25[1] = v3 + 8624;
          v25[3] = v3 + 8625;
          v11 = v3[8627];
          v25[5] = &v11;
          v12 = v3[8628];
          v25[7] = &v12;
          v7 = *((_BYTE *)v3 + 34504);
          v25[9] = &v7;
          v8 = *((_BYTE *)v3 + 34516);
          v25[11] = &v8;
          v9 = *((_BYTE *)v3 + 34520);
          v25[13] = &v9;
          v10 = *((_BYTE *)v3 + 34524);
          v25[15] = &v10;
          v25[17] = v3 + 8632;
          v21 = 1LL;
          v23 = 2LL;
          v25[0] = 64LL;
          v25[2] = 4LL;
          v25[4] = 4LL;
          v25[6] = 4LL;
          v25[8] = 4LL;
          v25[10] = 1LL;
          v25[12] = 1LL;
          v25[14] = 1LL;
          v25[16] = 1LL;
          v25[18] = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0079090, &unk_1C00591BB, &ActivityId, v5, 0xEu, &pData);
        }
      }
    }
    ExFreePoolWithTag(v3, 0x74727044u);
  }
}
