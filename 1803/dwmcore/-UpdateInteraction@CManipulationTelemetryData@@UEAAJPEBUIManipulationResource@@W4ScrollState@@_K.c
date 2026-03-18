/*
 * XREFs of ?UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x1801D8F40
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180192D8C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPEAUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1801D8718 (--$reset@UTOUCH_TELEMETRY_UPDATE_INFO@@@-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@QEAAXPE.c)
 *     ??1?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ @ 0x1801D8770 (--1-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ.c)
 *     ?InsertTail@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1801D8B30 (-InsertTail@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV-$shared_ptr@UTOU.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x1801D8B84 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
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
  __int64 v19; // rsi
  std::_Ref_count_base *v20; // rcx
  __int64 v21; // rcx
  int inserted; // eax
  LPVOID v23; // rax
  _OWORD *v24; // rdi
  int v25; // r9d
  __int128 v26; // xmm1
  __int64 v27; // rcx
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  std::_Ref_count_base *v30; // rcx
  LARGE_INTEGER *v31; // rbx
  __int64 v32; // rdx
  DWORD LowPart; // eax
  unsigned int cData; // [rsp+28h] [rbp-E0h]
  int v36; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v37; // [rsp+48h] [rbp-C0h] BYREF
  DWORD v38; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v39; // [rsp+60h] [rbp-A8h] BYREF
  std::_Ref_count_base *v40[2]; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v41[2]; // [rsp+88h] [rbp-80h] BYREF
  int v42; // [rsp+98h] [rbp-70h]
  char v43; // [rsp+9Ch] [rbp-6Ch]
  struct _RTL_CRITICAL_SECTION CriticalSection; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v45; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v46; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v47[4]; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD v48[4]; // [rsp+128h] [rbp+20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+168h] [rbp+60h] BYREF
  LARGE_INTEGER *v50; // [rsp+188h] [rbp+80h]
  __int64 v51; // [rsp+190h] [rbp+88h]
  LARGE_INTEGER *v52; // [rsp+198h] [rbp+90h]
  __int64 v53; // [rsp+1A0h] [rbp+98h]
  DWORD *v54; // [rsp+1A8h] [rbp+A0h]
  __int64 v55; // [rsp+1B0h] [rbp+A8h]
  char *v56; // [rsp+1B8h] [rbp+B0h]
  __int64 v57; // [rsp+1C0h] [rbp+B8h]
  LARGE_INTEGER *v58; // [rsp+1C8h] [rbp+C0h]
  __int64 v59; // [rsp+1D0h] [rbp+C8h]
  char *v60; // [rsp+1D8h] [rbp+D0h]
  __int64 v61; // [rsp+1E0h] [rbp+D8h]
  LARGE_INTEGER *v62; // [rsp+1E8h] [rbp+E0h]
  __int64 v63; // [rsp+1F0h] [rbp+E8h]
  LARGE_INTEGER *v64; // [rsp+1F8h] [rbp+F0h]
  __int64 v65; // [rsp+200h] [rbp+F8h]
  LARGE_INTEGER *v66; // [rsp+208h] [rbp+100h]
  int v67; // [rsp+210h] [rbp+108h]
  int v68; // [rsp+214h] [rbp+10Ch]
  LARGE_INTEGER *v69; // [rsp+218h] [rbp+110h]
  int v70; // [rsp+220h] [rbp+118h]
  int v71; // [rsp+224h] [rbp+11Ch]

  v41[1] = v41;
  v5 = 0;
  v42 = 0;
  v41[0] = v41;
  v43 = 0;
  InitializeCriticalSection(&CriticalSection);
  v37 = 0LL;
  if ( (unsigned int)(a3 - 1) <= 1 )
  {
    v11 = 0LL;
    v36 = *(_DWORD *)(a1 + 88);
    if ( v36 )
    {
      while ( 1 )
      {
        v12 = operator new(0x40uLL);
        std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>(&v37, (__int64)v12);
        v13 = v37;
        if ( !(_QWORD)v37 )
          break;
        memset_0(v47, 0, sizeof(v47));
        v14 = v47[1];
        *(_OWORD *)v13 = v47[0];
        v15 = v47[2];
        *(_OWORD *)(v13 + 16) = v14;
        v16 = v47[3];
        *(_OWORD *)(v13 + 32) = v15;
        *(_OWORD *)(v13 + 48) = v16;
        CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove(a1 + 72, &v39, v17, &v36);
        v18 = v11;
        v19 = v39;
        v20 = v11;
        v11 = (std::_Ref_count_base *)*((_QWORD *)&v39 + 1);
        v39 = 0LL;
        if ( v18 )
          std::_Ref_count_base::_Decref(v20);
        v21 = *((_QWORD *)&v37 + 1);
        *(_DWORD *)(v13 + 32) = *(_DWORD *)v19;
        *(_WORD *)(v13 + 36) = *(_WORD *)(v19 + 44);
        *(_DWORD *)(v13 + 44) = *(_DWORD *)(v19 + 4);
        *(_DWORD *)(v13 + 40) = *(_DWORD *)(v19 + 8);
        *(_QWORD *)(v13 + 8) = *(_QWORD *)(v19 + 16);
        *(_QWORD *)(v13 + 16) = *(_QWORD *)(v19 + 24);
        *(_DWORD *)(v13 + 56) = *(_DWORD *)(v19 + 40);
        if ( v21 )
          _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
        v45 = v37;
        inserted = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::InsertTail((__int64)v41, (__int64 *)&v45);
        v5 = inserted;
        if ( inserted < 0 )
        {
          cData = 231;
          goto LABEL_14;
        }
        if ( !v36 )
          goto LABEL_10;
      }
      cData = 217;
      goto LABEL_16;
    }
LABEL_10:
    if ( a3 == 2 )
    {
      v23 = operator new(0x40uLL);
      std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>::reset<TOUCH_TELEMETRY_UPDATE_INFO>(&v37, (__int64)v23);
      v24 = (_OWORD *)v37;
      if ( !(_QWORD)v37 )
      {
        cData = 237;
LABEL_16:
        v25 = -2147024882;
        v5 = -2147024882;
LABEL_17:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, cData);
        if ( v11 )
          std::_Ref_count_base::_Decref(v11);
        goto LABEL_32;
      }
      memset_0(v48, 0, sizeof(v48));
      v26 = v48[1];
      v27 = *((_QWORD *)&v37 + 1);
      *v24 = v48[0];
      v28 = v48[2];
      v24[1] = v26;
      v29 = v48[3];
      v24[2] = v28;
      v24[3] = v29;
      *((_QWORD *)v24 + 2) = a4;
      if ( v27 )
        _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
      v46 = v37;
      inserted = CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::InsertTail((__int64)v41, (__int64 *)&v46);
      v5 = inserted;
      if ( inserted < 0 )
      {
        cData = 241;
LABEL_14:
        v25 = inserted;
        goto LABEL_17;
      }
    }
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  v36 = v42;
  while ( v36 )
  {
    CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove((__int64)v41, v40, v10, &v36);
    v30 = (std::_Ref_count_base *)*((_QWORD *)&v37 + 1);
    *((std::_Ref_count_base **)&v37 + 1) = v40[1];
    v31 = (LARGE_INTEGER *)v40[0];
    *(_OWORD *)v40 = 0LL;
    if ( v30 )
      std::_Ref_count_base::_Decref(v30);
    v31->QuadPart = a2;
    v31[6].LowPart = 1;
    QueryPerformanceCounter(v31 + 3);
    if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
    {
      v50 = v31;
      v52 = v31 + 4;
      v51 = 8LL;
      v53 = 4LL;
      LowPart = v31[6].LowPart;
      v68 = 0;
      v71 = 0;
      v38 = LowPart;
      v54 = &v38;
      v56 = (char *)&v31[4].QuadPart + 4;
      v58 = v31 + 5;
      v60 = (char *)&v31[5].QuadPart + 4;
      v62 = v31 + 1;
      v64 = v31 + 2;
      v69 = v31 + 7;
      v55 = 4LL;
      v57 = v32;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 8LL;
      v65 = 8LL;
      v66 = v31 + 3;
      v67 = 8;
      v70 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802AAE29, 0LL, 0LL, 0xCu, &pData);
    }
    (*(void (__fastcall **)(_QWORD, LARGE_INTEGER *))(**(_QWORD **)(*(_QWORD *)(a1 + 144) + 552LL) + 16LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 144) + 552LL),
      v31);
  }
LABEL_32:
  if ( *((_QWORD *)&v37 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v37 + 1));
  CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::~CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>(
    (__int64)v41,
    v9,
    v10);
  return v5;
}
