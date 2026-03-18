/*
 * XREFs of ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x1801FE910
 * Callers:
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1801F879C (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1801FEEC4 (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B8C88 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0CHolographicInteropTaskQueue@@AEAA@XZ @ 0x1801FE7CC (--0CHolographicInteropTaskQueue@@AEAA@XZ.c)
 *     ?Initialize@CHolographicInteropTaskQueue@@AEAAJXZ @ 0x1801FE9B0 (-Initialize@CHolographicInteropTaskQueue@@AEAAJXZ.c)
 */

__int64 __fastcall CHolographicInteropTaskQueue::Create(struct CHolographicInteropTaskQueue **a1)
{
  CHolographicInteropTaskQueue *v2; // rax
  CHolographicInteropTaskQueue *v3; // rbx
  unsigned int v4; // edi
  int v5; // eax
  void (__fastcall **v6)(CHolographicInteropTaskQueue *); // rcx

  v2 = (CHolographicInteropTaskQueue *)operator new(0x40uLL);
  if ( v2 )
    v3 = CHolographicInteropTaskQueue::CHolographicInteropTaskQueue(v2);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v5 = CHolographicInteropTaskQueue::Initialize(v3);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x12u);
    }
    else
    {
      v6 = *(void (__fastcall ***)(CHolographicInteropTaskQueue *))v3;
      *a1 = v3;
      (*v6)(v3);
      v3 = 0LL;
    }
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x10u);
  }
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v3);
  return v4;
}
