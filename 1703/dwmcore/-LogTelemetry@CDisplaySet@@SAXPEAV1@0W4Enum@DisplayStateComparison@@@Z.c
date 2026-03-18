/*
 * XREFs of ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800B4F90
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18007EDA4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800B51C4 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     _lambda_ca566115aef6b39caf1743d59f95867e_::operator() @ 0x1800B51E4 (_lambda_ca566115aef6b39caf1743d59f95867e_--operator().c)
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CDisplaySet::LogTelemetry(__int64 a1, __int64 a2, int a3)
{
  LPVOID v4; // rbx
  LPVOID v7; // rsi
  LPVOID v8; // rax
  __int64 v9; // rcx
  LPVOID v10; // rax
  __int64 v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  unsigned __int16 v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v17; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 v18; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v19; // [rsp+3Ch] [rbp-C4h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID v21; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID v22[2]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  GUID *v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  int *v26; // [rsp+90h] [rbp-70h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  LPVOID v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+BCh] [rbp-44h]
  unsigned __int16 *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  LPVOID v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  unsigned __int16 *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]

  v21 = 0LL;
  v16 = 0;
  v4 = 0LL;
  v22[0] = 0LL;
  v17 = 0;
  v18 = 0;
  v7 = 0LL;
  v19 = 0;
  if ( a1 )
  {
    v17 = *(_WORD *)(a1 + 72);
    v16 = 12 * v17;
    v8 = operator new(saturated_mul((unsigned __int16)(12 * v17), 8uLL));
    v21 = v8;
    v7 = v8;
    if ( !v8 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x597u);
      goto LABEL_10;
    }
    lambda_ca566115aef6b39caf1743d59f95867e_::operator()(v9, a1, v17, v8);
  }
  if ( a2 )
  {
    v19 = *(_WORD *)(a2 + 72);
    v18 = 12 * v19;
    v10 = operator new(saturated_mul((unsigned __int16)(12 * v19), 8uLL));
    v22[0] = v10;
    v4 = v10;
    if ( !v10 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x5A5u);
      goto LABEL_10;
    }
    lambda_ca566115aef6b39caf1743d59f95867e_::operator()(v11, a2, v19, v10);
  }
  if ( dword_18023D720 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D720, 0x400000000000uLL) )
  {
    v25 = 16LL;
    v24 = &gDwmCoreTelemetryActivityId;
    v26 = &v20;
    v28 = &v16;
    v31 = 8 * v16;
    v33 = &v17;
    v35 = &v18;
    v38 = 8 * v18;
    v40 = &v19;
    v20 = a3;
    v27 = 4LL;
    v29 = 2LL;
    v30 = v7;
    v32 = 0;
    v34 = 2LL;
    v36 = 2LL;
    v37 = v4;
    v39 = 0;
    v41 = 2LL;
    TlgWrite(v12, &unk_1801F8213, v13, v14, 0xAu, &pData);
  }
LABEL_10:
  SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(&v21);
  return SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>(v22);
}
