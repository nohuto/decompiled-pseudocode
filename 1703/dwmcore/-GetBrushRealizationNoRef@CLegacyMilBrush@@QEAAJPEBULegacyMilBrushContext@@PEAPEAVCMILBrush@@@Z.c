/*
 * XREFs of ?GetBrushRealizationNoRef@CLegacyMilBrush@@QEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18004AFDC
 * Callers:
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18004AE10 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PE.c)
 * Callees:
 *     ?ObviouslyHasZeroAlpha@CMILBrushSolid@@UEBA_NXZ @ 0x180041E50 (-ObviouslyHasZeroAlpha@CMILBrushSolid@@UEBA_NXZ.c)
 *     ?ObviouslyHasZeroAlpha@CMILBrushBitmap@@UEBA_NXZ @ 0x1800545A0 (-ObviouslyHasZeroAlpha@CMILBrushBitmap@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasRealizationContextChanged@CImageLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z @ 0x18007B990 (-HasRealizationContextChanged@CImageLegacyMilBrush@@UEBAHPEBULegacyMilBrushContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyMilBrush::GetBrushRealizationNoRef(
        CLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CMILBrush **a3)
{
  int v3; // edi
  __int64 (__fastcall *v7)(CImageLegacyMilBrush *__hidden, const struct LegacyMilBrushContext *); // rax
  int HasRealizationContextChanged; // eax
  CMILBrushBitmap *v9; // rcx
  bool (__fastcall *v10)(CMILBrushSolid *); // rax
  char HasZeroAlpha; // al
  __int64 v12; // rcx
  int v14; // eax

  v3 = 0;
  if ( (*((_BYTE *)this + 32) & 1) != 0
    || ((v7 = *(__int64 (__fastcall **)(CImageLegacyMilBrush *__hidden, const struct LegacyMilBrushContext *))(*(_QWORD *)this + 160LL),
         v7 == CImageLegacyMilBrush::HasRealizationContextChanged)
      ? (HasRealizationContextChanged = CImageLegacyMilBrush::HasRealizationContextChanged(this, a2))
      : (HasRealizationContextChanged = ((__int64 (*)(void))v7)()),
        HasRealizationContextChanged) )
  {
    v14 = (*(__int64 (__fastcall **)(CLegacyMilBrush *, const struct LegacyMilBrushContext *, char *))(*(_QWORD *)this + 192LL))(
            this,
            a2,
            (char *)this + 64);
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x60u);
      goto LABEL_11;
    }
    *((_DWORD *)this + 8) &= ~1u;
  }
  v9 = (CMILBrushBitmap *)*((_QWORD *)this + 8);
  if ( v9
    && (*((_DWORD *)a2 + 53)
     || ((v10 = *(bool (__fastcall **)(CMILBrushSolid *))(*(_QWORD *)v9 + 32LL),
          v10 != CMILBrushSolid::ObviouslyHasZeroAlpha)
       ? (v10 != CMILBrushBitmap::ObviouslyHasZeroAlpha
        ? (HasZeroAlpha = ((__int64 (*)(void))v10)())
        : (HasZeroAlpha = CMILBrushBitmap::ObviouslyHasZeroAlpha(v9)))
       : (HasZeroAlpha = CMILBrushSolid::ObviouslyHasZeroAlpha(v9)),
         !HasZeroAlpha)) )
  {
    v12 = *((_QWORD *)this + 8);
    *(_QWORD *)(v12 + 8) = *((_QWORD *)a2 + 27);
    *(_DWORD *)(v12 + 16) = *((_DWORD *)a2 + 56);
    *a3 = (struct CMILBrush *)*((_QWORD *)this + 8);
  }
  else
  {
    *a3 = 0LL;
  }
LABEL_11:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    *((_DWORD *)this + 8) |= 1u;
  }
  return (unsigned int)v3;
}
