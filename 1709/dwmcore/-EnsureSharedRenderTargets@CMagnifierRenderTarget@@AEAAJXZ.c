/*
 * XREFs of ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x180137EB8
 * Callers:
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x180137E60 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180138158 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureSharedRenderTargets(CMagnifierRenderTarget *this)
{
  signed int v1; // ebx
  unsigned int v3; // esi
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  signed int v9; // eax
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  struct IRenderTargetBitmap *v12; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v12 = 0LL;
  v11 = 0;
  if ( *((_DWORD *)this + 86) )
  {
    v3 = 0;
    v4 = v11;
    while ( 1 )
    {
      v5 = v4;
      v6 = CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
             this,
             *((void **)this + 4 * v3 + 45),
             *(struct _LUID *)((char *)this + 32 * v3 + 368),
             *((HMONITOR *)this + 4 * v3 + 47),
             &v12);
      v11 = v6;
      v1 = v6;
      if ( v6 < 0 )
        break;
      v7 = *((unsigned int *)this + 60);
      v8 = v7 + 1;
      v4 = v7 + 1;
      if ( (int)v7 + 1 < (unsigned int)v7 )
        v4 = v5;
      v1 = v8 < (unsigned int)v7 ? 0x80070216 : 0;
      if ( v8 < (unsigned int)v7 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, 0xB5u);
      }
      else if ( v4 > *((_DWORD *)this + 59) )
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 216, 8u, 1, &v12);
        v1 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 27) + 8 * v7) = v12;
        *((_DWORD *)this + 60) = v4;
      }
      v11 = v1;
      if ( v1 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, v1, 0x198u);
        goto LABEL_17;
      }
      v12 = 0LL;
      if ( ++v3 >= *((_DWORD *)this + 86) )
        goto LABEL_17;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_18021BE18, 1u, v6, 0x195u);
  }
LABEL_17:
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v12);
  if ( v1 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v1, 8, &v11);
    return v11;
  }
  return (unsigned int)v1;
}
