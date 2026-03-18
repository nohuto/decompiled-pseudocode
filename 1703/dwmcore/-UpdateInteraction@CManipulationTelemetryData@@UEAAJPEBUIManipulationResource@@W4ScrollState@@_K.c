/*
 * XREFs of ?UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x1801917C0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAA@AEBV01@@Z @ 0x180166674 (--0-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801677D8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x180190F7C (--$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPE.c)
 *     ??1?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ @ 0x180190FC0 (--1-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ.c)
 *     ?InsertTail@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1801913B0 (-InsertTail@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV-$shared_ptr@UTOU.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x1801913F4 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 */

__int64 __fastcall CManipulationTelemetryData::UpdateInteraction(__int64 a1, LONGLONG a2, int a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  std::_Ref_count_base *v10; // rbx
  LPVOID v11; // rax
  __int64 v12; // rdi
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // r8
  std::_Ref_count_base *v17; // rsi
  std::_Ref_count_base *v18; // rcx
  __int64 v19; // r14
  __int64 *v20; // rax
  int inserted; // eax
  LPVOID v22; // rax
  _OWORD *v23; // rdi
  std::_Ref_count_base *v24; // rcx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 *v28; // rax
  int v29; // eax
  LONGLONG v30; // rdi
  std::_Ref_count_base *v31; // rcx
  std::_Ref_count_base *v32; // rax
  LARGE_INTEGER *v33; // rbx
  __int64 v34; // rdx
  const GUID *v35; // r8
  const GUID *v36; // r9
  unsigned int cData; // [rsp+28h] [rbp-E0h]
  int v39; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v40; // [rsp+3Ch] [rbp-CCh]
  __int128 v41; // [rsp+40h] [rbp-C8h] BYREF
  LARGE_INTEGER *v42; // [rsp+50h] [rbp-B8h] BYREF
  std::_Ref_count_base *v43; // [rsp+58h] [rbp-B0h]
  LONGLONG v44; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v45[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v46; // [rsp+78h] [rbp-90h]
  char v47; // [rsp+7Ch] [rbp-8Ch]
  struct _RTL_CRITICAL_SECTION CriticalSection; // [rsp+80h] [rbp-88h] BYREF
  __int128 v49; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v50; // [rsp+B8h] [rbp-50h]
  __int128 v51; // [rsp+C8h] [rbp-40h]
  __int128 v52; // [rsp+D8h] [rbp-30h]
  _QWORD v53[2]; // [rsp+E8h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  LARGE_INTEGER *v55; // [rsp+118h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+18h]
  LARGE_INTEGER *v57; // [rsp+128h] [rbp+20h]
  __int64 v58; // [rsp+130h] [rbp+28h]
  LONGLONG *v59; // [rsp+138h] [rbp+30h]
  __int64 v60; // [rsp+140h] [rbp+38h]
  char *v61; // [rsp+148h] [rbp+40h]
  __int64 v62; // [rsp+150h] [rbp+48h]
  LARGE_INTEGER *v63; // [rsp+158h] [rbp+50h]
  __int64 v64; // [rsp+160h] [rbp+58h]
  char *v65; // [rsp+168h] [rbp+60h]
  __int64 v66; // [rsp+170h] [rbp+68h]
  LARGE_INTEGER *v67; // [rsp+178h] [rbp+70h]
  __int64 v68; // [rsp+180h] [rbp+78h]
  LARGE_INTEGER *v69; // [rsp+188h] [rbp+80h]
  __int64 v70; // [rsp+190h] [rbp+88h]
  LARGE_INTEGER *v71; // [rsp+198h] [rbp+90h]
  __int64 v72; // [rsp+1A0h] [rbp+98h]
  LARGE_INTEGER *v73; // [rsp+1A8h] [rbp+A0h]
  __int64 v74; // [rsp+1B0h] [rbp+A8h]

  v44 = a2;
  v40 = 0;
  v45[1] = (__int64)v45;
  v46 = 0;
  v45[0] = (__int64)v45;
  v47 = 0;
  v7 = 0;
  InitializeCriticalSection(&CriticalSection);
  v41 = 0LL;
  if ( (unsigned int)(a3 - 1) <= 1 )
  {
    v39 = *(_DWORD *)(a1 + 88);
    v10 = 0LL;
    if ( v39 )
    {
      while ( 1 )
      {
        v11 = operator new(0x40uLL);
        std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>((__int64)&v41, (__int64)v11);
        v12 = v41;
        if ( !(_QWORD)v41 )
        {
          cData = 215;
          goto LABEL_14;
        }
        memset_0(&v49, 0, 0x40uLL);
        v13 = v50;
        *(_OWORD *)v12 = v49;
        v14 = v51;
        *(_OWORD *)(v12 + 16) = v13;
        v15 = v52;
        *(_OWORD *)(v12 + 32) = v14;
        *(_OWORD *)(v12 + 48) = v15;
        CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove(
          (__int64 *)(a1 + 72),
          (__int64 *)&v42,
          v16,
          &v39);
        v17 = v43;
        v18 = v10;
        v43 = 0LL;
        v10 = v17;
        v19 = (__int64)v42;
        v42 = 0LL;
        if ( v18 )
          std::_Ref_count_base::_Decref(v18);
        *(_DWORD *)(v12 + 32) = *(_DWORD *)v19;
        *(_WORD *)(v12 + 36) = *(_WORD *)(v19 + 44);
        *(_DWORD *)(v12 + 44) = *(_DWORD *)(v19 + 4);
        *(_DWORD *)(v12 + 40) = *(_DWORD *)(v19 + 8);
        *(_QWORD *)(v12 + 8) = *(_QWORD *)(v19 + 16);
        *(_QWORD *)(v12 + 16) = *(_QWORD *)(v19 + 24);
        *(_DWORD *)(v12 + 56) = *(_DWORD *)(v19 + 40);
        v20 = std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>(
                v53,
                (__int64 *)&v41);
        inserted = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::InsertTail((__int64)v45, v20);
        v40 = inserted;
        v7 = inserted;
        if ( inserted < 0 )
          break;
        if ( !v39 )
          goto LABEL_8;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0xE5u);
      if ( !v17 )
        goto LABEL_31;
      v24 = v17;
LABEL_17:
      std::_Ref_count_base::_Decref(v24);
      goto LABEL_31;
    }
LABEL_8:
    if ( a3 == 2 )
    {
      v22 = operator new(0x40uLL);
      std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>((__int64)&v41, (__int64)v22);
      v23 = (_OWORD *)v41;
      if ( !(_QWORD)v41 )
      {
        cData = 235;
LABEL_14:
        v7 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, cData);
        goto LABEL_15;
      }
      memset_0(&v49, 0, 0x40uLL);
      v25 = v50;
      *v23 = v49;
      v26 = v51;
      v23[1] = v25;
      v27 = v52;
      v23[2] = v26;
      v23[3] = v27;
      *((_QWORD *)v23 + 2) = a4;
      v28 = std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>(v53, (__int64 *)&v41);
      v29 = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::InsertTail((__int64)v45, v28);
      v40 = v29;
      v7 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xEFu);
LABEL_15:
        if ( !v10 )
          goto LABEL_31;
        v24 = v10;
        goto LABEL_17;
      }
    }
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
  }
  v39 = v46;
  if ( v46 )
  {
    v30 = v44;
    do
    {
      CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove(v45, (__int64 *)&v42, v9, &v39);
      v31 = (std::_Ref_count_base *)*((_QWORD *)&v41 + 1);
      v32 = v43;
      v33 = v42;
      v43 = 0LL;
      v42 = 0LL;
      *((_QWORD *)&v41 + 1) = v32;
      if ( v31 )
        std::_Ref_count_base::_Decref(v31);
      v33->QuadPart = v30;
      v33[6].LowPart = 1;
      QueryPerformanceCounter(v33 + 3);
      if ( dword_18023D7F0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
      {
        v55 = v33;
        v57 = v33 + 4;
        v56 = 8LL;
        v58 = 4LL;
        LODWORD(v44) = v33[6].LowPart;
        v59 = &v44;
        v61 = (char *)&v33[4].QuadPart + 4;
        v63 = v33 + 5;
        v65 = (char *)&v33[5].QuadPart + 4;
        v67 = v33 + 1;
        v69 = v33 + 2;
        v73 = v33 + 7;
        v60 = 4LL;
        v62 = v34;
        v64 = 4LL;
        v66 = 4LL;
        v68 = 8LL;
        v70 = 8LL;
        v71 = v33 + 3;
        v72 = 8LL;
        v74 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F946B, v35, v36, 0xCu, &pData);
      }
      (*(void (__fastcall **)(_QWORD, LARGE_INTEGER *))(**(_QWORD **)(*(_QWORD *)(a1 + 144) + 560LL) + 16LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 144) + 560LL),
        v33);
    }
    while ( v39 );
    v7 = v40;
  }
LABEL_31:
  if ( *((_QWORD *)&v41 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v41 + 1));
  CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::~CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>(
    (__int64)v45,
    v8,
    v9);
  return v7;
}
