/*
 * XREFs of ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1801C28A0
 * Callers:
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1801C05D8 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z @ 0x1801C25D8 (--0CHolographicClient@@IEAA@PEAVCHolographicInteropTaskQueue@@0@Z.c)
 *     ?EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ @ 0x1801C2B70 (-EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ.c)
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x1801C3C98 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CHolographicClient::Create(
        struct CHolographicInteropTaskQueue *a1,
        struct CHolographicInteropTaskQueue **a2,
        LARGE_INTEGER **a3)
{
  LARGE_INTEGER *v4; // rdi
  signed int v7; // eax
  struct CHolographicInteropTaskQueue *v8; // rsi
  signed int v9; // ebx
  CHolographicClient *v10; // rax
  int AnalogExclusiveTokenEvent; // ebx
  signed int v12; // eax
  struct CHolographicInteropTaskQueue *v14; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v14 = 0LL;
  v7 = CHolographicInteropTaskQueue::Create(&v14);
  v8 = v14;
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x17u);
  }
  else
  {
    v10 = (CHolographicClient *)operator new(0xE8uLL);
    if ( v10 )
      v4 = (LARGE_INTEGER *)CHolographicClient::CHolographicClient(v10, a1, v8);
    if ( !v4 )
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1Au);
      goto LABEL_17;
    }
    CMILCOMBase::InternalAddRef((CMILCOMBase *)v4);
    AnalogExclusiveTokenEvent = NtTokenManagerGetAnalogExclusiveTokenEvent(&v4[25]);
    if ( AnalogExclusiveTokenEvent >= 0 )
    {
      v12 = CHolographicClient::EnsureHolographicCompositor((CHolographicClient *)v4);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x68u);
      else
        QueryPerformanceFrequency(v4 + 28);
    }
    else
    {
      v9 = AnalogExclusiveTokenEvent | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x66u);
    }
    if ( v9 >= 0 )
    {
      *a2 = v8;
      v8 = 0LL;
      *a3 = v4;
      goto LABEL_17;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x1Du);
  }
  if ( v4 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)v4);
LABEL_17:
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v8);
  return (unsigned int)v9;
}
