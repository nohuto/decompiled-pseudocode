/*
 * XREFs of ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCMILMatrix@@PEAULegacyMilBrushContext@@AEBVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x1801ED07C
 * Callers:
 *     ?DrawPath@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@AEBVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x1801E66B0 (-DrawPath@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@.c)
 *     ?DrawPath@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@AEBVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x1801E7420 (-DrawPath@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@.c)
 *     ?DrawPath@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@AEBVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x1801ED030 (-DrawPath@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV6@W4Enum@MilCompositingMode@@@Z @ 0x1801ED278 (-FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::DrawPathInternal(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        CLegacyMilBrushRealizer *a9,
        int a10)
{
  int v10; // ebx
  __int128 v11; // xmm0
  __int128 v13; // xmm1
  __int64 v16; // rax
  __int128 v17; // xmm0
  unsigned __int8 (__fastcall *v18)(__int64 *); // rax
  __int128 v19; // xmm1
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v25; // [rsp+50h] [rbp-91h] BYREF
  __int64 v26; // [rsp+58h] [rbp-89h]
  int v27[2]; // [rsp+60h] [rbp-81h]
  _BYTE v28[8]; // [rsp+68h] [rbp-79h] BYREF
  __int64 v29[2]; // [rsp+70h] [rbp-71h] BYREF
  __int128 v30; // [rsp+80h] [rbp-61h]
  __int128 v31; // [rsp+90h] [rbp-51h]
  __int128 v32; // [rsp+A0h] [rbp-41h]
  int v33; // [rsp+B0h] [rbp-31h]
  __int64 v34[2]; // [rsp+C0h] [rbp-21h] BYREF

  v10 = 0;
  v11 = *(_OWORD *)(a4 + 212);
  v13 = *(_OWORD *)(a4 + 228);
  v26 = a5;
  v33 = *(_DWORD *)(a4 + 276);
  v16 = *a1;
  *(_OWORD *)v29 = v11;
  v17 = *(_OWORD *)(a4 + 244);
  *(_QWORD *)v27 = a3;
  v18 = *(unsigned __int8 (__fastcall **)(__int64 *))(v16 + 32);
  v30 = v13;
  v19 = *(_OWORD *)(a4 + 260);
  v25 = 0;
  v31 = v17;
  v32 = v19;
  if ( v18(a1) && a9 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*a1 + 256))(a1, v28);
    v25 = v20;
    v10 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x19Eu);
    }
    else
    {
      v21 = (*(__int64 (__fastcall **)(CLegacyMilBrushRealizer *, __int64, __int64, _QWORD))(*(_QWORD *)a9 + 24LL))(
              a9,
              a6,
              a4,
              0LL);
      v25 = v21;
      v10 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x1ADu);
      }
      else
      {
        v22 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a7 + 32LL))(a7, v34, 0LL);
        v25 = v22;
        v10 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x1B0u);
        }
        else
        {
          if ( *(_BYTE *)(a6 + 140) )
            CMILMatrix::Multiply((CMILMatrix *)v29, (const struct CMILMatrix *)(a6 + 72));
          v23 = CHwSurfaceRenderTarget::FillPath((int)a1, a2, v27[0], a4, a7, v26, (__int64)v34, a9, (__int64)v29, a10);
          v25 = v23;
          v10 = v23;
          if ( v23 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x1BFu);
        }
      }
    }
    if ( v10 == -2003304441 || v10 == -2003304438 )
    {
      v10 = 0;
      v25 = 0;
    }
  }
  TranslateDXGIorD3DErrorInContext(v10, 0, &v25);
  return v25;
}
