/*
 * XREFs of ?SetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetBitmap@@PEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x1801D2A60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z @ 0x1800C0664 (--$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z.c)
 *     ??$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z @ 0x1800C0930 (--$ReplaceInterface@VIRenderTargetDisplay@@V1@@@YAXAEAPEAVIRenderTargetDisplay@@PEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1801D26FC (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::SetAdvancedDirectFlipState(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        struct IRenderTargetBitmap *a2,
        struct IRenderTargetDisplay *a3,
        struct CRegionWrapper *a4)
{
  __int64 v6; // rcx
  __int64 v9; // rdx
  signed int v10; // eax
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
          (CDxHandleAdvancedDirectFlipBitmapRealization *)((char *)this - 408),
          v9);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xCCu);
  else
    *((_BYTE *)this + 32) = 1;
  return v11;
}
