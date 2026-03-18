/*
 * XREFs of ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1801480EC
 * Callers:
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x180147E70 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180148658 (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
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

  v1 = *((_DWORD *)this + 86);
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
             *((void **)this + 4 * v4 + 45),
             *(struct _LUID *)((char *)this + 32 * v4 + 368),
             *((HMONITOR *)this + 4 * v4 + 47),
             &v12);
      v11 = v6;
      v2 = v6;
      if ( v6 < 0 )
        break;
      v7 = *((unsigned int *)this + 58);
      v8 = v7 + 1;
      if ( (int)v7 + 1 >= (unsigned int)v7 )
        v5 = v7 + 1;
      v2 = v8 < (unsigned int)v7 ? 0x80070216 : 0;
      if ( v8 < (unsigned int)v7 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xB5u);
      }
      else if ( v5 > *((_DWORD *)this + 57) )
      {
        v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 208, 8u, 1, &v12);
        v2 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 26) + 8 * v7) = v12;
        *((_DWORD *)this + 58) = v5;
      }
      v11 = v2;
      if ( v2 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, v2, 0x30Au);
        goto LABEL_17;
      }
      v12 = 0LL;
      if ( ++v4 >= *((_DWORD *)this + 86) )
        goto LABEL_17;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1801FCFB4, 1u, v6, 0x307u);
  }
LABEL_17:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v12);
  if ( v2 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v2, 8, &v11);
    return v11;
  }
  return (unsigned int)v2;
}
