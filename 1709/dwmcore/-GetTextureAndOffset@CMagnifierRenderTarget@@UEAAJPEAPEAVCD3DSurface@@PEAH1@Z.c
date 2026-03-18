/*
 * XREFs of ?GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z @ 0x180138080
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180081D60 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifierRenderTarget::GetTextureAndOffset(
        CMagnifierRenderTarget *this,
        struct CD3DSurface **a2,
        int *a3,
        int *a4)
{
  __int64 v5; // rax
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  signed int D3DSurfaceLevel; // eax
  CD3DTexture *v15; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v5 = *((_QWORD *)this + 13);
  v15 = 0LL;
  v9 = *(_QWORD *)(v5 + 8LL * *((unsigned int *)this + 128));
  v10 = (*(__int64 (__fastcall **)(__int64, CD3DTexture **))(*(_QWORD *)v9 + 200LL))(v9, &v15);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x21Fu);
  }
  else
  {
    D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(v15, v11, a2);
    v12 = D3DSurfaceLevel;
    if ( D3DSurfaceLevel < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D3DSurfaceLevel, 0x224u);
    }
    else
    {
      *a3 = *((_DWORD *)this + 129);
      *a4 = *((_DWORD *)this + 130);
    }
  }
  ReleaseInterfaceNoNULL<CPolygon>((__int64)v15);
  return v12;
}
