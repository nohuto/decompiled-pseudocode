/*
 * XREFs of ?OnHang@?$CWatchdogTimer@$01@@AEAAXXZ @ 0x1400398E8
 * Callers:
 *     ?TimerCallback@?$CWatchdogTimer@$01@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x14003A430 (-TimerCallback@-$CWatchdogTimer@$01@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x14001AAB8 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x14001B050 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 *     ReportHangInternal2 @ 0x140039E24 (ReportHangInternal2.c)
 *     ?ShouldReportHangToWatson@?$CWatchdogTimer@$01@@AEAA_NXZ @ 0x14003A23C (-ShouldReportHangToWatson@-$CWatchdogTimer@$01@@AEAA_NXZ.c)
 */

char __fastcall CWatchdogTimer<2>::OnHang(__int64 a1)
{
  unsigned __int32 v2; // eax
  const WCHAR *v3; // rdx
  LPCGUID v4; // r9
  TraceLoggingHProvider v5; // r11
  const WCHAR *v6; // rdx
  LPCGUID v7; // r9
  TraceLoggingHProvider v8; // r11
  void (__fastcall ***v9)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v10; // rcx
  const WCHAR *v11; // rdx
  LPCGUID v12; // r9
  TraceLoggingHProvider v13; // r11
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int32 v16; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD Src[2]; // [rsp+38h] [rbp-C8h] BYREF
  GUID pguid; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int32 *v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  __int64 v24; // [rsp+90h] [rbp-70h]
  int v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+9Ch] [rbp-64h]
  EVENT_DATA_DESCRIPTOR v27; // [rsp+A0h] [rbp-60h] BYREF
  GUID *p_pguid; // [rsp+C0h] [rbp-40h]
  int v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v32; // [rsp+E0h] [rbp-20h]
  int v33; // [rsp+E8h] [rbp-18h]
  int v34; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR v35; // [rsp+F0h] [rbp-10h] BYREF
  int *v36; // [rsp+110h] [rbp+10h]
  int v37; // [rsp+118h] [rbp+18h]
  int v38; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+120h] [rbp+20h] BYREF
  __int64 v40; // [rsp+130h] [rbp+30h]
  int v41; // [rsp+138h] [rbp+38h]
  int v42; // [rsp+13Ch] [rbp+3Ch]

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  v16 = v2;
  if ( v2 >= 3 )
  {
    if ( v2 == 3 )
    {
      pguid = GUID_00000000_0000_0000_0000_000000000000;
      CoCreateGuid(&pguid);
      if ( **(_DWORD **)(a1 + 8) > 2u && TlgKeywordOn(*(TraceLoggingHProvider *)(a1 + 8), 0x400000000002uLL) )
      {
        v6 = *(const WCHAR **)(a1 + 24);
        v30 = 0;
        p_pguid = &pguid;
        v29 = 16;
        TlgCreateWsz(&v31, v6);
        v34 = 0;
        v32 = a1 + 16;
        v33 = 4;
        TlgWrite(v8, &unk_14006FCFF, 0LL, v7, 5u, &v27);
      }
      RtlPublishWnfStateData(WNF_AUDC_HEALTH_PROBLEM, 0LL, &pguid, 16LL, 0LL);
      v9 = *(void (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 32);
      if ( v9 )
        (**v9)(v9, *(unsigned int *)(a1 + 16), *(_QWORD *)(a1 + 24));
      LOBYTE(v2) = CWatchdogTimer<2>::ShouldReportHangToWatson(a1);
      if ( (_BYTE)v2 )
      {
        v10 = *(_QWORD *)(a1 + 32);
        if ( v10 )
        {
          v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          if ( v15 && **(_DWORD **)(a1 + 8) > 4u && TlgKeywordOn(*(TraceLoggingHProvider *)(a1 + 8), 2uLL) )
          {
            v11 = *(const WCHAR **)(a1 + 24);
            v38 = 0;
            v36 = &v15;
            v37 = 4;
            TlgCreateWsz(&v39, v11);
            v42 = 0;
            v40 = a1 + 16;
            v41 = 4;
            TlgWrite(v13, &unk_14006FD2D, 0LL, v12, 5u, &v35);
          }
        }
        else
        {
          v15 = 0;
        }
        Src[0] = GetCurrentProcessId();
        Src[1] = v15;
        LOBYTE(v2) = ReportHangInternal2(Src);
      }
      *(_BYTE *)(a1 + 40) = 1;
    }
  }
  else if ( **(_DWORD **)(a1 + 8) > 3u )
  {
    LOBYTE(v2) = TlgKeywordOn(*(TraceLoggingHProvider *)(a1 + 8), 2uLL);
    if ( (_BYTE)v2 )
    {
      v3 = *(const WCHAR **)(a1 + 24);
      v22 = 0;
      v20 = &v16;
      v21 = 4;
      TlgCreateWsz(&pDesc, v3);
      v26 = 0;
      v24 = a1 + 16;
      v25 = 4;
      LOBYTE(v2) = TlgWrite(v5, &unk_14006FD7B, 0LL, v4, 5u, &pData);
    }
  }
  return v2;
}
