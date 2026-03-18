/*
 * XREFs of ?UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x18019FE70
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAA@AEBV01@@Z @ 0x180169068 (--0-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18016A458 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18019F658 (--$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPE.c)
 *     ??1?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ @ 0x18019F69C (--1-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ.c)
 *     ?InsertTail@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x18019FA7C (-InsertTail@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV-$shared_ptr@UTOU.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x18019FAC0 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 */

__int64 __fastcall CManipulationTelemetryData::UpdateInteraction(__int64 a1, LONGLONG a2, int a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  std::_Ref_count_base *v11; // rbx
  LPVOID v12; // rax
  __int64 v13; // rdi
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // r8
  std::_Ref_count_base *v18; // rax
  std::_Ref_count_base *v19; // rcx
  __int64 v20; // rsi
  __int64 *v21; // rax
  int inserted; // eax
  LPVOID v23; // rax
  _OWORD *v24; // rdi
  DWORD v25; // r9d
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 *v29; // rax
  std::_Ref_count_base *v30; // rax
  std::_Ref_count_base *v31; // rcx
  LARGE_INTEGER *v32; // rbx
  __int64 v33; // rdx
  const GUID *v34; // r8
  const GUID *v35; // r9
  DWORD LowPart; // eax
  unsigned int cData; // [rsp+28h] [rbp-E0h]
  int v39; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v40; // [rsp+40h] [rbp-C8h] BYREF
  LARGE_INTEGER *v41; // [rsp+50h] [rbp-B8h] BYREF
  std::_Ref_count_base *v42; // [rsp+58h] [rbp-B0h]
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v44[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v45; // [rsp+78h] [rbp-90h]
  char v46; // [rsp+7Ch] [rbp-8Ch]
  struct _RTL_CRITICAL_SECTION CriticalSection; // [rsp+80h] [rbp-88h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-50h]
  __int128 v50; // [rsp+C8h] [rbp-40h]
  __int128 v51; // [rsp+D8h] [rbp-30h]
  _QWORD v52[2]; // [rsp+E8h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F8h] [rbp-10h] BYREF
  LARGE_INTEGER *v54; // [rsp+118h] [rbp+10h]
  __int64 v55; // [rsp+120h] [rbp+18h]
  LARGE_INTEGER *v56; // [rsp+128h] [rbp+20h]
  __int64 v57; // [rsp+130h] [rbp+28h]
  __int64 *v58; // [rsp+138h] [rbp+30h]
  __int64 v59; // [rsp+140h] [rbp+38h]
  char *v60; // [rsp+148h] [rbp+40h]
  __int64 v61; // [rsp+150h] [rbp+48h]
  LARGE_INTEGER *v62; // [rsp+158h] [rbp+50h]
  __int64 v63; // [rsp+160h] [rbp+58h]
  char *v64; // [rsp+168h] [rbp+60h]
  __int64 v65; // [rsp+170h] [rbp+68h]
  LARGE_INTEGER *v66; // [rsp+178h] [rbp+70h]
  __int64 v67; // [rsp+180h] [rbp+78h]
  LARGE_INTEGER *v68; // [rsp+188h] [rbp+80h]
  __int64 v69; // [rsp+190h] [rbp+88h]
  LARGE_INTEGER *v70; // [rsp+198h] [rbp+90h]
  int v71; // [rsp+1A0h] [rbp+98h]
  int v72; // [rsp+1A4h] [rbp+9Ch]
  LARGE_INTEGER *v73; // [rsp+1A8h] [rbp+A0h]
  int v74; // [rsp+1B0h] [rbp+A8h]
  int v75; // [rsp+1B4h] [rbp+ACh]

  v44[1] = v44;
  v5 = 0;
  v45 = 0;
  v44[0] = v44;
  v46 = 0;
  InitializeCriticalSection(&CriticalSection);
  v40 = 0LL;
  if ( (unsigned int)(a3 - 1) <= 1 )
  {
    v11 = 0LL;
    v39 = *(_DWORD *)(a1 + 88);
    if ( v39 )
    {
      while ( 1 )
      {
        v12 = operator new(0x40uLL);
        std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>((__int64)&v40, (__int64)v12);
        v13 = v40;
        if ( !(_QWORD)v40 )
          break;
        memset_0(&v48, 0, 0x40uLL);
        v14 = v49;
        *(_OWORD *)v13 = v48;
        v15 = v50;
        *(_OWORD *)(v13 + 16) = v14;
        v16 = v51;
        *(_OWORD *)(v13 + 32) = v15;
        *(_OWORD *)(v13 + 48) = v16;
        CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove(a1 + 72, (__int64 *)&v41, v17, &v39);
        v18 = v42;
        v42 = 0LL;
        v19 = v11;
        v20 = (__int64)v41;
        v11 = v18;
        v41 = 0LL;
        if ( v19 )
          std::_Ref_count_base::_Decref(v19);
        *(_DWORD *)(v13 + 32) = *(_DWORD *)v20;
        *(_WORD *)(v13 + 36) = *(_WORD *)(v20 + 44);
        *(_DWORD *)(v13 + 44) = *(_DWORD *)(v20 + 4);
        *(_DWORD *)(v13 + 40) = *(_DWORD *)(v20 + 8);
        *(_QWORD *)(v13 + 8) = *(_QWORD *)(v20 + 16);
        *(_QWORD *)(v13 + 16) = *(_QWORD *)(v20 + 24);
        *(_DWORD *)(v13 + 56) = *(_DWORD *)(v20 + 40);
        v21 = std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>(
                v52,
                (__int64 *)&v40);
        inserted = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::InsertTail((__int64)v44, v21);
        v5 = inserted;
        if ( inserted < 0 )
        {
          cData = 231;
          goto LABEL_12;
        }
        if ( !v39 )
          goto LABEL_8;
      }
      cData = 217;
      goto LABEL_14;
    }
LABEL_8:
    if ( a3 == 2 )
    {
      v23 = operator new(0x40uLL);
      std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>((__int64)&v40, (__int64)v23);
      v24 = (_OWORD *)v40;
      if ( !(_QWORD)v40 )
      {
        cData = 237;
LABEL_14:
        v25 = -2147024882;
        v5 = -2147024882;
LABEL_15:
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, cData);
        if ( v11 )
          std::_Ref_count_base::_Decref(v11);
        goto LABEL_28;
      }
      memset_0(&v48, 0, 0x40uLL);
      v26 = v49;
      *v24 = v48;
      v27 = v50;
      v24[1] = v26;
      v28 = v51;
      v24[2] = v27;
      v24[3] = v28;
      *((_QWORD *)v24 + 2) = a4;
      v29 = std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>(v52, (__int64 *)&v40);
      inserted = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::InsertTail((__int64)v44, v29);
      v5 = inserted;
      if ( inserted < 0 )
      {
        cData = 241;
LABEL_12:
        v25 = inserted;
        goto LABEL_15;
      }
    }
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  v39 = v45;
  while ( v39 )
  {
    CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove((__int64)v44, (__int64 *)&v41, v10, &v39);
    v30 = v42;
    v31 = (std::_Ref_count_base *)*((_QWORD *)&v40 + 1);
    v32 = v41;
    v42 = 0LL;
    v41 = 0LL;
    *((_QWORD *)&v40 + 1) = v30;
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
    v32->QuadPart = a2;
    v32[6].LowPart = 1;
    QueryPerformanceCounter(v32 + 3);
    if ( dword_18026D7B0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
    {
      v54 = v32;
      v56 = v32 + 4;
      v55 = 8LL;
      v57 = 4LL;
      LowPart = v32[6].LowPart;
      v72 = 0;
      v75 = 0;
      LODWORD(v43) = LowPart;
      v58 = &v43;
      v60 = (char *)&v32[4].QuadPart + 4;
      v62 = v32 + 5;
      v64 = (char *)&v32[5].QuadPart + 4;
      v66 = v32 + 1;
      v68 = v32 + 2;
      v73 = v32 + 7;
      v59 = 4LL;
      v61 = v33;
      v63 = 4LL;
      v65 = 4LL;
      v67 = 8LL;
      v69 = 8LL;
      v70 = v32 + 3;
      v71 = 8;
      v74 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180215F5A, v34, v35, 0xCu, &pData);
    }
    (*(void (__fastcall **)(_QWORD, LARGE_INTEGER *))(**(_QWORD **)(*(_QWORD *)(a1 + 144) + 528LL) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 144) + 528LL),
      v32);
  }
LABEL_28:
  if ( *((_QWORD *)&v40 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v40 + 1));
  CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::~CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>(
    (__int64)v44,
    v9,
    v10);
  return v5;
}
