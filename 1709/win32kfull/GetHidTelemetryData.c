/*
 * XREFs of GetHidTelemetryData @ 0x1C00438DC
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0043BB4 (CheckPointerDeviceConfiguration.c)
 * Callees:
 *     ?TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z @ 0x1C0043748 (-TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z.c)
 *     GetHidVidPidStrings @ 0x1C0043B5C (GetHidVidPidStrings.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall GetHidTelemetryData(__int64 a1)
{
  __int64 v2; // rax
  struct tagRECT v3; // xmm6
  unsigned int v4; // esi
  struct tagRECT v5; // xmm7
  int v6; // edi
  __int64 v7; // r8
  int v8; // ecx
  int v9; // edx
  int v10; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int16 *v11; // [rsp+50h] [rbp-31h]
  int v12; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int16 *v13; // [rsp+60h] [rbp-21h]
  struct tagRECT v14; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v15; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int16 v16[4]; // [rsp+88h] [rbp+7h] BYREF
  __int64 v17; // [rsp+90h] [rbp+Fh]
  unsigned __int16 v18[4]; // [rsp+98h] [rbp+17h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+1Fh]

  v12 = 0x100000;
  *(_QWORD *)v18 = 0LL;
  v19 = 0LL;
  *(_QWORD *)v16 = 0LL;
  v17 = 0LL;
  v13 = v18;
  v11 = v16;
  v2 = *(_QWORD *)(a1 + 472);
  v10 = 0x100000;
  v3 = *(struct tagRECT *)(v2 + 140);
  v4 = *(_DWORD *)(v2 + 680);
  v5 = *(struct tagRECT *)(v2 + 124);
  v6 = *(_DWORD *)(v2 + 24);
  GetHidVidPidStrings(a1, &v12, &v10);
  v7 = *(_QWORD *)(a1 + 472);
  v8 = 3;
  v9 = *(_DWORD *)(v7 + 24);
  if ( (unsigned int)(v9 - 5) > 1 )
  {
    if ( (unsigned int)(v9 - 1) > 3 )
    {
      if ( v9 == 7 )
      {
        v6 = *(_DWORD *)(v7 + 864);
        v8 = 5;
      }
      else
      {
        v8 = 1;
      }
    }
    else
    {
      v8 = 2;
    }
  }
  v14 = v3;
  v15 = v5;
  TraceLoggingHidConfigEvent(v8, v18, v16, v4, v6, &v15, &v14);
}
