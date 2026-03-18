/*
 * XREFs of ?SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ @ 0x1801914B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D8E4 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18005B588 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x180166940 (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 */

__int64 __fastcall CManipulationTelemetryData::SendUpdateToRenderThread(CManipulationTelemetryData *this)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  struct IMessageCallSendHost *v4; // rbx
  int ManipulationManager; // eax
  unsigned int v6; // edi
  struct CManipulationManager *v7; // rbx
  int v8; // eax
  __int64 v9; // rbx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // eax
  struct CManipulationManager *v14; // [rsp+40h] [rbp-C0h] BYREF
  struct IMessageCallSendHost *v15; // [rsp+48h] [rbp-B8h] BYREF
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  int v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  CManipulationTelemetryData *v20; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-90h] BYREF
  CManipulationTelemetryData *v22; // [rsp+78h] [rbp-88h] BYREF
  __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  __int128 v24; // [rsp+90h] [rbp-70h]
  __int128 v25; // [rsp+A0h] [rbp-60h]
  __int128 v26; // [rsp+B0h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  CManipulationTelemetryData **v28; // [rsp+E0h] [rbp-20h]
  __int64 v29; // [rsp+E8h] [rbp-18h]
  int *v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+F8h] [rbp-8h]
  int *v32; // [rsp+100h] [rbp+0h]
  __int64 v33; // [rsp+108h] [rbp+8h]
  int *v34; // [rsp+110h] [rbp+10h]
  __int64 v35; // [rsp+118h] [rbp+18h]
  __int64 *v36; // [rsp+120h] [rbp+20h]
  __int64 v37; // [rsp+128h] [rbp+28h]
  __int64 *v38; // [rsp+130h] [rbp+30h]
  __int64 v39; // [rsp+138h] [rbp+38h]
  CManipulationTelemetryData **v40; // [rsp+140h] [rbp+40h]
  __int64 v41; // [rsp+148h] [rbp+48h]
  struct CManipulationManager **v42; // [rsp+150h] [rbp+50h]
  __int64 v43; // [rsp+158h] [rbp+58h]
  struct IMessageCallSendHost **v44; // [rsp+160h] [rbp+60h]
  __int64 v45; // [rsp+168h] [rbp+68h]

  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  *((LARGE_INTEGER *)this + 7) = PerformanceCount;
  if ( dword_18023D7F0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
  {
    v22 = this;
    v28 = &v22;
    v16 = *((_DWORD *)this + 6);
    v30 = &v16;
    v17 = *((_DWORD *)this + 7);
    v32 = &v17;
    v18 = *((_DWORD *)this + 8);
    v34 = &v18;
    v23 = *((_QWORD *)this + 5);
    v36 = &v23;
    v19 = *((_QWORD *)this + 6);
    v38 = &v19;
    v40 = &v20;
    LODWORD(v14) = *((_DWORD *)this + 16);
    v42 = &v14;
    LODWORD(v15) = *((_DWORD *)this + 17);
    v44 = &v15;
    v29 = 8LL;
    v31 = 4LL;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 8LL;
    v39 = 8LL;
    v20 = (CManipulationTelemetryData *)v3;
    v41 = 8LL;
    v43 = 4LL;
    v45 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F9787, v2, v3, 0xBu, &pData);
  }
  v4 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v14);
  ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 18), &v14);
  v6 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ManipulationManager, 0x2Eu);
    goto LABEL_14;
  }
  v7 = v14;
  v8 = CManipulationManager::GetManipulationThreadMessageCallSendHost(v14, &v15);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x30u);
    goto LABEL_12;
  }
  v9 = *((unsigned int *)v7 + 94);
  v6 = (_DWORD)v9 == 0 ? 0x80004005 : 0;
  if ( !(_DWORD)v9 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x33u);
LABEL_12:
    v4 = v15;
    goto LABEL_14;
  }
  (**(void (__fastcall ***)(CManipulationTelemetryData *))this)(this);
  v10 = *(_OWORD *)((char *)this + 40);
  v24 = *(_OWORD *)((char *)this + 24);
  v11 = *(_OWORD *)((char *)this + 56);
  v19 = v9;
  v4 = v15;
  v26 = v11;
  v25 = v10;
  v20 = this;
  v12 = CoreUICallSend(v15, &v19, 1LL, 6LL, 0, &unk_1801D541E);
  v6 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x3Cu);
  else
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 18) + 560LL) + 104LL))(*(_QWORD *)(*((_QWORD *)this + 18) + 560LL));
LABEL_14:
  if ( v4 )
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)v4 + 16LL))(v4);
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v14);
  return v6;
}
