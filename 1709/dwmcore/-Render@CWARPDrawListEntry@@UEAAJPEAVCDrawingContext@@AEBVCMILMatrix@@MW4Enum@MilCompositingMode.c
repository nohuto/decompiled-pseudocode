/*
 * XREFs of ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180154CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011C548 (-UpdateSwapChainRealization@CDrawListBitmap@@QEAAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 *     ?FromMilCompositingMode@BlendMode@@YA?AW4Enum@1@W42MilCompositingMode@@@Z @ 0x180155C94 (-FromMilCompositingMode@BlendMode@@YA-AW4Enum@1@W42MilCompositingMode@@@Z.c)
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x1801A94FC (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 */

__int64 __fastcall CWARPDrawListEntry::Render(__int64 a1, __int64 a2, __int64 a3, float a4, unsigned int a5)
{
  __int64 v5; // r14
  CD2DContext *v9; // rax
  signed int appended; // eax
  unsigned int v11; // ebx
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a2 + 384);
  if ( (*(_BYTE *)(a1 + 44) & 0x10) != 0 )
  {
    v13 = *(_OWORD *)(a1 + 56);
    CDrawListBitmap::UpdateSwapChainRealization((__int64 *)(a1 + 96), a2, &v13);
    CDrawListBitmap::UpdateSwapChainRealization((__int64 *)(a1 + 176), a2, &v13);
  }
  if ( (*(_BYTE *)(a1 + 44) & 4) != 0 )
    *(_BYTE *)(a2 + 6833) = 1;
  *(_OWORD *)(a1 + 256) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 272) = *(_OWORD *)(a3 + 16);
  *(_OWORD *)(a1 + 288) = *(_OWORD *)(a3 + 32);
  *(_OWORD *)(a1 + 304) = *(_OWORD *)(a3 + 48);
  *(_DWORD *)(a1 + 320) = *(_DWORD *)(a3 + 64);
  *(_DWORD *)(a1 + 324) = BlendMode::FromMilCompositingMode(a5);
  *(float *)(a1 + 328) = a4;
  v9 = (CD2DContext *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 152LL))(v5);
  appended = CD2DContext::AppendWARPDrawListEntry(v9, (struct CWARPDrawListEntry *)a1);
  v11 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, appended, 0x5Du);
  return v11;
}
