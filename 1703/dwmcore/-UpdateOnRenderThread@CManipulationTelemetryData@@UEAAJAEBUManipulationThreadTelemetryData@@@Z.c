/*
 * XREFs of ?UpdateOnRenderThread@CManipulationTelemetryData@@UEAAJAEBUManipulationThreadTelemetryData@@@Z @ 0x180167590
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAA@AEBV01@@Z @ 0x180166674 (--0-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Insert@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x180166CA4 (-Insert@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV-$shared_ptr@UTOUCH.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801677D8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Resetp@UManipulationThreadTelemetryData@@@?$shared_ptr@UManipulationThreadTelemetryData@@@std@@AEAAXPEAUManipulationThreadTelemetryData@@@Z @ 0x180190F2C (--$_Resetp@UManipulationThreadTelemetryData@@@-$shared_ptr@UManipulationThreadTelemetryData@@@st.c)
 */

__int64 __fastcall CManipulationTelemetryData::UpdateOnRenderThread(
        LARGE_INTEGER *this,
        const struct ManipulationThreadTelemetryData *a2)
{
  __int64 v4; // rax
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  _OWORD *v7; // rax
  int v8; // edi
  __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  std::_Ref_count_base *v13; // rcx
  int v15; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v20[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v23[2]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v25; // [rsp+A0h] [rbp-60h]
  int v26; // [rsp+A8h] [rbp-58h]
  int v27; // [rsp+ACh] [rbp-54h]
  int *v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+BCh] [rbp-44h]
  int *v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]
  int *v34; // [rsp+D0h] [rbp-30h]
  int v35; // [rsp+D8h] [rbp-28h]
  int v36; // [rsp+DCh] [rbp-24h]
  _QWORD *v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  _QWORD *v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F8h] [rbp-8h]
  int v42; // [rsp+FCh] [rbp-4h]
  std::_Ref_count_base **v43; // [rsp+100h] [rbp+0h]
  int v44; // [rsp+108h] [rbp+8h]
  int v45; // [rsp+10Ch] [rbp+Ch]
  int *v46; // [rsp+110h] [rbp+10h]
  int v47; // [rsp+118h] [rbp+18h]
  int v48; // [rsp+11Ch] [rbp+1Ch]
  int *v49; // [rsp+120h] [rbp+20h]
  int v50; // [rsp+128h] [rbp+28h]
  int v51; // [rsp+12Ch] [rbp+2Ch]

  QueryPerformanceCounter(this + 17);
  if ( dword_18023D7F0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
  {
    v4 = (*(__int64 (__fastcall **)(LARGE_INTEGER *))(this->QuadPart + 64))(this);
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v45 = 0;
    v48 = 0;
    v51 = 0;
    v21 = v4;
    v25 = &v21;
    v15 = *(_DWORD *)a2;
    v28 = &v15;
    v16 = *((_DWORD *)a2 + 1);
    v31 = &v16;
    v17 = *((_DWORD *)a2 + 2);
    v34 = &v17;
    v22[0] = *((_QWORD *)a2 + 2);
    v37 = v22;
    v23[0] = *((_QWORD *)a2 + 3);
    v40 = v23;
    v20[0] = *((std::_Ref_count_base **)a2 + 4);
    v43 = v20;
    v18 = *((_DWORD *)a2 + 10);
    v46 = &v18;
    v19 = *((_DWORD *)a2 + 11);
    v49 = &v19;
    v26 = 8;
    v29 = 4;
    v32 = 4;
    v35 = 4;
    v38 = 8;
    v41 = 8;
    v44 = 8;
    v47 = 4;
    v50 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F6A49, v5, v6, 0xBu, &pData);
  }
  v7 = operator new(0x30uLL);
  if ( v7 )
  {
    *v7 = *(_OWORD *)a2;
    v7[1] = *((_OWORD *)a2 + 1);
    v7[2] = *((_OWORD *)a2 + 2);
  }
  *(_OWORD *)v20 = 0LL;
  std::shared_ptr<ManipulationThreadTelemetryData>::_Resetp<ManipulationThreadTelemetryData>(v20, v7);
  if ( v20[0] )
  {
    v9 = std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>(v23, (__int64 *)v20);
    v10 = std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>(v22, v9);
    v12 = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::Insert((__int64)&this[9], v11, v10);
    v13 = (std::_Ref_count_base *)v9[1];
    v8 = v12;
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x66u);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x65u);
  }
  if ( v20[1] )
    std::_Ref_count_base::_Decref(v20[1]);
  return (unsigned int)v8;
}
