/*
 * XREFs of GetHidTelemetryData @ 0x1C0104D40
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0104B68 (CheckPointerDeviceConfiguration.c)
 * Callees:
 *     ?TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z @ 0x1C0104E60 (-TraceLoggingHidConfigEvent@@YAXKPEAG0KKUtagRECT@@1@Z.c)
 *     GetHidVidPidStrings @ 0x1C0105118 (GetHidVidPidStrings.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall GetHidTelemetryData(__int64 a1)
{
  __int64 v2; // rax
  struct tagRECT v3; // xmm6
  unsigned int v4; // esi
  struct tagRECT v5; // xmm7
  int v6; // edi
  __int64 v7; // rdx
  unsigned int v8; // ecx
  int v9; // [rsp+48h] [rbp-39h] BYREF
  unsigned __int16 *v10; // [rsp+50h] [rbp-31h]
  int v11; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int16 *v12; // [rsp+60h] [rbp-21h]
  struct tagRECT v13; // [rsp+68h] [rbp-19h] BYREF
  struct tagRECT v14; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int16 v15[4]; // [rsp+88h] [rbp+7h] BYREF
  __int64 v16; // [rsp+90h] [rbp+Fh]
  unsigned __int16 v17[4]; // [rsp+98h] [rbp+17h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+1Fh]

  v11 = 0x100000;
  *(_QWORD *)v17 = 0LL;
  v18 = 0LL;
  *(_QWORD *)v15 = 0LL;
  v16 = 0LL;
  v12 = v17;
  v10 = v15;
  v2 = *(_QWORD *)(a1 + 472);
  v9 = 0x100000;
  v3 = *(struct tagRECT *)(v2 + 156);
  v4 = *(_DWORD *)(v2 + 696);
  v5 = *(struct tagRECT *)(v2 + 188);
  v6 = *(_DWORD *)(v2 + 24);
  GetHidVidPidStrings(a1, &v11, &v9);
  v7 = *(_QWORD *)(a1 + 472);
  v8 = 3;
  if ( (unsigned int)(*(_DWORD *)(v7 + 24) - 5) > 1 )
  {
    if ( (unsigned int)(*(_DWORD *)(v7 + 24) - 1) > 3 )
    {
      if ( *(_DWORD *)(v7 + 24) == 7 )
      {
        v6 = *(_DWORD *)(v7 + 1528);
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
  v13 = v3;
  v14 = v5;
  TraceLoggingHidConfigEvent(v8, v17, v15, v4, v6, &v14, &v13);
}
