/*
 * XREFs of ?SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetBitmap@@PEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x1801B5C50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z @ 0x1800C9EE4 (--$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z.c)
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x1800CA568 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801B58EC (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SetAdvancedDirectFlipState(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        struct IRenderTargetBitmap *a2,
        struct IRenderTargetDisplay *a3,
        struct CRegionWrapper *a4)
{
  __int64 v6; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // edi

  v6 = *((_QWORD *)this + 1);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 1) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)a2 + 8LL))(a2);
  ReplaceInterface<IRenderTargetDisplay,IRenderTargetDisplay>((__int64 *)this + 2, (__int64)a3);
  ReplaceInterface<CRegionWrapper,CRegionWrapper>((__int64 *)this + 3, (__int64 (__fastcall ***)(_QWORD))a4);
  v10 = CDxHandleAdvancedDirectFlipBitmapRealization::SaveOverdrawContent(
          (CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 424),
          v9);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC2u);
  else
    *((_BYTE *)this + 32) = 1;
  return v11;
}
