/*
 * XREFs of ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1801C05D8
 * Callers:
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAUHOLOGRAPHIC_COMPOSITION_DESC@@@Z @ 0x1801BFC04 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAUHOLOGRAPHIC_COMPOSITION_DESC@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??$HolographicClientCreated@$$V@CompositorTracing@@SAXXZ @ 0x1801BF638 (--$HolographicClientCreated@$$V@CompositorTracing@@SAXXZ.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1801C28A0 (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x1801C3C98 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CHolographicManager::EnsureHolographicClient(CHolographicManager *this)
{
  CMILCOMBase *v1; // rsi
  struct CHolographicInteropTaskQueue *v2; // r14
  struct CHolographicInteropTaskQueue *v3; // rdi
  unsigned int v4; // ebx
  signed int v6; // eax
  signed int v7; // eax
  CMILCOMBase *v8; // rcx
  CMILCOMBase *v10; // [rsp+60h] [rbp+30h] BYREF
  struct CHolographicInteropTaskQueue *v11; // [rsp+68h] [rbp+38h] BYREF
  struct CHolographicInteropTaskQueue *v12; // [rsp+70h] [rbp+40h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v10 = 0LL;
  v4 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( !*((_QWORD *)this + 4) )
  {
    v6 = CHolographicInteropTaskQueue::Create(&v12);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x21Bu);
      v3 = v12;
    }
    else
    {
      v3 = v12;
      v7 = CHolographicClient::Create(v12, &v11, &v10);
      v4 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x21Cu);
        v1 = v10;
        v2 = v11;
      }
      else
      {
        v1 = v10;
        v8 = v10;
        *((_QWORD *)this + 4) = v10;
        CMILCOMBase::InternalAddRef(v8);
        *((_QWORD *)this + 5) = v3;
        (**(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))v3)(v3);
        v2 = v11;
        *((_QWORD *)this + 6) = v11;
        (**(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))v2)(v2);
        CompositorTracing::HolographicClientCreated<>();
      }
    }
  }
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v2);
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v3);
  if ( v1 )
    CMILCOMBase::InternalRelease(v1);
  return v4;
}
