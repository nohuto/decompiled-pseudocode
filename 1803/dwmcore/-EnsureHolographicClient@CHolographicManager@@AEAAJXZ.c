/*
 * XREFs of ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1801F879C
 * Callers:
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x1801F7C84 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B8C88 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800C6D9C (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800C6DB8 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?HolographicClientCreated_@CompositorTracing@@QEAAXXZ @ 0x1801F8AE4 (-HolographicClientCreated_@CompositorTracing@@QEAAXXZ.c)
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x1801FE910 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1801FEEC4 (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CHolographicManager::EnsureHolographicClient(CHolographicManager *this)
{
  CMILCOMBase *v1; // rsi
  struct CHolographicInteropTaskQueue *v2; // r14
  struct CHolographicInteropTaskQueue *v3; // rdi
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // eax
  CMILCOMBase *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  CompositorTracing *v11; // rcx
  CMILCOMBase *v13; // [rsp+60h] [rbp+30h] BYREF
  struct CHolographicInteropTaskQueue *v14; // [rsp+68h] [rbp+38h] BYREF
  struct CHolographicInteropTaskQueue *v15; // [rsp+70h] [rbp+40h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v13 = 0LL;
  v4 = 0;
  v14 = 0LL;
  v15 = 0LL;
  if ( !*((_QWORD *)this + 4) )
  {
    v6 = CHolographicInteropTaskQueue::Create(&v15);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x26Au);
      v3 = v15;
    }
    else
    {
      v3 = v15;
      v7 = CHolographicClient::Create(v15, &v14, &v13);
      v4 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x26Bu);
        v1 = v13;
        v2 = v14;
      }
      else
      {
        v1 = v13;
        v8 = v13;
        *((_QWORD *)this + 4) = v13;
        CMILCOMBase::InternalAddRef(v8);
        *((_QWORD *)this + 5) = v3;
        (**(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))v3)(v3);
        v2 = v14;
        *((_QWORD *)this + 6) = v14;
        (**(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))v2)(v2);
        if ( CompositorTracing::IsEnabled(v9) )
        {
          wil::details::static_lazy<CompositorTracing>::get(
            v10,
            (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
          CompositorTracing::HolographicClientCreated_(v11);
        }
      }
    }
  }
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v2);
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v3);
  if ( v1 )
    CMILCOMBase::InternalRelease(v1);
  return v4;
}
