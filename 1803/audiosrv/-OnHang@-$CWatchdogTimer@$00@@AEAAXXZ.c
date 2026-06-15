/*
 * XREFs of ?OnHang@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x18009F38C
 * Callers:
 *     ?TimerCallback@?$CWatchdogTimer@$00@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18009FBD0 (-TimerCallback@-$CWatchdogTimer@$00@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ReportHangInternal2_0 @ 0x18009F88C (ReportHangInternal2_0.c)
 *     ?ShouldReportHangToWatson@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x18009FAA8 (-ShouldReportHangToWatson@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 */

char __fastcall CWatchdogTimer<1>::OnHang(__int64 a1)
{
  unsigned __int32 v2; // eax
  const WCHAR *v3; // rdx
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  TraceLoggingHProvider v6; // r11
  const WCHAR *v7; // rdx
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  TraceLoggingHProvider v10; // r11
  void (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v12; // rcx
  const WCHAR *v13; // rdx
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  TraceLoggingHProvider v16; // r11
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int32 v19; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD Src[2]; // [rsp+38h] [rbp-C8h] BYREF
  GUID pguid; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int32 *v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+7Ch] [rbp-84h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+98h] [rbp-68h]
  int v29; // [rsp+9Ch] [rbp-64h]
  EVENT_DATA_DESCRIPTOR v30; // [rsp+A0h] [rbp-60h] BYREF
  GUID *p_pguid; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-20h]
  int v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+ECh] [rbp-14h]
  EVENT_DATA_DESCRIPTOR v38; // [rsp+F0h] [rbp-10h] BYREF
  int *v39; // [rsp+110h] [rbp+10h]
  int v40; // [rsp+118h] [rbp+18h]
  int v41; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+120h] [rbp+20h] BYREF
  __int64 v43; // [rsp+130h] [rbp+30h]
  int v44; // [rsp+138h] [rbp+38h]
  int v45; // [rsp+13Ch] [rbp+3Ch]

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
  v19 = v2;
  if ( v2 >= 3 )
  {
    if ( v2 == 3 )
    {
      pguid = GUID_00000000_0000_0000_0000_000000000000;
      CoCreateGuid(&pguid);
      if ( **(_DWORD **)(a1 + 8) > 2u && TlgKeywordOn(*(TraceLoggingHProvider *)(a1 + 8), 0x400000000001uLL) )
      {
        v7 = *(const WCHAR **)(a1 + 24);
        v33 = 0;
        p_pguid = &pguid;
        v32 = 16;
        TlgCreateWsz(&v34, v7);
        v37 = 0;
        v35 = a1 + 16;
        v36 = 4;
        TlgWrite(v10, &unk_180144FFE, v8, v9, 5u, &v30);
      }
      RtlPublishWnfStateData(WNF_AUDC_HEALTH_PROBLEM, 0LL, &pguid, 16LL, 0LL);
      v11 = *(void (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 32);
      if ( v11 )
        (**v11)(v11, *(unsigned int *)(a1 + 16), *(_QWORD *)(a1 + 24));
      LOBYTE(v2) = CWatchdogTimer<1>::ShouldReportHangToWatson(a1);
      if ( (_BYTE)v2 )
      {
        v12 = *(_QWORD *)(a1 + 32);
        if ( v12 )
        {
          v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          if ( v18 && **(_DWORD **)(a1 + 8) > 4u && TlgKeywordOn(*(TraceLoggingHProvider *)(a1 + 8), 1uLL) )
          {
            v13 = *(const WCHAR **)(a1 + 24);
            v41 = 0;
            v39 = &v18;
            v40 = 4;
            TlgCreateWsz(&v42, v13);
            v45 = 0;
            v43 = a1 + 16;
            v44 = 4;
            TlgWrite(v16, &unk_180144FB0, v14, v15, 5u, &v38);
          }
        }
        else
        {
          v18 = 0;
        }
        Src[0] = GetCurrentProcessId();
        Src[1] = v18;
        LOBYTE(v2) = ReportHangInternal2_0(Src);
      }
      *(_BYTE *)(a1 + 40) = 1;
    }
  }
  else if ( **(_DWORD **)(a1 + 8) > 3u )
  {
    LOBYTE(v2) = TlgKeywordOn(*(TraceLoggingHProvider *)(a1 + 8), 1uLL);
    if ( (_BYTE)v2 )
    {
      v3 = *(const WCHAR **)(a1 + 24);
      v25 = 0;
      v23 = &v19;
      v24 = 4;
      TlgCreateWsz(&pDesc, v3);
      v29 = 0;
      v27 = a1 + 16;
      v28 = 4;
      LOBYTE(v2) = TlgWrite(v6, &unk_18014502C, v4, v5, 5u, &pData);
    }
  }
  return v2;
}
