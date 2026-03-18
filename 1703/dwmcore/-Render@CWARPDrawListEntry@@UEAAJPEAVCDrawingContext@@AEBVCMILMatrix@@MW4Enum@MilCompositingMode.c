/*
 * XREFs of ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18015EB80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800A5F54 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?FromMilCompositingMode@BlendMode@@YA?AW4Enum@1@W42MilCompositingMode@@@Z @ 0x18015FCA8 (-FromMilCompositingMode@BlendMode@@YA-AW4Enum@1@W42MilCompositingMode@@@Z.c)
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x180197CD8 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::Render(__int64 a1, __int64 a2, __int64 a3, float a4, unsigned int a5)
{
  __int64 v5; // r15
  __int64 (__fastcall ***v9)(_QWORD, GUID *, CCompositionSurfaceBitmap **); // rcx
  int v10; // eax
  unsigned int v11; // edi
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  CD2DContext *v20; // rax
  int appended; // eax
  CCompositionSurfaceBitmap *v23; // [rsp+38h] [rbp-51h] BYREF
  __int128 v24; // [rsp+40h] [rbp-49h] BYREF
  __int128 v25; // [rsp+50h] [rbp-39h]
  __int128 v26; // [rsp+60h] [rbp-29h]
  __int128 v27; // [rsp+70h] [rbp-19h]
  int v28; // [rsp+80h] [rbp-9h]
  __int128 v29; // [rsp+88h] [rbp-1h] BYREF

  v5 = *(_QWORD *)(a2 + 392);
  if ( (*(_BYTE *)(a1 + 44) & 0x10) != 0 )
  {
    v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, CCompositionSurfaceBitmap **))(a1 + 112);
    if ( v9 )
    {
      v23 = 0LL;
      v10 = (**v9)(v9, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v23);
      v11 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x74u);
        Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v23);
        return v11;
      }
      v29 = *(_OWORD *)(a1 + 72);
      CDrawingContext::RecordBitmapContentInfo((CDrawingContext *)a2, v23, v23, &v29, 0LL);
      Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v23);
    }
  }
  if ( (*(_BYTE *)(a1 + 44) & 4) != 0 )
    *(_BYTE *)(a2 + 6777) = 1;
  if ( *(_BYTE *)(a1 + 386) )
  {
    v12 = *(_OWORD *)(a1 + 316);
    v13 = *(_OWORD *)(a1 + 332);
    v28 = *(_DWORD *)(a1 + 380);
    v24 = v12;
    v14 = *(_OWORD *)(a1 + 348);
    v25 = v13;
    v15 = *(_OWORD *)(a1 + 364);
    v26 = v14;
    v27 = v15;
    CMILMatrix::Multiply((CMILMatrix *)&v24, (const struct CMILMatrix *)a3);
    v16 = v28;
    v17 = v25;
    *(_OWORD *)(a1 + 240) = v24;
    v18 = v26;
    *(_OWORD *)(a1 + 256) = v17;
    v19 = v27;
    *(_OWORD *)(a1 + 272) = v18;
    *(_OWORD *)(a1 + 288) = v19;
  }
  else
  {
    *(_OWORD *)(a1 + 240) = *(_OWORD *)a3;
    *(_OWORD *)(a1 + 256) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(a1 + 272) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(a1 + 288) = *(_OWORD *)(a3 + 48);
    v16 = *(_DWORD *)(a3 + 64);
  }
  *(_DWORD *)(a1 + 304) = v16;
  *(_DWORD *)(a1 + 308) = BlendMode::FromMilCompositingMode(a5);
  *(float *)(a1 + 312) = a4;
  v20 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 176LL))(v5);
  appended = CD2DContext::AppendWARPDrawListEntry(v20, (struct CWARPDrawListEntry *)a1);
  v11 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x8Du);
  return v11;
}
