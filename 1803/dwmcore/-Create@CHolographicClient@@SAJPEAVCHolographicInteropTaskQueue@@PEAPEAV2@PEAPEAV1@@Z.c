/*
 * XREFs of ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1801FEEC4
 * Callers:
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1801F879C (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B8C88 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x1801FE910 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 *     ??0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z @ 0x1801FEC1C (--0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z.c)
 *     ?EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ @ 0x1801FF1A8 (-EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicClient::Create(
        struct CHolographicInteropTaskQueue *a1,
        struct CHolographicInteropTaskQueue **a2,
        LARGE_INTEGER **a3)
{
  LARGE_INTEGER *v4; // rdi
  int v7; // eax
  struct CHolographicInteropTaskQueue *v8; // rbp
  int v9; // ebx
  CHolographicClient *v10; // rax
  int AnalogExclusiveTokenEvent; // ebx
  int v12; // eax
  unsigned int v13; // eax
  struct CHolographicInteropTaskQueue *v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v15 = 0LL;
  v7 = CHolographicInteropTaskQueue::Create(&v15);
  v8 = v15;
  v9 = v7;
  if ( v7 < 0 )
  {
    v13 = 23;
  }
  else
  {
    v10 = (CHolographicClient *)operator new(0x108uLL);
    if ( v10 )
      v4 = (LARGE_INTEGER *)CHolographicClient::CHolographicClient(v10, a1, v8);
    if ( !v4 )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Au);
      goto LABEL_17;
    }
    CMILCOMBase::InternalAddRef((CMILCOMBase *)v4);
    AnalogExclusiveTokenEvent = NtTokenManagerGetAnalogExclusiveTokenEvent(&v4[29]);
    if ( AnalogExclusiveTokenEvent >= 0 )
    {
      v12 = CHolographicClient::EnsureHolographicCompositor((CHolographicClient *)v4);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x69u);
      else
        QueryPerformanceFrequency(v4 + 32);
    }
    else
    {
      v9 = AnalogExclusiveTokenEvent | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x67u);
    }
    if ( v9 >= 0 )
    {
      *a2 = v8;
      v8 = 0LL;
      *a3 = v4;
      goto LABEL_17;
    }
    v13 = 29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v13);
  if ( v4 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)v4);
LABEL_17:
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v8);
  return (unsigned int)v9;
}
