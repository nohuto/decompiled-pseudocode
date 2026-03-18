/*
 * XREFs of ?SendUpdateToRenderThread@CManipulationTelemetryData@@UEAAJXZ @ 0x1801D8C40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180025A88 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18002D4FC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost@@@Z @ 0x180191CAC (-GetManipulationThreadMessageCallSendHost@CManipulationManager@@QEAAJPEAPEAUIMessageCallSendHost.c)
 */

__int64 __fastcall CManipulationTelemetryData::SendUpdateToRenderThread(CManipulationTelemetryData *this)
{
  CManipulationTelemetryData *v2; // r9
  int ManipulationManager; // eax
  unsigned int v4; // edi
  CManipulationManager *v5; // rbx
  __int64 v6; // rbx
  __int128 v7; // xmm1
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  CManipulationManager *v10; // [rsp+40h] [rbp-C0h] BYREF
  struct IMessageCallSendHost *v11; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+54h] [rbp-ACh] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  CManipulationTelemetryData *v16; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-90h] BYREF
  CManipulationTelemetryData *v18; // [rsp+78h] [rbp-88h] BYREF
  __int64 v19; // [rsp+80h] [rbp-80h] BYREF
  __int128 v20; // [rsp+90h] [rbp-70h]
  __int128 v21; // [rsp+A0h] [rbp-60h]
  __int128 v22; // [rsp+B0h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  CManipulationTelemetryData **v24; // [rsp+E0h] [rbp-20h]
  __int64 v25; // [rsp+E8h] [rbp-18h]
  int *v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  int *v28; // [rsp+100h] [rbp+0h]
  __int64 v29; // [rsp+108h] [rbp+8h]
  int *v30; // [rsp+110h] [rbp+10h]
  __int64 v31; // [rsp+118h] [rbp+18h]
  __int64 *v32; // [rsp+120h] [rbp+20h]
  __int64 v33; // [rsp+128h] [rbp+28h]
  __int64 *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  CManipulationTelemetryData **v36; // [rsp+140h] [rbp+40h]
  __int64 v37; // [rsp+148h] [rbp+48h]
  CManipulationManager **v38; // [rsp+150h] [rbp+50h]
  __int64 v39; // [rsp+158h] [rbp+58h]
  struct IMessageCallSendHost **v40; // [rsp+160h] [rbp+60h]
  __int64 v41; // [rsp+168h] [rbp+68h]

  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  *((LARGE_INTEGER *)this + 7) = PerformanceCount;
  if ( dword_1802D3FE0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
  {
    v18 = this;
    v24 = &v18;
    v12 = *((_DWORD *)this + 6);
    v26 = &v12;
    v13 = *((_DWORD *)this + 7);
    v28 = &v13;
    v14 = *((_DWORD *)this + 8);
    v30 = &v14;
    v19 = *((_QWORD *)this + 5);
    v32 = &v19;
    v15 = *((_QWORD *)this + 6);
    v34 = &v15;
    v36 = &v16;
    LODWORD(v10) = *((_DWORD *)this + 16);
    v38 = &v10;
    LODWORD(v11) = *((_DWORD *)this + 17);
    v40 = &v11;
    v25 = 8LL;
    v27 = 4LL;
    v29 = 4LL;
    v31 = 4LL;
    v33 = 8LL;
    v35 = 8LL;
    v16 = v2;
    v37 = 8LL;
    v39 = 4LL;
    v41 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802AB100, 0LL, 0LL, 0xBu, &pData);
  }
  v10 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v10);
  ManipulationManager = CComposition::GetManipulationManager(*((CComposition **)this + 18), &v10);
  v4 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cData = 46;
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  v5 = v10;
  ManipulationManager = CManipulationManager::GetManipulationThreadMessageCallSendHost(v10, &v11);
  v4 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cData = 48;
    goto LABEL_13;
  }
  v6 = *((_QWORD *)v5 + 47);
  v4 = v6 == 0 ? 0x80004005 : 0;
  if ( !v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x33u);
    goto LABEL_14;
  }
  (**(void (__fastcall ***)(CManipulationTelemetryData *))this)(this);
  v7 = *(_OWORD *)((char *)this + 40);
  v20 = *(_OWORD *)((char *)this + 24);
  v22 = *(_OWORD *)((char *)this + 56);
  v21 = v7;
  v16 = this;
  v15 = v6;
  ManipulationManager = CoreUICallSend(v11, &v15, 1LL, 10LL, 0, &unk_180239CD3);
  v4 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    cData = 60;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ManipulationManager, cData);
    goto LABEL_14;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 18) + 552LL) + 104LL))(
    *(_QWORD *)(*((_QWORD *)this + 18) + 552LL),
    0LL,
    0x4000LL);
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v10);
  return v4;
}
