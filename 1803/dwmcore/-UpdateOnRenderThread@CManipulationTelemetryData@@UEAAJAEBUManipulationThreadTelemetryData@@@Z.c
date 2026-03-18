/*
 * XREFs of ?UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z @ 0x180192B20
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Insert@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1801920D8 (-Insert@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV-$shared_ptr@UTOUCH.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180192D8C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall CManipulationTelemetryData::UpdateOnRenderThread(
        LARGE_INTEGER *this,
        const struct ManipulationThreadTelemetryData *a2)
{
  __int64 v4; // rax
  _OWORD *v5; // rax
  _OWORD *v6; // rdi
  volatile signed __int32 *v7; // rax
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rbx
  int v10; // edi
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v21[3]; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v23; // [rsp+A8h] [rbp-60h]
  int v24; // [rsp+B0h] [rbp-58h]
  int v25; // [rsp+B4h] [rbp-54h]
  int *v26; // [rsp+B8h] [rbp-50h]
  int v27; // [rsp+C0h] [rbp-48h]
  int v28; // [rsp+C4h] [rbp-44h]
  int *v29; // [rsp+C8h] [rbp-40h]
  int v30; // [rsp+D0h] [rbp-38h]
  int v31; // [rsp+D4h] [rbp-34h]
  int *v32; // [rsp+D8h] [rbp-30h]
  int v33; // [rsp+E0h] [rbp-28h]
  int v34; // [rsp+E4h] [rbp-24h]
  __int64 *v35; // [rsp+E8h] [rbp-20h]
  int v36; // [rsp+F0h] [rbp-18h]
  int v37; // [rsp+F4h] [rbp-14h]
  __int64 *v38; // [rsp+F8h] [rbp-10h]
  int v39; // [rsp+100h] [rbp-8h]
  int v40; // [rsp+104h] [rbp-4h]
  __int64 *v41; // [rsp+108h] [rbp+0h]
  int v42; // [rsp+110h] [rbp+8h]
  int v43; // [rsp+114h] [rbp+Ch]
  int *v44; // [rsp+118h] [rbp+10h]
  int v45; // [rsp+120h] [rbp+18h]
  int v46; // [rsp+124h] [rbp+1Ch]
  __int64 *v47; // [rsp+128h] [rbp+20h]
  int v48; // [rsp+130h] [rbp+28h]
  int v49; // [rsp+134h] [rbp+2Ch]

  QueryPerformanceCounter(this + 17);
  if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
  {
    v4 = (*(__int64 (__fastcall **)(LARGE_INTEGER *))(this->QuadPart + 64))(this);
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v49 = 0;
    v17 = v4;
    v23 = &v17;
    v12 = *(_DWORD *)a2;
    v26 = &v12;
    v13 = *((_DWORD *)a2 + 1);
    v29 = &v13;
    v14 = *((_DWORD *)a2 + 2);
    v32 = &v14;
    v18 = *((_QWORD *)a2 + 2);
    v35 = &v18;
    v19 = *((_QWORD *)a2 + 3);
    v38 = &v19;
    v20 = *((_QWORD *)a2 + 4);
    v41 = &v20;
    v15 = *((_DWORD *)a2 + 10);
    v44 = &v15;
    LODWORD(v16) = *((_DWORD *)a2 + 11);
    v47 = &v16;
    v24 = 8;
    v27 = 4;
    v30 = 4;
    v33 = 4;
    v36 = 8;
    v39 = 8;
    v42 = 8;
    v45 = 4;
    v48 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A83F2, 0LL, 0LL, 0xBu, &pData);
  }
  v5 = operator new(0x30uLL);
  v6 = v5;
  if ( v5 )
  {
    *v5 = *(_OWORD *)a2;
    v5[1] = *((_OWORD *)a2 + 1);
    v5[2] = *((_OWORD *)a2 + 2);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = (volatile signed __int32 *)operator new(0x18uLL);
  v9 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 1;
    *((_DWORD *)v7 + 3) = 1;
    *(_QWORD *)v7 = &std::_Ref_count<ManipulationThreadTelemetryData>::`vftable';
    *((_QWORD *)v7 + 2) = v6;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v6 )
  {
    if ( v9 )
    {
      _InterlockedAdd(v9 + 2, 1u);
      _InterlockedAdd(v9 + 2, 1u);
    }
    v21[0] = v6;
    v21[1] = v9;
    v10 = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::Insert((__int64)&this[9], v8, v21);
    if ( v9 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v9);
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x66u);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x65u);
  }
  if ( v9 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v9);
  return (unsigned int)v10;
}
