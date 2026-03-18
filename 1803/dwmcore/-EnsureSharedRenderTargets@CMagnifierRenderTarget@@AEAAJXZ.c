/*
 * XREFs of ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18015A3A8
 * Callers:
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x18015A350 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18015A628 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureSharedRenderTargets(CMagnifierRenderTarget *this)
{
  int v1; // eax
  int v2; // ebx
  unsigned int v4; // esi
  unsigned int v5; // ebp
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  struct IRenderTargetBitmap *v12; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 100);
  v2 = 0;
  v12 = 0LL;
  v11 = 0;
  if ( v1 )
  {
    v4 = 0;
    v5 = v11;
    while ( 1 )
    {
      v6 = CMagnifierRenderTarget::OpenSharedSurfaceRenderTarget(
             this,
             *((void **)this + 4 * v4 + 52),
             *(struct _LUID *)((char *)this + 32 * v4 + 424),
             *((HMONITOR *)this + 4 * v4 + 54),
             &v12);
      v11 = v6;
      v2 = v6;
      if ( v6 < 0 )
        break;
      v7 = *((unsigned int *)this + 74);
      v8 = v7 + 1;
      if ( (int)v7 + 1 >= (unsigned int)v7 )
        v5 = v7 + 1;
      v2 = v8 < (unsigned int)v7 ? 0x80070216 : 0;
      if ( v8 < (unsigned int)v7 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xB5u);
      }
      else if ( v5 > *((_DWORD *)this + 73) )
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 272, 8u, 1, &v12);
        v2 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 34) + 8 * v7) = v12;
        *((_DWORD *)this + 74) = v5;
      }
      v11 = v2;
      if ( v2 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, v2, 0x19Au);
        goto LABEL_17;
      }
      v12 = 0LL;
      if ( ++v4 >= *((_DWORD *)this + 100) )
        goto LABEL_17;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACFB0, 1u, v6, 0x197u);
  }
LABEL_17:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v12);
  if ( v2 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v2, 8, &v11);
    return v11;
  }
  return (unsigned int)v2;
}
