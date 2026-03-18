/*
 * XREFs of ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x1801A8BB8
 * Callers:
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJPEA_N@Z @ 0x1801A5F0C (-EnsureHolographicClient@CHolographicManager@@AEAAJPEA_N@Z.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1801A7690 (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B5384 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CHolographicInteropTaskQueue@@AEAA@XZ @ 0x1801A8A8C (--0CHolographicInteropTaskQueue@@AEAA@XZ.c)
 */

__int64 __fastcall CHolographicInteropTaskQueue::Create(struct CHolographicInteropTaskQueue **a1)
{
  unsigned int v2; // ebx
  CHolographicInteropTaskQueue *v3; // rax
  CHolographicInteropTaskQueue *v4; // rdi

  v2 = 0;
  v3 = (CHolographicInteropTaskQueue *)operator new(0x30uLL);
  if ( v3 )
    v4 = CHolographicInteropTaskQueue::CHolographicInteropTaskQueue(v3);
  else
    v4 = 0LL;
  if ( v4 )
  {
    (**(void (__fastcall ***)(CHolographicInteropTaskQueue *))v4)(v4);
    *a1 = v4;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x10u);
  }
  ReleaseInterfaceNoNULL<CPolygon>(0LL);
  return v2;
}
