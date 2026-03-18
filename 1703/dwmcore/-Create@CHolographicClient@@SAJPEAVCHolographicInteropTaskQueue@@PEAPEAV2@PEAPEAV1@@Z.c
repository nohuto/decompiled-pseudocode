/*
 * XREFs of ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1801A7690
 * Callers:
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJPEA_N@Z @ 0x1801A5F0C (-EnsureHolographicClient@CHolographicManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B5384 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ??0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z @ 0x1801A73BC (--0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z.c)
 *     ?EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ @ 0x1801A7990 (-EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ.c)
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x1801A8BB8 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CHolographicClient::Create(
        struct CHolographicInteropTaskQueue *a1,
        struct CHolographicInteropTaskQueue **a2,
        LARGE_INTEGER **a3)
{
  LARGE_INTEGER *v4; // rdi
  int v7; // eax
  struct CHolographicInteropTaskQueue *v8; // rsi
  int v9; // ebx
  CHolographicClient *v10; // rax
  int AnalogExclusiveTokenEvent; // ebx
  int v12; // eax
  struct CHolographicInteropTaskQueue *v14; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v14 = 0LL;
  v7 = CHolographicInteropTaskQueue::Create(&v14);
  v8 = v14;
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x17u);
  }
  else
  {
    v10 = (CHolographicClient *)operator new(0xF0uLL);
    if ( v10 )
      v4 = (LARGE_INTEGER *)CHolographicClient::CHolographicClient(v10, a1, v8);
    if ( !v4 )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1Au);
      goto LABEL_17;
    }
    CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)v4);
    AnalogExclusiveTokenEvent = NtTokenManagerGetAnalogExclusiveTokenEvent(&v4[26]);
    if ( AnalogExclusiveTokenEvent >= 0 )
    {
      v12 = CHolographicClient::EnsureHolographicCompositor((CHolographicClient *)v4);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x6Du);
      else
        QueryPerformanceFrequency(v4 + 29);
    }
    else
    {
      v9 = AnalogExclusiveTokenEvent | 0x10000000;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x6Bu);
    }
    if ( v9 >= 0 )
    {
      *a2 = v8;
      v8 = 0LL;
      *a3 = v4;
      goto LABEL_17;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1Du);
  }
  if ( v4 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)v4);
LABEL_17:
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v8);
  return (unsigned int)v9;
}
